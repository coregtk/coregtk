/*
 * CGTKBaseBuilder.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CGTKBaseBuilder.h"

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

@implementation CGTKBaseBuilder

+(void)setDebug:(BOOL)debugEnabled
{
	CGTKBuilderDebugMode = debugEnabled;
}

+(void)connectSignalsToObjectsWithBuilder:(CGTKBuilder *)builder andSignalDictionary:(NSDictionary *)objectSignalDictionary;
{
	gtk_builder_connect_signals_full([builder BUILDER], &gtkbuilder_connect_signals_handler, objectSignalDictionary);
}

+(CGTKWidget *)getWidgetFromBuilder:(CGTKBuilder *)builder withName:(NSString *)name
{
	GObject *obj = gtk_builder_get_object([builder BUILDER], [name UTF8String]);
	    
	if(GTK_IS_WIDGET(obj))
	{
		return [[[CGTKWidget alloc] initWithGObject:obj] autorelease];
	}
	else
	{
		return nil;
	}
}

@end
