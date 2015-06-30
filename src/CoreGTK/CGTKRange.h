/*
 * CGTKRange.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKRange : CGTKWidget
{

}


/**
 * Methods
 */
-(GtkRange*)RANGE;
-(GtkAdjustment*)getAdjustment;
-(gdouble)getFillLevel;
-(BOOL)getFlippable;
-(BOOL)getInverted;
-(GtkSensitivityType)getLowerStepperSensitivity;
-(gint)getMinSliderSize;
-(void)getRangeRect:(GdkRectangle*) rangeRect;
-(BOOL)getRestrictToFillLevel;
-(gint)getRoundDigits;
-(BOOL)getShowFillLevel;
-(void)getSliderRangeWithSliderStart:(gint*) sliderStart andSliderEnd:(gint*) sliderEnd;
-(BOOL)getSliderSizeFixed;
-(GtkSensitivityType)getUpperStepperSensitivity;
-(gdouble)getValue;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setFillLevel:(gdouble) fillLevel;
-(void)setFlippable:(BOOL) flippable;
-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page;
-(void)setInverted:(BOOL) setting;
-(void)setLowerStepperSensitivity:(GtkSensitivityType) sensitivity;
-(void)setMinSliderSize:(gint) minSize;
-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max;
-(void)setRestrictToFillLevel:(BOOL) restrictToFillLevel;
-(void)setRoundDigits:(gint) roundDigits;
-(void)setShowFillLevel:(BOOL) showFillLevel;
-(void)setSliderSizeFixed:(BOOL) sizeFixed;
-(void)setUpperStepperSensitivity:(GtkSensitivityType) sensitivity;
-(void)setValue:(gdouble) value;

@end