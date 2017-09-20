/*
 * CGTKFontButton.m
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
#import "CoreGTK/CGTKFontButton.h"

@implementation CGTKFontButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_font_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithFont:(NSString*) fontname
{
	self = [super initWithGObject:(GObject *)gtk_font_button_new_with_font([fontname UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontButton*)FONTBUTTON
{
	return GTK_FONT_BUTTON([self GOBJECT]);
}

-(NSString*)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_button_get_font_name(GTK_FONT_BUTTON([self GOBJECT]))];
}

-(BOOL)getShowSize
{
	return (gtk_font_button_get_show_size(GTK_FONT_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowStyle
{
	return (gtk_font_button_get_show_style(GTK_FONT_BUTTON([self GOBJECT])) ? YES : NO);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_font_button_get_title(GTK_FONT_BUTTON([self GOBJECT]))];
}

-(BOOL)getUseFont
{
	return (gtk_font_button_get_use_font(GTK_FONT_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getUseSize
{
	return (gtk_font_button_get_use_size(GTK_FONT_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)setFontName:(NSString*) fontname
{
	return (gtk_font_button_set_font_name(GTK_FONT_BUTTON([self GOBJECT]), [fontname UTF8String]) ? YES : NO);
}

-(void)setShowSize:(BOOL) showSize
{
	gtk_font_button_set_show_size(GTK_FONT_BUTTON([self GOBJECT]), (showSize ? TRUE : FALSE));
}

-(void)setShowStyle:(BOOL) showStyle
{
	gtk_font_button_set_show_style(GTK_FONT_BUTTON([self GOBJECT]), (showStyle ? TRUE : FALSE));
}

-(void)setTitle:(NSString*) title
{
	gtk_font_button_set_title(GTK_FONT_BUTTON([self GOBJECT]), [title UTF8String]);
}

-(void)setUseFont:(BOOL) useFont
{
	gtk_font_button_set_use_font(GTK_FONT_BUTTON([self GOBJECT]), (useFont ? TRUE : FALSE));
}

-(void)setUseSize:(BOOL) useSize
{
	gtk_font_button_set_use_size(GTK_FONT_BUTTON([self GOBJECT]), (useSize ? TRUE : FALSE));
}


@end
