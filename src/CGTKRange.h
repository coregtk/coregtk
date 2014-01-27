/*
 * CGTKRange.h
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

@interface CGTKRange : CGTKWidget
{
	
}

/**
 * Returns internal GtkRange
 */
-(GtkRange *)RANGE;

/**
 * Forwards message to:
 * void gtk_range_set_adjustment (GtkRange* range, GtkAdjustment* adjustment)
 */
-(void)setAdjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_range_get_adjustment (GtkRange* range)
 */
-(GtkAdjustment *)getAdjustment;

/**
 * Forwards message to:
 * void gtk_range_set_inverted (GtkRange* range, gboolean setting)
 */
-(void)setInverted:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_range_get_inverted (GtkRange* range)
 */
-(BOOL)getInverted;

/**
 * Forwards message to:
 * void gtk_range_set_flippable (GtkRange* range, gboolean flippable)
 */
-(void)setFlippable:(BOOL)flippable;

/**
 * Forwards message to:
 * gboolean gtk_range_get_flippable (GtkRange* range)
 */
-(BOOL)getFlippable;

/**
 * Forwards message to:
 * void gtk_range_set_slider_size_fixed (GtkRange* range, gboolean size_fixed)
 */
-(void)setSliderSizeFixed:(BOOL)sizeFixed;

/**
 * Forwards message to:
 * gboolean gtk_range_get_slider_size_fixed (GtkRange* range)
 */
-(BOOL)getSliderSizeFixed;

/**
 * Forwards message to:
 * void gtk_range_set_min_slider_size (GtkRange* range, gboolean min_size)
 */
-(void)setMinSliderSize:(BOOL)minSize;

/**
 * Forwards message to:
 * gint gtk_range_get_min_slider_size (GtkRange* range)
 */
-(NSNumber *)getMinSliderSize;

/**
 * Forwards message to:
 * void gtk_range_get_range_rect (GtkRange* range, GdkRectangle* range_rect)
 */
-(void)getRangeRect:(GdkRectangle *)rangeRect;

/**
 * Forwards message to:
 * void gtk_range_get_slider_range (GtkRange* range, gint* slider_start, gint* slider_end)
 */
-(void)getSliderRangeWithSliderStart:(NSNumber **)sliderStart andSliderEnd:(NSNumber **)sliderEnd;

/**
 * Forwards message to:
 * void gtk_range_set_lower_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity)
 */
-(void)setLowerStepperSensitivity:(GtkSensitivityType)sensitivity;

/**
 * Forwards message to:
 * GtkSensitivityType gtk_range_get_lower_stepper_sensitivity (GtkRange* range)
 */
-(GtkSensitivityType)getLowerStepperSensitivity;

/**
 * Forwards message to:
 * void gtk_range_set_upper_stepper_sensitivity (GtkRange* range, GtkSensitivityType sensitivity)
 */
-(void)setUpperStepperSensitivity:(GtkSensitivityType)sensitivity;

/**
 * Forwards message to:
 * GtkSensitivityType gtk_range_get_upper_stepper_sensitivity (GtkRange* range)
 */
-(GtkSensitivityType)getUpperStepperSensitivity;

/**
 * Forwards message to:
 * void gtk_range_set_increments (GtkRange* range, gdouble step, gdouble page)
 */
-(void)setIncrementsWithStep:(NSNumber *)step andPage:(NSNumber *)page;

/**
 * Forwards message to:
 * void gtk_range_set_range (GtkRange* range, gdouble min, gdouble max)
 */
-(void)setRangeWithMin:(NSNumber *)min andMax:(NSNumber *)max;

/**
 * Forwards message to:
 * void gtk_range_set_value (GtkRange* range, gdouble value)
 */
-(void)setValue:(NSNumber *)value;

/**
 * Forwards message to:
 * gdouble gtk_range_get_value (GtkRange* range)
 */
-(NSNumber *)getValue;

/**
 * Forwards message to:
 * void gtk_range_set_show_fill_level (GtkRange* range, gboolean show_fill_level)
 */
-(void)setShowFillLevel:(BOOL)showFillLevel;

/**
 * Forwards message to:
 * gboolean gtk_range_get_show_fill_level (GtkRange* range)
 */
-(BOOL)getShowFillLevel;

/**
 * Forwards message to:
 * void gtk_range_set_restrict_to_fill_level (GtkRange* range, gboolean restrict_to_fill_level)
 */
-(void)setRestrictToFillLevel:(BOOL)restrictToFillLevel;

/**
 * Forwards message to:
 * gboolean gtk_range_get_restrict_to_fill_level (GtkRange* range)
 */
-(BOOL)getRestrictToFillLevel;

/**
 * Forwards message to:
 * void gtk_range_set_fill_level (GtkRange* range, gdouble fill_level)
 */
-(void)setFillLevel:(NSNumber *)fillLevel;

/**
 * Forwards message to:
 * gdouble gtk_range_get_fill_level (GtkRange* range)
 */
-(NSNumber *)getFillLevel;

/**
 * Forwards message to:
 * void gtk_range_set_round_digits (GtkRange* range, gint round_digits)
 */
-(void)setRoundDigits:(NSNumber *)roundDigits;

/**
 * Forwards message to:
 * gint gtk_range_get_round_digits (GtkRange* range)
 */
-(NSNumber *)getRoundDigits;

@end
