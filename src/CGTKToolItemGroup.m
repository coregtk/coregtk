/*
 * CGTKToolItemGroup.m
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

#import "CGTKToolItemGroup.h"

@implementation CGTKToolItemGroup

-(GtkToolItemGroup *)TOOL_ITEM_GROUP
{
	return GTK_TOOL_ITEM_GROUP([self WIDGET]);
}

-(id)init:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_tool_item_group_new ([label UTF8String])];

	if(self)
	{

	}

	return self;
}

-(void)setLabel:(NSString *)label
{
	gtk_tool_item_group_set_label ([self TOOL_ITEM_GROUP], [label UTF8String]);
}

-(void)setLabelWidget:(CGTKWidget *)labelWidget
{
	gtk_tool_item_group_set_label_widget ([self TOOL_ITEM_GROUP], [labelWidget WIDGET]);
}

-(void)setCollapsed:(BOOL)collapsed
{
	gtk_tool_item_group_set_collapsed ([self TOOL_ITEM_GROUP], [CGTK getGboolean:collapsed]);
}

-(void)setEllipsize:(PangoEllipsizeMode)ellipsize
{
	gtk_tool_item_group_set_ellipsize ([self TOOL_ITEM_GROUP], ellipsize);
}

-(void)setHeaderRelief:(GtkReliefStyle)style
{
	gtk_tool_item_group_set_header_relief ([self TOOL_ITEM_GROUP], style);
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String:gtk_tool_item_group_get_label ([self TOOL_ITEM_GROUP])];
}

-(CGTKWidget *)getLabelWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_item_group_get_label_widget ([self TOOL_ITEM_GROUP])];
}

-(BOOL)getCollapsed
{
	return [CGTK getBOOL:gtk_tool_item_group_get_collapsed ([self TOOL_ITEM_GROUP])];
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_tool_item_group_get_ellipsize ([self TOOL_ITEM_GROUP]);
}

-(void)insertWithItem:(CGTKToolItem *)item andPosition:(NSNumber *)position
{
	gtk_tool_item_group_insert ([self TOOL_ITEM_GROUP], [item TOOL_ITEM], [position intValue]);
}

-(void)setItemPositionWithItem:(CGTKToolItem *)item andPosition:(NSNumber *)position
{
	gtk_tool_item_group_set_item_position ([self TOOL_ITEM_GROUP], [item TOOL_ITEM], [position intValue]);
}

-(NSNumber *)getItemPosition:(CGTKToolItem *)item
{
	return [NSNumber numberWithInt:gtk_tool_item_group_get_item_position ([self TOOL_ITEM_GROUP], [item TOOL_ITEM])];
}

-(NSNumber *)getNItems
{
	return [NSNumber numberWithUnsignedInt:gtk_tool_item_group_get_n_items ([self TOOL_ITEM_GROUP])];
}

-(CGTKToolItem *)getNthItem:(NSNumber *)index
{
	return (CGTKToolItem *) [CGTKWidget widgetWithGtkWidget: GTK_WIDGET(gtk_tool_item_group_get_nth_item ([self TOOL_ITEM_GROUP], [index unsignedIntValue]))];
}

-(GtkReliefStyle)getHeaderRelief
{
	return gtk_tool_item_group_get_header_relief([self TOOL_ITEM_GROUP]);
}



-(CGTKToolItem *)getDropItemWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return (CGTKToolItem *) [CGTKWidget widgetWithGtkWidget: GTK_WIDGET(gtk_tool_item_group_get_drop_item ([self TOOL_ITEM_GROUP], [x intValue], [y intValue]))];
}

@end
