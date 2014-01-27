/*
 * CGTKToolItemGroup.h
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
#import "CGTKToolItem.h"

@interface CGTKToolItemGroup : CGTKContainer
{
	
}

/**
 * Returns internal GtkToolItemGroup
 */
-(GtkToolItemGroup *)TOOL_ITEM_GROUP;

/**
 * Forwards message to:
 * GtkWidget* gtk_tool_item_group_new (const gchar* label)
 */
-(id)init:(NSString *)label;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_label (GtkToolItemGroup* group, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_label_widget (GtkToolItemGroup* group, GtkWidget* label_widget)
 */
-(void)setLabelWidget:(CGTKWidget *)labelWidget;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_collapsed (GtkToolItemGroup* group, gboolean collapsed)
 */
-(void)setCollapsed:(BOOL)collapsed;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_ellipsize (GtkToolItemGroup* group, PangoEllipsizeMode ellipsize)
 */
-(void)setEllipsize:(PangoEllipsizeMode)ellipsize;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_header_relief (GtkToolItemGroup* group, GtkReliefStyle style)
 */
-(void)setHeaderRelief:(GtkReliefStyle)style;

/**
 * Forwards message to:
 * const gchar * gtk_tool_item_group_get_label (GtkToolItemGroup *group);
 */
-(NSString *)getLabel;

/**
 * Forwards message to:
 * GtkWidget* gtk_tool_item_group_get_label_widget (GtkToolItemGroup* group)
 */
-(CGTKWidget *)getLabelWidget;

/**
 * Forwards message to:
 * gboolean gtk_tool_item_group_get_collapsed (GtkToolItemGroup* group)
 */
-(BOOL)getCollapsed;

/**
 * Forwards message to:
 * PangoEllipsizeMode gtk_tool_item_group_get_ellipsize (GtkToolItemGroup* group)
 */
-(PangoEllipsizeMode)getEllipsize;

/**
 * Forwards message to:
 * GtkReliefStyle gtk_tool_item_group_get_header_relief (GtkToolItemGroup* group)
 */
-(GtkReliefStyle)getHeaderRelief;

/**
 * Forwards message to:
 * void gtk_tool_item_group_insert (GtkToolItemGroup* group, GtkToolItem* item, gint position)
 */
-(void)insertWithItem:(CGTKToolItem *)item andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_tool_item_group_set_item_position (GtkToolItemGroup* group, GtkToolItem* item, gint position)
 */
-(void)setItemPositionWithItem:(CGTKToolItem *)item andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * gint gtk_tool_item_group_get_item_position (GtkToolItemGroup* group, GtkToolItem* item)
 */
-(NSNumber *)getItemPosition:(CGTKToolItem *)item;

/**
 * Forwards message to:
 * guint gtk_tool_item_group_get_n_items (GtkToolItemGroup* group)
 */
-(NSNumber *)getNItems;

/**
 * Forwards message to:
 * GtkToolItem* gtk_tool_item_group_get_nth_item (GtkToolItemGroup* group, guint index)
 */
-(CGTKToolItem *)getNthItem:(NSNumber *)index;

/**
 * Forwards message to:
 * GtkReliefStyle gtk_tool_item_group_get_header_relief (GtkToolItemGroup *group);
 */
-(GtkReliefStyle)getHeaderRelief;

/**
 * Forwards message to:
 * GtkToolItem* gtk_tool_item_group_get_drop_item (GtkToolItemGroup* group, gint x, gint y)
 */
-(CGTKToolItem *)getDropItemWithX:(NSNumber *)x andY:(NSNumber *)y;

@end
