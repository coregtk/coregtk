/*
 * CGTKButtonBox.m
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
#import "CoreGTK/CGTKButtonBox.h"

@implementation CGTKButtonBox

-(id)init:(GtkOrientation) orientation
{
	self = [super initWithGObject:(GObject *)gtk_button_box_new(orientation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkButtonBox*)BUTTONBOX
{
	return GTK_BUTTON_BOX([self GOBJECT]);
}

-(BOOL)getChildNonHomogeneous:(CGTKWidget*) child
{
	return (gtk_button_box_get_child_non_homogeneous(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(BOOL)getChildSecondary:(CGTKWidget*) child
{
	return (gtk_button_box_get_child_secondary(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(GtkButtonBoxStyle)getLayout
{
	return gtk_button_box_get_layout(GTK_BUTTON_BOX([self GOBJECT]));
}

-(void)setChildNonHomogeneousWithChild:(CGTKWidget*) child andNonHomogeneous:(BOOL) nonHomogeneous
{
	gtk_button_box_set_child_non_homogeneous(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET], (nonHomogeneous ? TRUE : FALSE));
}

-(void)setChildSecondaryWithChild:(CGTKWidget*) child andIsSecondary:(BOOL) isSecondary
{
	gtk_button_box_set_child_secondary(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET], (isSecondary ? TRUE : FALSE));
}

-(void)setLayout:(GtkButtonBoxStyle) layoutStyle
{
	gtk_button_box_set_layout(GTK_BUTTON_BOX([self GOBJECT]), layoutStyle);
}


@end