/*
 * CGTKPaned.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKPaned : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init:(GtkOrientation) orientation;

/**
 * Methods
 */

-(GtkPaned*)PANED;

/**
 * -(void*)add1:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)add1:(CGTKWidget*) child;

/**
 * -(void*)add2:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)add2:(CGTKWidget*) child;

/**
 * -(CGTKWidget**)getChild1;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getChild1;

/**
 * -(CGTKWidget**)getChild2;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getChild2;

/**
 * -(GdkWindow**)getHandleWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getHandleWindow;

/**
 * -(gint*)getPosition;
 *
 * @returns gint
 */
-(gint)getPosition;

/**
 * -(void*)pack1WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;
 *
 * @param child
 * @param resize
 * @param shrink
 */
-(void)pack1WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;

/**
 * -(void*)pack2WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;
 *
 * @param child
 * @param resize
 * @param shrink
 */
-(void)pack2WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;

/**
 * -(void*)setPosition:(gint) position;
 *
 * @param position
 */
-(void)setPosition:(gint) position;

@end
