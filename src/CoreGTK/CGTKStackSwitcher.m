/*
 * CGTKStackSwitcher.m
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
#import "CoreGTK/CGTKStackSwitcher.h"

@implementation CGTKStackSwitcher

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_stack_switcher_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkStackSwitcher*)STACKSWITCHER
{
	return GTK_STACK_SWITCHER([self GOBJECT]);
}

-(GtkStack*)getStack
{
	return gtk_stack_switcher_get_stack(GTK_STACK_SWITCHER([self GOBJECT]));
}

-(void)setStack:(GtkStack*) stack
{
	gtk_stack_switcher_set_stack(GTK_STACK_SWITCHER([self GOBJECT]), stack);
}


@end