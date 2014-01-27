/*
 * CGTKFontSelection.h
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

@interface CGTKFontSelection : CGTKVBox
{
	
}

/**
 * Returns internal GtkFontSelection
 */
-(GtkFontSelection *)FONT_SELECTION;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_get_family_list (GtkFontSelection* fontsel)
 */
-(CGTKWidget *)getFamilyList;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_get_face_list (GtkFontSelection* fontsel)
 */
-(CGTKWidget *)getFaceList;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_get_size_entry (GtkFontSelection* fontsel)
 */
-(CGTKWidget *)getSizeEntry;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_get_size_list (GtkFontSelection* fontsel)
 */
-(CGTKWidget *)getSizeList;

/**
 * Forwards message to:
 * GtkWidget* gtk_font_selection_get_preview_entry (GtkFontSelection* fontsel)
 */
-(CGTKWidget *)getPreviewEntry;

/**
 * Forwards message to:
 * PangoFontFamily* gtk_font_selection_get_family (GtkFontSelection* fontsel)
 */
-(PangoFontFamily *)getFamily;

/**
 * Forwards message to:
 * PangoFontFace* gtk_font_selection_get_face (GtkFontSelection* fontsel)
 */
-(PangoFontFace *)getFace;

/**
 * Forwards message to:
 * gint gtk_font_selection_get_size (GtkFontSelection* fontsel)
 */
-(NSNumber *)getSize;

/**
 * Forwards message to:
 * gchar* gtk_font_selection_get_font_name (GtkFontSelection* fontsel)
 */
-(NSString *)getFontName;

/**
 * Forwards message to:
 * gboolean gtk_font_selection_set_font_name (GtkFontSelection* fontsel, const gchar* fontname)
 */
-(BOOL)setFontName:(NSString *)fontname;

/**
 * Forwards message to:
 * const gchar* gtk_font_selection_get_preview_text (GtkFontSelection* fontsel)
 */
-(NSString *)getPreviewText;

/**
 * Forwards message to:
 * void gtk_font_selection_set_preview_text (GtkFontSelection* fontsel, const gchar* text)
 */
-(void)setPreviewText:(NSString *)text;

@end
