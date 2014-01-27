/*
 * CGTKSpinButton.m
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

#import "CGTKSpinButton.h"

@implementation CGTKSpinButton

-(GtkSpinButton *)SPIN_BUTTON
{
	return GTK_SPIN_BUTTON([self WIDGET]);
}

-(void)configureWithAdjustment:(GtkAdjustment *)adjustment andClimbRate:(NSNumber *)climbRate andDigits:(NSNumber *)digits
{
	gtk_spin_button_configure([self SPIN_BUTTON], adjustment, [climbRate doubleValue], [digits unsignedIntValue]);
}

-(id)initWithAdjustment:(GtkAdjustment *)adjustment andClimbRate:(NSNumber *)climbRate andDigits:(NSNumber *)digits
{
	self = [super initWithGtkWidget:gtk_spin_button_new (adjustment, [climbRate doubleValue], [digits unsignedIntValue])];

	if(self)
	{

	}

	return self;
}

-(id)initWithRangeWithMin:(NSNumber *)min andMax:(NSNumber *)max andStep:(NSNumber *)step
{
	self = [super initWithGtkWidget:gtk_spin_button_new_with_range ([min doubleValue], [max doubleValue], [step doubleValue])];

	if(self)
	{

	}

	return self;
}

-(GtkAdjustment *)getAdjustment
{
	return gtk_spin_button_get_adjustment ([self SPIN_BUTTON]);
}

-(void)setAdjustment:(GtkAdjustment *)adjustment
{
	gtk_spin_button_set_adjustment([self SPIN_BUTTON], adjustment);
}

-(void)setDigits:(NSNumber *)digits
{
	gtk_spin_button_set_digits([self SPIN_BUTTON], [digits unsignedIntValue]);
}

-(NSNumber *)getDigits
{
	return [NSNumber numberWithUnsignedInt:gtk_spin_button_get_digits ([self SPIN_BUTTON])];
}

-(void)setIncrementsWithStep:(NSNumber *)step andPage:(NSNumber *)page
{
	gtk_spin_button_set_increments ([self SPIN_BUTTON], [step doubleValue], [page doubleValue]);
}

-(void)getIncrementsWithStep:(NSNumber **)step andPage:(NSNumber **)page
{
	gdouble gStep;
	gdouble gPage;
	
	gtk_spin_button_get_increments ([self SPIN_BUTTON], &gStep, &gPage);
	
	*step = [NSNumber numberWithDouble:gStep];
	*page = [NSNumber numberWithDouble:gPage];
}

-(void)setRangeWithMin:(NSNumber *)min andMax:(NSNumber *)max
{
	gtk_spin_button_set_range ([self SPIN_BUTTON], [min doubleValue], [max doubleValue]);
}

-(void)getRangeWithMin:(NSNumber **)min andMax:(NSNumber **)max
{
	gdouble gMin;
	gdouble gMax;
	
	gtk_spin_button_get_range ([self SPIN_BUTTON], &gMin, &gMax);
	
	*min = [NSNumber numberWithDouble:gMin];
	*max = [NSNumber numberWithDouble:gMax];
}

-(GtkSpinButtonUpdatePolicy)getUpdatePolicy
{
	return gtk_spin_button_get_update_policy ([self SPIN_BUTTON]);
}

-(BOOL)getNumeric
{
	return [CGTK getBOOL:gtk_spin_button_get_numeric ([self SPIN_BUTTON])];
}

-(BOOL)getWrap
{
	return [CGTK getBOOL:gtk_spin_button_get_wrap ([self SPIN_BUTTON])];
}

-(BOOL)getSnapToTicks
{
	return [CGTK getBOOL:gtk_spin_button_get_snap_to_ticks ([self SPIN_BUTTON])];
}

-(void)setSnapToTicks:(BOOL)snapToTicks
{
	gtk_spin_button_set_snap_to_ticks ([self SPIN_BUTTON], [CGTK getGboolean:snapToTicks]);
}

-(void)update
{
	gtk_spin_button_update ([self SPIN_BUTTON]);
}

-(NSNumber *)getValueAsInt
{
	return [NSNumber numberWithInt:gtk_spin_button_get_value_as_int([self SPIN_BUTTON])];
}

-(void)setValue:(NSNumber *)value
{
	gtk_spin_button_set_value ([self SPIN_BUTTON], [value doubleValue]);
}

-(NSNumber *)getValue
{
	return [NSNumber numberWithDouble:gtk_spin_button_get_value([self SPIN_BUTTON])];
}

-(void)setUpdatePolicy:(GtkSpinButtonUpdatePolicy)policy
{
	gtk_spin_button_set_update_policy ([self SPIN_BUTTON], policy);
}

-(void)setNumeric:(BOOL)numeric
{
	gtk_spin_button_set_numeric ([self SPIN_BUTTON], [CGTK getGboolean:numeric]);
}

-(void)spinWithDirection:(GtkSpinType)direction andIncrement:(NSNumber *)increment
{
	gtk_spin_button_spin ([self SPIN_BUTTON], direction, [increment doubleValue]);
}

-(void)setWrap:(BOOL)wrap
{
	gtk_spin_button_set_wrap ([self SPIN_BUTTON], [CGTK getGboolean:wrap]);
}

@end
