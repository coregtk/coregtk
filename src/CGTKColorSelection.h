/*
 * CGTKColorSelection.h
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
#import "CGTKVBox.h"

@interface CGTKColorSelection : CGTKVBox
{
	
}

/**
 * Returns internal GtkColorSelection
 */
-(GtkColorSelection *)COLOR_SELECTION;

/**
 * Forwards message to:
 * GtkWidget* gtk_color_selection_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * gboolean gtk_color_selection_get_has_opacity_control (GtkColorSelection* colorsel)
 */
-(BOOL)getHasOpacityControl;

/**
 * Forwards message to:
 * void gtk_color_selection_set_has_opacity_control (GtkColorSelection* colorsel,gboolean has_opacity)
 */
-(void)setHasOpacityControl:(BOOL)hasOpacity;

/**
 * Forwards message to:
 * gboolean gtk_color_selection_get_has_palette (GtkColorSelection* colorsel)
 */
-(BOOL)getHasPalette;

/**
 * Forwards message to:
 * void gtk_color_selection_set_has_palette (GtkColorSelection* colorsel,gboolean has_palette)
 */
-(void)setHasPalette:(BOOL)hasPalette;

/**
 * Forwards message to:
 * void gtk_color_selection_set_current_color (GtkColorSelection* colorsel, const GdkColor* color)
 */
-(void)setCurrentColor:(const GdkColor *)color;

/**
 * Forwards message to:
 * void gtk_color_selection_set_current_alpha (GtkColorSelection* colorsel, guint16 alpha)
 */
-(void)setCurrentAlpha:(NSNumber *)alpha;

/**
 * Forwards message to:
 * void gtk_color_selection_get_current_color (GtkColorSelection* colorsel, GdkColor* color)
 */
-(void)getCurrentColor:(GdkColor *)color;

/**
 * Forwards message to:
 * guint16 gtk_color_selection_get_current_alpha (GtkColorSelection* colorsel)
 */
-(NSNumber *)getCurrentAlpha;

/**
 * Forwards message to:
 * void gtk_color_selection_set_previous_color (GtkColorSelection* colorsel, const GdkColor* color)
 */
-(void)setPreviousColor:(const GdkColor *)color;

/**
 * Forwards message to:
 * void gtk_color_selection_set_previous_alpha (GtkColorSelection* colorsel, guint16 alpha)
 */
-(void)setPreviousAlpha:(NSNumber *)alpha;

/**
 * Forwards message to:
 * void gtk_color_selection_get_previous_color (GtkColorSelection* colorsel, GdkColor* color)
 */
-(void)getPreviousColor:(GdkColor *)color;

/**
 * Forwards message to:
 * guint16 gtk_color_selection_get_previous_alpha (GtkColorSelection* colorsel)
 */
-(NSNumber *)getPreviousAlpha;

/**
 * Forwards message to:
 * gboolean gtk_color_selection_is_adjusting (GtkColorSelection* colorsel)
 */
-(BOOL)isAdjusting;

/**
 * Forwards message to:
 * gboolean gtk_color_selection_palette_from_string (const gchar* str, GdkColor** colors, gint* n_colors)
 */
-(BOOL)paletteFromStringWithStr:(NSString *)str andColors:(GdkColor **)colors andNColors:(NSNumber **)nColors;

/**
 * Forwards message to:
 * gchar* gtk_color_selection_palette_to_string (const GdkColor* colors, gint n_colors)
 */
-(NSString *)paletteToStringWithColors:(const GdkColor *)colors andNColors:(NSNumber *)nColors;

/**
 * Forwards message to:
 * GtkColorSelectionChangePaletteWithScreenFunc gtk_color_selection_set_change_palette_with_screen_hook (GtkColorSelectionChangePaletteWithScreenFunc func)
 */
-(GtkColorSelectionChangePaletteWithScreenFunc)setChangePaletteWithScreenHook:(GtkColorSelectionChangePaletteWithScreenFunc)func;

@end
