/*
 * CGTKHandleBox.h
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

@interface CGTKHandleBox : CGTKBin
{
	
}

/*
 * Returns internal GtkHandleBox
 */
-(GtkHandleBox *)HANDLE_BOX;

/*
 * Forwards message to:
 * GtkWidget* gtk_handle_box_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * void gtk_handle_box_set_shadow_type (GtkHandleBox* handle_box, GtkShadowType type)
 */
-(void)setShadowType:(GtkShadowType)type;

/*
 * Forwards message to:
 * GtkShadowType gtk_handle_box_get_shadow_type (GtkHandleBox* handle_box)
 */
-(GtkShadowType)getShadowType;

/*
 * Forwards message to:
 * void gtk_handle_box_set_handle_position (GtkHandleBox* handle_box, GtkPositionType position)
 */
-(void)setHandlePosition:(GtkPositionType)position;

/*
 * Forwards message to:
 * GtkPositionType gtk_handle_box_get_handle_position (GtkHandleBox* handle_box)
 */
-(GtkPositionType)getHandlePosition;

/*
 * Forwards message to:
 * void gtk_handle_box_set_snap_edge (GtkHandleBox* handle_box, GtkPositionType edge)
 */
-(void)setSnapEdge:(GtkPositionType)edge;

/*
 * Forwards message to:
 * GtkPositionType gtk_handle_box_get_snap_edge (GtkHandleBox* handle_box)
 */
-(GtkPositionType)getSnapEdge;

/*
 * Forwards message to:
 * gboolean gtk_handle_box_get_child_detached (GtkHandleBox* handle_box)
 */
-(BOOL)getChildDetached;

@end
