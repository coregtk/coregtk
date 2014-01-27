/*
 * CGTKHSV.m
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

#import "CGTKHSV.h"

@implementation CGTKHSV

-(GtkHSV *)HSV
{
	return GTK_HSV([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_hsv_new ()];

	if(self)
	{

	}

	return self;
}

-(void)setColorWithH:(NSNumber *)h andS:(NSNumber *)s andV:(NSNumber *)v
{
	gtk_hsv_set_color ([self HSV], [h doubleValue], [s doubleValue], [v doubleValue]);
}

-(void)getColorWithH:(NSNumber **)h andS:(NSNumber **)s andV:(NSNumber **)v
{
	gdouble gH;
	gdouble gS;
	gdouble gV;
	
	gtk_hsv_get_color ([self HSV], &gH, &gS, &gV);
	
	*h = [NSNumber numberWithDouble:gH];
	*s = [NSNumber numberWithDouble:gS];
	*v = [NSNumber numberWithDouble:gV];
}

-(void)setMetricsWithSize:(NSNumber *)size andRingWidth:(NSNumber *)ringWidth
{
	gtk_hsv_set_metrics ([self HSV], [size intValue], [ringWidth intValue]);
}

-(void)getMetricsWithSize:(NSNumber **)size andRingWidth:(NSNumber **)ringWidth
{
	gint gSize;
	gint gRingWidth;
	
	gtk_hsv_get_metrics ([self HSV], &gSize, &gRingWidth);
	
	*size = [NSNumber numberWithInt:gSize];
	*ringWidth = [NSNumber numberWithInt:gRingWidth];
}

-(BOOL)isAdjusting
{
	return [CGTK getBOOL:gtk_hsv_is_adjusting ([self HSV])];
}

-(void)toRgbWithH:(NSNumber *)h andS:(NSNumber *)s andV:(NSNumber *)v andR:(NSNumber **)r andG:(NSNumber **)g andB:(NSNumber **)b
{
	gdouble gR;
	gdouble gG;
	gdouble gB;
	
	gtk_hsv_to_rgb ([h doubleValue], [s doubleValue], [v doubleValue], &gR, &gG, &gB);
	
	*r = [NSNumber numberWithDouble:gR];
	*g = [NSNumber numberWithDouble:gG];
	*b = [NSNumber numberWithDouble:gB];
}

@end
