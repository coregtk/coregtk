/*
 * CGTKScaleButton.h
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
#import "CGTKButton.h"

@interface CGTKScaleButton : CGTKButton
{
	
}

-(GtkScaleButton *)SCALE_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_scale_button_new (GtkIconSize size, gdouble min, gdouble max, gdouble step, const gchar** icons)
 */
-(id)initWithSize:(GtkIconSize)size andMin:(NSNumber *)min andMax:(NSNumber *)max andStep:(NSNumber *)step andIcons:(NSArray *)icons;

/*
 * Forwards message to:
 * void gtk_scale_button_set_icons (GtkScaleButton* button, const gchar** icons)
 */
-(void)setIcons:(NSArray *)icons;

/*
 * Forwards message to:
 * gdouble gtk_scale_button_get_value (GtkScaleButton* button)
 */
-(NSNumber *)getValue;

/*
 * Forwards message to:
 * void gtk_scale_button_set_value (GtkScaleButton* button, gdouble value)
 */
-(void)setValue:(NSNumber *)value;

/*
 * Forwards message to:
 * GtkAdjustment* gtk_scale_button_get_adjustment (GtkScaleButton* button)
 */
-(GtkAdjustment *)getAdjustment;

/*
 * Forwards message to:
 * void gtk_scale_button_set_adjustment (GtkScaleButton* button, GtkAdjustment* adjustment)
 */
-(void)setAdjustment:(GtkAdjustment *)adjustment;

/*
 * Forwards message to:
 * GtkWidget* gtk_scale_button_get_plus_button (GtkScaleButton* button)
 */
-(CGTKWidget *)getPlusButton;

/*
 * Forwards message to:
 * GtkWidget* gtk_scale_button_get_minus_button (GtkScaleButton* button)
 */
-(CGTKWidget *)getMinusButton;

/*
 * Forwards message to:
 * GtkWidget* gtk_scale_button_get_popup (GtkScaleButton* button)
 */
-(CGTKWidget *)getPopup;

@end
