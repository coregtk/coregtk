/*
 * CGTKBuilder.h
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

#import <Foundation/NSDictionary.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>

#import "CGTKWidget.h"
#import "CGTKCallbackData.h"
#import "CGTKSignalConnector.h"

/**
 * CGTKBuilder wraps GtkBuilder
 */
@interface CGTKBuilder : NSObject
{
	GtkBuilder *_builder;
}

/**
 * Gets the internal GtkBuilder
 *
 * @returns the internal GtkBuilder or NULL
 */
-(GtkBuilder *)BUILDER;

/**
 * When enabled this builder will print out signal connection debug info
 */
+(void)setDebug:(BOOL)debugEnabled;

/**
 * Parses a file containing a GtkBuilder UI definition and merges it with the 
 * current contents of builder.
 *
 * Upon errors 0 will be returned and error will be assigned a GError from the 
 * GTK_BUILDER_ERROR, G_MARKUP_ERROR or G_FILE_ERROR domain.
 *
 * @param filename
 *  the name of the file to parse
 *
 * @param error
 *  return location for an error, or NULL. [allow-none]
 *
 * @returns A positive value on success, 0 if an error occurred
 */
-(NSNumber *)addFromFileWithFilename:(NSString *)filename andError:(GError **)error;

/**
 * The same as addFromFileWithFilename:andError: but rather than returning an 
 * error and error value this simply returns YES or NO
 *
 * @param filename
 *  the name of the file to parse
 *
 * @returns YES on success, NO otherwise
 *
 * @see addFromFileWithFilename:andError:
 */
-(BOOL)addFromFile:(NSString *)filename;

/**
 * Parses a string containing a GtkBuilder UI definition and merges it with the 
 * current contents of builder.
 *
 * Upon errors 0 will be returned and error will be assigned a GError from the 
 * GTK_BUILDER_ERROR or G_MARKUP_ERROR domain.
 *
 * @param buffer
 *  the string to parse
 *
 * @param length
 *  the length of buffer (may be -1 if buffer is nul-terminated)
 *
 * @param error
 *  return location for an error, or NULL. [allow-none]
 *
 * @returns A positive value on success, 0 if an error occurred
 */
-(NSNumber *)addFromStringWithBuffer:(NSString *)buffer andLength:(gsize)length andError:(GError **)error;

/**
 * The same as addFromStringWithBuffer:andLength:andError: but rather than 
 * returning an error and error value this simply returns YES or NO
 *
 * @param buffer
 *  the string to parse
 *
 * @param length
 *  the length of buffer (may be -1 if buffer is nul-terminated)
 *
 * @returns YES on success, NO otherwise
 * 
 * @see addFromStringWithBuffer:andLength:andError:
 */
-(BOOL)addFromStringWithBuffer:(NSString *)buffer andLength:(gsize) length;

/**
 * Gets the object named name. Note that this function does not increment the 
 * reference count of the returned object.
 *
 * @param name
 *  name of object to get
 *
 * @returns the object named name or NULL if it could not be found in the object 
 * tree. [transfer none]
 */
-(GObject *)getObject:(NSString *)name;

/**
 * Gets all objects that have been constructed by builder. Note that this 
 * function does not increment the reference counts of the returned objects.
 *
 * @returns a newly-allocated GSList containing all the objects constructed by 
 *  the GtkBuilder instance. It should be freed by g_slist_free(). 
 *  [element-type GObject][transfer container]
 */
-(GSList *)getObjects;

/**
 * Attempts to get the object witht he name returning it as a CGTKWidget. If the 
 * object is not found or not compatible with CGTKWidget this will return nil.
 *
 * @param name
 *  the name of the object to return
 *
 * @returns the CGTKWidget or nil
 */
-(CGTKWidget *)getWidgetWithName:(NSString *)name;

/**
 * This method is a simpler variation of 
 * connectSignalsFullWithFunc:andUserData:. It uses GModule's introspective 
 * features (by opening the module NULL) to look at the application's symbol 
 * table. From here it tries to match the signal handler names given in the 
 * interface description with symbols in the application and connects the 
 * signals.
 *
 * Note that this function will not work correctly if GModule is not supported 
 * on the platform.
 *
 * When compiling applications for Windows, you must declare signal callbacks 
 * with G_MODULE_EXPORT, or they will not be put in the symbol table. On Linux 
 * and Unices, this is not necessary; applications should instead be compiled 
 * with the -Wl,--export-dynamic CFLAGS, and linked against gmodule-export-2.0.
 *
 * @param userData
 *  a pointer to a structure sent in as user data to all signals
 *
 * @see connectSignalsFullWithFunc:andUserData:
 */
