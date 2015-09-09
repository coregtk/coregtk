/*
 * CGTKSpinButton.h
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
#import "CoreGTK/CGTKEntry.h"

@interface CGTKSpinButton : CGTKEntry
{

}


/**
 * Constructors
 */
-(id)initWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits;
-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step;

/**
 * Methods
 */

-(GtkSpinButton*)SPINBUTTON;

/**
 * -(void*)configureWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits;
 *
 * @param adjustment
 * @param climbRate
 * @param digits
 */
-(void)configureWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits;

/**
 * -(GtkAdjustment**)getAdjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getAdjustment;

/**
 * -(guint*)getDigits;
 *
 * @returns guint
 */
-(guint)getDigits;

/**
 * -(void*)getIncrementsWithStep:(gdouble*) step andPage:(gdouble*) page;
 *
 * @param step
 * @param page
 */
-(void)getIncrementsWithStep:(gdouble*) step andPage:(gdouble*) page;

/**
 * -(BOOL*)getNumeric;
 *
 * @returns BOOL
 */
-(BOOL)getNumeric;

/**
 * -(void*)getRangeWithMin:(gdouble*) min andMax:(gdouble*) max;
 *
 * @param min
 * @param max
 */
-(void)getRangeWithMin:(gdouble*) min andMax:(gdouble*) max;

/**
 * -(BOOL*)getSnapToTicks;
 *
 * @returns BOOL
 */
-(BOOL)getSnapToTicks;

/**
 * -(GtkSpinButtonUpdatePolicy*)getUpdatePolicy;
 *
 * @returns GtkSpinButtonUpdatePolicy
 */
-(GtkSpinButtonUpdatePolicy)getUpdatePolicy;

/**
 * -(gdouble*)getValue;
 *
 * @returns gdouble
 */
-(gdouble)getValue;

/**
 * -(gint*)getValueAsInt;
 *
 * @returns gint
 */
-(gint)getValueAsInt;

/**
 * -(BOOL*)getWrap;
 *
 * @returns BOOL
 */
-(BOOL)getWrap;

/**
 * -(void*)setAdjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setAdjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setDigits:(guint) digits;
 *
 * @param digits
 */
-(void)setDigits:(guint) digits;

/**
 * -(void*)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page;
 *
 * @param step
 * @param page
 */
-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page;

/**
 * -(void*)setNumeric:(BOOL) numeric;
 *
 * @param numeric
 */
-(void)setNumeric:(BOOL) numeric;

/**
 * -(void*)setRangeWithMin:(gdouble) min andMax:(gdouble) max;
 *
 * @param min
 * @param max
 */
-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max;

/**
 * -(void*)setSnapToTicks:(BOOL) snapToTicks;
 *
 * @param snapToTicks
 */
-(void)setSnapToTicks:(BOOL) snapToTicks;

/**
 * -(void*)setUpdatePolicy:(GtkSpinButtonUpdatePolicy) policy;
 *
 * @param policy
 */
-(void)setUpdatePolicy:(GtkSpinButtonUpdatePolicy) policy;

/**
 * -(void*)setValue:(gdouble) value;
 *
 * @param value
 */
-(void)setValue:(gdouble) value;

/**
 * -(void*)setWrap:(BOOL) wrap;
 *
 * @param wrap
 */
-(void)setWrap:(BOOL) wrap;

/**
 * -(void*)spinWithDirection:(GtkSpinType) direction andIncrement:(gdouble) increment;
 *
 * @param direction
 * @param increment
 */
-(void)spinWithDirection:(GtkSpinType) direction andIncrement:(gdouble) increment;

/**
 * -(void*)update;
 *
 */
-(void)update;

@end