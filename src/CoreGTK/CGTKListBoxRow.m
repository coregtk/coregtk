/*
 * CGTKListBoxRow.m
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
#import "CoreGTK/CGTKListBoxRow.h"

@implementation CGTKListBoxRow

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_list_box_row_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkListBoxRow*)LISTBOXROW
{
	return GTK_LIST_BOX_ROW([self GOBJECT]);
}

-(void)changed
{
	gtk_list_box_row_changed(GTK_LIST_BOX_ROW([self GOBJECT]));
}

-(BOOL)getActivatable
{
	return (gtk_list_box_row_get_activatable(GTK_LIST_BOX_ROW([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getHeader
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_list_box_row_get_header(GTK_LIST_BOX_ROW([self GOBJECT]))];
}

-(gint)getIndex
{
	return gtk_list_box_row_get_index(GTK_LIST_BOX_ROW([self GOBJECT]));
}

-(BOOL)getSelectable
{
	return (gtk_list_box_row_get_selectable(GTK_LIST_BOX_ROW([self GOBJECT])) ? YES : NO);
}

-(BOOL)isSelected
{
	return (gtk_list_box_row_is_selected(GTK_LIST_BOX_ROW([self GOBJECT])) ? YES : NO);
}

-(void)setActivatable:(BOOL) activatable
{
	gtk_list_box_row_set_activatable(GTK_LIST_BOX_ROW([self GOBJECT]), (activatable ? TRUE : FALSE));
}

-(void)setHeader:(CGTKWidget*) header
{
	gtk_list_box_row_set_header(GTK_LIST_BOX_ROW([self GOBJECT]), [header WIDGET]);
}

-(void)setSelectable:(BOOL) selectable
{
	gtk_list_box_row_set_selectable(GTK_LIST_BOX_ROW([self GOBJECT]), (selectable ? TRUE : FALSE));
}


@end