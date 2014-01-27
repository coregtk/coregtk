/*
 * CGTKDialog.h
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
#import "CGTKWindow.h"

@interface CGTKDialog : CGTKWindow
{
	
}

/*
 * Creates and returns a new instance of CGTKDialog holding the GtkDialog.
 */
-(id)init;

/*
 * Gets the internal GtkDialog widget
 */
-(GtkDialog *)DIALOG;

/*
 * Forwards message to:
 * void gtk_dialog_add_action_widget (GtkDialog* dialog, GtkWidget* child, gint response_id)
 */
-(void)addActionWidgetWithChild:(CGTKWidget *)child andResponseId:(NSNumber *)responseId;

/*
 * Forwards message to:
 * GtkWidget* gtk_dialog_add_button (GtkDialog* dialog, const gchar* button_text, gint response_id)
 */
-(CGTKWidget *)addButtonWithButtonText:(NSString *)buttonText andResponseId:(NSNumber *)responseId;

/*
 * Forwards message to:
 * void gtk_dialog_set_response_sensitive (GtkDialog* dialog, gint response_id, gboolean setting)
 */
-(void)setResponseSensitiveWithResponseId:(NSNumber *)responseId andSetting:(BOOL)setting;

/*
 * Forwards message to:
 * void gtk_dialog_set_default_response (GtkDialog* dialog, gint response_id)
 */
-(void)setDefaultResponse:(NSNumber *)responseId;

/*
 * Forwards message to:
 * GtkWidget* gtk_dialog_get_widget_for_response (GtkDialog* dialog, gint response_id)
 */
-(CGTKWidget *)getWidgetForResponse:(NSNumber *)responseId;

/*
 * Forwards message to:
 * gint gtk_dialog_get_response_for_widget (GtkDialog* dialog, GtkWidget* widget)
 */
-(NSNumber *)getResponseForWidget:(CGTKWidget *)widget;

/*
 * Forwards message to:
 * void gtk_dialog_set_alternative_button_order_from_array (GtkDialog* dialog, gint n_params, gint* new_order)
 */
-(void)setAlternativeButtonOrderFromArrayWithNParams:(NSNumber *)nParams andNewOrder:(NSArray *)newOrder;

/*
 * Forwards message to:
 * void gtk_dialog_response (GtkDialog* dialog, gint response_id)
 */
-(void)response:(NSNumber *)responseId;

/*
 * Forwards message to:
 * gint gtk_dialog_run (GtkDialog* dialog)
 */
-(NSNumber *)run;

/*
 * Forwards message to:
 * GtkWidget* gtk_dialog_get_action_area (GtkDialog* dialog)
 */
-(CGTKWidget *)getActionArea;

/*
 * Forwards message to:
 * GtkWidget* gtk_dialog_get_content_area (GtkDialog* dialog)
 */
-(CGTKWidget *)getContentArea;

/*
 * Forwards message to:
 * gboolean gtk_alternative_dialog_button_order (GdkScreen *screen);
 */
+(BOOL)alternativeDialogButtonOrder:(GdkScreen *)screen;

@end
