/*
 * CGTKMenuToolButton.m
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
#import "CoreGTK/CGTKMenuToolButton.h"

@implementation CGTKMenuToolButton

-(id)initWithIconWidget:(CGTKWidget*) iconWidget andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_menu_tool_button_new([iconWidget WIDGET], [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStock:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_menu_tool_button_new_from_stock([stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuToolButton*)MENUTOOLBUTTON
{
	return GTK_MENU_TOOL_BUTTON([self GOBJECT]);
}

-(CGTKWidget*)getMenu
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_tool_button_get_menu(GTK_MENU_TOOL_BUTTON([self GOBJECT]))];
}

-(void)setArrowTooltipMarkup:(NSString*) markup
{
	gtk_menu_tool_button_set_arrow_tooltip_markup(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [markup UTF8String]);
}

-(void)setArrowTooltipText:(NSString*) text
{
	gtk_menu_tool_button_set_arrow_tooltip_text(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [text UTF8String]);
}

-(void)setMenu:(CGTKWidget*) menu
{
	gtk_menu_tool_button_set_menu(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [menu WIDGET]);
}


@end
