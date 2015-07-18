/*
 * CGTKLevelBar.h
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

@interface CGTKLevelBar : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initForIntervalWithMinValue:(gdouble) minValue andMaxValue:(gdouble) maxValue;

/**
 * Methods
 */

-(GtkLevelBar*)LEVELBAR;

/**
 * -(void*)addOffsetValueWithName:(NSString*) name andValue:(gdouble) value;
 *
 * @param name
 * @param value
 */
-(void)addOffsetValueWithName:(NSString*) name andValue:(gdouble) value;

/**
 * -(BOOL*)getInverted;
 *
 * @returns BOOL
 */
-(BOOL)getInverted;

/**
 * -(gdouble*)getMaxValue;
 *
 * @returns gdouble
 */
-(gdouble)getMaxValue;

/**
 * -(gdouble*)getMinValue;
 *
 * @returns gdouble
 */
-(gdouble)getMinValue;

/**
 * -(GtkLevelBarMode*)getMode;
 *
 * @returns GtkLevelBarMode
 */
-(GtkLevelBarMode)getMode;

/**
 * -(BOOL*)getOffsetValueWithName:(NSString*) name andValue:(gdouble*) value;
 *
 * @param name
 * @param value
 * @returns BOOL
 */
-(BOOL)getOffsetValueWithName:(NSString*) name andValue:(gdouble*) value;

/**
 * -(gdouble*)getValue;
 *
 * @returns gdouble
 */
-(gdouble)getValue;

/**
 * -(void*)removeOffsetValue:(NSString*) name;
 *
 * @param name
 */
-(void)removeOffsetValue:(NSString*) name;

/**
 * -(void*)setInverted:(BOOL) inverted;
 *
 * @param inverted
 */
-(void)setInverted:(BOOL) inverted;

/**
 * -(void*)setMaxValue:(gdouble) value;
 *
 * @param value
 */
-(void)setMaxValue:(gdouble) value;

/**
 * -(void*)setMinValue:(gdouble) value;
 *
 * @param value
 */
-(void)setMinValue:(gdouble) value;

/**
 * -(void*)setMode:(GtkLevelBarMode) mode;
 *
 * @param mode
 */
-(void)setMode:(GtkLevelBarMode) mode;

/**
 * -(void*)setValue:(gdouble) value;
 *
 * @param value
 */
-(void)setValue:(gdouble) value;

@end
