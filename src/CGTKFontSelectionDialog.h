/*
 * CGTKFontSelectionDialog.h
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
#import "CGTKDialog.h"

@interface CGTKFontSelectionDialog : CGTKDialog
{
	
}

-(GtkFontSelectionDialog *)FONT_SELECTION_DIALOG;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_selection_dialog_new (const gchar* title)
 */
-(id)initWithTitle:(NSString *)title;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_selection_dialog_get_ok_button (GtkFontSelectionDialog* fsd)
 */
-(CGTKWidget *)getOkButton;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_selection_dialog_get_cancel_button (GtkFontSelectionDialog* fsd)
 */
-(CGTKWidget *)getCancelButton;

/*
 * Forwards message to:
 * GtkWidget* gtk_font_selection_dialog_get_font_selection (GtkFontSelectionDialog* fsd)
 */
-(CGTKWidget *)getFontSelection;

/*
 * Forwards message to:
 * gchar* gtk_font_selection_dialog_get_font_name (GtkFontSelectionDialog* fsd)
 */
-(NSString *)getFontName;

/*
 * Forwards message to:
 * gboolean gtk_font_selection_dialog_set_font_name (GtkFontSelectionDialog* fsd, const gchar* fontname)
 */
-(BOOL)setFontName:(NSString *)fontname;

/*
 * Forwards message to:
 * void gtk_font_selection_dialog_set_preview_text (GtkFontSelectionDialog* fsd, const gchar* text)
 */
-(void)setPreviewText:(NSString *)text;

/*
 * Forwards message to:
 * const gchar * gtk_font_selection_dialog_get_preview_text (GtkFontSelectionDialog *fsd);
 */
-(NSString *)getPreviewText;

@end
