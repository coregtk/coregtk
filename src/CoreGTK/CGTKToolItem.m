/*
 * CGTKToolItem.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolItem.h"

@implementation CGTKToolItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_tool_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToolItem*)TOOLITEM
{
	return GTK_TOOL_ITEM([self GOBJECT]);
}

-(PangoEllipsizeMode)getEllipsizeMode
{
	return gtk_tool_item_get_ellipsize_mode(GTK_TOOL_ITEM([self GOBJECT]));
}

-(BOOL)getExpand
{
	return (gtk_tool_item_get_expand(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHomogeneous
{
	return (gtk_tool_item_get_homogeneous(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(GtkIconSize)getIconSize
{
	return gtk_tool_item_get_icon_size(GTK_TOOL_ITEM([self GOBJECT]));
}

-(BOOL)getIsImportant
{
	return (gtk_tool_item_get_is_important(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(GtkOrientation)getOrientation
{
	return gtk_tool_item_get_orientation(GTK_TOOL_ITEM([self GOBJECT]));
}

-(CGTKWidget*)getProxyMenuItem:(NSString*) menuItemId
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_tool_item_get_proxy_menu_item(GTK_TOOL_ITEM([self GOBJECT]), [menuItemId UTF8String])];
}

-(GtkReliefStyle)getReliefStyle
{
	return gtk_tool_item_get_relief_style(GTK_TOOL_ITEM([self GOBJECT]));
}

-(gfloat)getTextAlignment
{
	return gtk_tool_item_get_text_alignment(GTK_TOOL_ITEM([self GOBJECT]));
}

-(GtkOrientation)getTextOrientation
{
	return gtk_tool_item_get_text_orientation(GTK_TOOL_ITEM([self GOBJECT]));
}

-(GtkSizeGroup*)getTextSizeGroup
{
	return gtk_tool_item_get_text_size_group(GTK_TOOL_ITEM([self GOBJECT]));
}

-(GtkToolbarStyle)getToolbarStyle
{
	return gtk_tool_item_get_toolbar_style(GTK_TOOL_ITEM([self GOBJECT]));
}

-(BOOL)getUseDragWindow
{
	return (gtk_tool_item_get_use_drag_window(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getVisibleHorizontal
{
	return (gtk_tool_item_get_visible_horizontal(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getVisibleVertical
{
	return (gtk_tool_item_get_visible_vertical(GTK_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(void)rebuildMenu
{
	gtk_tool_item_rebuild_menu(GTK_TOOL_ITEM([self GOBJECT]));
}

-(CGTKWidget*)retrieveProxyMenuItem
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_tool_item_retrieve_proxy_menu_item(GTK_TOOL_ITEM([self GOBJECT]))];
}

-(void)setExpand:(BOOL) expand
{
	gtk_tool_item_set_expand(GTK_TOOL_ITEM([self GOBJECT]), (expand ? TRUE : FALSE));
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_tool_item_set_homogeneous(GTK_TOOL_ITEM([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setIsImportant:(BOOL) isImportant
{
	gtk_tool_item_set_is_important(GTK_TOOL_ITEM([self GOBJECT]), (isImportant ? TRUE : FALSE));
}

-(void)setProxyMenuItemWithMenuItemId:(NSString*) menuItemId andMenuItem:(CGTKWidget*) menuItem
{
	gtk_tool_item_set_proxy_menu_item(GTK_TOOL_ITEM([self GOBJECT]), [menuItemId UTF8String], [menuItem WIDGET]);
}

-(void)setTooltipMarkup:(NSString*) markup
{
	gtk_tool_item_set_tooltip_markup(GTK_TOOL_ITEM([self GOBJECT]), [markup UTF8String]);
}

-(void)setTooltipText:(NSString*) text
{
	gtk_tool_item_set_tooltip_text(GTK_TOOL_ITEM([self GOBJECT]), [text UTF8String]);
}

-(void)setUseDragWindow:(BOOL) useDragWindow
{
	gtk_tool_item_set_use_drag_window(GTK_TOOL_ITEM([self GOBJECT]), (useDragWindow ? TRUE : FALSE));
}

-(void)setVisibleHorizontal:(BOOL) visibleHorizontal
{
	gtk_tool_item_set_visible_horizontal(GTK_TOOL_ITEM([self GOBJECT]), (visibleHorizontal ? TRUE : FALSE));
}

-(void)setVisibleVertical:(BOOL) visibleVertical
{
	gtk_tool_item_set_visible_vertical(GTK_TOOL_ITEM([self GOBJECT]), (visibleVertical ? TRUE : FALSE));
}

-(void)toolbarReconfigured
{
	gtk_tool_item_toolbar_reconfigured(GTK_TOOL_ITEM([self GOBJECT]));
}


@end