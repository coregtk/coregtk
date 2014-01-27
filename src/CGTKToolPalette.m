/*
 * CGTKToolPalette.m
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

#import "CGTKToolPalette.h"

@implementation CGTKToolPalette

-(GtkToolPalette *)TOOL_PALETTE
{
	return GTK_TOOL_PALETTE([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_tool_palette_new ()];

	if(self)
	{

	}

	return self;
}

-(void)setGroupPositionWithGroup:(CGTKToolItemGroup *)group andPosition:(NSNumber *)position
{
	gtk_tool_palette_set_group_position ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP], [position intValue]);
}

-(void)setExclusiveWithGroup:(CGTKToolItemGroup *)group andExclusive:(BOOL)exclusive
{
	gtk_tool_palette_set_exclusive ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP], [CGTK getGboolean:exclusive]);
}

-(void)setExpandWithGroup:(CGTKToolItemGroup *)group andExpand:(BOOL)expand
{
	gtk_tool_palette_set_expand ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP], [CGTK getGboolean:expand]);
}

-(NSNumber *)getGroupPosition:(CGTKToolItemGroup *)group
{
	return [NSNumber numberWithInt:gtk_tool_palette_get_group_position ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP])];
}

-(BOOL)getExclusive:(CGTKToolItemGroup *)group
{
	return [CGTK getBOOL:gtk_tool_palette_get_exclusive ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP])];
}

-(BOOL)getExpand:(CGTKToolItemGroup *)group
{
	return [CGTK getBOOL:gtk_tool_palette_get_expand ([self TOOL_PALETTE], [group TOOL_ITEM_GROUP])];
}

-(void)setIconSize:(GtkIconSize)iconSize
{
	gtk_tool_palette_set_icon_size ([self TOOL_PALETTE], iconSize);
}

-(void)unsetIconSize
{
	gtk_tool_palette_unset_icon_size ([self TOOL_PALETTE]);
}

-(void)setStyle:(GtkToolbarStyle)style
{
	gtk_tool_palette_set_style ([self TOOL_PALETTE], style);
}

-(void)unsetStyle
{
	gtk_tool_palette_unset_style ([self TOOL_PALETTE]);
}

-(GtkIconSize)getIconSize
{
	return gtk_tool_palette_get_icon_size ([self TOOL_PALETTE]);
}

-(GtkToolbarStyle)getStyle
{
	return gtk_tool_palette_get_style ([self TOOL_PALETTE]);
}

-(CGTKToolItem *)getDropItemWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return (CGTKToolItem *) [CGTKWidget widgetWithGtkWidget: GTK_WIDGET(gtk_tool_palette_get_drop_item ([self TOOL_PALETTE], [x intValue], [y intValue]))];
}

-(CGTKToolItemGroup *)getDropGroupWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return (CGTKToolItemGroup *) [CGTKWidget widgetWithGtkWidget: GTK_WIDGET(gtk_tool_palette_get_drop_group ([self TOOL_PALETTE], [x intValue], [y intValue]))];
}

-(CGTKWidget *)getDragItem:(const GtkSelectionData *)selection
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_palette_get_drag_item ([self TOOL_PALETTE], selection)];
}

-(const GtkTargetEntry *)getDragTargetGroup
{
	return gtk_tool_palette_get_drag_target_group();
}

-(const GtkTargetEntry *)getDragTargetItem
{
	return gtk_tool_palette_get_drag_target_item();
}

-(void)setDragSource:(GtkToolPaletteDragTargets)targets
{
	gtk_tool_palette_set_drag_source ([self TOOL_PALETTE], targets);
}

-(void)addDragDestWithWidget:(CGTKWidget *)widget andFlags:(GtkDestDefaults)flags andTargets:(GtkToolPaletteDragTargets)targets andActions:(GdkDragAction)actions
{
	gtk_tool_palette_add_drag_dest ([self TOOL_PALETTE], [widget WIDGET], flags, targets, actions);
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_tool_palette_get_hadjustment ([self TOOL_PALETTE]);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_tool_palette_get_vadjustment ([self TOOL_PALETTE]);
}

@end
