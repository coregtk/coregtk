/*
 * CGTKGrid.m
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
#import "CoreGTK/CGTKGrid.h"

@implementation CGTKGrid

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_grid_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkGrid*)GRID
{
	return GTK_GRID([self GOBJECT]);
}

-(void)attachWithChild:(CGTKWidget*) child andLeft:(gint) left andTop:(gint) top andWidth:(gint) width andHeight:(gint) height
{
	gtk_grid_attach(GTK_GRID([self GOBJECT]), [child WIDGET], left, top, width, height);
}

-(void)attachNextToWithChild:(CGTKWidget*) child andSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side andWidth:(gint) width andHeight:(gint) height
{
	gtk_grid_attach_next_to(GTK_GRID([self GOBJECT]), [child WIDGET], [sibling WIDGET], side, width, height);
}

-(gint)getBaselineRow
{
	return gtk_grid_get_baseline_row(GTK_GRID([self GOBJECT]));
}

-(CGTKWidget*)getChildAtWithLeft:(gint) left andTop:(gint) top
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_grid_get_child_at(GTK_GRID([self GOBJECT]), left, top)];
}

-(BOOL)getColumnHomogeneous
{
	return (gtk_grid_get_column_homogeneous(GTK_GRID([self GOBJECT])) ? YES : NO);
}

-(guint)getColumnSpacing
{
	return gtk_grid_get_column_spacing(GTK_GRID([self GOBJECT]));
}

-(GtkBaselinePosition)getRowBaselinePosition:(gint) row
{
	return gtk_grid_get_row_baseline_position(GTK_GRID([self GOBJECT]), row);
}

-(BOOL)getRowHomogeneous
{
	return (gtk_grid_get_row_homogeneous(GTK_GRID([self GOBJECT])) ? YES : NO);
}

-(guint)getRowSpacing
{
	return gtk_grid_get_row_spacing(GTK_GRID([self GOBJECT]));
}

-(void)insertColumn:(gint) position
{
	gtk_grid_insert_column(GTK_GRID([self GOBJECT]), position);
}

-(void)insertNextToWithSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side
{
	gtk_grid_insert_next_to(GTK_GRID([self GOBJECT]), [sibling WIDGET], side);
}

-(void)insertRow:(gint) position
{
	gtk_grid_insert_row(GTK_GRID([self GOBJECT]), position);
}

-(void)removeColumn:(gint) position
{
	gtk_grid_remove_column(GTK_GRID([self GOBJECT]), position);
}

-(void)removeRow:(gint) position
{
	gtk_grid_remove_row(GTK_GRID([self GOBJECT]), position);
}

-(void)setBaselineRow:(gint) row
{
	gtk_grid_set_baseline_row(GTK_GRID([self GOBJECT]), row);
}

-(void)setColumnHomogeneous:(BOOL) homogeneous
{
	gtk_grid_set_column_homogeneous(GTK_GRID([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setColumnSpacing:(guint) spacing
{
	gtk_grid_set_column_spacing(GTK_GRID([self GOBJECT]), spacing);
}

-(void)setRowBaselinePositionWithRow:(gint) row andPos:(GtkBaselinePosition) pos
{
	gtk_grid_set_row_baseline_position(GTK_GRID([self GOBJECT]), row, pos);
}

-(void)setRowHomogeneous:(BOOL) homogeneous
{
	gtk_grid_set_row_homogeneous(GTK_GRID([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setRowSpacing:(guint) spacing
{
	gtk_grid_set_row_spacing(GTK_GRID([self GOBJECT]), spacing);
}


@end