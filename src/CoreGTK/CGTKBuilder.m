/*
 * CGTKBuilder.m
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
#import "CoreGTK/CGTKBuilder.h"

@implementation CGTKBuilder

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_builder_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromFile:(NSString*) filename
{
	self = [super initWithGObject:(GObject *)gtk_builder_new_from_file([filename UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromResource:(NSString*) resourcePath
{
	self = [super initWithGObject:(GObject *)gtk_builder_new_from_resource([resourcePath UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStringWithString:(NSString*) string andLength:(gssize) length
{
	self = [super initWithGObject:(GObject *)gtk_builder_new_from_string([string UTF8String], length)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkBuilder*)BUILDER
{
	return GTK_BUILDER([self GOBJECT]);
}

-(void)addCallbackSymbolWithCallbackName:(NSString*) callbackName andCallbackSymbol:(GCallback) callbackSymbol
{
	gtk_builder_add_callback_symbol(GTK_BUILDER([self GOBJECT]), [callbackName UTF8String], callbackSymbol);
}

-(guint)addFromFileWithFilename:(NSString*) filename andErr:(GError**) err
{
	return gtk_builder_add_from_file(GTK_BUILDER([self GOBJECT]), [filename UTF8String], err);
}

-(guint)addFromResourceWithResourcePath:(NSString*) resourcePath andErr:(GError**) err
{
	return gtk_builder_add_from_resource(GTK_BUILDER([self GOBJECT]), [resourcePath UTF8String], err);
}

-(guint)addFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err
{
	return gtk_builder_add_from_string(GTK_BUILDER([self GOBJECT]), [buffer UTF8String], length, err);
}

-(guint)addObjectsFromFileWithFilename:(NSString*) filename andObjectIds:(gchar**) objectIds andErr:(GError**) err
{
	return gtk_builder_add_objects_from_file(GTK_BUILDER([self GOBJECT]), [filename UTF8String], objectIds, err);
}

-(guint)addObjectsFromResourceWithResourcePath:(NSString*) resourcePath andObjectIds:(gchar**) objectIds andErr:(GError**) err
{
	return gtk_builder_add_objects_from_resource(GTK_BUILDER([self GOBJECT]), [resourcePath UTF8String], objectIds, err);
}

-(guint)addObjectsFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andObjectIds:(gchar**) objectIds andErr:(GError**) err
{
	return gtk_builder_add_objects_from_string(GTK_BUILDER([self GOBJECT]), [buffer UTF8String], length, objectIds, err);
}

-(void)connectSignals:(gpointer) userData
{
	gtk_builder_connect_signals(GTK_BUILDER([self GOBJECT]), userData);
}

-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData
{
	gtk_builder_connect_signals_full(GTK_BUILDER([self GOBJECT]), func, userData);
}

-(void)exposeObjectWithName:(NSString*) name andObject:(GObject*) object
{
	gtk_builder_expose_object(GTK_BUILDER([self GOBJECT]), [name UTF8String], object);
}

-(GObject*)getObject:(NSString*) name
{
	return gtk_builder_get_object(GTK_BUILDER([self GOBJECT]), [name UTF8String]);
}

-(GSList*)getObjects
{
	return gtk_builder_get_objects(GTK_BUILDER([self GOBJECT]));
}

-(NSString*)getTranslationDomain
{
	return [NSString stringWithUTF8String:gtk_builder_get_translation_domain(GTK_BUILDER([self GOBJECT]))];
}

-(GType)getTypeFromName:(const char*) typeName
{
	return gtk_builder_get_type_from_name(GTK_BUILDER([self GOBJECT]), typeName);
}

-(GCallback)lookupCallbackSymbol:(NSString*) callbackName
{
	return gtk_builder_lookup_callback_symbol(GTK_BUILDER([self GOBJECT]), [callbackName UTF8String]);
}

-(void)setTranslationDomain:(NSString*) domain
{
	gtk_builder_set_translation_domain(GTK_BUILDER([self GOBJECT]), [domain UTF8String]);
}

-(BOOL)valueFromStringWithPspec:(GParamSpec*) pspec andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err
{
	return (gtk_builder_value_from_string(GTK_BUILDER([self GOBJECT]), pspec, [string UTF8String], value, err) ? YES : NO);
}

-(BOOL)valueFromStringTypeWithType:(GType) type andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err
{
	return (gtk_builder_value_from_string_type(GTK_BUILDER([self GOBJECT]), type, [string UTF8String], value, err) ? YES : NO);
}


@end