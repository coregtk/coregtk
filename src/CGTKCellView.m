/*
 * CGTKCellView.m
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

#import "CGTKCellView.h"

@implementation CGTKCellView

-(GtkCellView *)CELL_VIEW
{
	return GTK_CELL_VIEW([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget: gtk_cell_view_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithText:(NSString *)text
{
	self = [super initWithGtkWidget: gtk_cell_view_new_with_text ([text UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithMarkup:(NSString *)markup
{
	self = [super initWithGtkWidget: gtk_cell_view_new_with_markup ([markup UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithPixbuf:(GdkPixbuf *)pixbuf
{
	self = [super initWithGtkWidget:gtk_cell_view_new_with_pixbuf (pixbuf) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)setModel:(GtkTreeModel *)model
{
	gtk_cell_view_set_model ([self CELL_VIEW], model);
}

-(GtkTreeModel *)getModel
{
	return gtk_cell_view_get_model ([self CELL_VIEW]);
}

-(void)setDisplayedRow:(GtkTreePath *)path
{
	gtk_cell_view_set_displayed_row ([self CELL_VIEW], path);
}

-(GtkTreePath *)getDisplayedRow
{
	return gtk_cell_view_get_displayed_row ([self CELL_VIEW]);
}

-(BOOL)getSizeOfRowWithPath:(GtkTreePath *)path andRequisition:(GtkRequisition *)requisition
{
	return [CGTK getBOOL:gtk_cell_view_get_size_of_row ([self CELL_VIEW], path, requisition)];
}

-(void)setBackgroundColor:(const GdkColor *)color
{
	gtk_cell_view_set_background_color ([self CELL_VIEW], color);
}

@end
