/*
 * CGTKMenuButton.m
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
#import "CoreGTK/CGTKMenuButton.h"

@implementation CGTKMenuButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_menu_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuButton*)MENUBUTTON
{
	return GTK_MENU_BUTTON([self GOBJECT]);
}

-(CGTKWidget*)getAlignWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_button_get_align_widget(GTK_MENU_BUTTON([self GOBJECT]))];
}

-(GtkArrowType)getDirection
{
	return gtk_menu_button_get_direction(GTK_MENU_BUTTON([self GOBJECT]));
}

-(GMenuModel*)getMenuModel
{
	return gtk_menu_button_get_menu_model(GTK_MENU_BUTTON([self GOBJECT]));
}

-(GtkMenu*)getPopup
{
	return gtk_menu_button_get_popup(GTK_MENU_BUTTON([self GOBJECT]));
}

-(void)setAlignWidget:(CGTKWidget*) alignWidget
{
	gtk_menu_button_set_align_widget(GTK_MENU_BUTTON([self GOBJECT]), [alignWidget WIDGET]);
}

-(void)setDirection:(GtkArrowType) direction
{
	gtk_menu_button_set_direction(GTK_MENU_BUTTON([self GOBJECT]), direction);
}

-(void)setMenuModel:(GMenuModel*) menuModel
{
	gtk_menu_button_set_menu_model(GTK_MENU_BUTTON([self GOBJECT]), menuModel);
}

-(void)setPopup:(CGTKWidget*) popup
{
	gtk_menu_button_set_popup(GTK_MENU_BUTTON([self GOBJECT]), [popup WIDGET]);
}


@end