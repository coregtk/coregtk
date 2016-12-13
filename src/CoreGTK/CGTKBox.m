/*
 * CGTKBox.m
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
#import "CoreGTK/CGTKBox.h"

@implementation CGTKBox

-(id)initWithOrientation:(GtkOrientation) orientation andSpacing:(gint) spacing
{
	self = [super initWithGObject:(GObject *)gtk_box_new(orientation, spacing)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkBox*)BOX
{
	return GTK_BOX([self GOBJECT]);
}

-(GtkBaselinePosition)getBaselinePosition
{
	return gtk_box_get_baseline_position(GTK_BOX([self GOBJECT]));
}

-(CGTKWidget*)getCenterWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_box_get_center_widget(GTK_BOX([self GOBJECT]))];
}

-(BOOL)getHomogeneous
{
	return (gtk_box_get_homogeneous(GTK_BOX([self GOBJECT])) ? YES : NO);
}

-(gint)getSpacing
{
	return gtk_box_get_spacing(GTK_BOX([self GOBJECT]));
}

-(void)packEndWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding
{
	gtk_box_pack_end(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding);
}

-(void)packStartWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding
{
	gtk_box_pack_start(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding);
}

-(void)queryChildPackingWithChild:(CGTKWidget*) child andExpand:(gboolean*) expand andFill:(gboolean*) fill andPadding:(guint*) padding andPackType:(GtkPackType*) packType
{
	gtk_box_query_child_packing(GTK_BOX([self GOBJECT]), [child WIDGET], expand, fill, padding, packType);
}

-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_box_reorder_child(GTK_BOX([self GOBJECT]), [child WIDGET], position);
}

-(void)setBaselinePosition:(GtkBaselinePosition) position
{
	gtk_box_set_baseline_position(GTK_BOX([self GOBJECT]), position);
}

-(void)setCenterWidget:(CGTKWidget*) widget
{
	gtk_box_set_center_widget(GTK_BOX([self GOBJECT]), [widget WIDGET]);
}

-(void)setChildPackingWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding andPackType:(GtkPackType) packType
{
	gtk_box_set_child_packing(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding, packType);
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_box_set_homogeneous(GTK_BOX([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setSpacing:(gint) spacing
{
	gtk_box_set_spacing(GTK_BOX([self GOBJECT]), spacing);
}


@end