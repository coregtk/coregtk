/*
 * CGTKRadioToolButton.h
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
#import "CGTKToggleToolButton.h"

@interface CGTKRadioToolButton : CGTKToggleToolButton
{
	
}

/*
 * Returns internal GtkRadioToolButton
 */
-(GtkRadioToolButton *)RADIO_TOOL_BUTTON;

/*
 * Forwards message to:
 * GtkToolItem* gtk_radio_tool_button_new (GSList* group)
 */
-(id)init:(GSList *)group;

/*
 * Forwards message to:
 * GtkToolItem* gtk_radio_tool_button_new_from_stock (GSList* group, const gchar* stock_id)
 */
-(id)initFromStockWithGroup:(GSList *)group andStockId:(NSString *)stockId;

/*
 * Forwards message to:
 * GtkToolItem* gtk_radio_tool_button_new_from_widget (GtkRadioToolButton* group)
 */
-(id)initFromWidgetWithGroup:(CGTKRadioToolButton *)group;

/*
 * Forwards message to:
 * GtkToolItem* gtk_radio_tool_button_new_with_stock_from_widget (GtkRadioToolButton* group, const gchar* stock_id)
 */
-(id)initWithStockFromWidgetWithGroup:(CGTKRadioToolButton *)group andStockId:(NSString *)stockId;

/*
 * Forwards message to:
 * GSList* gtk_radio_tool_button_get_group (GtkRadioToolButton* button)
 */
-(GSList *)getGroup;

/*
 * Forwards message to:
 * void gtk_radio_tool_button_set_group (GtkRadioToolButton* button, GSList* group)
 */
-(void)setGroup:(GSList *)group;

@end
