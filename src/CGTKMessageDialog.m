/*
 * CGTKMessageDialog.m
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

#import "CGTKMessageDialog.h"

@implementation CGTKMessageDialog

-(GtkMessageDialog *)MESSAGE_DIALOG
{
	return GTK_MESSAGE_DIALOG([self WIDGET]);
}

-(id)initWithParent:(CGTKWindow *)parent andFlags:(GtkDialogFlags)flags andType:(GtkMessageType)type andButtons:(GtkButtonsType)buttons andMessage:(NSString *)message
{
	self = [super initWithGtkWidget:gtk_message_dialog_new([parent WINDOW], flags, type, buttons, NULL) andIncrementRefCount:NO];
	
	if(self)
	{
		[self setMarkup:message];
	}
	
	return self;
}

-(void)setMarkup:(NSString *)str
{
	gtk_message_dialog_set_markup ([self MESSAGE_DIALOG], [str UTF8String]);
}

-(void)setImage:(CGTKWidget *)image
{
	gtk_message_dialog_set_image([self MESSAGE_DIALOG], [image WIDGET]);
}

-(CGTKWidget *)getImage
{
	return [CGTKWidget widgetWithGtkWidget:gtk_message_dialog_get_image([self MESSAGE_DIALOG])];
}

-(CGTKWidget *)getMessageArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_message_dialog_get_message_area([self MESSAGE_DIALOG])];
}

-(void)formatSecondaryText:(NSString *)messageFormat
{
	gtk_message_dialog_format_secondary_text([self MESSAGE_DIALOG], [messageFormat UTF8String], NULL);
}

-(void)formatSecondaryMarkup:(NSString *)messageFormat
{
	gtk_message_dialog_format_secondary_markup([self MESSAGE_DIALOG], [messageFormat UTF8String], NULL);
}

@end
