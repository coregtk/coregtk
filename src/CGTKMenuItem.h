/*
 * CGTKMenuItem.h
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
#import "CGTKItem.h"

@interface CGTKMenuItem : CGTKItem
{
	
}

-(GtkMenuItem *)MENU_ITEM;

/*
 * Forwards message to:
 * GtkWidget* gtk_menu_item_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_menu_item_new_with_label (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_menu_item_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_menu_item_set_submenu (GtkMenuItem* menu_item, GtkWidget* submenu)
 */
-(void)setSubmenu:(CGTKWidget *)submenu;

/*
 * Forwards message to:
 * GtkWidget* gtk_menu_item_get_submenu (GtkMenuItem* menu_item)
 */
-(CGTKWidget *)getSubmenu;

/*
 * Forwards message to:
 * void gtk_menu_item_select (GtkMenuItem* menu_item)
 */
-(void)select;

/*
 * Forwards message to:
 * void gtk_menu_item_deselect (GtkMenuItem* menu_item)
 */
-(void)deselect;

/*
 * Forwards message to:
 * void gtk_menu_item_activate (GtkMenuItem* menu_item)
 */
-(void)activate;

/*
 * Forwards message to:
 * void gtk_menu_item_toggle_size_request (GtkMenuItem* menu_item, gint* requisition)
 */
-(void)toggleSizeRequest:(NSNumber **)requisition;

/*
 * Forwards message to:
 * void gtk_menu_item_toggle_size_allocate (GtkMenuItem* menu_item, gint allocation)
 */
-(void)toggleSizeAllocate:(NSNumber *)allocation;

/*
 * Forwards message to:
 * void gtk_menu_item_set_right_justified (GtkMenuItem* menu_item, gboolean right_justified)
 */
-(void)setRightJustified:(BOOL)rightJustified;

/*
 * Forwards message to:
 * gboolean gtk_menu_item_get_right_justified (GtkMenuItem* menu_item)
 */
-(BOOL)getRightJustified;

/*
 * Forwards message to:
 * void gtk_menu_item_set_accel_path (GtkMenuItem* menu_item, const gchar* accel_path)
 */
-(void)setAccelPath:(NSString *)accelPath;

/*
 * Forwards message to:
 * const gchar * gtk_menu_item_get_accel_path (GtkMenuItem *menu_item)
 */
-(NSString *)getAccelPath;

/*
 * Forwards message to:
 * const gchar * gtk_menu_item_get_label (GtkMenuItem *menu_item)
 */
-(NSString *)getLabel;

/*
 * Forwards message to:
 * void gtk_menu_item_set_label (GtkMenuItem* menu_item, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_menu_item_set_use_underline (GtkMenuItem* menu_item, gboolean setting)
 */
-(void)setUseUnderline:(BOOL)setting;

/*
 * Forwards message to:
 * gboolean gtk_menu_item_get_use_underline (GtkMenuItem* menu_item)
 */
-(BOOL)getUseUnderline;

@end
