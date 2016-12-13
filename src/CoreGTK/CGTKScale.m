/*
 * CGTKScale.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScale.h"

@implementation CGTKScale

-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_scale_new(orientation, adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRangeWithOrientation:(GtkOrientation) orientation andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step
{
	self = [super initWithGObject:(GObject *)gtk_scale_new_with_range(orientation, min, max, step)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkScale*)SCALE
{
	return GTK_SCALE([self GOBJECT]);
}

-(void)addMarkWithValue:(gdouble) value andPosition:(GtkPositionType) position andMarkup:(NSString*) markup
{
	gtk_scale_add_mark(GTK_SCALE([self GOBJECT]), value, position, [markup UTF8String]);
}

-(void)clearMarks
{
	gtk_scale_clear_marks(GTK_SCALE([self GOBJECT]));
}

-(gint)getDigits
{
	return gtk_scale_get_digits(GTK_SCALE([self GOBJECT]));
}

-(BOOL)getDrawValue
{
	return (gtk_scale_get_draw_value(GTK_SCALE([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHasOrigin
{
	return (gtk_scale_get_has_origin(GTK_SCALE([self GOBJECT])) ? YES : NO);
}

-(PangoLayout*)getLayout
{
	return gtk_scale_get_layout(GTK_SCALE([self GOBJECT]));
}

-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y
{
	gtk_scale_get_layout_offsets(GTK_SCALE([self GOBJECT]), x, y);
}

-(GtkPositionType)getValuePos
{
	return gtk_scale_get_value_pos(GTK_SCALE([self GOBJECT]));
}

-(void)setDigits:(gint) digits
{
	gtk_scale_set_digits(GTK_SCALE([self GOBJECT]), digits);
}

-(void)setDrawValue:(BOOL) drawValue
{
	gtk_scale_set_draw_value(GTK_SCALE([self GOBJECT]), (drawValue ? TRUE : FALSE));
}

-(void)setHasOrigin:(BOOL) hasOrigin
{
	gtk_scale_set_has_origin(GTK_SCALE([self GOBJECT]), (hasOrigin ? TRUE : FALSE));
}

-(void)setValuePos:(GtkPositionType) pos
{
	gtk_scale_set_value_pos(GTK_SCALE([self GOBJECT]), pos);
}


@end