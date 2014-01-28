/*
 * CGTKHScrollbar.m
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

#import "CGTKHScrollbar.h"

@implementation CGTKHScrollbar

-(GtkHScrollbar *)HSCROLLBAR
{
	return GTK_HSCROLLBAR([self WIDGET]);
}

-(id)init:(GtkAdjustment *)adjustment
{
	self = [super initWithGtkWidget:gtk_hscrollbar_new (adjustment) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

@end
