/*
 * CGTKBase.h
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
#import "CGTKTypeWrapper.h"

/*
 * C imports
 */
#import <gtk/gtk.h>

/**
 * The base class for all CoreGTK wrapper classes
 */
@interface CGTKBase : NSObject
{
	/**
	 * The internal GtkObject pointer
	 */
	GObject *__gObject;
}

/**
 * Returns a new instance of CGTKBase with the internal GObject set to obj
 *
 * Note: the returned object is autoreleased
 *
 * @param obj
 * 	The internal GObject to use
 *
 * @returns a new CGTKBase
 */
+(CGTKBase *)withGObject:(GObject *)obj;

/**
 * Returns a new instance of CGTKBase with the internal GObject set to obj
 *
 * @param obj
 * 	The internal GObject to use
 *
 * @returns a new CGTKBase
 */
-(id)initWithGObject:(GObject *)obj;

/**
 * Gets the internal GtkWidget
 *
 * @returns the internal GtkWidget
 */
-(GtkWidget *)WIDGET;

/**
 * Sets the internal GObject
 *
 * @param obj
 * 	The GObject to set internally
 */
-(void)setGObject:(GObject *)obj;

/**
 * Gets the internal GObject
 *
 * @returns the internal GObject
 */
-(GObject *)GOBJECT;

@end
