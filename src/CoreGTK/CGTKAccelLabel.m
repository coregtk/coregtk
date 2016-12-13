/*
 * CGTKAccelLabel.m
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
#import "CoreGTK/CGTKAccelLabel.h"

@implementation CGTKAccelLabel

-(id)init:(NSString*) string
{
	self = [super initWithGObject:(GObject *)gtk_accel_label_new([string UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAccelLabel*)ACCELLABEL
{
	return GTK_ACCEL_LABEL([self GOBJECT]);
}

-(void)getAccelWithAcceleratorKey:(guint*) acceleratorKey andAcceleratorMods:(GdkModifierType*) acceleratorMods
{
	gtk_accel_label_get_accel(GTK_ACCEL_LABEL([self GOBJECT]), acceleratorKey, acceleratorMods);
}

-(CGTKWidget*)getAccelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_accel_label_get_accel_widget(GTK_ACCEL_LABEL([self GOBJECT]))];
}

-(guint)getAccelWidth
{
	return gtk_accel_label_get_accel_width(GTK_ACCEL_LABEL([self GOBJECT]));
}

-(BOOL)refetch
{
	return (gtk_accel_label_refetch(GTK_ACCEL_LABEL([self GOBJECT])) ? YES : NO);
}

-(void)setAccelWithAcceleratorKey:(guint) acceleratorKey andAcceleratorMods:(GdkModifierType) acceleratorMods
{
	gtk_accel_label_set_accel(GTK_ACCEL_LABEL([self GOBJECT]), acceleratorKey, acceleratorMods);
}

-(void)setAccelClosure:(GClosure*) accelClosure
{
	gtk_accel_label_set_accel_closure(GTK_ACCEL_LABEL([self GOBJECT]), accelClosure);
}

-(void)setAccelWidget:(CGTKWidget*) accelWidget
{
	gtk_accel_label_set_accel_widget(GTK_ACCEL_LABEL([self GOBJECT]), [accelWidget WIDGET]);
}


@end
