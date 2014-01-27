/*
 * CGTKRadioButton.m
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

#import "CGTKRadioButton.h"

@implementation CGTKRadioButton

-(GtkRadioButton *)RADIO_BUTTON
{
	return GTK_RADIO_BUTTON([self WIDGET]);
}

-(id)init:(GSList*)group
{
	self = [super initWithGtkWidget:gtk_radio_button_new (group)];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initFromWidget:(CGTKRadioButton *)radioGroupMember
{
	self = [super initWithGtkWidget:gtk_radio_button_new_from_widget ([radioGroupMember RADIO_BUTTON])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithLabelWithGroup:(GSList *)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_button_new_with_label (group, [label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithLabelFromWidget:(CGTKRadioButton *)radioGroupMember andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_button_new_with_label_from_widget ([radioGroupMember RADIO_BUTTON], [label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithMnemonicWithGroup:(GSList*)group andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_button_new_with_mnemonic (group, [label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithMnemonicFromWidget:(CGTKRadioButton *)radioGroupMember andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_radio_button_new_with_mnemonic_from_widget ([radioGroupMember RADIO_BUTTON], [label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(GSList*)getGroup
{
	return gtk_radio_button_get_group ([self RADIO_BUTTON]);
}

-(void)setGroup:(GSList*)group
{
	gtk_radio_button_set_group ([self RADIO_BUTTON], group);
}

@end
