/*
 * CGTK.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import <Foundation/Foundation.h>

#import "CoreGTK/CGTKBase.h"

/*
 * C imports
 */
#import <gtk/gtk.h>
 
/**
 * Global level CoreGTK functionality
 */
@interface CGTK : NSObject
{

}

/**
 * Returns the CoreGTK version string
 *
 * @return the version string
 */
+(NSString *)coreGtkVersion;

/**
 * Call this function before using any other GTK+ functions in your GUI 
 * applications. It will initialize everything needed to operate the toolkit and 
 * parses some standard command line options.
 *
 * Although you are expected to pass the argc, argv parameters from main() to 
 * this function, it is possible to pass NULL if argv is not available or 
 * commandline handling is not required.
 *
 * argc and argv are adjusted accordingly so your own code will never see those 
 * standard arguments.
 * 
 * @param argc
 *  Address of the argc parameter of your main() function (or 0 if argv is 
 *  NULL). This will be changed if any arguments were handled. [inout]
 *
 * @param argv
 *  Address of the argv parameter of main(), or NULL. Any options understood by 
 *  GTK+ are stripped before return. [array length=argc][inout][allow-none]
 */
+(void)initWithArgc:(int *)argc andArgv:(char ***)argv;

/**
 * Same as initWithArgc:andArgv: but does the type conversion automatically.
 *
 * @param argc
 *  Address of the argc parameter of your main() function (or 0 if argv is 
 *  NULL). This will be changed if any arguments were handled. [inout]
 *
 * @param argv
 *  Address of the argv parameter of main(), or NULL. Any options understood by 
 *  GTK+ are stripped before return. [array length=argc][inout][allow-none]
 *
 * @returns modified argc value
 *
 * @see initWithArgc:andArgv:
 */
+(int)autoInitWithArgc:(int)argc andArgv:(char *[])argv;

/**
 * Runs the main loop until mainQuit is called. 
 * You can nest calls to main. In that case mainQuit will make the innermost 
 * invocation of the main loop return.
 *
 * @see mainQuit
 */
+(void)main;

/**
 * Makes the innermost invocation of the main loop return when it regains 
 * control.
 */
+(void)mainQuit;

@end
