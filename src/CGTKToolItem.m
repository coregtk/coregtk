/*
 * CGTKToolItem.m
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

#import "CGTKToolItem.h"

@implementation CGTKToolItem

-(GtkToolItem *)TOOL_ITEM
{
	return GTK_TOOL_ITEM([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_tool_item_new ()) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)setHomogeneous:(BOOL)homogeneous
{
	gtk_tool_item_set_homogeneous ([self TOOL_ITEM], [CGTK getGboolean:homogeneous]);
}

-(BOOL)getHomogeneous
{
	return [CGTK getBOOL:gtk_tool_item_get_homogeneous ([self TOOL_ITEM])];
}

-(void)setExpand:(BOOL)expand
{
	gtk_tool_item_set_expand ([self TOOL_ITEM], [CGTK getGboolean:expand]);
}

-(BOOL)getExpand
{
	return [CGTK getBOOL:gtk_tool_item_get_expand ([self TOOL_ITEM])];
}

-(void)setTooltipText:(NSString *)text
{
	gtk_tool_item_set_tooltip_text ([self TOOL_ITEM], [text UTF8String]);
}

-(void)setTooltipMarkup:(NSString *)markup
{
	gtk_tool_item_set_tooltip_markup ([self TOOL_ITEM], [markup UTF8String]);
}

-(void)setUseDragWindow:(BOOL)useDragWindow
{
	gtk_tool_item_set_use_drag_window ([self TOOL_ITEM], [CGTK getGboolean:useDragWindow]);
}

-(BOOL)getUseDragWindow
{
	return [CGTK getBOOL:gtk_tool_item_get_use_drag_window ([self TOOL_ITEM])];
}

-(void)setVisibleHorizontal:(BOOL)visibleHorizontal
{
	gtk_tool_item_set_visible_horizontal ([self TOOL_ITEM], [CGTK getGboolean:visibleHorizontal]);
}

-(BOOL)getVisibleHorizontal
{
	return [CGTK getBOOL:gtk_tool_item_get_visible_horizontal ([self TOOL_ITEM])];
}

-(void)setVisibleVertical:(BOOL)visibleVertical
{
	gtk_tool_item_set_visible_vertical ([self TOOL_ITEM], [CGTK getGboolean:visibleVertical]);
}

-(BOOL)getVisibleVertical
{
	return [CGTK getBOOL:gtk_tool_item_get_visible_vertical ([self TOOL_ITEM])];
}

-(BOOL)getIsImportant
{
	return [CGTK getBOOL:gtk_tool_item_get_is_important ([self TOOL_ITEM])];
}

-(void)setIsImportant:(BOOL)isImportant
{
	gtk_tool_item_set_is_important ([self TOOL_ITEM], [CGTK getGboolean:isImportant]);
}

-(PangoEllipsizeMode)getEllipsizeMode
{
	return gtk_tool_item_get_ellipsize_mode ([self TOOL_ITEM]);
}

-(GtkIconSize)getIconSize
{
	return gtk_tool_item_get_icon_size ([self TOOL_ITEM]);
}

-(GtkOrientation)getOrientation
{
	return gtk_tool_item_get_orientation ([self TOOL_ITEM]);
}

-(GtkToolbarStyle)getToolbarStyle
{
	return gtk_tool_item_get_toolbar_style ([self TOOL_ITEM]);
}

-(GtkReliefStyle)getReliefStyle
{
	return gtk_tool_item_get_relief_style ([self TOOL_ITEM]);
}

-(NSNumber *)getTextAlignment
{
	return [NSNumber numberWithFloat:gtk_tool_item_get_text_alignment ([self TOOL_ITEM])];
}

-(GtkOrientation)getTextOrientation
{
	return gtk_tool_item_get_text_orientation ([self TOOL_ITEM]);
}

-(GtkSizeGroup *)getTextSizeGroup
{
	return gtk_tool_item_get_text_size_group ([self TOOL_ITEM]);
}

-(CGTKWidget *)retrieveProxyMenuItem
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_item_retrieve_proxy_menu_item ([self TOOL_ITEM])];
}

-(CGTKWidget *)getProxyMenuItem:(NSString *)menuItemId
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_item_get_proxy_menu_item ([self TOOL_ITEM], [menuItemId UTF8String])];
}

-(void)setProxyMenuItemWithMenuItemId:(NSString *)menuItemId andMenuItem:(CGTKWidget *)menuItem
{
	gtk_tool_item_set_proxy_menu_item ([self TOOL_ITEM], [menuItemId UTF8String], [menuItem WIDGET]);
}

-(void)toolbarReconfigured
{
	gtk_tool_item_toolbar_reconfigured ([self TOOL_ITEM]);
}

-(void)rebuildMenu
{
	gtk_tool_item_rebuild_menu ([self TOOL_ITEM]);
}

@end
