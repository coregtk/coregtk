/*
 * CGTKBuilder.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

#import "CGTKBuilder.h"

static BOOL CGTKBuilderDebugMode = NO;

static void  gtkbuilder_connect_signals_handler(GtkBuilder *builder, GObject *object, const gchar *signal_name, const gchar *handler_name, GObject *connect_object, GConnectFlags flags, gpointer user_data)
{	
	if(CGTKBuilderDebugMode)
	{
		NSLog(@"Signal_name = %@", [NSString stringWithUTF8String:signal_name]);
		NSLog(@"Handlers_name = %@", [NSString stringWithUTF8String:handler_name]);
	}
	
	NSDictionary *objectSignalDictionary = (NSDictionary *)user_data;
		
	id callbackData = [objectSignalDictionary objectForKey:[NSString stringWithUTF8String:handler_name]];
	
	id obj = [callbackData object];
	SEL sel = [callbackData sel];
	
	if(obj == nil && object != NULL)
	{
		if(CGTKBuilderDebugMode)
		{
			NSLog(@"Connecting to plain C function");
		}
		// Connect to C function
		g_signal_connect(object, signal_name, G_CALLBACK(handler_name), NULL);
	}
	else
	{
		if(CGTKBuilderDebugMode)
		{
			NSLog(@"Found object %@", obj);
		}
		
		// Connect to Objective-C method
		[CGTKSignalConnector connectGpointer:object withSignal:[NSString stringWithUTF8String:signal_name] toTarget:obj withSelector:sel andData:NULL];
	}
}

@implementation CGTKBuilder

-(id)init
{	
	[super init];

	if(self != nil)
	{
		_builder = gtk_builder_new();
	}
	
	return self;
}

-(void)dealloc
{
	if(_builder != NULL)
	{
		// Decrease the reference count on the GtkObject
		g_object_unref(_builder);
	}
	[super dealloc];
}

-(GtkBuilder *)BUILDER
{
	return _builder;
}

+(void)setDebug:(BOOL)debugEnabled
{
	CGTKBuilderDebugMode = debugEnabled;
}

-(NSNumber *)addFromFileWithFilename:(NSString *)filename andError:(GError **)error
{
	return [NSNumber numberWithUnsignedInt:gtk_builder_add_from_file([self BUILDER], [filename UTF8String], error)];
}

-(BOOL)addFromFile:(NSString *)filename
{
	return gtk_builder_add_from_file([self BUILDER], [filename UTF8String], NULL) > 0;
}

-(NSNumber *)addFromStringWithBuffer:(NSString *)buffer andLength:(gsize)length andError:(GError **)error
{
	return [NSNumber numberWithUnsignedInt:gtk_builder_add_from_string([self BUILDER], [buffer UTF8String], length, error)];
}

-(BOOL)addFromStringWithBuffer:(NSString *)buffer andLength:(gsize) length
{
	return gtk_builder_add_from_string([self BUILDER], [buffer UTF8String], length, NULL) > 0;
}

-(GObject *)getObject:(NSString *)name
{
	return gtk_builder_get_object([self BUILDER], [name UTF8String]);
}

-(GSList *)getObjects
{
	return gtk_builder_get_objects([self BUILDER]);
}

-(CGTKWidget *)getWidgetWithName:(NSString *)name
{
	GObject *obj = gtk_builder_get_object([self BUILDER], [name UTF8String]);
	    
	if(GTK_IS_WIDGET(obj))
	{
		return [[[CGTKWidget alloc] initWithGtkWidget:(GtkWidget *)obj] autorelease];
	}
	else
	{
		return nil;
	}
}

-(void)connectSignals:(gpointer) userData
{
	gtk_builder_connect_signals([self BUILDER], userData);
}

-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData
{
	gtk_builder_connect_signals_full([self BUILDER], func, userData);
}

-(void)connectSignalsToObjects:(NSDictionary *)objectSignalDictionary
{
	gtk_builder_connect_signals_full([self BUILDER], &gtkbuilder_connect_signals_handler, objectSignalDictionary);
}

-(void)setTranslationDomain:(NSString *)domain;
{
	gtk_builder_set_translation_domain([self BUILDER], [domain UTF8String]);
}

-(NSString *)getTranslationDomain
{
	return [NSString stringWithUTF8String:gtk_builder_get_translation_domain([self BUILDER])];
}

-(GType)getTypeFromName:(NSString *)typeName
{
	return gtk_builder_get_type_from_name([self BUILDER], [typeName UTF8String]);
}

-(BOOL)valueFromStringWithPspec:(GParamSpec *)pspec andString:(NSString *)string andValue:(GValue *)value andError:(GError **)error
{
	return [CGTK getBOOL:gtk_builder_value_from_string([self BUILDER], pspec, [string UTF8String], value, error)];
}

-(BOOL)valueFromStringTypeWithType:(GType)type andString:(NSString *)string andValue:(GValue *)value andError:(GError **)error
{
	return [CGTK getBOOL:gtk_builder_value_from_string_type([self BUILDER], type, [string UTF8String], value, error)];
}

@end
