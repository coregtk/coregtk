/*
 * CGTKLevelBar.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKLevelBar.h"

@implementation CGTKLevelBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_level_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForIntervalWithMinValue:(gdouble) minValue andMaxValue:(gdouble) maxValue
{
	self = [super initWithGObject:(GObject *)gtk_level_bar_new_for_interval(minValue, maxValue)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLevelBar*)LEVELBAR
{
	return GTK_LEVEL_BAR([self GOBJECT]);
}

-(void)addOffsetValueWithName:(NSString*) name andValue:(gdouble) value
{
	gtk_level_bar_add_offset_value(GTK_LEVEL_BAR([self GOBJECT]), [name UTF8String], value);
}

-(BOOL)getInverted
{
	return (gtk_level_bar_get_inverted(GTK_LEVEL_BAR([self GOBJECT])) ? YES : NO);
}

-(gdouble)getMaxValue
{
	return gtk_level_bar_get_max_value(GTK_LEVEL_BAR([self GOBJECT]));
}

-(gdouble)getMinValue
{
	return gtk_level_bar_get_min_value(GTK_LEVEL_BAR([self GOBJECT]));
}

-(GtkLevelBarMode)getMode
{
	return gtk_level_bar_get_mode(GTK_LEVEL_BAR([self GOBJECT]));
}

-(BOOL)getOffsetValueWithName:(NSString*) name andValue:(gdouble*) value
{
	return (gtk_level_bar_get_offset_value(GTK_LEVEL_BAR([self GOBJECT]), [name UTF8String], value) ? YES : NO);
}

-(gdouble)getValue
{
	return gtk_level_bar_get_value(GTK_LEVEL_BAR([self GOBJECT]));
}

-(void)removeOffsetValue:(NSString*) name
{
	gtk_level_bar_remove_offset_value(GTK_LEVEL_BAR([self GOBJECT]), [name UTF8String]);
}

-(void)setInverted:(BOOL) inverted
{
	gtk_level_bar_set_inverted(GTK_LEVEL_BAR([self GOBJECT]), (inverted ? TRUE : FALSE));
}

-(void)setMaxValue:(gdouble) value
{
	gtk_level_bar_set_max_value(GTK_LEVEL_BAR([self GOBJECT]), value);
}

-(void)setMinValue:(gdouble) value
{
	gtk_level_bar_set_min_value(GTK_LEVEL_BAR([self GOBJECT]), value);
}

-(void)setMode:(GtkLevelBarMode) mode
{
	gtk_level_bar_set_mode(GTK_LEVEL_BAR([self GOBJECT]), mode);
}

-(void)setValue:(gdouble) value
{
	gtk_level_bar_set_value(GTK_LEVEL_BAR([self GOBJECT]), value);
}


@end
