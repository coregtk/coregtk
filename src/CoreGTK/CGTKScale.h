/*
 * CGTKScale.h
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
#import "CoreGTK/CGTKRange.h"

@interface CGTKScale : CGTKRange
{

}


/**
 * Constructors
 */
-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment;
-(id)initWithRangeWithOrientation:(GtkOrientation) orientation andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step;

/**
 * Methods
 */

-(GtkScale*)SCALE;

/**
 * -(void*)addMarkWithValue:(gdouble) value andPosition:(GtkPositionType) position andMarkup:(NSString*) markup;
 *
 * @param value
 * @param position
 * @param markup
 */
-(void)addMarkWithValue:(gdouble) value andPosition:(GtkPositionType) position andMarkup:(NSString*) markup;

/**
 * -(void*)clearMarks;
 *
 */
-(void)clearMarks;

/**
 * -(gint*)getDigits;
 *
 * @returns gint
 */
-(gint)getDigits;

/**
 * -(BOOL*)getDrawValue;
 *
 * @returns BOOL
 */
-(BOOL)getDrawValue;

/**
 * -(BOOL*)getHasOrigin;
 *
 * @returns BOOL
 */
-(BOOL)getHasOrigin;

/**
 * -(PangoLayout**)getLayout;
 *
 * @returns PangoLayout*
 */
-(PangoLayout*)getLayout;

/**
 * -(void*)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
 *
 * @param x
 * @param y
 */
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;

/**
 * -(GtkPositionType*)getValuePos;
 *
 * @returns GtkPositionType
 */
-(GtkPositionType)getValuePos;

/**
 * -(void*)setDigits:(gint) digits;
 *
 * @param digits
 */
-(void)setDigits:(gint) digits;

/**
 * -(void*)setDrawValue:(BOOL) drawValue;
 *
 * @param drawValue
 */
-(void)setDrawValue:(BOOL) drawValue;

/**
 * -(void*)setHasOrigin:(BOOL) hasOrigin;
 *
 * @param hasOrigin
 */
-(void)setHasOrigin:(BOOL) hasOrigin;

/**
 * -(void*)setValuePos:(GtkPositionType) pos;
 *
 * @param pos
 */
-(void)setValuePos:(GtkPositionType) pos;

@end