/*
 * CGTKFontSelectionDialog.m
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
#import "CoreGTK/CGTKFontSelectionDialog.h"

@implementation CGTKFontSelectionDialog

-(id)init:(NSString*) title
{
	self = [super initWithGObject:(GObject *)gtk_font_selection_dialog_new([title UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontSelectionDialog*)FONTSELECTIONDIALOG
{
	return GTK_FONT_SELECTION_DIALOG([self GOBJECT]);
}

-(CGTKWidget*)getCancelButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_cancel_button(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(NSString*)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_font_name(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getFontSelection
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_font_selection(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getOkButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_ok_button(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(NSString*)getPreviewText
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_preview_text(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(BOOL)setFontName:(NSString*) fontname
{
	return (gtk_font_selection_dialog_set_font_name(GTK_FONT_SELECTION_DIALOG([self GOBJECT]), [fontname UTF8String]) ? YES : NO);
}

-(void)setPreviewText:(NSString*) text
{
	gtk_font_selection_dialog_set_preview_text(GTK_FONT_SELECTION_DIALOG([self GOBJECT]), [text UTF8String]);
}


@end