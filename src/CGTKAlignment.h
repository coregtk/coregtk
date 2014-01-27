/*
 * CGTKAlignment.h
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
#import "CGTKBin.h"

@interface CGTKAlignment : CGTKBin
{
	
}

-(GtkAlignment *)ALIGNMENT;

/*
 * Forwards message to:
 * GtkWidget* gtk_alignment_new (gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale)
 */
-(id)initWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andXscale:(NSNumber *)xscale andYscale:(NSNumber *)yscale;

/*
 * Forwards message to:
 * void gtk_alignment_set (GtkAlignment* alignment, gfloat xalign, gfloat yalign, gfloat xscale, gfloat yscale)
 */
-(void)setWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andXscale:(NSNumber *)xscale andYscale:(NSNumber *)yscale;

/*
 * Forwards message to:
 * void gtk_alignment_set_padding (GtkAlignment* alignment, guint padding_top, guint padding_bottom, guint padding_left, guint padding_right)
 */
-(void)setPaddingWithPaddingTop:(NSNumber *)paddingTop andPaddingBottom:(NSNumber *)paddingBottom andPaddingLeft:(NSNumber *)paddingLeft andPaddingRight:(NSNumber *)paddingRight;

/*
 * Forwards message to:
 * void gtk_alignment_get_padding (GtkAlignment* alignment, guint* padding_top, guint* padding_bottom, guint* padding_left, guint* padding_right)
 */
-(void)getPaddingWithPaddingTop:(NSNumber **)paddingTop andPaddingBottom:(NSNumber **)paddingBottom andPaddingLeft:(NSNumber **)paddingLeft andPaddingRight:(NSNumber **)paddingRight;

@end
