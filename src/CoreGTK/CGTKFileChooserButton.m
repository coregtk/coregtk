/*
 * CGTKFileChooserButton.m
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
#import "CoreGTK/CGTKFileChooserButton.h"

@implementation CGTKFileChooserButton

-(id)initWithTitle:(NSString*) title andAction:(GtkFileChooserAction) action
{
	self = [super initWithGObject:(GObject *)gtk_file_chooser_button_new([title UTF8String], action)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithDialog:(CGTKWidget*) dialog
{
	self = [super initWithGObject:(GObject *)gtk_file_chooser_button_new_with_dialog([dialog WIDGET])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFileChooserButton*)FILECHOOSERBUTTON
{
	return GTK_FILE_CHOOSER_BUTTON([self GOBJECT]);
}

-(BOOL)getFocusOnClick
{
	return (gtk_file_chooser_button_get_focus_on_click(GTK_FILE_CHOOSER_BUTTON([self GOBJECT])) ? YES : NO);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_file_chooser_button_get_title(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]))];
}

-(gint)getWidthChars
{
	return gtk_file_chooser_button_get_width_chars(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]));
}

-(void)setFocusOnClick:(BOOL) focusOnClick
{
	gtk_file_chooser_button_set_focus_on_click(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), (focusOnClick ? TRUE : FALSE));
}

-(void)setTitle:(NSString*) title
{
	gtk_file_chooser_button_set_title(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), [title UTF8String]);
}

-(void)setWidthChars:(gint) nchars
{
	gtk_file_chooser_button_set_width_chars(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), nchars);
}


@end