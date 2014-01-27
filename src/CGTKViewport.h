/*
 * CGTKViewport.h
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

@interface CGTKViewport : CGTKBin
{
	
}

/*
 * Returns internal GtkViewport
 */
-(GtkViewport *)VIEWPORT;

/*
 * Forwards message to:
 * GtkWidget* gtk_viewport_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment)
 */
-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment;

/*
 * Forwards message to:
 * GtkAdjustment* gtk_viewport_get_hadjustment (GtkViewport* viewport)
 */
-(GtkAdjustment *)getHadjustment;

/*
 * Forwards message to:
 * GtkAdjustment* gtk_viewport_get_vadjustment (GtkViewport* viewport)
 */
-(GtkAdjustment *)getVadjustment;

/*
 * Forwards message to:
 * void gtk_viewport_set_hadjustment (GtkViewport* viewport, GtkAdjustment* adjustment)
 */
-(void)setHadjustment:(GtkAdjustment *)adjustment;

/*
 * Forwards message to:
 * void gtk_viewport_set_vadjustment (GtkViewport* viewport, GtkAdjustment* adjustment)
 */
-(void)setVadjustment:(GtkAdjustment *)adjustment;

/*
 * Forwards message to:
 * void gtk_viewport_set_shadow_type (GtkViewport* viewport, GtkShadowType type)
 */
-(void)setShadowType:(GtkShadowType)type;

/*
 * Forwards message to:
 * GtkShadowType gtk_viewport_get_shadow_type (GtkViewport* viewport)
 */
-(GtkShadowType)getShadowType;

/*
 * Forwards message to:
 * GdkWindow* gtk_viewport_get_bin_window (GtkViewport* viewport)
 */
-(GdkWindow *)getBinWindow;

/*
 * Forwards message to:
 * GdkWindow* gtk_viewport_get_view_window (GtkViewport* viewport)
 */
-(GdkWindow *)getViewWindow;

@end
