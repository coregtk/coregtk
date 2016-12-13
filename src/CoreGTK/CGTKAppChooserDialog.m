/*
 * CGTKAppChooserDialog.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAppChooserDialog.h"

@implementation CGTKAppChooserDialog

-(id)initWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andFile:(GFile*) file
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_dialog_new(parent, flags, file)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForContentTypeWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andContentType:(NSString*) contentType
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_dialog_new_for_content_type(parent, flags, [contentType UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAppChooserDialog*)APPCHOOSERDIALOG
{
	return GTK_APP_CHOOSER_DIALOG([self GOBJECT]);
}

-(NSString*)getHeading
{
	return [NSString stringWithUTF8String:gtk_app_chooser_dialog_get_heading(GTK_APP_CHOOSER_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_app_chooser_dialog_get_widget(GTK_APP_CHOOSER_DIALOG([self GOBJECT]))];
}

-(void)setHeading:(NSString*) heading
{
	gtk_app_chooser_dialog_set_heading(GTK_APP_CHOOSER_DIALOG([self GOBJECT]), [heading UTF8String]);
}


@end