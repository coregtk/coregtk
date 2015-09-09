/*
 * CGTKGrid.h
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

@interface CGTKGrid : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkGrid*)GRID;

/**
 * -(void*)attachWithChild:(CGTKWidget*) child andLeft:(gint) left andTop:(gint) top andWidth:(gint) width andHeight:(gint) height;
 *
 * @param child
 * @param left
 * @param top
 * @param width
 * @param height
 */
-(void)attachWithChild:(CGTKWidget*) child andLeft:(gint) left andTop:(gint) top andWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)attachNextToWithChild:(CGTKWidget*) child andSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side andWidth:(gint) width andHeight:(gint) height;
 *
 * @param child
 * @param sibling
 * @param side
 * @param width
 * @param height
 */
-(void)attachNextToWithChild:(CGTKWidget*) child andSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side andWidth:(gint) width andHeight:(gint) height;

/**
 * -(gint*)getBaselineRow;
 *
 * @returns gint
 */
-(gint)getBaselineRow;

/**
 * -(CGTKWidget**)getChildAtWithLeft:(gint) left andTop:(gint) top;
 *
 * @param left
 * @param top
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getChildAtWithLeft:(gint) left andTop:(gint) top;

/**
 * -(BOOL*)getColumnHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getColumnHomogeneous;

/**
 * -(guint*)getColumnSpacing;
 *
 * @returns guint
 */
-(guint)getColumnSpacing;

/**
 * -(GtkBaselinePosition*)getRowBaselinePosition:(gint) row;
 *
 * @param row
 * @returns GtkBaselinePosition
 */
-(GtkBaselinePosition)getRowBaselinePosition:(gint) row;

/**
 * -(BOOL*)getRowHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getRowHomogeneous;

/**
 * -(guint*)getRowSpacing;
 *
 * @returns guint
 */
-(guint)getRowSpacing;

/**
 * -(void*)insertColumn:(gint) position;
 *
 * @param position
 */
-(void)insertColumn:(gint) position;

/**
 * -(void*)insertNextToWithSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side;
 *
 * @param sibling
 * @param side
 */
-(void)insertNextToWithSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side;

/**
 * -(void*)insertRow:(gint) position;
 *
 * @param position
 */
-(void)insertRow:(gint) position;

/**
 * -(void*)removeColumn:(gint) position;
 *
 * @param position
 */
-(void)removeColumn:(gint) position;

/**
 * -(void*)removeRow:(gint) position;
 *
 * @param position
 */
-(void)removeRow:(gint) position;

/**
 * -(void*)setBaselineRow:(gint) row;
 *
 * @param row
 */
-(void)setBaselineRow:(gint) row;

/**
 * -(void*)setColumnHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setColumnHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setColumnSpacing:(guint) spacing;
 *
 * @param spacing
 */
-(void)setColumnSpacing:(guint) spacing;

/**
 * -(void*)setRowBaselinePositionWithRow:(gint) row andPos:(GtkBaselinePosition) pos;
 *
 * @param row
 * @param pos
 */
-(void)setRowBaselinePositionWithRow:(gint) row andPos:(GtkBaselinePosition) pos;

/**
 * -(void*)setRowHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setRowHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setRowSpacing:(guint) spacing;
 *
 * @param spacing
 */
-(void)setRowSpacing:(guint) spacing;

@end