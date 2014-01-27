/*
 * CGTKRadioMenuItem.h
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
#import "CGTKCheckMenuItem.h"

@interface CGTKRadioMenuItem : CGTKCheckMenuItem
{
	
}

/*
 * Returns the internal GtkRadioMenuItem
 */
-(GtkRadioMenuItem *)RADIO_MENU_ITEM;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new (GSList* group)
 */
-(id)init:(GSList *)group;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new_with_label (GSList* group, const gchar* label)
 */
-(id)initWithLabelWithGroup:(GSList *)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new_with_mnemonic (GSList* group, const gchar* label)
 */
-(id)initWithMnemonicWithGroup:(GSList *)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new_from_widget (GtkRadioMenuItem* group)
 */
-(id)initFromWidget:(CGTKRadioMenuItem *)group;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new_with_mnemonic_from_widget (GtkRadioMenuItem* group, const gchar* label)
 */
-(id)initWithMnemonicFromWidgetWithGroup:(CGTKRadioMenuItem *)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_radio_menu_item_new_with_label_from_widget (GtkRadioMenuItem* group, const gchar* label)
 */
-(id)newWithLabelFromWidget:(CGTKRadioMenuItem *)group andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GSList* gtk_radio_menu_item_get_group (GtkRadioMenuItem* radio_menu_item)
 */
-(GSList *)getGroup;

/*
 * Forwards message to:
 * void gtk_radio_menu_item_set_group (GtkRadioMenuItem* radio_menu_item, GSList* group)
 */
-(void)setGroup:(GSList *)group;

@end
