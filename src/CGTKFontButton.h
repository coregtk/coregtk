/*
 * CGTKFontButton.h
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

@interface CGTKFontButton : CGTKButton
{
	
}

-(GtkFontButton *)FONT_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_button_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_button_new_with_font (const gchar* fontname)
 */
-(id)initWithFont:(NSString *)fontname;

/*
 * Forwards message to:
 * void gtk_font_button_set_title (GtkFontButton* font_button, const gchar* title)
 */
-(void)setTitle:(NSString *)title;

/*
 * Forwards message to:
 * const gchar * gtk_font_button_get_title (GtkFontButton* font_button)
 */
-(NSString *)getTitle;

/*
 * Forwards message to:
 * gboolean gtk_font_button_get_use_font (GtkFontButton* font_button)
 */
-(BOOL)getUseFont;

/*
 * Forwards message to:
 * void gtk_font_button_set_use_font (GtkFontButton* font_button, gboolean use_font)
 */
-(void)setUseFont:(BOOL)useFont;

/*
 * Forwards message to:
 * gboolean gtk_font_button_get_use_size (GtkFontButton* font_button)
 */
-(BOOL)getUseSize;

/*
 * Forwards message to:
 * void gtk_font_button_set_use_size (GtkFontButton* font_button, gboolean use_size)
 */
-(void)setUseSize:(BOOL)useSize;

/*
 * Forwards message to:
 * gboolean gtk_font_button_set_font_name (GtkFontButton* font_button, const gchar* fontname)
 */
-(BOOL)setFontName:(NSString *)fontname;

/*
 * Forwards message to:
 * const gchar * gtk_font_button_get_font_name (GtkFontButton* font_button)
 */
-(NSString *)getFontName;

/*
 * Forwards message to:
 * gboolean gtk_font_button_get_show_style (GtkFontButton* font_button)
 */
-(BOOL)getShowStyle;

/*
 * Forwards message to:
 * void gtk_font_button_set_show_style (GtkFontButton* font_button, gboolean show_style)
 */
-(void)setShowStyle:(BOOL)showStyle;

/*
 * Forwards message to:
 * gboolean gtk_font_button_get_show_size (GtkFontButton* font_button)
 */
-(BOOL)getShowSize;

/*
 * Forwards message to:
 * void gtk_font_button_set_show_size (GtkFontButton* font_button, gboolean show_size)
 */
-(void)setShowSize:(BOOL)showSize;

@end
