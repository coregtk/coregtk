/*
 * CGTKToolButton.h
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
#import "CGTKToolItem.h"

@interface CGTKToolButton : CGTKToolItem
{
	
}

/*
 * Returns internal GtkToolButton
 */
-(GtkToolButton *)TOOL_BUTTON;

/*
 * Forwards message to:
 * GtkToolItem* gtk_tool_button_new (GtkWidget* icon_widget, const gchar* label)
 */
-(id)initWithIconWidget:(CGTKWidget *)iconWidget andLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkToolItem* gtk_tool_button_new_from_stock (const gchar* stock_id)
 */
-(id)initFromStock:(NSString *)stockId;

/*
 * Forwards message to:
 * void gtk_tool_button_set_label (GtkToolButton* button, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/*
 * Forwards message to:
 * const gchar * gtk_tool_button_get_label (GtkToolButton *button);
 */
-(NSString *)getLabel;

/*
 * Forwards message to:
 * void gtk_tool_button_set_use_underline (GtkToolButton* button, gboolean use_underline)
 */
-(void)setUseUnderline:(BOOL)useUnderline;

/*
 * Forwards message to:
 * gboolean gtk_tool_button_get_use_underline (GtkToolButton* button)
 */
-(BOOL)getUseUnderline;

/*
 * Forwards message to:
 * void gtk_tool_button_set_stock_id (GtkToolButton* button, const gchar* stock_id)
 */
-(void)setStockId:(NSString *)stockId;

/*
 * Forwards message to:
 * const gchar * gtk_tool_button_get_stock_id (GtkToolButton *button);
 */
-(NSString *)getStockId;

/*
 * Forwards message to:
 * void gtk_tool_button_set_icon_name (GtkToolButton* button, const gchar* icon_name)
 */
-(void)setIconName:(NSString *)iconName;

/*
 * Forwards message to:
 * const gchar * gtk_tool_button_get_icon_name (GtkToolButton *button);
 */
-(NSString *)getIconName;

/*
 * Forwards message to:
 * void gtk_tool_button_set_icon_widget (GtkToolButton* button, GtkWidget* icon_widget)
 */
-(void)setIconWidget:(CGTKWidget *)iconWidget;

/*
 * Forwards message to:
 * GtkWidget* gtk_tool_button_get_icon_widget (GtkToolButton* button)
 */
-(CGTKWidget *)getIconWidget;

/*
 * Forwards message to:
 * void gtk_tool_button_set_label_widget (GtkToolButton* button, GtkWidget* label_widget)
 */
-(void)setLabelWidget:(CGTKWidget *)labelWidget;

/*
 * Forwards message to:
 * GtkWidget* gtk_tool_button_get_label_widget (GtkToolButton* button)
 */
-(CGTKWidget *)getLabelWidget;

@end
