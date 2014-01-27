/*
 * CGTKInfoBar.m
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

#import "CGTKInfoBar.h"

@implementation CGTKInfoBar

-(GtkInfoBar *)INFO_BAR
{
	return GTK_INFO_BAR([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_info_bar_new ()];

	if(self)
	{

	}

	return self;
}

-(CGTKWidget *)getActionArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_info_bar_get_action_area ([self INFO_BAR])];
}

-(CGTKWidget *)getContentArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_info_bar_get_content_area ([self INFO_BAR])];
}

-(void)addActionWidgetWithChild:(CGTKWidget *)child andResponseId:(NSNumber *)responseId
{
	gtk_info_bar_add_action_widget ([self INFO_BAR], [child WIDGET], [responseId intValue]);
}

-(CGTKWidget *)addButtonWithButtonText:(NSString *)buttonText andResponseId:(NSNumber *)responseId
{
	return [CGTKWidget widgetWithGtkWidget:gtk_info_bar_add_button ([self INFO_BAR], [buttonText UTF8String], [responseId intValue])];
}

-(void)setResponseSensitiveWithResponseId:(NSNumber *)responseId andSetting:(BOOL)setting
{
	gtk_info_bar_set_response_sensitive ([self INFO_BAR], [responseId intValue], [CGTK getGboolean:setting]);
}

-(void)setDefaultResponse:(NSNumber *)responseId
{
	gtk_info_bar_set_default_response ([self INFO_BAR], [responseId intValue]);
}

-(void)response:(NSNumber *)responseId
{
	gtk_info_bar_response ([self INFO_BAR], [responseId intValue]);
}

-(void)setMessageType:(GtkMessageType)messageType
{
	gtk_info_bar_set_message_type ([self INFO_BAR], messageType);
}

-(GtkMessageType)getMessageType
{
	return gtk_info_bar_get_message_type ([self INFO_BAR]);
}

@end
