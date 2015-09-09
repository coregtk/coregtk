/*
 * CGTKViewport.m
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
#import "CoreGTK/CGTKViewport.h"

@implementation CGTKViewport

-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment
{
	self = [super initWithGObject:(GObject *)gtk_viewport_new(hadjustment, vadjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkViewport*)VIEWPORT
{
	return GTK_VIEWPORT([self GOBJECT]);
}

-(GdkWindow*)getBinWindow
{
	return gtk_viewport_get_bin_window(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_viewport_get_hadjustment(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkShadowType)getShadowType
{
	return gtk_viewport_get_shadow_type(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_viewport_get_vadjustment(GTK_VIEWPORT([self GOBJECT]));
}

-(GdkWindow*)getViewWindow
{
	return gtk_viewport_get_view_window(GTK_VIEWPORT([self GOBJECT]));
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_viewport_set_hadjustment(GTK_VIEWPORT([self GOBJECT]), adjustment);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_viewport_set_shadow_type(GTK_VIEWPORT([self GOBJECT]), type);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_viewport_set_vadjustment(GTK_VIEWPORT([self GOBJECT]), adjustment);
}


@end