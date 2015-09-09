/*
 * CGTKTable.h
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

@interface CGTKTable : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithRows:(guint) rows andColumns:(guint) columns andHomogeneous:(BOOL) homogeneous;

/**
 * Methods
 */

-(GtkTable*)TABLE;

/**
 * -(void*)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach andXoptions:(GtkAttachOptions) xoptions andYoptions:(GtkAttachOptions) yoptions andXpadding:(guint) xpadding andYpadding:(guint) ypadding;
 *
 * @param child
 * @param leftAttach
 * @param rightAttach
 * @param topAttach
 * @param bottomAttach
 * @param xoptions
 * @param yoptions
 * @param xpadding
 * @param ypadding
 */
-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach andXoptions:(GtkAttachOptions) xoptions andYoptions:(GtkAttachOptions) yoptions andXpadding:(guint) xpadding andYpadding:(guint) ypadding;

/**
 * -(void*)attachDefaultsWithWidget:(CGTKWidget*) widget andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;
 *
 * @param widget
 * @param leftAttach
 * @param rightAttach
 * @param topAttach
 * @param bottomAttach
 */
-(void)attachDefaultsWithWidget:(CGTKWidget*) widget andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;

/**
 * -(guint*)getColSpacing:(guint) column;
 *
 * @param column
 * @returns guint
 */
-(guint)getColSpacing:(guint) column;

/**
 * -(guint*)getDefaultColSpacing;
 *
 * @returns guint
 */
-(guint)getDefaultColSpacing;

/**
 * -(guint*)getDefaultRowSpacing;
 *
 * @returns guint
 */
-(guint)getDefaultRowSpacing;

/**
 * -(BOOL*)getHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getHomogeneous;

/**
 * -(guint*)getRowSpacing:(guint) row;
 *
 * @param row
 * @returns guint
 */
-(guint)getRowSpacing:(guint) row;

/**
 * -(void*)getSizeWithRows:(guint*) rows andColumns:(guint*) columns;
 *
 * @param rows
 * @param columns
 */
-(void)getSizeWithRows:(guint*) rows andColumns:(guint*) columns;

/**
 * -(void*)resizeWithRows:(guint) rows andColumns:(guint) columns;
 *
 * @param rows
 * @param columns
 */
-(void)resizeWithRows:(guint) rows andColumns:(guint) columns;

/**
 * -(void*)setColSpacingWithColumn:(guint) column andSpacing:(guint) spacing;
 *
 * @param column
 * @param spacing
 */
-(void)setColSpacingWithColumn:(guint) column andSpacing:(guint) spacing;

/**
 * -(void*)setColSpacings:(guint) spacing;
 *
 * @param spacing
 */
-(void)setColSpacings:(guint) spacing;

/**
 * -(void*)setHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setRowSpacingWithRow:(guint) row andSpacing:(guint) spacing;
 *
 * @param row
 * @param spacing
 */
-(void)setRowSpacingWithRow:(guint) row andSpacing:(guint) spacing;

/**
 * -(void*)setRowSpacings:(guint) spacing;
 *
 * @param spacing
 */
-(void)setRowSpacings:(guint) spacing;

@end
