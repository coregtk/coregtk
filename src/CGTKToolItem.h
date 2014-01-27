/*
 * CGTKToolItem.h
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
#import "CGTKBin.h"

@interface CGTKToolItem : CGTKBin
{
	
}

/*
 * Returns internal GtkToolItem
 */
-(GtkToolItem *)TOOL_ITEM;

/*
 * Forwards message to:
 * GtkToolItem* gtk_tool_item_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * void gtk_tool_item_set_homogeneous (GtkToolItem* tool_item,gboolean homogeneous)
 */
-(void)setHomogeneous:(BOOL)homogeneous;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_homogeneous (GtkToolItem* tool_item)
 */
-(BOOL)getHomogeneous;

/*
 * Forwards message to:
 * void gtk_tool_item_set_expand (GtkToolItem* tool_item,gboolean expand)
 */
-(void)setExpand:(BOOL)expand;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_expand (GtkToolItem* tool_item)
 */
-(BOOL)getExpand;

/*
 * Forwards message to:
 * void gtk_tool_item_set_tooltip_text (GtkToolItem* tool_item,const gchar* text)
 */
-(void)setTooltipText:(NSString *)text;

/*
 * Forwards message to:
 * void gtk_tool_item_set_tooltip_markup (GtkToolItem* tool_item,const gchar* markup)
 */
-(void)setTooltipMarkup:(NSString *)markup;

/*
 * Forwards message to:
 * void gtk_tool_item_set_use_drag_window (GtkToolItem* tool_item,gboolean use_drag_window)
 */
-(void)setUseDragWindow:(BOOL)useDragWindow;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_use_drag_window (GtkToolItem* tool_item)
 */
-(BOOL)getUseDragWindow;

/*
 * Forwards message to:
 * void gtk_tool_item_set_visible_horizontal (GtkToolItem* tool_item,gboolean visible_horizontal)
 */
-(void)setVisibleHorizontal:(BOOL)visibleHorizontal;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_visible_horizontal (GtkToolItem* tool_item)
 */
-(BOOL)getVisibleHorizontal;

/*
 * Forwards message to:
 * void gtk_tool_item_set_visible_vertical (GtkToolItem* tool_item,gboolean visible_vertical)
 */
-(void)setVisibleVertical:(BOOL)visibleVertical;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_visible_vertical (GtkToolItem* tool_item)
 */
-(BOOL)getVisibleVertical;

/*
 * Forwards message to:
 * gboolean gtk_tool_item_get_is_important (GtkToolItem* tool_item)
 */
-(BOOL)getIsImportant;

/*
 * Forwards message to:
 * void gtk_tool_item_set_is_important (GtkToolItem* tool_item,gboolean is_important)
 */
-(void)setIsImportant:(BOOL)isImportant;

/*
 * Forwards message to:
 * PangoEllipsizeMode gtk_tool_item_get_ellipsize_mode (GtkToolItem* tool_item)
 */
-(PangoEllipsizeMode)getEllipsizeMode;

/*
 * Forwards message to:
 * GtkIconSize gtk_tool_item_get_icon_size (GtkToolItem* tool_item)
 */
-(GtkIconSize)getIconSize;

/*
 * Forwards message to:
 * GtkOrientation gtk_tool_item_get_orientation (GtkToolItem* tool_item)
 */
-(GtkOrientation)getOrientation;

/*
 * Forwards message to:
 * GtkToolbarStyle gtk_tool_item_get_toolbar_style (GtkToolItem* tool_item)
 */
-(GtkToolbarStyle)getToolbarStyle;

/*
 * Forwards message to:
 * GtkReliefStyle gtk_tool_item_get_relief_style (GtkToolItem* tool_item)
 */
-(GtkReliefStyle)getReliefStyle;

/*
 * Forwards message to:
 * gfloat gtk_tool_item_get_text_alignment (GtkToolItem* tool_item)
 */
-(NSNumber *)getTextAlignment;

/*
 * Forwards message to:
 * GtkOrientation gtk_tool_item_get_text_orientation (GtkToolItem* tool_item)
 */
-(GtkOrientation)getTextOrientation;

/*
 * Forwards message to:
 * GtkSizeGroup* gtk_tool_item_get_text_size_group (GtkToolItem* tool_item)
 */
-(GtkSizeGroup *)getTextSizeGroup;

/*
 * Forwards message to:
 * GtkWidget* gtk_tool_item_retrieve_proxy_menu_item (GtkToolItem* tool_item)
 */
-(CGTKWidget *)retrieveProxyMenuItem;

/*
 * Forwards message to:
 * GtkWidget* gtk_tool_item_get_proxy_menu_item (GtkToolItem* tool_item,const gchar* menu_item_id)
 */
-(CGTKWidget *)getProxyMenuItem:(NSString *)menuItemId;

/*
 * Forwards message to:
 * void gtk_tool_item_set_proxy_menu_item (GtkToolItem* tool_item,const gchar* menu_item_id,GtkWidget* menu_item)
 */
-(void)setProxyMenuItemWithMenuItemId:(NSString *)menuItemId andMenuItem:(CGTKWidget *)menuItem;

/*
 * Forwards message to:
 * void gtk_tool_item_toolbar_reconfigured (GtkToolItem* tool_item)
 */
-(void)toolbarReconfigured;

/*
 * Forwards message to:
 * void gtk_tool_item_rebuild_menu (GtkToolItem *tool_item);
 */
-(void)rebuildMenu;

@end
