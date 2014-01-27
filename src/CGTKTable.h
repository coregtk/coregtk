/*
 * CGTKTable.h
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
#import "CGTKContainer.h"

@interface CGTKTable : CGTKContainer
{
	
}

/**
 * Returns internal GtkTable
 */
-(GtkTable *)TABLE;

/**
 * Forwards message to:
 * GtkWidget * gtk_table_new (guint rows, guint columns, gboolean homogeneous)
 */
-(id)initWithRows:(NSNumber *)rows andColumns:(NSNumber *)columns andHomogeneous:(BOOL)homogeneous;

/**
 * Forwards message to:
 * void gtk_table_resize (GtkTable* table, guint rows, guint columns)
 */
-(void)resizeWithRows:(NSNumber *)rows andColumns:(NSNumber *)columns;

/**
 * Forwards message to:
 * void gtk_table_attach (GtkTable* table, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach, GtkAttachOptions xoptions, GtkAttachOptions yoptions, guint xpadding, guint ypadding)
 */
-(void)attachWithChild:(CGTKWidget *)child andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach andXoptions:(GtkAttachOptions)xoptions andYoptions:(GtkAttachOptions)yoptions andXpadding:(NSNumber *)xpadding andYpadding:(NSNumber *)ypadding;

/**
 * Forwards message to:
 * void gtk_table_attach_defaults (GtkTable* table, GtkWidget* widget, guintleft_attach, guintright_attach, guinttop_attach, guintbottom_attach)
 */
-(void)attachDefaultsWithWidget:(CGTKWidget *)widget andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach;

/**
 * Forwards message to:
 * void gtk_table_set_row_spacing (GtkTable* table, guintrow, guintspacing)
 */
-(void)setRowSpacingWithRow:(NSNumber *)row andSpacing:(NSNumber *)spacing;

/**
 * Forwards message to:
 * guint gtk_table_get_row_spacing (GtkTable* table, guint row)
 */
-(NSNumber *)getRowSpacing:(NSNumber *)row;

/**
 * Forwards message to:
 * void gtk_table_set_col_spacing (GtkTable* table, guintcolumn, guintspacing)
 */
-(void)setColSpacingWithColumn:(NSNumber *)column andSpacing:(NSNumber *)spacing;

/**
 * Forwards message to:
 * guint gtk_table_get_col_spacing (GtkTable* table, guint column)
 */
-(NSNumber *)getColSpacing:(NSNumber *)column;

/**
 * Forwards message to:
 * void gtk_table_set_row_spacings (GtkTable* table, guintspacing)
 */
-(void)setRowSpacings:(NSNumber *)spacing;

/**
 * Forwards message to:
 * guint gtk_table_get_default_row_spacing (GtkTable* table)
 */
-(NSNumber *)getDefaultRowSpacing;

/**
 * Forwards message to:
 * void gtk_table_set_col_spacings (GtkTable* table, guintspacing)
 */
-(void)setColSpacings:(NSNumber *)spacing;

/**
 * Forwards message to:
 * guint gtk_table_get_default_col_spacing (GtkTable* table)
 */
-(NSNumber *)getDefaultColSpacing;

/**
 * Forwards message to:
 * void gtk_table_set_homogeneous (GtkTable* table, gbooleanhomogeneous)
 */
-(void)setHomogeneous:(BOOL)homogeneous;

/**
 * Forwards message to:
 * gboolean gtk_table_get_homogeneous (GtkTable* table)
 */
-(BOOL)getHomogeneous;

/**
 * Forwards message to:
 * void gtk_table_get_size (GtkTable* table, guint* rows, guint* columns)
 */
-(void)getSizeWithRows:(NSNumber **)rows andColumns:(NSNumber **)columns;

@end
