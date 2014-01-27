/*
 * CGTKAccelLabel.h
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
#import "CGTKLabel.h"

@interface CGTKAccelLabel : CGTKLabel
{
	
}

/**
 * Returns internal GtkAccelLabel
 */
-(GtkAccelLabel *)ACCEL_LABEL;

/**
 * Forwards message to:
 * GtkWidget* gtk_accel_label_new (const gchar* string)
 */
-(id)init:(NSString *)string;

/**
 * Forwards message to:
 * GtkWidget* gtk_accel_label_get_accel_widget (GtkAccelLabel* accel_label)
 */
-(CGTKWidget *)getAccelWidget;

/**
 * Forwards message to:
 * guint gtk_accel_label_get_accel_width (GtkAccelLabel* accel_label)
 */
-(NSNumber *)getAccelWidth;

/**
 * Forwards message to:
 * void gtk_accel_label_set_accel_widget (GtkAccelLabel* accel_label, GtkWidget* accel_widget)
 */
-(void)setAccelWidget:(CGTKWidget *)accelWidget;

/**
 * Forwards message to:
 * void gtk_accel_label_set_accel_closure (GtkAccelLabel* accel_label, GClosure* accel_closure)
 */
-(void)setAccelClosure:(GClosure *)accelClosure;

/**
 * Forwards message to:
 * gboolean gtk_accel_label_refetch (GtkAccelLabel* accel_label)
 */
-(BOOL)refetch;

@end
