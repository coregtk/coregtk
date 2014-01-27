/*
 * CGTKFontSelectionDialog.m
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

#import "CGTKFontSelectionDialog.h"

@implementation CGTKFontSelectionDialog

-(GtkFontSelectionDialog *)FONT_SELECTION_DIALOG
{
	return GTK_FONT_SELECTION_DIALOG([self WIDGET]);
}

-(id)initWithTitle:(NSString *)title
{
	self = [super initWithGtkWidget:gtk_font_selection_dialog_new ([title UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(CGTKWidget *)getOkButton
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_dialog_get_ok_button ([self FONT_SELECTION_DIALOG])];
}

-(CGTKWidget *)getCancelButton
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_dialog_get_cancel_button ([self FONT_SELECTION_DIALOG])];
}

-(CGTKWidget *)getFontSelection
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_dialog_get_font_selection ([self FONT_SELECTION_DIALOG])];
}

-(NSString *)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_font_name ([self FONT_SELECTION_DIALOG])];
}

-(BOOL)setFontName:(NSString *)fontname
{
	return [CGTK getBOOL:gtk_font_selection_dialog_set_font_name ([self FONT_SELECTION_DIALOG], [fontname UTF8String])];
}

-(void)setPreviewText:(NSString *)text
{
	gtk_font_selection_dialog_set_preview_text ([self FONT_SELECTION_DIALOG], [text UTF8String]);
}

-(NSString *)getPreviewText
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_preview_text ([self FONT_SELECTION_DIALOG])];
}

@end
