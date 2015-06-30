/*
 * CGTKInfoBar.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKInfoBar.h"

@implementation CGTKInfoBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_info_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkInfoBar*)INFOBAR
{
	return GTK_INFO_BAR([self GOBJECT]);
}

-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId
{
	gtk_info_bar_add_action_widget(GTK_INFO_BAR([self GOBJECT]), [child WIDGET], responseId);
}

-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_add_button(GTK_INFO_BAR([self GOBJECT]), [buttonText UTF8String], responseId)];
}

-(CGTKWidget*)getActionArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_get_action_area(GTK_INFO_BAR([self GOBJECT]))];
}

-(CGTKWidget*)getContentArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_get_content_area(GTK_INFO_BAR([self GOBJECT]))];
}

-(GtkMessageType)getMessageType
{
	return gtk_info_bar_get_message_type(GTK_INFO_BAR([self GOBJECT]));
}

-(BOOL)getShowCloseButton
{
	return (gtk_info_bar_get_show_close_button(GTK_INFO_BAR([self GOBJECT])) ? YES : NO);
}

-(void)response:(gint) responseId
{
	gtk_info_bar_response(GTK_INFO_BAR([self GOBJECT]), responseId);
}

-(void)setDefaultResponse:(gint) responseId
{
	gtk_info_bar_set_default_response(GTK_INFO_BAR([self GOBJECT]), responseId);
}

-(void)setMessageType:(GtkMessageType) messageType
{
	gtk_info_bar_set_message_type(GTK_INFO_BAR([self GOBJECT]), messageType);
}

-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting
{
	gtk_info_bar_set_response_sensitive(GTK_INFO_BAR([self GOBJECT]), responseId, (setting ? TRUE : FALSE));
}

-(void)setShowCloseButton:(BOOL) setting
{
	gtk_info_bar_set_show_close_button(GTK_INFO_BAR([self GOBJECT]), (setting ? TRUE : FALSE));
}


@end