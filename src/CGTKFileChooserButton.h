/*
 * CGTKFileChooserButton.h
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
#import "CGTKHBox.h"

@interface CGTKFileChooserButton : CGTKHBox
{
	
}

/**
 * Returns internal GtkFileChooserButton
 */
-(GtkFileChooserButton *)FILE_CHOOSER_BUTTON;

/**
 * Forwards message to:
 * GtkWidget* gtk_file_chooser_button_new (const gchar* title,GtkFileChooserAction action)
 */
-(id)initWithTitle:(NSString *)title andAction:(GtkFileChooserAction)action;

/**
 * Forwards message to:
 * GtkWidget* gtk_file_chooser_button_new_with_dialog (GtkWidget* dialog)
 */
-(id)initWithDialog:(CGTKWidget *)dialog;

/**
 * Forwards message to:
 * const gchar* gtk_file_chooser_button_get_title (GtkFileChooserButton* button)
 */
-(NSString *)getTitle;

/**
 * Forwards message to:
 * void gtk_file_chooser_button_set_title (GtkFileChooserButton* button,const gchar* title)
 */
-(void)setTitle:(NSString *)title;

/**
 * Forwards message to:
 * gint gtk_file_chooser_button_get_width_chars (GtkFileChooserButton* button)
 */
-(NSNumber *)getWidthChars;

/**
 * Forwards message to:
 * void gtk_file_chooser_button_set_width_chars (GtkFileChooserButton* button,gint n_chars)
 */
-(void)setWidthChars:(NSNumber *)nChars;

/**
 * Forwards message to:
 * gboolean gtk_file_chooser_button_get_focus_on_click (GtkFileChooserButton* button)
 */
-(BOOL)getFocusOnClick;

/**
 * Forwards message to:
 * void gtk_file_chooser_button_set_focus_on_click (GtkFileChooserButton* button, gboolean focus_on_click)
 */
-(void)setFocusOnClick:(BOOL)focusOnClick;

@end
