/*
 * CGTKRadioToolButton.m
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
#import "CoreGTK/CGTKRadioToolButton.h"

@implementation CGTKRadioToolButton

-(id)init:(GSList*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStockWithGroup:(GSList*) group andStockId:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_from_stock(group, [stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromWidget:(GtkRadioToolButton*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_from_widget(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithStockFromWidgetWithGroup:(GtkRadioToolButton*) group andStockId:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_with_stock_from_widget(group, [stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRadioToolButton*)RADIOTOOLBUTTON
{
	return GTK_RADIO_TOOL_BUTTON([self GOBJECT]);
}

-(GSList*)getGroup
{
	return gtk_radio_tool_button_get_group(GTK_RADIO_TOOL_BUTTON([self GOBJECT]));
}

-(void)setGroup:(GSList*) group
{
	gtk_radio_tool_button_set_group(GTK_RADIO_TOOL_BUTTON([self GOBJECT]), group);
}


@end
