/*
 * CGTKBox.h
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

@interface CGTKBox : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithOrientation:(GtkOrientation) orientation andSpacing:(gint) spacing;

/**
 * Methods
 */

-(GtkBox*)BOX;

/**
 * -(GtkBaselinePosition*)getBaselinePosition;
 *
 * @returns GtkBaselinePosition
 */
-(GtkBaselinePosition)getBaselinePosition;

/**
 * -(BOOL*)getHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getHomogeneous;

/**
 * -(gint*)getSpacing;
 *
 * @returns gint
 */
-(gint)getSpacing;

/**
 * -(void*)packEndWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;
 *
 * @param child
 * @param expand
 * @param fill
 * @param padding
 */
-(void)packEndWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;

/**
 * -(void*)packStartWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;
 *
 * @param child
 * @param expand
 * @param fill
 * @param padding
 */
-(void)packStartWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;

/**
 * -(void*)queryChildPackingWithChild:(CGTKWidget*) child andExpand:(gboolean*) expand andFill:(gboolean*) fill andPadding:(guint*) padding andPackType:(GtkPackType*) packType;
 *
 * @param child
 * @param expand
 * @param fill
 * @param padding
 * @param packType
 */
-(void)queryChildPackingWithChild:(CGTKWidget*) child andExpand:(gboolean*) expand andFill:(gboolean*) fill andPadding:(guint*) padding andPackType:(GtkPackType*) packType;

/**
 * -(void*)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
 *
 * @param child
 * @param position
 */
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;

/**
 * -(void*)setBaselinePosition:(GtkBaselinePosition) position;
 *
 * @param position
 */
-(void)setBaselinePosition:(GtkBaselinePosition) position;

/**
 * -(void*)setChildPackingWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding andPackType:(GtkPackType) packType;
 *
 * @param child
 * @param expand
 * @param fill
 * @param padding
 * @param packType
 */
-(void)setChildPackingWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding andPackType:(GtkPackType) packType;

/**
 * -(void*)setHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setSpacing:(gint) spacing;
 *
 * @param spacing
 */
-(void)setSpacing:(gint) spacing;

@end
