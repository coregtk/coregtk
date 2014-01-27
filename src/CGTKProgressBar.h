/*
 * CGTKProgressBar.h
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
#import "CGTKProgress.h"

@interface CGTKProgressBar : CGTKProgress
{
	
}

/**
 * Returns internal GtkProgressBar
 */
-(GtkProgressBar *)PROGRESS_BAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_progress_bar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * void gtk_progress_bar_pulse (GtkProgressBar* pbar)
 */
-(void)pulse;

/**
 * Forwards message to:
 * void gtk_progress_bar_set_text (GtkProgressBar* pbar, const gchar* text)
 */
-(void)setText:(NSString *)text;

/**
 * Forwards message to:
 * const gchar * gtk_progress_bar_get_text (GtkProgressBar* pbar)
 */
-(NSString *)getText;

/**
 * Forwards message to:
 * void gtk_progress_bar_set_fraction (GtkProgressBar* pbar, gdouble fraction)
 */
-(void)setFraction:(NSNumber *)fraction;

/**
 * Forwards message to:
 * void gtk_progress_bar_set_pulse_step (GtkProgressBar* pbar, gdouble fraction)
 */
-(void)setPulseStep:(NSNumber *)fraction;

/**
 * Forwards message to:
 * void gtk_progress_bar_set_orientation (GtkProgressBar* pbar, GtkProgressBarOrientation orientation)
 */
-(void)setOrientation:(GtkProgressBarOrientation)orientation;

/**
 * Forwards message to:
 * gdouble gtk_progress_bar_get_fraction (GtkProgressBar* pbar)
 */
-(NSNumber *)getFraction;

/**
 * Forwards message to:
 * gdouble gtk_progress_bar_get_pulse_step (GtkProgressBar* pbar)
 */
-(NSNumber *)getPulseStep;

/**
 * Forwards message to:
 * GtkProgressBarOrientation gtk_progress_bar_get_orientation (GtkProgressBar* pbar)
 */
-(GtkProgressBarOrientation)getOrientation;

/**
 * Forwards message to:
 * void gtk_progress_bar_set_ellipsize (GtkProgressBar* pbar, PangoEllipsizeMode mode)
 */
-(void)setEllipsize:(PangoEllipsizeMode)mode;

/**
 * Forwards message to:
 * PangoEllipsizeMode gtk_progress_bar_get_ellipsize (GtkProgressBar* pbar)
 */
-(PangoEllipsizeMode)getEllipsize;

@end
