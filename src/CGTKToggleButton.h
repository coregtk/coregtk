/*
 * CGTKToggleButton.h
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

@interface CGTKToggleButton : CGTKButton
{
	
}

-(GtkToggleButton *)TOGGLE_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_toggle_button_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_toggle_button_new_with_label (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_toggle_button_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_toggle_button_set_mode (GtkToggleButton* toggle_button, gboolean draw_indicator)
 */
-(void)setMode:(BOOL)drawIndicator;

/*
 * Forwards message to:
 * gboolean gtk_toggle_button_get_mode (GtkToggleButton* toggle_button)
 */
-(BOOL)getMode;

/*
 * Forwards message to:
 * void gtk_toggle_button_set_active (GtkToggleButton* toggle_button, gboolean is_active)
 */
-(void)setActive:(BOOL)isActive;

/*
 * Forwards message to:
 * gboolean gtk_toggle_button_get_active (GtkToggleButton* toggle_button)
 */
-(BOOL)getActive;

/*
 * Forwards message to:
 * void gtk_toggle_button_toggled (GtkToggleButton* toggle_button)
 */
-(void)toggled;

/*
 * Forwards message to:
 * void gtk_toggle_button_set_inconsistent (GtkToggleButton* toggle_button, gboolean setting)
 */
-(void)setInconsistent:(BOOL)setting;

/*
 * Forwards message to:
 * gboolean gtk_toggle_button_get_inconsistent (GtkToggleButton* toggle_button)
 */
-(BOOL)getInconsistent;

@end
