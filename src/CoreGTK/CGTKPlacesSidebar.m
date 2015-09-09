/*
 * CGTKPlacesSidebar.m
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
#import "CoreGTK/CGTKPlacesSidebar.h"

@implementation CGTKPlacesSidebar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_places_sidebar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkPlacesSidebar*)PLACESSIDEBAR
{
	return GTK_PLACES_SIDEBAR([self GOBJECT]);
}

-(void)addShortcut:(GFile*) location
{
	gtk_places_sidebar_add_shortcut(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(GFile*)getLocation
{
	return gtk_places_sidebar_get_location(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(GFile*)getNthBookmark:(gint) n
{
	return gtk_places_sidebar_get_nth_bookmark(GTK_PLACES_SIDEBAR([self GOBJECT]), n);
}

-(GtkPlacesOpenFlags)getOpenFlags
{
	return gtk_places_sidebar_get_open_flags(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(BOOL)getShowConnectToServer
{
	return (gtk_places_sidebar_get_show_connect_to_server(GTK_PLACES_SIDEBAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowDesktop
{
	return (gtk_places_sidebar_get_show_desktop(GTK_PLACES_SIDEBAR([self GOBJECT])) ? YES : NO);
}

-(GSList*)listShortcuts
{
	return gtk_places_sidebar_list_shortcuts(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(void)removeShortcut:(GFile*) location
{
	gtk_places_sidebar_remove_shortcut(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(void)setLocation:(GFile*) location
{
	gtk_places_sidebar_set_location(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(void)setOpenFlags:(GtkPlacesOpenFlags) flags
{
	gtk_places_sidebar_set_open_flags(GTK_PLACES_SIDEBAR([self GOBJECT]), flags);
}

-(void)setShowConnectToServer:(BOOL) showConnectToServer
{
	gtk_places_sidebar_set_show_connect_to_server(GTK_PLACES_SIDEBAR([self GOBJECT]), (showConnectToServer ? TRUE : FALSE));
}

-(void)setShowDesktop:(BOOL) showDesktop
{
	gtk_places_sidebar_set_show_desktop(GTK_PLACES_SIDEBAR([self GOBJECT]), (showDesktop ? TRUE : FALSE));
}


@end