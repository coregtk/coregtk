/*
 * CGTKToolbar.h
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

@interface CGTKToolbar : CGTKContainer
{
	
}

/**
 * Returns internal GtkToolbar
 */
-(GtkToolbar *)TOOLBAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_toolbar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * void gtk_toolbar_insert (GtkToolbar* toolbar, GtkToolItem* item, gint pos)
 */
-(void)insertWithItem:(CGTKToolItem *)item andPos:(NSNumber *)pos;

/**
 * Forwards message to:
 * gint gtk_toolbar_get_item_index (GtkToolbar* toolbar, GtkToolItem* item)
 */
-(NSNumber *)getItemIndex:(CGTKToolItem *)item;

/**
 * Forwards message to:
 * gint gtk_toolbar_get_n_items (GtkToolbar* toolbar)
 */
-(NSNumber *)getNItems;

/**
 * Forwards message to:
 * GtkToolItem* gtk_toolbar_get_nth_item (GtkToolbar* toolbar, gint n)
 */
-(CGTKToolItem *)getNthItem:(NSNumber *)n;

/**
 * Forwards message to:
 * gboolean gtk_toolbar_get_show_arrow (GtkToolbar* toolbar)
 */
-(BOOL)getShowArrow;

/**
 * Forwards message to:
 * void gtk_toolbar_set_show_arrow (GtkToolbar* toolbar, gboolean show_arrow)
 */
-(void)setShowArrow:(BOOL)showArrow;

/**
 * Forwards message to:
 * GtkToolbarStyle gtk_toolbar_get_style (GtkToolbar* toolbar)
 */
-(GtkToolbarStyle)getStyle;

/**
 * Forwards message to:
 * void gtk_toolbar_set_style (GtkToolbar* toolbar, GtkToolbarStyle style)
 */
-(void)setStyle:(GtkToolbarStyle)style;

/**
 * Forwards message to:
 * void gtk_toolbar_unset_style (GtkToolbar* toolbar)
 */
-(void)unsetStyle;

/**
 * Forwards message to:
 * GtkIconSize gtk_toolbar_get_icon_size (GtkToolbar* toolbar)
 */
-(GtkIconSize)getIconSize;

/**
 * Forwards message to:
 * void gtk_toolbar_set_icon_size (GtkToolbar* toolbar, GtkIconSize icon_size)
 */
-(void)setIconSize:(GtkIconSize)iconSize;

/**
 * Forwards message to:
 * void gtk_toolbar_unset_icon_size (GtkToolbar* toolbar)
 */
-(void)unsetIconSize;

/**
 * Forwards message to:
 * GtkReliefStyle gtk_toolbar_get_relief_style (GtkToolbar* toolbar)
 */
-(GtkReliefStyle)getReliefStyle;

/**
 * Forwards message to:
 * gint gtk_toolbar_get_drop_index (GtkToolbar* toolbar, gint x, gint y)
 */
-(NSNumber *)getDropIndexWithX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_toolbar_set_drop_highlight_item (GtkToolbar* toolbar, GtkToolItem* tool_item, gint index_)
 */
-(void)setDropHighlightItemWithToolItem:(CGTKToolItem *)toolItem andIndex:(NSNumber *)index;

@end
