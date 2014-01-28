/*
 * CGTKFontButton.m
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

#import "CGTKFontButton.h"

@implementation CGTKFontButton

-(GtkFontButton *)FONT_BUTTON
{
	return GTK_FONT_BUTTON([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_font_button_new () andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithFont:(NSString *)fontname
{
	self = [super initWithGtkWidget:gtk_font_button_new_with_font ([fontname UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setTitle:(NSString *)title
{
	gtk_font_button_set_title ([self FONT_BUTTON], [title UTF8String]);
}

-(NSString *)getTitle
{
	return [NSString stringWithUTF8String:gtk_font_button_get_title ([self FONT_BUTTON])];
}

-(BOOL)getUseFont
{
	return [CGTK getBOOL:gtk_font_button_get_use_font ([self FONT_BUTTON])];
}

-(void)setUseFont:(BOOL)useFont
{
	gtk_font_button_set_use_font ([self FONT_BUTTON], [CGTK getGboolean:useFont]);
}

-(BOOL)getUseSize
{
	return [CGTK getBOOL:gtk_font_button_get_use_size ([self FONT_BUTTON])];
}

-(void)setUseSize:(BOOL)useSize
{
	gtk_font_button_set_use_size ([self FONT_BUTTON], [CGTK getGboolean:useSize]);
}

-(BOOL)setFontName:(NSString *)fontname
{
	return [CGTK getBOOL:gtk_font_button_set_font_name ([self FONT_BUTTON], [fontname UTF8String])];
}

-(NSString *)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_button_get_font_name ([self FONT_BUTTON])];
}


-(BOOL)getShowStyle
{
	return [CGTK getBOOL:gtk_font_button_get_show_style ([self FONT_BUTTON])];
}

-(void)setShowStyle:(BOOL)showStyle
{
	gtk_font_button_set_show_style ([self FONT_BUTTON], [CGTK getGboolean:showStyle]);
}

-(BOOL)getShowSize
{
	return [CGTK getBOOL:gtk_font_button_get_show_size ([self FONT_BUTTON])];
}

-(void)setShowSize:(BOOL)showSize
{
	gtk_font_button_set_show_size ([self FONT_BUTTON], [CGTK getGboolean:showSize]);
}

@end
