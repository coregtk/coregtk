/*
 * CGTKToggleToolButton.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

#import "CGTKToggleToolButton.h"

@implementation CGTKToggleToolButton

-(GtkToggleToolButton *)TOGGLE_TOOL_BUTTON
{
	return GTK_TOGGLE_TOOL_BUTTON([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_toggle_tool_button_new ()) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromStock:(NSString *)stockId
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_toggle_tool_button_new_from_stock ([stockId UTF8String])) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)setActive:(BOOL)isActive
{
	gtk_toggle_tool_button_set_active ([self TOGGLE_TOOL_BUTTON], [CGTK getGboolean:isActive]);
}

-(BOOL)getActive
{
	return [CGTK getBOOL:gtk_toggle_tool_button_get_active ([self TOGGLE_TOOL_BUTTON])];
}

@end
