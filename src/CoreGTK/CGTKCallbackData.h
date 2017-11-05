/*
 * CGTKCallbackData.h
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
 #import <Foundation/NSObject.h>

/**
 * Holds object and selector info for gobject signal callbacks
 */
@interface CGTKCallbackData : NSObject
{
	id _object;
	SEL _sel;
}

/**
 * Creates and returns a new instance of CGTKCallbackData holding the object and the selector.
 *
 * Note this returned instance is autoreleased.
 *
 * @param obj
 *  The object to hold
 *
 * @param sel
 *  The selector to hold
 *
 * @returns a new CGTKCallbackData
 */
+(id)withObject:(id)obj andSEL:(SEL)sel;

/**
 * Creates and returns a new instance of CGTKCallbackData holding the object and the selector.
 *
 * @param obj
 *  The object to hold
 *
 * @param sel
 *  The selector to hold
 *
 * @returns a new CGTKCallbackData
 */
-(id)initWithObject:(id)obj andSEL:(SEL)sel;

/**
 * Gets the held object
 */
-(id)object;

/**
 * Gets the held selector
 */
-(SEL)sel;

/**
 * Sets the held object
 *
 * @param object
 *  The object to set
 */
-(void)setObject:(id)object;

/**
 * Sets the held selector
 *
 * @param sel
 *  The selector to set
 */
-(void)setSel:(SEL)sel;

@end
