/*
 * CGTKRadioButton.h
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
#import "CoreGTK/CGTKCheckButton.h"

@interface CGTKRadioButton : CGTKCheckButton
{

}


/**
 * Constructors
 */
-(id)init:(GSList*) group;
-(id)initFromWidget:(GtkRadioButton*) radioGroupMember;
-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithLabelFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label;
-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithMnemonicFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label;

/**
 * Methods
 */

-(GtkRadioButton*)RADIOBUTTON;

/**
 * -(GSList**)getGroup;
 *
 * @returns GSList*
 */
-(GSList*)getGroup;

/**
 * -(void*)joinGroup:(GtkRadioButton*) groupSource;
 *
 * @param groupSource
 */
-(void)joinGroup:(GtkRadioButton*) groupSource;

/**
 * -(void*)setGroup:(GSList*) group;
 *
 * @param group
 */
-(void)setGroup:(GSList*) group;

@end
