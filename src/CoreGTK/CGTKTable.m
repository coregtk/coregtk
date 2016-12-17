/*
 * CGTKTable.m
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
#import "CoreGTK/CGTKTable.h"

@implementation CGTKTable

-(id)initWithRows:(guint) rows andColumns:(guint) columns andHomogeneous:(BOOL) homogeneous
{
	self = [super initWithGObject:(GObject *)gtk_table_new(rows, columns, (homogeneous ? TRUE : FALSE))];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkTable*)TABLE
{
	return GTK_TABLE([self GOBJECT]);
}

-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach andXoptions:(GtkAttachOptions) xoptions andYoptions:(GtkAttachOptions) yoptions andXpadding:(guint) xpadding andYpadding:(guint) ypadding
{
	gtk_table_attach(GTK_TABLE([self GOBJECT]), [child WIDGET], leftAttach, rightAttach, topAttach, bottomAttach, xoptions, yoptions, xpadding, ypadding);
}

-(void)attachDefaultsWithWidget:(CGTKWidget*) widget andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach
{
	gtk_table_attach_defaults(GTK_TABLE([self GOBJECT]), [widget WIDGET], leftAttach, rightAttach, topAttach, bottomAttach);
}

-(guint)getColSpacing:(guint) column
{
	return gtk_table_get_col_spacing(GTK_TABLE([self GOBJECT]), column);
}

-(guint)getDefaultColSpacing
{
	return gtk_table_get_default_col_spacing(GTK_TABLE([self GOBJECT]));
}

-(guint)getDefaultRowSpacing
{
	return gtk_table_get_default_row_spacing(GTK_TABLE([self GOBJECT]));
}

-(BOOL)getHomogeneous
{
	return (gtk_table_get_homogeneous(GTK_TABLE([self GOBJECT])) ? YES : NO);
}

-(guint)getRowSpacing:(guint) row
{
	return gtk_table_get_row_spacing(GTK_TABLE([self GOBJECT]), row);
}

-(void)getSizeWithRows:(guint*) rows andColumns:(guint*) columns
{
	gtk_table_get_size(GTK_TABLE([self GOBJECT]), rows, columns);
}

-(void)resizeWithRows:(guint) rows andColumns:(guint) columns
{
	gtk_table_resize(GTK_TABLE([self GOBJECT]), rows, columns);
}

-(void)setColSpacingWithColumn:(guint) column andSpacing:(guint) spacing
{
	gtk_table_set_col_spacing(GTK_TABLE([self GOBJECT]), column, spacing);
}

-(void)setColSpacings:(guint) spacing
{
	gtk_table_set_col_spacings(GTK_TABLE([self GOBJECT]), spacing);
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_table_set_homogeneous(GTK_TABLE([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setRowSpacingWithRow:(guint) row andSpacing:(guint) spacing
{
	gtk_table_set_row_spacing(GTK_TABLE([self GOBJECT]), row, spacing);
}

-(void)setRowSpacings:(guint) spacing
{
	gtk_table_set_row_spacings(GTK_TABLE([self GOBJECT]), spacing);
}


@end
