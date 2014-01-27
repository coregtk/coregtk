/*
 * CGTKSpinButton.h
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
#import "CGTKEntry.h"

@interface CGTKSpinButton : CGTKEntry
{
	
}

/**
 * Returns internal GtkSpinButton
 */
-(GtkSpinButton *)SPIN_BUTTON;

/**
 * Forwards message to:
 * void gtk_spin_button_configure (GtkSpinButton *spin_button, GtkAdjustment* adjustment, gdouble climb_rate, guint digits)
 */
-(void)configureWithAdjustment:(GtkAdjustment *)adjustment andClimbRate:(NSNumber *)climbRate andDigits:(NSNumber *)digits;

/**
 * Forwards message to:
 * GtkWidget* gtk_spin_button_new (GtkAdjustment* adjustment, gdouble climb_rate, guint digits)
 */
-(id)initWithAdjustment:(GtkAdjustment *)adjustment andClimbRate:(NSNumber *)climbRate andDigits:(NSNumber *)digits;

/**
 * Forwards message to:
 * GtkWidget* gtk_spin_button_new_with_range (gdouble min, gdouble max, gdouble step)
 */
-(id)initWithRangeWithMin:(NSNumber *)min andMax:(NSNumber *)max andStep:(NSNumber *)step;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_spin_button_get_adjustment (GtkSpinButton* spin_button)
 */
-(GtkAdjustment *)getAdjustment;

/**
 * Forwards message to:
 * void gtk_spin_button_set_adjustment (GtkSpinButton* spin_button, GtkAdjustment* adjustment)
 */
-(void)setAdjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * void gtk_spin_button_set_digits (GtkSpinButton* spin_button, guint digits)
 */
-(void)setDigits:(NSNumber *)digits;

/**
 * Forwards message to:
 * guint gtk_spin_button_get_digits (GtkSpinButton* spin_button)
 */
-(NSNumber *)getDigits;

/**
 * Forwards message to:
 * void gtk_spin_button_set_increments (GtkSpinButton* spin_button, gdouble step, gdouble page)
 */
-(void)setIncrementsWithStep:(NSNumber *)step andPage:(NSNumber *)page;

/**
 * Forwards message to:
 * void gtk_spin_button_get_increments (GtkSpinButton* spin_button, gdouble* step, gdouble* page)
 */
-(void)getIncrementsWithStep:(NSNumber **)step andPage:(NSNumber **)page;

/**
 * Forwards message to:
 * void gtk_spin_button_get_range (GtkSpinButton* spin_button, gdouble* min, gdouble* max)
 */
-(void)getRangeWithMin:(NSNumber **)min andMax:(NSNumber **)max;

/**
 * Forwards message to:
 * GtkSpinButtonUpdatePolicy gtk_spin_button_get_update_policy (GtkSpinButton* spin_button)
 */
-(GtkSpinButtonUpdatePolicy)getUpdatePolicy;

/**
 * Forwards message to:
 * gboolean gtk_spin_button_get_numeric (GtkSpinButton* spin_button)
 */
-(BOOL)getNumeric;

/**
 * Forwards message to:
 * gboolean gtk_spin_button_get_wrap (GtkSpinButton* spin_button)
 */
-(BOOL)getWrap;

/**
 * Forwards message to:
 * gboolean gtk_spin_button_get_snap_to_ticks (GtkSpinButton* spin_button)
 */
-(BOOL)getSnapToTicks;

/**
 * Forwards message to:
 * void gtk_spin_button_set_snap_to_ticks (GtkSpinButton* spin_button, gboolean snap_to_ticks)
 */
-(void)setSnapToTicks:(BOOL)snapToTicks;

/**
 * Forwards message to:
 * void gtk_spin_button_update (GtkSpinButton* spin_button)
 */
-(void)update;

/**
 * Forwards message to:
 * gint gtk_spin_button_get_value_as_int (GtkSpinButton *spin_button);
 */
-(NSNumber *)getValueAsInt;

/**
 * Forwards message to:
 * gdouble gtk_spin_button_get_value (GtkSpinButton *spin_button);
 */
-(NSNumber *)getValue;

/**
 * Forwards message to:
 * void gtk_spin_button_set_value (GtkSpinButton *spin_button, gdouble value);
 */
-(void)setValue:(NSNumber *)value;

/**
 * Forwards message to:
 * void gtk_spin_button_set_update_policy (GtkSpinButton *spin_button, GtkSpinButtonUpdatePolicy policy);
 */
-(void)setUpdatePolicy:(GtkSpinButtonUpdatePolicy)policy;

/**
 * Forwards message to:
 * void gtk_spin_button_set_numeric (GtkSpinButton *spin_button, gboolean numeric);
 */
-(void)setNumeric:(BOOL)numeric;

/**
 * Forwards message to:
 * void gtk_spin_button_spin (GtkSpinButton *spin_button, GtkSpinType direction, gdouble increment);
 */
-(void)spinWithDirection:(GtkSpinType)direction andIncrement:(NSNumber *)increment;

/**
 * Forwards message to:
 * void gtk_spin_button_set_wrap (GtkSpinButton *spin_button, gboolean wrap);
 */
-(void)setWrap:(BOOL)wrap;

@end
