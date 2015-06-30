/*
 * CGTKBuilder.h
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
#import "CoreGTK/CGTKBase.h"

@interface CGTKBuilder : CGTKBase
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromFile:(NSString*) filename;
-(id)initFromResource:(NSString*) resourcePath;
-(id)initFromStringWithString:(NSString*) string andLength:(gssize) length;

/**
 * Methods
 */
-(GtkBuilder*)BUILDER;
-(void)addCallbackSymbolWithCallbackName:(NSString*) callbackName andCallbackSymbol:(GCallback) callbackSymbol;
-(guint)addFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
-(guint)addFromResourceWithResourcePath:(NSString*) resourcePath andErr:(GError**) err;
-(guint)addFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;
-(guint)addObjectsFromFileWithFilename:(NSString*) filename andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(guint)addObjectsFromResourceWithResourcePath:(NSString*) resourcePath andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(guint)addObjectsFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(void)connectSignals:(gpointer) userData;
-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData;
-(void)exposeObjectWithName:(NSString*) name andObject:(GObject*) object;
-(GObject*)getObject:(NSString*) name;
-(GSList*)getObjects;
-(NSString*)getTranslationDomain;
-(GType)getTypeFromName:(const char*) typeName;
-(GCallback)lookupCallbackSymbol:(NSString*) callbackName;
-(void)setTranslationDomain:(NSString*) domain;
-(BOOL)valueFromStringWithPspec:(GParamSpec*) pspec andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;
-(BOOL)valueFromStringTypeWithType:(GType) type andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;

@end