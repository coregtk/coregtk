/*
 * CGTKColorButton.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKColorButton.h"

@implementation CGTKColorButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithColor:(const GdkColor*) color
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new_with_color(color)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRgba:(const GdkRGBA*) rgba
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new_with_rgba(rgba)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkColorButton*)COLORBUTTON
{
	return GTK_COLOR_BUTTON([self GOBJECT]);
}

-(guint16)getAlpha
{
	return gtk_color_button_get_alpha(GTK_COLOR_BUTTON([self GOBJECT]));
}

-(void)getColor:(GdkColor*) color
{
	gtk_color_button_get_color(GTK_COLOR_BUTTON([self GOBJECT]), color);
}

-(void)getRgba:(GdkRGBA*) rgba
{
	gtk_color_button_get_rgba(GTK_COLOR_BUTTON([self GOBJECT]), rgba);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_color_button_get_title(GTK_COLOR_BUTTON([self GOBJECT]))];
}

-(BOOL)getUseAlpha
{
	return (gtk_color_button_get_use_alpha(GTK_COLOR_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setAlpha:(guint16) alpha
{
	gtk_color_button_set_alpha(GTK_COLOR_BUTTON([self GOBJECT]), alpha);
}

-(void)setColor:(const GdkColor*) color
{
	gtk_color_button_set_color(GTK_COLOR_BUTTON([self GOBJECT]), color);
}

-(void)setRgba:(const GdkRGBA*) rgba
{
	gtk_color_button_set_rgba(GTK_COLOR_BUTTON([self GOBJECT]), rgba);
}

-(void)setTitle:(NSString*) title
{
	gtk_color_button_set_title(GTK_COLOR_BUTTON([self GOBJECT]), [title UTF8String]);
}

-(void)setUseAlpha:(BOOL) useAlpha
{
	gtk_color_button_set_use_alpha(GTK_COLOR_BUTTON([self GOBJECT]), (useAlpha ? TRUE : FALSE));
}


@end