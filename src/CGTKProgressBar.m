/*
 * CGTKProgressBar.m
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

#import "CGTKProgressBar.h"

@implementation CGTKProgressBar

-(GtkProgressBar *)PROGRESS_BAR
{
	return GTK_PROGRESS_BAR([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget: gtk_progress_bar_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)pulse
{
	gtk_progress_bar_pulse ([self PROGRESS_BAR]);
}

-(void)setText:(NSString *)text
{
	gtk_progress_bar_set_text ([self PROGRESS_BAR], [text UTF8String]);
}

-(NSString *)getText
{
	return [NSString stringWithUTF8String:gtk_progress_bar_get_text ([self PROGRESS_BAR])];
}

-(void)setFraction:(NSNumber *)fraction
{
	gtk_progress_bar_set_fraction ([self PROGRESS_BAR], [fraction doubleValue]);
}

-(void)setPulseStep:(NSNumber *)fraction
{
	gtk_progress_bar_set_pulse_step ([self PROGRESS_BAR], [fraction doubleValue]);
}

-(void)setOrientation:(GtkProgressBarOrientation)orientation
{
	gtk_progress_bar_set_orientation ([self PROGRESS_BAR], orientation);
}

-(NSNumber *)getFraction
{
	return [NSNumber numberWithDouble: gtk_progress_bar_get_fraction ([self PROGRESS_BAR])];
}

-(NSNumber *)getPulseStep
{
	return [NSNumber numberWithDouble: gtk_progress_bar_get_pulse_step ([self PROGRESS_BAR])];
}

-(GtkProgressBarOrientation)getOrientation
{
	return gtk_progress_bar_get_orientation ([self PROGRESS_BAR]);
}

-(void)setEllipsize:(PangoEllipsizeMode)mode
{
	gtk_progress_bar_set_ellipsize ([self PROGRESS_BAR], mode);
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_progress_bar_get_ellipsize ([self PROGRESS_BAR]);
}

@end
