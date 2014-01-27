/*
 * CGTKObject.h
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

/*
 * Objective-C imports
 */
#import <Foundation/NSObject.h>

#import "CGTK.h"

/*
 * C imports
 */
#import <gtk/gtk.h>

/**
 * CGTKObject wraps GtkObject
 */
@interface CGTKObject : NSObject
{
	/**
	 * The internal GtkObject
	 */
	GtkObject *__gtkObject;
}

/**
 * Returns a new instance of CGTKObject with the internal GtkObject set to obj
 *
 * Note: the returned object is autoreleased
 *
 * @param obj
 *  The internal GtkObject to use
 *
 * @returns a new CGTKObject
 */
+(CGTKObject *)objectWithGtkObject:(GtkObject *)obj;

/**
 * Returns a new instance of CGTKObject with the internal GtkObject set to obj
 *
 * @param obj
 *  The internal GtkObject to use
 *
 * @returns a new CGTKObject
 */
-(id)initWithGtkObject:(GtkObject *)obj;

/**
 * Sets the internal GtkObject
 *
 * @param obj
 *  The GtkObject to set internally
 */
-(void)setGtkObject:(GtkObject *)obj;

@end
