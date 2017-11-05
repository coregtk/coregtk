/*
 * CGTKAlignment.m
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
#import "CoreGTK/CGTKAlignment.h"

@implementation CGTKAlignment

-(id)initWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale
{
	self = [super initWithGObject:(GObject *)gtk_alignment_new(xalign, yalign, xscale, yscale)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAlignment*)ALIGNMENT
{
	return GTK_ALIGNMENT([self GOBJECT]);
}

-(void)getPaddingWithPaddingTop:(guint*) paddingTop andPaddingBottom:(guint*) paddingBottom andPaddingLeft:(guint*) paddingLeft andPaddingRight:(guint*) paddingRight
{
	gtk_alignment_get_padding(GTK_ALIGNMENT([self GOBJECT]), paddingTop, paddingBottom, paddingLeft, paddingRight);
}

-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale
{
	gtk_alignment_set(GTK_ALIGNMENT([self GOBJECT]), xalign, yalign, xscale, yscale);
}

-(void)setPaddingWithPaddingTop:(guint) paddingTop andPaddingBottom:(guint) paddingBottom andPaddingLeft:(guint) paddingLeft andPaddingRight:(guint) paddingRight
{
	gtk_alignment_set_padding(GTK_ALIGNMENT([self GOBJECT]), paddingTop, paddingBottom, paddingLeft, paddingRight);
}


@end