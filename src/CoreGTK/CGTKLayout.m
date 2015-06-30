/*
 * CGTKLayout.m
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
#import "CoreGTK/CGTKLayout.h"

@implementation CGTKLayout

-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment
{
	self = [super initWithGObject:(GObject *)gtk_layout_new(hadjustment, vadjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLayout*)LAYOUT
{
	return GTK_LAYOUT([self GOBJECT]);
}

-(GdkWindow*)getBinWindow
{
	return gtk_layout_get_bin_window(GTK_LAYOUT([self GOBJECT]));
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_layout_get_hadjustment(GTK_LAYOUT([self GOBJECT]));
}

-(void)getSizeWithWidth:(guint*) width andHeight:(guint*) height
{
	gtk_layout_get_size(GTK_LAYOUT([self GOBJECT]), width, height);
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_layout_get_vadjustment(GTK_LAYOUT([self GOBJECT]));
}

-(void)moveWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y
{
	gtk_layout_move(GTK_LAYOUT([self GOBJECT]), [childWidget WIDGET], x, y);
}

-(void)putWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y
{
	gtk_layout_put(GTK_LAYOUT([self GOBJECT]), [childWidget WIDGET], x, y);
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_layout_set_hadjustment(GTK_LAYOUT([self GOBJECT]), adjustment);
}

-(void)setSizeWithWidth:(guint) width andHeight:(guint) height
{
	gtk_layout_set_size(GTK_LAYOUT([self GOBJECT]), width, height);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_layout_set_vadjustment(GTK_LAYOUT([self GOBJECT]), adjustment);
}


@end