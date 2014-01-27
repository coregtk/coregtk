/*
 * CGTKImageMenuItem.h
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
#import "CGTKMenuItem.h"

@interface CGTKImageMenuItem : CGTKMenuItem
{
	
}

/*
 * Returns the internal GtkImageMenuItem
 */
-(GtkImageMenuItem *)IMAGE_MENU_ITEM;

/*
 * Forwards message to:
 * GtkWidget* gtk_image_menu_item_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_image_menu_item_new_with_label (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_image_menu_item_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_image_menu_item_new_from_stock (const gchar* stock_id, GtkAccelGroup* accel_group)
 */
-(id)initFromStockWithStockId:(NSString *)stockId andAccelGroup:(GtkAccelGroup *)accelGroup;

/*
 * Forwards message to:
 * void gtk_image_menu_item_set_always_show_image (GtkImageMenuItem* image_menu_item, gboolean always_show)
 */
-(void)setAlwaysShowImage:(BOOL)alwaysShow;

/*
 * Forwards message to:
 * gboolean gtk_image_menu_item_get_always_show_image (GtkImageMenuItem* image_menu_item)
 */
-(BOOL)getAlwaysShowImage;

/*
 * Forwards message to:
 * void gtk_image_menu_item_set_image (GtkImageMenuItem* image_menu_item, GtkWidget* image)
 */
-(void)setImage:(CGTKWidget *)image;

/*
 * Forwards message to:
 * GtkWidget* gtk_image_menu_item_get_image (GtkImageMenuItem* image_menu_item)
 */
-(CGTKWidget *)getImage;

/*
 * Forwards message to:
 * void gtk_image_menu_item_set_use_stock (GtkImageMenuItem* image_menu_item, gboolean use_stock)
 */
-(void)setUseStock:(BOOL)useStock;

/*
 * Forwards message to:
 * gboolean gtk_image_menu_item_get_use_stock (GtkImageMenuItem* image_menu_item)
 */
-(BOOL)getUseStock;

/*
 * Forwards message to:
 * void gtk_image_menu_item_set_accel_group (GtkImageMenuItem* image_menu_item, GtkAccelGroup* accel_group)
 */
-(void)setAccelGroup:(GtkAccelGroup *)accelGroup;

@end