-(void)connectSignals:(gpointer) userData;

/**
 * This function can be thought of the interpreted language binding version of 
 * connectSignals:, except that it does not require GModule to function 
 * correctly.
 *
 * @param func
 *  the function used to connect the signals. [scope call]
 *
 * @param userData
 *  arbitrary data that will be passed to the connection function
 *
 * @see connectSignals:
 */
-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData;

/**
 * Similar to the other connect signals functions, this takes a dictionary key'd 
 * on CallbackData objects (configured with class/selectors) and their 
 * associated signals as values and connects them accordingly.
 *
 * Example usage:
 *  NSDictionary *dict = [[NSDictionary alloc] initWithObjectsAndKeys: 
 *  [CallbackData withObject:[CGTK class] andSEL:@selector(endMainLoop)],
 *  @"mainQuit", 
 *  [CallbackData withObject:button andSEL:@selector(clicked)],
 *  @"on_button1_activate", 
 *  [CallbackData withObject:button andSEL:@selector(clicked)], 
 *  @"on_button2_clicked", nil];
 *
 * [builder connectSignalsToObjects:dict];
 *
 * @param objectSignalDictionary
 *  A dictionary mapping CallbackData objects to NSString signal names
 */
-(void)connectSignalsToObjects:(NSDictionary *)objectSignalDictionary;

/**
 * Sets the translation domain of builder. See "translation-domain". 
 *
 * @param domain
 *  the translation domain or NULL. [allow-none]
 */
-(void)setTranslationDomain:(NSString *)domain;

/**
 * Gets the translation domain of builder. 
 *
 * @returns the translation domain. This string is owned by the builder object 
 * and must not be modified or freed.
 */
-(NSString *)getTranslationDomain;

/**
 * Looks up a type by name, using the virtual function that GtkBuilder has for 
 * that purpose. This is mainly used when implementing the GtkBuildable 
 * interface on a type.
 *
 * @param typeName
 *  type name to lookup
 *
 * @returns the GType found for type_name or G_TYPE_INVALID if no type was found
 */
-(GType)getTypeFromName:(NSString *)typeName;

/**
 * This function demarshals a value from a string. This function calls 
 * g_value_init() on the value argument, so it need not be initialised 
 * beforehand.
 *
 * This function can handle char, uchar, boolean, int, uint, long, ulong, enum, 
 * flags, float, double, string, GdkColor and GtkAdjustment type values. Support 
 * for GtkWidget type values is still to come.
 *
 * Upon errors NO will be returned and error will be assigned a GError from the 
 * GTK_BUILDER_ERROR domain.
 *
 * @param pspec
 *  the GParamSpec for the property
 *
 * @param string
 * 	the string representation of the value
 *
 * @param value
 *  the GValue to store the result in. [out]
 *
 * @param error
 *  return location for an errorgtk_builder_value_from_string , or NULL. 
 *  [allow-none]
 *
 * @returns YES on success
 */
-(BOOL)valueFromStringWithPspec:(GParamSpec *)pspec andString:(NSString *)string andValue:(GValue *)value andError:(GError **)error;


/**
 * Like valueFromStringWithPspec:andString:andValue:andError:, this function 
 * demarshals a value from a string, but takes a GType instead of GParamSpec. 
 * This function calls g_value_init() on the value argument, so it need not be 
 * initialised beforehand.
 *
 * This function can handle char, uchar, boolean, int, uint, long, ulong, enum, 
 * flags, float, double, string, GdkColor and GtkAdjustment type values. Support 
 * for GtkWidget type values is still to come.
 *
 * Upon errors NO will be returned and error will be assigned a GError from the 
 * GTK_BUILDER_ERROR domain.
 *
 * @param type
 *  the GType of the value
 *
 * @param string
 * 	the string representation of the value
 *
 * @param value
 *  the GValue to store the result in. [out]
 *
 * @param error
 *  return location for an errorgtk_builder_value_from_string , or NULL. 
 * [allow-none]
 *
 * @returns YES on success
 *
 * @see valueFromStringWithPspec:andString:andValue:andError:
 */
-(BOOL)valueFromStringTypeWithType:(GType)type andString:(NSString *)string andValue:(GValue *)value andError:(GError **)error;

@end
