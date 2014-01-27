/*
 * CGTKColorButton.m
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

#import "CGTKColorButton.h"

@implementation CGTKColorButton

-(GtkColorButton *)COLOR_BUTTON
{
	return GTK_COLOR_BUTTON([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_color_button_new ()];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithColor:(const GdkColor *)color
{
	self = [super initWithGtkWidget:gtk_color_button_new_with_color (color)];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setColor:(const GdkColor *)color
{
	gtk_color_button_set_color ([self COLOR_BUTTON], color);
}

-(void)setAlpha:(NSNumber *)alpha
{
	gtk_color_button_set_alpha ([self COLOR_BUTTON], [alpha unsignedIntValue]);
}

-(void)getColor:(GdkColor *)color
{
	gtk_color_button_get_color ([self COLOR_BUTTON], color);
}

-(NSNumber *)getAlpha
{
	return [NSNumber numberWithUnsignedInt:gtk_color_button_get_alpha ([self COLOR_BUTTON])];
}

-(void)setUseAlpha:(BOOL)useAlpha
{
	gtk_color_button_set_use_alpha ([self COLOR_BUTTON], [CGTK getGboolean: useAlpha]);
}

-(BOOL)getUseAlpha
{
	return [CGTK getBOOL:gtk_color_button_get_use_alpha ([self COLOR_BUTTON])];
}

-(void)setTitle:(NSString *)title
{
	gtk_color_button_set_title ([self COLOR_BUTTON], [title UTF8String]);
}

-(NSString *)getTitle
{
	return [NSString stringWithUTF8String:gtk_color_button_get_title ([self COLOR_BUTTON])];
}

@end
