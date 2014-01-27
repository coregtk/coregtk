/*
 * CGTKRadioButton.h
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

/*
 * Objective-C imports
 */
#import "CGTKCheckButton.h"

@interface CGTKRadioButton : CGTKCheckButton
{
	
}

-(GtkRadioButton *)RADIO_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new (GSList* group)
 */
-(id)init:(GSList*)group;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new_from_widget (GtkRadioButton* radio_group_member)
 */
-(id)initFromWidget:(CGTKRadioButton *)radioGroupMember;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new_with_label (GSList* group, const gchar* label)
 */
-(id)initWithLabelWithGroup:(GSList*)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new_with_label_from_widget (GtkRadioButton* radio_group_member, const gchar* label)
 */
-(id)initWithLabelFromWidget:(CGTKRadioButton *)radioGroupMember andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new_with_mnemonic (GSList* group, const gchar* label)
 */
-(id)initWithMnemonicWithGroup:(GSList*)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_button_new_with_mnemonic_from_widget (GtkRadioButton* radio_group_member, const gchar* label)
 */
-(id)initWithMnemonicFromWidget:(CGTKRadioButton *)radioGroupMember andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GSList* gtk_radio_button_get_group (GtkRadioButton* radio_button)
 */
-(GSList*)getGroup;

/*
 * Forwards message to:
 * void gtk_radio_button_set_group (GtkRadioButton* radio_button, GSList* group)
 */
-(void)setGroup:(GSList*)group;

@end
