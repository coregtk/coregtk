/*
 * CGTKToolButton.m
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

#import "CGTKToolButton.h"

@implementation CGTKToolButton

-(GtkToolButton *)TOOL_BUTTON
{
	return GTK_TOOL_BUTTON([self WIDGET]);
}

-(id)initWithIconWidget:(CGTKWidget *)iconWidget andLabel:(NSString *)label
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_tool_button_new ([iconWidget WIDGET], [label UTF8String])) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromStock:(NSString *)stockId
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_tool_button_new_from_stock ([stockId UTF8String])) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)setLabel:(NSString *)label
{
	gtk_tool_button_set_label ([self TOOL_BUTTON], [label UTF8String]);
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_label ([self TOOL_BUTTON])];
}

-(void)setUseUnderline:(BOOL)useUnderline
{
	gtk_tool_button_set_use_underline ([self TOOL_BUTTON], [CGTK getGboolean:useUnderline]);
}

-(BOOL)getUseUnderline
{
	return [CGTK getBOOL:gtk_tool_button_get_use_underline ([self TOOL_BUTTON])];
}

-(void)setStockId:(NSString *)stockId
{
	gtk_tool_button_set_stock_id ([self TOOL_BUTTON], [stockId UTF8String]);
}

-(NSString *)getStockId
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_stock_id ([self TOOL_BUTTON])];
}

-(void)setIconName:(NSString *)iconName
{
	gtk_tool_button_set_icon_name ([self TOOL_BUTTON], [iconName UTF8String]);
}

-(NSString *)getIconName
{
	return [NSString stringWithUTF8String:gtk_tool_button_get_icon_name ([self TOOL_BUTTON])];
}

-(void)setIconWidget:(CGTKWidget *)iconWidget
{
	gtk_tool_button_set_icon_widget ([self TOOL_BUTTON], [iconWidget WIDGET]);
}

-(CGTKWidget *)getIconWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_button_get_icon_widget ([self TOOL_BUTTON])];
}

-(void)setLabelWidget:(CGTKWidget *)labelWidget
{
	gtk_tool_button_set_label_widget ([self TOOL_BUTTON], [labelWidget WIDGET]);
}

-(CGTKWidget *)getLabelWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_tool_button_get_label_widget ([self TOOL_BUTTON])];
}

@end
