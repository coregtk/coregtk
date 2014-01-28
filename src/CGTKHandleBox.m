/*
 * CGTKHandleBox.m
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

#import "CGTKHandleBox.h"

@implementation CGTKHandleBox

-(GtkHandleBox *)HANDLE_BOX
{
	return GTK_HANDLE_BOX([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_handle_box_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)setShadowType:(GtkShadowType)type
{
	gtk_handle_box_set_shadow_type ([self HANDLE_BOX], type);
}

-(GtkShadowType)getShadowType
{
	return gtk_handle_box_get_shadow_type ([self HANDLE_BOX]);
}

-(void)setHandlePosition:(GtkPositionType)position
{
	gtk_handle_box_set_handle_position ([self HANDLE_BOX], position);
}

-(GtkPositionType)getHandlePosition
{
	return gtk_handle_box_get_handle_position ([self HANDLE_BOX]);
}

-(void)setSnapEdge:(GtkPositionType)edge
{
	gtk_handle_box_set_snap_edge ([self HANDLE_BOX], edge);
}

-(GtkPositionType)getSnapEdge
{
	return gtk_handle_box_get_snap_edge ([self HANDLE_BOX]);
}

-(BOOL)getChildDetached
{
	return [CGTK getBOOL:gtk_handle_box_get_child_detached ([self HANDLE_BOX])];
}

@end
