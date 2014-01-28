/*
 * CGTKAlignment.m
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

#import "CGTKAlignment.h"

@implementation CGTKAlignment

-(GtkAlignment *)ALIGNMENT
{
	return GTK_ALIGNMENT([self WIDGET]);
}

-(id)initWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andXscale:(NSNumber *)xscale andYscale:(NSNumber *)yscale
{
	self = [super initWithGtkWidget:gtk_alignment_new ([xalign floatValue], [yalign floatValue], [xscale floatValue], [yscale floatValue]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andXscale:(NSNumber *)xscale andYscale:(NSNumber *)yscale
{
	gtk_alignment_set ([self ALIGNMENT], [xalign floatValue], [yalign floatValue], [xscale floatValue], [yscale floatValue]);
}

-(void)setPaddingWithPaddingTop:(NSNumber *)paddingTop andPaddingBottom:(NSNumber *)paddingBottom andPaddingLeft:(NSNumber *)paddingLeft andPaddingRight:(NSNumber *)paddingRight
{
	gtk_alignment_set_padding ([self ALIGNMENT], [paddingTop unsignedIntValue], [paddingBottom unsignedIntValue], [paddingLeft unsignedIntValue], [paddingRight unsignedIntValue]);
}

-(void)getPaddingWithPaddingTop:(NSNumber **)paddingTop andPaddingBottom:(NSNumber **)paddingBottom andPaddingLeft:(NSNumber **)paddingLeft andPaddingRight:(NSNumber **)paddingRight
{
	guint padding_top;
	guint padding_bottom;
	guint padding_left;
	guint padding_right;

	gtk_alignment_get_padding ([self ALIGNMENT], &padding_top, &padding_bottom, &padding_left, &padding_right);
	
	*paddingTop = [NSNumber numberWithUnsignedInt:padding_top];
	*paddingBottom = [NSNumber numberWithUnsignedInt:padding_bottom];
	*paddingLeft = [NSNumber numberWithUnsignedInt:padding_left];
	*paddingRight = [NSNumber numberWithUnsignedInt:padding_right];
}

@end
