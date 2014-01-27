/*
 * CGTKComboBoxText.h
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
#import "CGTKComboBox.h"

@interface CGTKComboBoxText : CGTKComboBox
{
	
}

/*
 * Returns internal GtkComboBoxText
 */
-(GtkComboBoxText *)COMBO_BOX_TEXT;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_text_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_text_new_with_entry (void)
 */
-(id)initWithEntry;

/*
 * Forwards message to:
 * void gtk_combo_box_text_append_text (GtkComboBoxText* combo_box, const gchar* text)
 */
-(void)appendText:(NSString *)text;

/*
 * Forwards message to:
 * void gtk_combo_box_text_insert_text (GtkComboBoxText* combo_box, gint position, const gchar* text)
 */
-(void)insertTextWithPosition:(NSNumber *)position andText:(NSString *)text;

/*
 * Forwards message to:
 * void gtk_combo_box_text_prepend_text (GtkComboBoxText* combo_box, const gchar* text)
 */
-(void)prependText:(NSString *)text;

/*
 * Forwards message to:
 * void gtk_combo_box_text_remove (GtkComboBoxText* combo_box, gint position)
 */
-(void)remove:(NSNumber *)position;

/*
 * Forwards message to:
 * gchar* gtk_combo_box_text_get_active_text (GtkComboBoxText* combo_box)
 */
-(NSString *)getActiveText;

@end
