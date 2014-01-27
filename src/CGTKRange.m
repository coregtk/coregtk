/*
 * CGTKRange.m
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

#import "CGTKRange.h"

@implementation CGTKRange

-(GtkRange *)RANGE
{
	return GTK_RANGE([self WIDGET]);
}

-(void)setAdjustment:(GtkAdjustment *)adjustment
{
	gtk_range_set_adjustment ([self RANGE], adjustment);
}

-(GtkAdjustment *)getAdjustment
{
	return gtk_range_get_adjustment ([self RANGE]);
}

-(void)setInverted:(BOOL)setting
{
	gtk_range_set_inverted ([self RANGE], [CGTK getGboolean:setting]);
}

-(BOOL)getInverted
{
	return [CGTK getBOOL:gtk_range_get_inverted ([self RANGE])];
}

-(void)setFlippable:(BOOL)flippable
{
	gtk_range_set_flippable ([self RANGE], [CGTK getGboolean:flippable]);
}

-(BOOL)getFlippable
{
	return [CGTK getBOOL:gtk_range_get_flippable ([self RANGE])];
}

-(void)setSliderSizeFixed:(BOOL)sizeFixed
{
	gtk_range_set_slider_size_fixed ([self RANGE], [CGTK getGboolean:sizeFixed]);
}

-(BOOL)getSliderSizeFixed
{
	return [CGTK getBOOL:gtk_range_get_slider_size_fixed ([self RANGE])];
}

-(void)setMinSliderSize:(BOOL)minSize
{
	gtk_range_set_min_slider_size ([self RANGE], [CGTK getGboolean: minSize]);
}

-(NSNumber *)getMinSliderSize
{
	return [NSNumber numberWithInt:gtk_range_get_min_slider_size ([self RANGE])];
}

-(void)getRangeRect:(GdkRectangle *)rangeRect
{
	gtk_range_get_range_rect ([self RANGE], rangeRect);
}

-(void)getSliderRangeWithSliderStart:(NSNumber **)sliderStart andSliderEnd:(NSNumber **)sliderEnd
{
	gint gSliderStart;
	gint gSliderEnd;
	
	gtk_range_get_slider_range ([self RANGE], &gSliderStart, &gSliderEnd);
	
	*sliderStart = [NSNumber numberWithInt:gSliderStart];
	*sliderEnd = [NSNumber numberWithInt:gSliderEnd];
}

-(void)setLowerStepperSensitivity:(GtkSensitivityType)sensitivity
{
	gtk_range_set_lower_stepper_sensitivity ([self RANGE], sensitivity);
}

-(GtkSensitivityType)getLowerStepperSensitivity
{
	return gtk_range_get_lower_stepper_sensitivity ([self RANGE]);
}

-(void)setUpperStepperSensitivity:(GtkSensitivityType)sensitivity
{
	gtk_range_set_upper_stepper_sensitivity ([self RANGE], sensitivity);
}

-(GtkSensitivityType)getUpperStepperSensitivity
{
	return gtk_range_get_upper_stepper_sensitivity ([self RANGE]);
}

-(void)setIncrementsWithStep:(NSNumber *)step andPage:(NSNumber *)page
{
	gtk_range_set_increments ([self RANGE], [step doubleValue], [page doubleValue]);
}

-(void)setRangeWithMin:(NSNumber *)min andMax:(NSNumber *)max
{
	gtk_range_set_range ([self RANGE], [min doubleValue], [max doubleValue]);
}

-(void)setValue:(NSNumber *)value
{
	gtk_range_set_value ([self RANGE], [value doubleValue]);
}

-(NSNumber *)getValue
{
	return [NSNumber numberWithDouble:gtk_range_get_value ([self RANGE])];
}

-(void)setShowFillLevel:(BOOL)showFillLevel
{
	gtk_range_set_show_fill_level ([self RANGE], [CGTK getGboolean: showFillLevel]);
}

-(BOOL)getShowFillLevel
{
	return [CGTK getBOOL:gtk_range_get_show_fill_level ([self RANGE])];
}

-(void)setRestrictToFillLevel:(BOOL)restrictToFillLevel
{
	gtk_range_set_restrict_to_fill_level ([self RANGE], [CGTK getGboolean: restrictToFillLevel]);
}

-(BOOL)getRestrictToFillLevel
{
	return [CGTK getBOOL:gtk_range_get_restrict_to_fill_level ([self RANGE])];
}

-(void)setFillLevel:(NSNumber *)fillLevel
{
	gtk_range_set_fill_level ([self RANGE], [fillLevel doubleValue]);
}

-(NSNumber *)getFillLevel
{
	return [NSNumber numberWithDouble:gtk_range_get_fill_level ([self RANGE])];
}

-(void)setRoundDigits:(NSNumber *)roundDigits
{
	gtk_range_set_round_digits ([self RANGE], [roundDigits intValue]);
}

-(NSNumber *)getRoundDigits
{
	return [NSNumber numberWithInt:gtk_range_get_round_digits ([self RANGE])];
}

@end
