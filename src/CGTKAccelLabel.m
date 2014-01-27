/*
 * CGTKAccelLabel.m
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

#import "CGTKAccelLabel.h"

@implementation CGTKAccelLabel

-(GtkAccelLabel *)ACCEL_LABEL
{
	return GTK_ACCEL_LABEL([self WIDGET]);
}

-(id)init:(NSString *)string
{
	self = [super initWithGtkWidget:gtk_accel_label_new ([string UTF8String])];

	if(self)
	{

	}

	return self;
}

-(CGTKWidget *)getAccelWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_accel_label_get_accel_widget ([self ACCEL_LABEL])];
}

-(NSNumber *)getAccelWidth
{
	return [NSNumber numberWithUnsignedInt:gtk_accel_label_get_accel_width ([self ACCEL_LABEL])];
}

-(void)setAccelWidget:(CGTKWidget *)accelWidget
{
	gtk_accel_label_set_accel_widget ([self ACCEL_LABEL], [accelWidget WIDGET]);
}

-(void)setAccelClosure:(GClosure *)accelClosure
{
	gtk_accel_label_set_accel_closure ([self ACCEL_LABEL], accelClosure);
}

-(BOOL)refetch
{
	return [CGTK getBOOL:gtk_accel_label_refetch ([self ACCEL_LABEL])];
}

@end
