/*
 * CGTKScaleButton.m
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

#import "CGTKScaleButton.h"

@implementation CGTKScaleButton

-(GtkScaleButton *)SCALE_BUTTON
{
	return GTK_SCALE_BUTTON([self WIDGET]);
}

-(id)initWithSize:(GtkIconSize)size andMin:(NSNumber *)min andMax:(NSNumber *)max andStep:(NSNumber *)step andIcons:(NSArray *)icons
{
	self = [super initWithGtkWidget:gtk_scale_button_new (size, [min doubleValue], [max doubleValue], [step doubleValue], NULL)];
	
	if(self)
	{
		[self setIcons:icons];
	}
	
	return self;
}

-(void)setIcons:(NSArray *)icons
{
	int i;
	const gchar * gIcons[[icons count] + 1];
	for(i = 0; i < [icons count]; i++)
	{
		gIcons[i] = [[icons objectAtIndex:i] UTF8String];
	}
	gIcons[[icons count] + 1] = NULL;

	gtk_scale_button_set_icons ([self SCALE_BUTTON], gIcons);
}

-(NSNumber *)getValue
{
	return [NSNumber numberWithDouble:gtk_scale_button_get_value ([self SCALE_BUTTON])];
}

-(void)setValue:(NSNumber *)value
{
	gtk_scale_button_set_value ([self SCALE_BUTTON], [value doubleValue]);
}

-(GtkAdjustment *)getAdjustment
{
	return gtk_scale_button_get_adjustment ([self SCALE_BUTTON]);
}

-(void)setAdjustment:(GtkAdjustment *)adjustment
{
	gtk_scale_button_set_adjustment ([self SCALE_BUTTON], adjustment);
}

-(CGTKWidget *)getPlusButton
{
	return [CGTKWidget widgetWithGtkWidget:gtk_scale_button_get_plus_button ([self SCALE_BUTTON])];
}

-(CGTKWidget *)getMinusButton
{
	return [CGTKWidget widgetWithGtkWidget:gtk_scale_button_get_minus_button ([self SCALE_BUTTON])];
}

-(CGTKWidget *)getPopup
{
	return [CGTKWidget widgetWithGtkWidget:gtk_scale_button_get_popup ([self SCALE_BUTTON])];
}

@end
