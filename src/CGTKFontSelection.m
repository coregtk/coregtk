/*
 * CGTKFontSelection.m
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

#import "CGTKFontSelection.h"

@implementation CGTKFontSelection

-(GtkFontSelection *)FONT_SELECTION
{
	return GTK_FONT_SELECTION([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_font_selection_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(CGTKWidget *)getFamilyList
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_get_family_list ([self FONT_SELECTION])];
}

-(CGTKWidget *)getFaceList
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_get_face_list ([self FONT_SELECTION])];
}

-(CGTKWidget *)getSizeEntry
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_get_size_entry ([self FONT_SELECTION])];
}

-(CGTKWidget *)getSizeList
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_get_size_list ([self FONT_SELECTION])];
}

-(CGTKWidget *)getPreviewEntry
{
	return [CGTKWidget widgetWithGtkWidget:gtk_font_selection_get_preview_entry ([self FONT_SELECTION])];
}

-(PangoFontFamily *)getFamily
{
	return gtk_font_selection_get_family ([self FONT_SELECTION]);
}

-(PangoFontFace *)getFace
{
	return gtk_font_selection_get_face ([self FONT_SELECTION]);
}

-(NSNumber *)getSize
{
	return [NSNumber numberWithInt:gtk_font_selection_get_size ([self FONT_SELECTION])];
}

-(NSString *)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_selection_get_font_name ([self FONT_SELECTION])];
}

-(BOOL)setFontName:(NSString *)fontname
{
	return [CGTK getBOOL:gtk_font_selection_set_font_name ([self FONT_SELECTION], [fontname UTF8String])];
}

-(NSString *)getPreviewText
{
	return [NSString stringWithUTF8String:gtk_font_selection_get_preview_text ([self FONT_SELECTION])];
}

-(void)setPreviewText:(NSString *)text
{
	gtk_font_selection_set_preview_text ([self FONT_SELECTION], [text UTF8String]);
}

@end
