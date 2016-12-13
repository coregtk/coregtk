/*
 * CGTKLayout.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKLayout : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment;

/**
 * Methods
 */

-(GtkLayout*)LAYOUT;

/**
 * -(GdkWindow**)getBinWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getBinWindow;

/**
 * -(GtkAdjustment**)getHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getHadjustment;

/**
 * -(void*)getSizeWithWidth:(guint*) width andHeight:(guint*) height;
 *
 * @param width
 * @param height
 */
-(void)getSizeWithWidth:(guint*) width andHeight:(guint*) height;

/**
 * -(GtkAdjustment**)getVadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getVadjustment;

/**
 * -(void*)moveWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;
 *
 * @param childWidget
 * @param x
 * @param y
 */
-(void)moveWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;

/**
 * -(void*)putWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;
 *
 * @param childWidget
 * @param x
 * @param y
 */
-(void)putWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;

/**
 * -(void*)setHadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setHadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setSizeWithWidth:(guint) width andHeight:(guint) height;
 *
 * @param width
 * @param height
 */
-(void)setSizeWithWidth:(guint) width andHeight:(guint) height;

/**
 * -(void*)setVadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setVadjustment:(GtkAdjustment*) adjustment;

@end
