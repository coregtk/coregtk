/*
 * CGTKFileChooserButton.m
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

#import "CGTKFileChooserButton.h"

@implementation CGTKFileChooserButton

-(GtkFileChooserButton *)FILE_CHOOSER_BUTTON
{
	return GTK_FILE_CHOOSER_BUTTON([self WIDGET]);
}

-(id)initWithTitle:(NSString *)title andAction:(GtkFileChooserAction)action
{
	self = [super initWithGtkWidget:gtk_file_chooser_button_new ([title UTF8String], action) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithDialog:(CGTKWidget *)dialog
{
	self = [super initWithGtkWidget:gtk_file_chooser_button_new_with_dialog ([dialog WIDGET]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(NSString *)getTitle;
{
	return [NSString stringWithUTF8String:gtk_file_chooser_button_get_title ([self FILE_CHOOSER_BUTTON])];
}

-(void)setTitle:(NSString *)title
{
	gtk_file_chooser_button_set_title ([self FILE_CHOOSER_BUTTON], [title UTF8String]);
}

-(NSNumber *)getWidthChars
{
	return [NSNumber numberWithInt:gtk_file_chooser_button_get_width_chars ([self FILE_CHOOSER_BUTTON])];
}

-(void)setWidthChars:(NSNumber *)nChars
{
	gtk_file_chooser_button_set_width_chars ([self FILE_CHOOSER_BUTTON], [nChars intValue]);
}

-(BOOL)getFocusOnClick
{
	return [CGTK getBOOL:gtk_file_chooser_button_get_focus_on_click ([self FILE_CHOOSER_BUTTON])];
}

-(void)setFocusOnClick:(BOOL)focusOnClick
{
	gtk_file_chooser_button_set_focus_on_click ([self FILE_CHOOSER_BUTTON], [CGTK getGboolean:focusOnClick]);
}

@end
