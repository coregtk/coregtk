/*
 * CGTKToolItemGroup.m
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
#import "CoreGTK/CGTKToolItemGroup.h"

@implementation CGTKToolItemGroup

-(id)init:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_tool_item_group_new([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToolItemGroup*)TOOLITEMGROUP
{
	return GTK_TOOL_ITEM_GROUP([self GOBJECT]);
}

-(BOOL)getCollapsed
{
	return (gtk_tool_item_group_get_collapsed(GTK_TOOL_ITEM_GROUP([self GOBJECT])) ? YES : NO);
}

-(GtkToolItem*)getDropItemWithX:(gint) x andY:(gint) y
{
	return gtk_tool_item_group_get_drop_item(GTK_TOOL_ITEM_GROUP([self GOBJECT]), x, y);
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_tool_item_group_get_ellipsize(GTK_TOOL_ITEM_GROUP([self GOBJECT]));
}

-(GtkReliefStyle)getHeaderRelief
{
	return gtk_tool_item_group_get_header_relief(GTK_TOOL_ITEM_GROUP([self GOBJECT]));
}

-(gint)getItemPosition:(GtkToolItem*) item
{
	return gtk_tool_item_group_get_item_position(GTK_TOOL_ITEM_GROUP([self GOBJECT]), item);
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_tool_item_group_get_label(GTK_TOOL_ITEM_GROUP([self GOBJECT]))];
}

-(CGTKWidget*)getLabelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_tool_item_group_get_label_widget(GTK_TOOL_ITEM_GROUP([self GOBJECT]))];
}

-(guint)getNitems
{
	return gtk_tool_item_group_get_n_items(GTK_TOOL_ITEM_GROUP([self GOBJECT]));
}

-(GtkToolItem*)getNthItem:(guint) index
{
	return gtk_tool_item_group_get_nth_item(GTK_TOOL_ITEM_GROUP([self GOBJECT]), index);
}

-(void)insertWithItem:(GtkToolItem*) item andPosition:(gint) position
{
	gtk_tool_item_group_insert(GTK_TOOL_ITEM_GROUP([self GOBJECT]), item, position);
}

-(void)setCollapsed:(BOOL) collapsed
{
	gtk_tool_item_group_set_collapsed(GTK_TOOL_ITEM_GROUP([self GOBJECT]), (collapsed ? TRUE : FALSE));
}

-(void)setEllipsize:(PangoEllipsizeMode) ellipsize
{
	gtk_tool_item_group_set_ellipsize(GTK_TOOL_ITEM_GROUP([self GOBJECT]), ellipsize);
}

-(void)setHeaderRelief:(GtkReliefStyle) style
{
	gtk_tool_item_group_set_header_relief(GTK_TOOL_ITEM_GROUP([self GOBJECT]), style);
}

-(void)setItemPositionWithItem:(GtkToolItem*) item andPosition:(gint) position
{
	gtk_tool_item_group_set_item_position(GTK_TOOL_ITEM_GROUP([self GOBJECT]), item, position);
}

-(void)setLabel:(NSString*) label
{
	gtk_tool_item_group_set_label(GTK_TOOL_ITEM_GROUP([self GOBJECT]), [label UTF8String]);
}

-(void)setLabelWidget:(CGTKWidget*) labelWidget
{
	gtk_tool_item_group_set_label_widget(GTK_TOOL_ITEM_GROUP([self GOBJECT]), [labelWidget WIDGET]);
}


@end