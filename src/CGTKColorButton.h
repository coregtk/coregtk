/*
 * CGTKColorButton.h
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
#import "CGTKButton.h"

@interface CGTKColorButton : CGTKButton
{
	
}

-(GtkColorButton *)COLOR_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_color_button_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_color_button_new_with_color (const GdkColor* color)
 */
-(id)initWithColor:(const GdkColor *)color;

/*
 * Forwards message to:
 * void gtk_color_button_set_color (GtkColorButton* color_button, const GdkColor* color)
 */
-(void)setColor:(const GdkColor *)color;

/*
 * Forwards message to:
 * void gtk_color_button_set_alpha (GtkColorButton* color_button, guint16 alpha)
 */
-(void)setAlpha:(NSNumber *)alpha;

/*
 * Forwards message to:
 * void gtk_color_button_get_color (GtkColorButton* color_button, GdkColor* color)
 */
-(void)getColor:(GdkColor *)color;

/*
 * Forwards message to:
 * guint16 gtk_color_button_get_alpha (GtkColorButton* color_button)
 */
-(NSNumber *)getAlpha;

/*
 * Forwards message to:
 * void gtk_color_button_set_use_alpha (GtkColorButton* color_button, gboolean use_alpha)
 */
-(void)setUseAlpha:(BOOL)useAlpha;

/*
 * Forwards message to:
 * gboolean gtk_color_button_get_use_alpha (GtkColorButton* color_button)
 */
-(BOOL)getUseAlpha;

/*
 * Forwards message to:
 * void gtk_color_button_set_title (GtkColorButton* color_button, const gchar* title)
 */
-(void)setTitle:(NSString *)title;

/*
 * Forwards message to:
 * const gchar * gtk_color_button_get_title (GtkColorButton* color_button)
 */
-(NSString *)getTitle;

@end
