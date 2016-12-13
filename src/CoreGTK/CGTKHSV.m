/*
 * CGTKHSV.m
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
#import "CoreGTK/CGTKHSV.h"

@implementation CGTKHSV

+(void)gtkHsvToRgbWithH:(gdouble) h andS:(gdouble) s andV:(gdouble) v andR:(gdouble*) r andG:(gdouble*) g andB:(gdouble*) b
{
	gtk_hsv_to_rgb(h, s, v, r, g, b);
}

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_hsv_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHSV*)HSV
{
	return GTK_HSV([self GOBJECT]);
}

-(void)gtkHsvGetColorWithH:(gdouble*) h andS:(gdouble*) s andV:(gdouble*) v
{
	gtk_hsv_get_color(GTK_HSV([self GOBJECT]), h, s, v);
}

-(void)gtkHsvGetMetricsWithSize:(gint*) size andRingWidth:(gint*) ringWidth
{
	gtk_hsv_get_metrics(GTK_HSV([self GOBJECT]), size, ringWidth);
}

-(BOOL)gtkHsvIsAdjusting
{
	return (gtk_hsv_is_adjusting(GTK_HSV([self GOBJECT])) ? YES : NO);
}

-(void)gtkHsvSetColorWithH:(double) h andS:(double) s andV:(double) v
{
	gtk_hsv_set_color(GTK_HSV([self GOBJECT]), h, s, v);
}

-(void)gtkHsvSetMetricsWithSize:(gint) size andRingWidth:(gint) ringWidth
{
	gtk_hsv_set_metrics(GTK_HSV([self GOBJECT]), size, ringWidth);
}


@end