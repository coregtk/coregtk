/*
 * CGTKFlowBoxChild.m
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
#import "CoreGTK/CGTKFlowBoxChild.h"

@implementation CGTKFlowBoxChild

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_flow_box_child_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFlowBoxChild*)FLOWBOXCHILD
{
	return GTK_FLOW_BOX_CHILD([self GOBJECT]);
}

-(void)changed
{
	gtk_flow_box_child_changed(GTK_FLOW_BOX_CHILD([self GOBJECT]));
}

-(gint)getIndex
{
	return gtk_flow_box_child_get_index(GTK_FLOW_BOX_CHILD([self GOBJECT]));
}

-(BOOL)isSelected
{
	return (gtk_flow_box_child_is_selected(GTK_FLOW_BOX_CHILD([self GOBJECT])) ? YES : NO);
}


@end