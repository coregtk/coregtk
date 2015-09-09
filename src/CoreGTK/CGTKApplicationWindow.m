/*
 * CGTKApplicationWindow.m
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
#import "CoreGTK/CGTKApplicationWindow.h"

@implementation CGTKApplicationWindow

-(id)init:(GtkApplication*) application
{
	self = [super initWithGObject:(GObject *)gtk_application_window_new(application)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkApplicationWindow*)APPLICATIONWINDOW
{
	return GTK_APPLICATION_WINDOW([self GOBJECT]);
}

-(guint)getId
{
	return gtk_application_window_get_id(GTK_APPLICATION_WINDOW([self GOBJECT]));
}

-(BOOL)getShowMenubar
{
	return (gtk_application_window_get_show_menubar(GTK_APPLICATION_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)setShowMenubar:(BOOL) showMenubar
{
	gtk_application_window_set_show_menubar(GTK_APPLICATION_WINDOW([self GOBJECT]), (showMenubar ? TRUE : FALSE));
}


@end
