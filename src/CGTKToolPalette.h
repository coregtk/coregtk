/*
 * CGTKToolPalette.h
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
#import "CGTKToolItemGroup.h"

@interface CGTKToolPalette : CGTKContainer
{
	
}

/**
 * Returns internal GtkToolPalette
 */
-(GtkToolPalette *)TOOL_PALETTE;

/**
 * Forwards message to:
 * GtkWidget* gtk_tool_palette_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_group_position (GtkToolPalette* palette, GtkToolItemGroup* group, gint position)
 */
-(void)setGroupPositionWithGroup:(CGTKToolItemGroup *)group andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean exclusive)
 */
-(void)setExclusiveWithGroup:(CGTKToolItemGroup *)group andExclusive:(BOOL)exclusive;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_expand (GtkToolPalette* palette, GtkToolItemGroup* group, gboolean expand)
 */
-(void)setExpandWithGroup:(CGTKToolItemGroup *)group andExpand:(BOOL)expand;

/**
 * Forwards message to:
 * gint gtk_tool_palette_get_group_position (GtkToolPalette* palette, GtkToolItemGroup* group)
 */
-(NSNumber *)getGroupPosition:(CGTKToolItemGroup *)group;

/**
 * Forwards message to:
 * gboolean gtk_tool_palette_get_exclusive (GtkToolPalette* palette, GtkToolItemGroup* group)
 */
-(BOOL)getExclusive:(CGTKToolItemGroup *)group;

/**
 * Forwards message to:
 * gboolean gtk_tool_palette_get_expand (GtkToolPalette* palette, GtkToolItemGroup* group)
 */
-(BOOL)getExpand:(CGTKToolItemGroup *)group;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_icon_size (GtkToolPalette* palette, GtkIconSize icon_size)
 */
-(void)setIconSize:(GtkIconSize)iconSize;

/**
 * Forwards message to:
 * void gtk_tool_palette_unset_icon_size (GtkToolPalette* palette)
 */
-(void)unsetIconSize;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_style (GtkToolPalette* palette, GtkToolbarStyle style)
 */
-(void)setStyle:(GtkToolbarStyle)style;

/**
 * Forwards message to:
 * void gtk_tool_palette_unset_style (GtkToolPalette* palette)
 */
-(void)unsetStyle;

/**
 * Forwards message to:
 * GtkIconSize gtk_tool_palette_get_icon_size (GtkToolPalette* palette)
 */
-(GtkIconSize)getIconSize;

/**
 * Forwards message to:
 * GtkToolbarStyle gtk_tool_palette_get_style (GtkToolPalette* palette)
 */
-(GtkToolbarStyle)getStyle;

/**
 * Forwards message to:
 * GtkToolItem* gtk_tool_palette_get_drop_item (GtkToolPalette* palette, gint x, gint y)
 */
-(CGTKToolItem *)getDropItemWithX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * GtkToolItemGroup* gtk_tool_palette_get_drop_group (GtkToolPalette* palette, gint x, gint y)
 */
-(CGTKToolItemGroup *)getDropGroupWithX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * GtkWidget* gtk_tool_palette_get_drag_item (GtkToolPalette* palette, const GtkSelectionData* selection)
 */
-(CGTKWidget *)getDragItem:(const GtkSelectionData *)selection;

/**
 * Forwards message to:
 * const GtkTargetEntry * gtk_tool_palette_get_drag_target_group (void);
 */
-(const GtkTargetEntry *)getDragTargetGroup;

/**
 * Forwards message to:
 * const GtkTargetEntry * gtk_tool_palette_get_drag_target_item (void);
 */
-(const GtkTargetEntry *)getDragTargetItem;

/**
 * Forwards message to:
 * void gtk_tool_palette_set_drag_source (GtkToolPalette* palette, GtkToolPaletteDragTargets targets)
 */
-(void)setDragSource:(GtkToolPaletteDragTargets)targets;

/**
 * Forwards message to:
 * void gtk_tool_palette_add_drag_dest (GtkToolPalette* palette, GtkWidget* widget, GtkDestDefaults flags, GtkToolPaletteDragTargets targets, GdkDragAction actions)
 */
-(void)addDragDestWithWidget:(CGTKWidget *)widget andFlags:(GtkDestDefaults)flags andTargets:(GtkToolPaletteDragTargets)targets andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_tool_palette_get_hadjustment (GtkToolPalette* palette)
 */
-(GtkAdjustment *)getHadjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_tool_palette_get_vadjustment (GtkToolPalette* palette)
 */
-(GtkAdjustment *)getVadjustment;

@end
