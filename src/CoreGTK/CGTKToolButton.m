/*
 * CGTKToolButton.m
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
#import "CoreGTK/CGTKToolButton.h"

@implementation CGTKToolButton

-(id)initWithIconWidget:(CGTKWidget*) iconWidget andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_tool_button_new([iconWidget WIDGET], [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStock:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_tool_button_new_from_stock([stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToolButton*)TOOLBUTTON
{
	return GTK_TOOL_BUTTON([self GOBJECT]);
}

-(NSString*)getIconName
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_icon_name(GTK_TOOL_BUTTON([self GOBJECT]))];
}

-(CGTKWidget*)getIconWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_tool_button_get_icon_widget(GTK_TOOL_BUTTON([self GOBJECT]))];
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_label(GTK_TOOL_BUTTON([self GOBJECT]))];
}

-(CGTKWidget*)getLabelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_tool_button_get_label_widget(GTK_TOOL_BUTTON([self GOBJECT]))];
}

-(NSString*)getStockId
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_stock_id(GTK_TOOL_BUTTON([self GOBJECT]))];
}

-(BOOL)getUseUnderline
{
	return (gtk_tool_button_get_use_underline(GTK_TOOL_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setIconName:(NSString*) iconName
{
	gtk_tool_button_set_icon_name(GTK_TOOL_BUTTON([self GOBJECT]), [iconName UTF8String]);
}

-(void)setIconWidget:(CGTKWidget*) iconWidget
{
	gtk_tool_button_set_icon_widget(GTK_TOOL_BUTTON([self GOBJECT]), [iconWidget WIDGET]);
}

-(void)setLabel:(NSString*) label
{
	gtk_tool_button_set_label(GTK_TOOL_BUTTON([self GOBJECT]), [label UTF8String]);
}

-(void)setLabelWidget:(CGTKWidget*) labelWidget
{
	gtk_tool_button_set_label_widget(GTK_TOOL_BUTTON([self GOBJECT]), [labelWidget WIDGET]);
}

-(void)setStockId:(NSString*) stockId
{
	gtk_tool_button_set_stock_id(GTK_TOOL_BUTTON([self GOBJECT]), [stockId UTF8String]);
}

-(void)setUseUnderline:(BOOL) useUnderline
{
	gtk_tool_button_set_use_underline(GTK_TOOL_BUTTON([self GOBJECT]), (useUnderline ? TRUE : FALSE));
}


@end