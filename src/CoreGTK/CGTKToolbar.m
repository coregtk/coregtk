/*
 * CGTKToolbar.m
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
#import "CoreGTK/CGTKToolbar.h"

@implementation CGTKToolbar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_toolbar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToolbar*)TOOLBAR
{
	return GTK_TOOLBAR([self GOBJECT]);
}

-(gint)getDropIndexWithX:(gint) x andY:(gint) y
{
	return gtk_toolbar_get_drop_index(GTK_TOOLBAR([self GOBJECT]), x, y);
}

-(GtkIconSize)getIconSize
{
	return gtk_toolbar_get_icon_size(GTK_TOOLBAR([self GOBJECT]));
}

-(gint)getItemIndex:(GtkToolItem*) item
{
	return gtk_toolbar_get_item_index(GTK_TOOLBAR([self GOBJECT]), item);
}

-(gint)getNitems
{
	return gtk_toolbar_get_n_items(GTK_TOOLBAR([self GOBJECT]));
}

-(GtkToolItem*)getNthItem:(gint) n
{
	return gtk_toolbar_get_nth_item(GTK_TOOLBAR([self GOBJECT]), n);
}

-(GtkReliefStyle)getReliefStyle
{
	return gtk_toolbar_get_relief_style(GTK_TOOLBAR([self GOBJECT]));
}

-(BOOL)getShowArrow
{
	return (gtk_toolbar_get_show_arrow(GTK_TOOLBAR([self GOBJECT])) ? YES : NO);
}

-(GtkToolbarStyle)getStyle
{
	return gtk_toolbar_get_style(GTK_TOOLBAR([self GOBJECT]));
}

-(void)insertWithItem:(GtkToolItem*) item andPos:(gint) pos
{
	gtk_toolbar_insert(GTK_TOOLBAR([self GOBJECT]), item, pos);
}

-(void)setDropHighlightItemWithToolItem:(GtkToolItem*) toolItem andIndex:(gint) index
{
	gtk_toolbar_set_drop_highlight_item(GTK_TOOLBAR([self GOBJECT]), toolItem, index);
}

-(void)setIconSize:(GtkIconSize) iconSize
{
	gtk_toolbar_set_icon_size(GTK_TOOLBAR([self GOBJECT]), iconSize);
}

-(void)setShowArrow:(BOOL) showArrow
{
	gtk_toolbar_set_show_arrow(GTK_TOOLBAR([self GOBJECT]), (showArrow ? TRUE : FALSE));
}

-(void)setStyle:(GtkToolbarStyle) style
{
	gtk_toolbar_set_style(GTK_TOOLBAR([self GOBJECT]), style);
}

-(void)unsetIconSize
{
	gtk_toolbar_unset_icon_size(GTK_TOOLBAR([self GOBJECT]));
}

-(void)unsetStyle
{
	gtk_toolbar_unset_style(GTK_TOOLBAR([self GOBJECT]));
}


@end
