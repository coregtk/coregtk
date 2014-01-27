/*
 * CGTKHSV.h
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

/*
 * Objective-C imports
 */
#import "CGTKWidget.h"

@interface CGTKHSV : CGTKWidget
{
	
}

/**
 * Returns internal GtkHSV
 */
-(GtkHSV *)HSV;

/**
 * Forwards message to:
 * GtkWidget* gtk_hsv_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * void gtk_hsv_set_color (GtkHSV* hsv, double h, double s, double v)
 */
-(void)setColorWithH:(NSNumber *)h andS:(NSNumber *)s andV:(NSNumber *)v;

/**
 * Forwards message to:
 * void gtk_hsv_get_color (GtkHSV* hsv, gdouble* h, gdouble* s, gdouble* v)
 */
-(void)getColorWithH:(NSNumber **)h andS:(NSNumber **)s andV:(NSNumber **)v;

/**
 * Forwards message to:
 * void gtk_hsv_set_metrics (GtkHSV* hsv, gint size, gint ring_width)
 */
-(void)setMetricsWithSize:(NSNumber *)size andRingWidth:(NSNumber *)ringWidth;

/**
 * Forwards message to:
 * void gtk_hsv_get_metrics (GtkHSV* hsv, gint* size, gint* ring_width)
 */
-(void)getMetricsWithSize:(NSNumber **)size andRingWidth:(NSNumber **)ringWidth;

/**
 * Forwards message to:
 * gboolean gtk_hsv_is_adjusting (GtkHSV* hsv)
 */
-(BOOL)isAdjusting;

/**
 * Forwards message to:
 * void gtk_hsv_to_rgb (gdouble h, gdouble s, gdouble v, gdouble* r, gdouble* g, gdouble* b)
 */
-(void)toRgbWithH:(NSNumber *)h andS:(NSNumber *)s andV:(NSNumber *)v andR:(NSNumber **)r andG:(NSNumber **)g andB:(NSNumber **)b;

@end
