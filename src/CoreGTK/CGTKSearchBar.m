/*
 * CGTKSearchBar.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSearchBar.h"

@implementation CGTKSearchBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_search_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSearchBar*)SEARCHBAR
{
	return GTK_SEARCH_BAR([self GOBJECT]);
}

-(void)connectEntry:(GtkEntry*) entry
{
	gtk_search_bar_connect_entry(GTK_SEARCH_BAR([self GOBJECT]), entry);
}

-(BOOL)getSearchMode
{
	return (gtk_search_bar_get_search_mode(GTK_SEARCH_BAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowCloseButton
{
	return (gtk_search_bar_get_show_close_button(GTK_SEARCH_BAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)handleEvent:(GdkEvent*) event
{
	return (gtk_search_bar_handle_event(GTK_SEARCH_BAR([self GOBJECT]), event) ? YES : NO);
}

-(void)setSearchMode:(BOOL) searchMode
{
	gtk_search_bar_set_search_mode(GTK_SEARCH_BAR([self GOBJECT]), (searchMode ? TRUE : FALSE));
}

-(void)setShowCloseButton:(BOOL) visible
{
	gtk_search_bar_set_show_close_button(GTK_SEARCH_BAR([self GOBJECT]), (visible ? TRUE : FALSE));
}


@end