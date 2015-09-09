/*
 * CGTKAspectFrame.m
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
#import "CoreGTK/CGTKAspectFrame.h"

@implementation CGTKAspectFrame

-(id)initWithLabel:(NSString*) label andXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild
{
	self = [super initWithGObject:(GObject *)gtk_aspect_frame_new([label UTF8String], xalign, yalign, ratio, (obeyChild ? TRUE : FALSE))];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAspectFrame*)ASPECTFRAME
{
	return GTK_ASPECT_FRAME([self GOBJECT]);
}

-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild
{
	gtk_aspect_frame_set(GTK_ASPECT_FRAME([self GOBJECT]), xalign, yalign, ratio, (obeyChild ? TRUE : FALSE));
}


@end
