/*
 * CGTKPaned.m
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
#import "CoreGTK/CGTKPaned.h"

@implementation CGTKPaned

-(id)init:(GtkOrientation) orientation
{
	self = [super initWithGObject:(GObject *)gtk_paned_new(orientation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkPaned*)PANED
{
	return GTK_PANED([self GOBJECT]);
}

-(void)add1:(CGTKWidget*) child
{
	gtk_paned_add1(GTK_PANED([self GOBJECT]), [child WIDGET]);
}

-(void)add2:(CGTKWidget*) child
{
	gtk_paned_add2(GTK_PANED([self GOBJECT]), [child WIDGET]);
}

-(CGTKWidget*)getChild1
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_paned_get_child1(GTK_PANED([self GOBJECT]))];
}

-(CGTKWidget*)getChild2
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_paned_get_child2(GTK_PANED([self GOBJECT]))];
}

-(GdkWindow*)getHandleWindow
{
	return gtk_paned_get_handle_window(GTK_PANED([self GOBJECT]));
}

-(gint)getPosition
{
	return gtk_paned_get_position(GTK_PANED([self GOBJECT]));
}

-(BOOL)getWideHandle
{
	return (gtk_paned_get_wide_handle(GTK_PANED([self GOBJECT])) ? YES : NO);
}

-(void)pack1WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink
{
	gtk_paned_pack1(GTK_PANED([self GOBJECT]), [child WIDGET], (resize ? TRUE : FALSE), (shrink ? TRUE : FALSE));
}

-(void)pack2WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink
{
	gtk_paned_pack2(GTK_PANED([self GOBJECT]), [child WIDGET], (resize ? TRUE : FALSE), (shrink ? TRUE : FALSE));
}

-(void)setPosition:(gint) position
{
	gtk_paned_set_position(GTK_PANED([self GOBJECT]), position);
}

-(void)setWideHandle:(BOOL) wide
{
	gtk_paned_set_wide_handle(GTK_PANED([self GOBJECT]), (wide ? TRUE : FALSE));
}


@end
