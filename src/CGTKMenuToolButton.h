/*
 * CGTKMenuToolButton.h
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
#import "CGTKToolButton.h"

@interface CGTKMenuToolButton : CGTKToolButton
{
	
}

/*
 * Returns internal GtkMenuToolButton
 */
-(GtkMenuToolButton *)MENU_TOOL_BUTTON;

/*
 * Forwards message to:
 * GtkToolItem* gtk_menu_tool_button_new (GtkWidget* icon_widget, const gchar* label)
 */
-(id)initWithIconWidget:(CGTKWidget *)iconWidget andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkToolItem* gtk_menu_tool_button_new_from_stock (const gchar* stock_id)
 */
-(id)initFromStock:(NSString *)stockId;

/*
 * Forwards message to:
 * void gtk_menu_tool_button_set_menu (GtkMenuToolButton* button, GtkWidget* menu)
 */
-(void)setMenu:(CGTKWidget *)menu;

/*
 * Forwards message to:
 * GtkWidget* gtk_menu_tool_button_get_menu (GtkMenuToolButton* button)
 */
-(CGTKWidget *)getMenu;

/*
 * Forwards message to:
 * void gtk_menu_tool_button_set_arrow_tooltip_text (GtkMenuToolButton* button, const gchar* text)
 */
-(void)setArrowTooltipText:(NSString *)text;

/*
 * Forwards message to:
 * void gtk_menu_tool_button_set_arrow_tooltip_markup (GtkMenuToolButton* button, const gchar* markup)
 */
-(void)setArrowTooltipMarkup:(NSString *)markup;

@end
