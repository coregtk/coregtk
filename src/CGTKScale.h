/*
 * CGTKScale.h
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
#import "CGTKRange.h"

@interface CGTKScale : CGTKRange
{
	
}

/**
 * Returns internal GtkScale
 */
-(GtkScale *)SCALE;

/**
 * Forwards message to:
 * void gtk_scale_set_digits (GtkScale* scale, gint digits)
 */
-(void)setDigits:(NSNumber *)digits;

/**
 * Forwards message to:
 * gint gtk_scale_get_digits (GtkScale* scale)
 */
-(NSNumber *)getDigits;

/**
 * Forwards message to:
 * void gtk_scale_set_draw_value (GtkScale* scale, gboolean draw_value)
 */
-(void)setDrawValue:(BOOL)drawValue;

/**
 * Forwards message to:
 * gboolean gtk_scale_get_draw_value (GtkScale* scale)
 */
-(BOOL)getDrawValue;

/**
 * Forwards message to:
 * void gtk_scale_set_value_pos (GtkScale* scale, GtkPositionType pos)
 */
-(void)setValuePos:(GtkPositionType)pos;

/**
 * Forwards message to:
 * GtkPositionType gtk_scale_get_value_pos (GtkScale* scale)
 */
-(GtkPositionType)getValuePos;

/**
 * Forwards message to:
 * PangoLayout* gtk_scale_get_layout (GtkScale* scale)
 */
-(PangoLayout *)getLayout;

/**
 * Forwards message to:
 * void gtk_scale_get_layout_offsets (GtkScale* scale, gint* x, gint* y)
 */
-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y;

/**
 * Forwards message to:
 * void gtk_scale_add_mark (GtkScale* scale, gdouble value, GtkPositionType position, const gchar* markup)
 */
-(void)addMarkWithValue:(NSNumber *)value andPosition:(GtkPositionType)position andMarkup:(NSString *)markup;

/**
 * Forwards message to:
 * void gtk_scale_clear_marks (GtkScale* scale)
 */
-(void)clearMarks;

@end
