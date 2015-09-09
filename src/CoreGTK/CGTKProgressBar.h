/*
 * CGTKProgressBar.h
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

@interface CGTKProgressBar : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkProgressBar*)PROGRESSBAR;

/**
 * -(PangoEllipsizeMode*)getEllipsize;
 *
 * @returns PangoEllipsizeMode
 */
-(PangoEllipsizeMode)getEllipsize;

/**
 * -(gdouble*)getFraction;
 *
 * @returns gdouble
 */
-(gdouble)getFraction;

/**
 * -(BOOL*)getInverted;
 *
 * @returns BOOL
 */
-(BOOL)getInverted;

/**
 * -(gdouble*)getPulseStep;
 *
 * @returns gdouble
 */
-(gdouble)getPulseStep;

/**
 * -(BOOL*)getShowText;
 *
 * @returns BOOL
 */
-(BOOL)getShowText;

/**
 * -(NSString**)getText;
 *
 * @returns NSString*
 */
-(NSString*)getText;

/**
 * -(void*)pulse;
 *
 */
-(void)pulse;

/**
 * -(void*)setEllipsize:(PangoEllipsizeMode) mode;
 *
 * @param mode
 */
-(void)setEllipsize:(PangoEllipsizeMode) mode;

/**
 * -(void*)setFraction:(gdouble) fraction;
 *
 * @param fraction
 */
-(void)setFraction:(gdouble) fraction;

/**
 * -(void*)setInverted:(BOOL) inverted;
 *
 * @param inverted
 */
-(void)setInverted:(BOOL) inverted;

/**
 * -(void*)setPulseStep:(gdouble) fraction;
 *
 * @param fraction
 */
-(void)setPulseStep:(gdouble) fraction;

/**
 * -(void*)setShowText:(BOOL) showText;
 *
 * @param showText
 */
-(void)setShowText:(BOOL) showText;

/**
 * -(void*)setText:(NSString*) text;
 *
 * @param text
 */
-(void)setText:(NSString*) text;

@end