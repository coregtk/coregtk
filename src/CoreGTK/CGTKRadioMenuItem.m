/*
 * CGTKRadioMenuItem.m
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
#import "CoreGTK/CGTKRadioMenuItem.h"

@implementation CGTKRadioMenuItem

-(id)init:(GSList*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromWidget:(GtkRadioMenuItem*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_from_widget(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_label(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_label_from_widget(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_mnemonic(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_mnemonic_from_widget(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRadioMenuItem*)RADIOMENUITEM
{
	return GTK_RADIO_MENU_ITEM([self GOBJECT]);
}

-(GSList*)getGroup
{
	return gtk_radio_menu_item_get_group(GTK_RADIO_MENU_ITEM([self GOBJECT]));
}

-(void)joinGroup:(GtkRadioMenuItem*) groupSource
{
	gtk_radio_menu_item_join_group(GTK_RADIO_MENU_ITEM([self GOBJECT]), groupSource);
}

-(void)setGroup:(GSList*) group
{
	gtk_radio_menu_item_set_group(GTK_RADIO_MENU_ITEM([self GOBJECT]), group);
}


@end