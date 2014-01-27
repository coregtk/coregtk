/*
 * CGTKScale.m
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

#import "CGTKScale.h"

@implementation CGTKScale

-(GtkScale *)SCALE
{
	return GTK_SCALE([self WIDGET]);
}

-(void)setDigits:(NSNumber *)digits
{
	gtk_scale_set_digits ([self SCALE], [digits intValue]);
}

-(NSNumber *)getDigits
{
	return [NSNumber numberWithInt:gtk_scale_get_digits ([self SCALE])];
}

-(void)setDrawValue:(BOOL)drawValue
{
	gtk_scale_set_draw_value ([self SCALE], [CGTK getGboolean:drawValue]);
}

-(BOOL)getDrawValue
{
	return [CGTK getBOOL:gtk_scale_get_draw_value ([self SCALE])];
}

-(void)setValuePos:(GtkPositionType)pos
{
	gtk_scale_set_value_pos ([self SCALE], pos);
}

-(GtkPositionType)getValuePos
{
	return gtk_scale_get_value_pos ([self SCALE]);
}

-(PangoLayout *)getLayout
{
	return gtk_scale_get_layout ([self SCALE]);
}

-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y
{
	gint gX;
	gint gY;
	
	gtk_scale_get_layout_offsets ([self SCALE], &gX, &gY);
	
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
}

-(void)addMarkWithValue:(NSNumber *)value andPosition:(GtkPositionType)position andMarkup:(NSString *)markup
{
	gtk_scale_add_mark ([self SCALE], [value doubleValue], position, [markup UTF8String]);
}

-(void)clearMarks
{
	gtk_scale_clear_marks ([self SCALE]);
}

@end
