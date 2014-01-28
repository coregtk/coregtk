/*
 * CGTKAspectFrame.m
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

#import "CGTKAspectFrame.h"

@implementation CGTKAspectFrame

-(GtkAspectFrame *)ASPECT_FRAME
{
	return GTK_ASPECT_FRAME([self WIDGET]);
}

-(id)initWithLabel:(NSString *)label andXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andRatio:(NSNumber *)ratio andObeyChild:(BOOL)obeyChild
{
	self = [super initWithGtkWidget:gtk_aspect_frame_new ([label UTF8String], [xalign floatValue], [yalign floatValue], [ratio floatValue], [CGTK getGboolean:obeyChild]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign andRatio:(NSNumber *)ratio andObeyChild:(BOOL)obeyChild
{
	gtk_aspect_frame_set ([self ASPECT_FRAME], [xalign floatValue], [yalign floatValue], [ratio floatValue], [CGTK getGboolean:obeyChild]);
}

@end
