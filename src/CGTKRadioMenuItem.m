/*
 * CGTKRadioMenuItem.m
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

#import "CGTKRadioMenuItem.h"

@implementation CGTKRadioMenuItem

-(GtkRadioMenuItem *)RADIO_MENU_ITEM
{
	return GTK_RADIO_MENU_ITEM([self WIDGET]);
}

-(id)init:(GSList *)group
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new (group) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithLabelWithGroup:(GSList *)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new_with_label (group, [label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithMnemonicWithGroup:(GSList *)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new_with_mnemonic (group, [label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initFromWidget:(CGTKRadioMenuItem *)group
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new_from_widget ([group RADIO_MENU_ITEM]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithMnemonicFromWidgetWithGroup:(CGTKRadioMenuItem *)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new_with_mnemonic_from_widget ([group RADIO_MENU_ITEM], [label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)newWithLabelFromWidget:(CGTKRadioMenuItem *)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_menu_item_new_with_label_from_widget ([group RADIO_MENU_ITEM], [label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(GSList *)getGroup
{
	return gtk_radio_menu_item_get_group ([self RADIO_MENU_ITEM]);
}

-(void)setGroup:(GSList *)group
{
	gtk_radio_menu_item_set_group ([self RADIO_MENU_ITEM], group);
}

@end
