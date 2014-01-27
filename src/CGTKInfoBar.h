/*
 * CGTKInfoBar.h
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

@interface CGTKInfoBar : CGTKHBox
{
	
}

/**
 * Returns internal GtkInfoBar
 */
-(GtkInfoBar *)INFO_BAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_info_bar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_info_bar_get_action_area (GtkInfoBar* info_bar)
 */
-(CGTKWidget *)getActionArea;

/**
 * Forwards message to:
 * GtkWidget* gtk_info_bar_get_content_area (GtkInfoBar* info_bar)
 */
-(CGTKWidget *)getContentArea;

/**
 * Forwards message to:
 * void gtk_info_bar_add_action_widget (GtkInfoBar* info_bar, GtkWidget* child, gint response_id)
 */
-(void)addActionWidgetWithChild:(CGTKWidget *)child andResponseId:(NSNumber *)responseId;

/**
 * Forwards message to:
 * GtkWidget* gtk_info_bar_add_button (GtkInfoBar* info_bar, const gchar* button_text, gint response_id)
 */
-(CGTKWidget *)addButtonWithButtonText:(NSString *)buttonText andResponseId:(NSNumber *)responseId;

/**
 * Forwards message to:
 * void gtk_info_bar_set_response_sensitive (GtkInfoBar* info_bar, gint response_id, gboolean setting)
 */
-(void)setResponseSensitiveWithResponseId:(NSNumber *)responseId andSetting:(BOOL)setting;

/**
 * Forwards message to:
 * void gtk_info_bar_set_default_response (GtkInfoBar* info_bar, gint response_id)
 */
-(void)setDefaultResponse:(NSNumber *)responseId;

/**
 * Forwards message to:
 * void gtk_info_bar_response (GtkInfoBar* info_bar, gint response_id)
 */
-(void)response:(NSNumber *)responseId;

/**
 * Forwards message to:
 * void gtk_info_bar_set_message_type (GtkInfoBar* info_bar, GtkMessageType message_type)
 */
-(void)setMessageType:(GtkMessageType)messageType;

/**
 * Forwards message to:
 * GtkMessageType gtk_info_bar_get_message_type (GtkInfoBar* info_bar)
 */
-(GtkMessageType)getMessageType;

@end
