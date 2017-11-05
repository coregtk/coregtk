/*
 * CGTKBuilder.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBase.h"
#import "CoreGTK/CGTKWidget.h"

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

/**
 * -(void*)addCallbackSymbolWithCallbackName:(NSString*) callbackName andCallbackSymbol:(GCallback) callbackSymbol;
 *
 * @param callbackName
 * @param callbackSymbol
 */
-(void)addCallbackSymbolWithCallbackName:(NSString*) callbackName andCallbackSymbol:(GCallback) callbackSymbol;

/**
 * -(guint*)addFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
 *
 * @param filename
 * @param err
 * @returns guint
 */
-(guint)addFromFileWithFilename:(NSString*) filename andErr:(GError**) err;

/**
 * -(guint*)addFromResourceWithResourcePath:(NSString*) resourcePath andErr:(GError**) err;
 *
 * @param resourcePath
 * @param err
 * @returns guint
 */
-(guint)addFromResourceWithResourcePath:(NSString*) resourcePath andErr:(GError**) err;

/**
 * -(guint*)addFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;
 *
 * @param buffer
 * @param length
 * @param err
 * @returns guint
 */
-(guint)addFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;

/**
 * -(guint*)addObjectsFromFileWithFilename:(NSString*) filename andObjectIds:(gchar**) objectIds andErr:(GError**) err;
 *
 * @param filename
 * @param objectIds
 * @param err
 * @returns guint
 */
-(guint)addObjectsFromFileWithFilename:(NSString*) filename andObjectIds:(gchar**) objectIds andErr:(GError**) err;

/**
 * -(guint*)addObjectsFromResourceWithResourcePath:(NSString*) resourcePath andObjectIds:(gchar**) objectIds andErr:(GError**) err;
 *
 * @param resourcePath
 * @param objectIds
 * @param err
 * @returns guint
 */
-(guint)addObjectsFromResourceWithResourcePath:(NSString*) resourcePath andObjectIds:(gchar**) objectIds andErr:(GError**) err;

/**
 * -(guint*)addObjectsFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andObjectIds:(gchar**) objectIds andErr:(GError**) err;
 *
 * @param buffer
 * @param length
 * @param objectIds
 * @param err
 * @returns guint
 */
-(guint)addObjectsFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andObjectIds:(gchar**) objectIds andErr:(GError**) err;

/**
 * -(void*)connectSignals:(gpointer) userData;
 *
 * @param userData
 */
-(void)connectSignals:(gpointer) userData;

/**
 * -(void*)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData;
 *
 * @param func
 * @param userData
 */
-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData;

/**
 * -(void*)exposeObjectWithName:(NSString*) name andObject:(GObject*) object;
 *
 * @param name
 * @param object
 */
-(void)exposeObjectWithName:(NSString*) name andObject:(GObject*) object;

/**
 * -(guint*)extendWithTemplateWithWidget:(CGTKWidget*) widget andTemplateType:(GType) templateType andBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;
 *
 * @param widget
 * @param templateType
 * @param buffer
 * @param length
 * @param err
 * @returns guint
 */
-(guint)extendWithTemplateWithWidget:(CGTKWidget*) widget andTemplateType:(GType) templateType andBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;

/**
 * -(GtkApplication**)getApplication;
 *
 * @returns GtkApplication*
 */
-(GtkApplication*)getApplication;

/**
 * -(GObject**)getObject:(NSString*) name;
 *
 * @param name
 * @returns GObject*
 */
-(GObject*)getObject:(NSString*) name;

/**
 * -(GSList**)getObjects;
 *
 * @returns GSList*
 */
-(GSList*)getObjects;

/**
 * -(NSString**)getTranslationDomain;
 *
 * @returns NSString*
 */
-(NSString*)getTranslationDomain;

/**
 * -(GType*)getTypeFromName:(const char*) typeName;
 *
 * @param typeName
 * @returns GType
 */
-(GType)getTypeFromName:(const char*) typeName;

/**
 * -(GCallback*)lookupCallbackSymbol:(NSString*) callbackName;
 *
 * @param callbackName
 * @returns GCallback
 */
-(GCallback)lookupCallbackSymbol:(NSString*) callbackName;

/**
 * -(void*)setApplication:(GtkApplication*) application;
 *
 * @param application
 */
-(void)setApplication:(GtkApplication*) application;

/**
 * -(void*)setTranslationDomain:(NSString*) domain;
 *
 * @param domain
 */
-(void)setTranslationDomain:(NSString*) domain;

/**
 * -(BOOL*)valueFromStringWithPspec:(GParamSpec*) pspec andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;
 *
 * @param pspec
 * @param string
 * @param value
 * @param err
 * @returns BOOL
 */
-(BOOL)valueFromStringWithPspec:(GParamSpec*) pspec andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;

/**
 * -(BOOL*)valueFromStringTypeWithType:(GType) type andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;
 *
 * @param type
 * @param string
 * @param value
 * @param err
 * @returns BOOL
 */
-(BOOL)valueFromStringTypeWithType:(GType) type andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;

@end