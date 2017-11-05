/*
 * CGTKSpinButton.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSpinButton.h"

@implementation CGTKSpinButton

-(id)initWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits
{
	self = [super initWithGObject:(GObject *)gtk_spin_button_new(adjustment, climbRate, digits)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step
{
	self = [super initWithGObject:(GObject *)gtk_spin_button_new_with_range(min, max, step)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSpinButton*)SPINBUTTON
{
	return GTK_SPIN_BUTTON([self GOBJECT]);
}

-(void)configureWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits
{
	gtk_spin_button_configure(GTK_SPIN_BUTTON([self GOBJECT]), adjustment, climbRate, digits);
}

-(GtkAdjustment*)getAdjustment
{
	return gtk_spin_button_get_adjustment(GTK_SPIN_BUTTON([self GOBJECT]));
}

-(guint)getDigits
{
	return gtk_spin_button_get_digits(GTK_SPIN_BUTTON([self GOBJECT]));
}

-(void)getIncrementsWithStep:(gdouble*) step andPage:(gdouble*) page
{
	gtk_spin_button_get_increments(GTK_SPIN_BUTTON([self GOBJECT]), step, page);
}

-(BOOL)getNumeric
{
	return (gtk_spin_button_get_numeric(GTK_SPIN_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)getRangeWithMin:(gdouble*) min andMax:(gdouble*) max
{
	gtk_spin_button_get_range(GTK_SPIN_BUTTON([self GOBJECT]), min, max);
}

-(BOOL)getSnapToTicks
{
	return (gtk_spin_button_get_snap_to_ticks(GTK_SPIN_BUTTON([self GOBJECT])) ? YES : NO);
}

-(GtkSpinButtonUpdatePolicy)getUpdatePolicy
{
	return gtk_spin_button_get_update_policy(GTK_SPIN_BUTTON([self GOBJECT]));
}

-(gdouble)getValue
{
	return gtk_spin_button_get_value(GTK_SPIN_BUTTON([self GOBJECT]));
}

-(gint)getValueAsInt
{
	return gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON([self GOBJECT]));
}

-(BOOL)getWrap
{
	return (gtk_spin_button_get_wrap(GTK_SPIN_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setAdjustment:(GtkAdjustment*) adjustment
{
	gtk_spin_button_set_adjustment(GTK_SPIN_BUTTON([self GOBJECT]), adjustment);
}

-(void)setDigits:(guint) digits
{
	gtk_spin_button_set_digits(GTK_SPIN_BUTTON([self GOBJECT]), digits);
}

-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page
{
	gtk_spin_button_set_increments(GTK_SPIN_BUTTON([self GOBJECT]), step, page);
}

-(void)setNumeric:(BOOL) numeric
{
	gtk_spin_button_set_numeric(GTK_SPIN_BUTTON([self GOBJECT]), (numeric ? TRUE : FALSE));
}

-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max
{
	gtk_spin_button_set_range(GTK_SPIN_BUTTON([self GOBJECT]), min, max);
}

-(void)setSnapToTicks:(BOOL) snapToTicks
{
	gtk_spin_button_set_snap_to_ticks(GTK_SPIN_BUTTON([self GOBJECT]), (snapToTicks ? TRUE : FALSE));
}

-(void)setUpdatePolicy:(GtkSpinButtonUpdatePolicy) policy
{
	gtk_spin_button_set_update_policy(GTK_SPIN_BUTTON([self GOBJECT]), policy);
}

-(void)setValue:(gdouble) value
{
	gtk_spin_button_set_value(GTK_SPIN_BUTTON([self GOBJECT]), value);
}

-(void)setWrap:(BOOL) wrap
{
	gtk_spin_button_set_wrap(GTK_SPIN_BUTTON([self GOBJECT]), (wrap ? TRUE : FALSE));
}

-(void)spinWithDirection:(GtkSpinType) direction andIncrement:(gdouble) increment
{
	gtk_spin_button_spin(GTK_SPIN_BUTTON([self GOBJECT]), direction, increment);
}

-(void)update
{
	gtk_spin_button_update(GTK_SPIN_BUTTON([self GOBJECT]));
}


@end