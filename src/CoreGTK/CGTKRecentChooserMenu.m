/*
 * CGTKRecentChooserMenu.m
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
#import "CoreGTK/CGTKRecentChooserMenu.h"

@implementation CGTKRecentChooserMenu

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_menu_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForManager:(GtkRecentManager*) manager
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_menu_new_for_manager(manager)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRecentChooserMenu*)RECENTCHOOSERMENU
{
	return GTK_RECENT_CHOOSER_MENU([self GOBJECT]);
}

-(BOOL)getShowNumbers
{
	return (gtk_recent_chooser_menu_get_show_numbers(GTK_RECENT_CHOOSER_MENU([self GOBJECT])) ? YES : NO);
}

-(void)setShowNumbers:(BOOL) showNumbers
{
	gtk_recent_chooser_menu_set_show_numbers(GTK_RECENT_CHOOSER_MENU([self GOBJECT]), (showNumbers ? TRUE : FALSE));
}


@end