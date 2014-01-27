/*
 * CGTKScrolledWindow.h
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

@interface CGTKScrolledWindow : CGTKBin
{
	
}

/*
 * Returns internal GtkScrolledWindow
 */
-(GtkScrolledWindow *)SCROLLED_WINDOW;

/*
 * Forwards message to:
 * GtkWidget* gtk_scrolled_window_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment)
 */
-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment;

/*
 * Forwards message to:
 * void gtk_scrolled_window_set_hadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* hadjustment)
 */
-(void)setHadjustment:(GtkAdjustment *)hadjustment;

/*
 * Forwards message to:
 * void gtk_scrolled_window_set_vadjustment (GtkScrolledWindow* scrolled_window, GtkAdjustment* vadjustment)
 */
-(void)setVadjustment:(GtkAdjustment *)vadjustment;

/*
 * Forwards message to:
 * GtkAdjustment* gtk_scrolled_window_get_hadjustment (GtkScrolledWindow* scrolled_window)
 */
-(GtkAdjustment *)getHadjustment;

/*
 * Forwards message to:
 * GtkAdjustment* gtk_scrolled_window_get_vadjustment (GtkScrolledWindow* scrolled_window)
 */
-(GtkAdjustment *)getVadjustment;

/*
 * Forwards message to:
 * GtkWidget* gtk_scrolled_window_get_hscrollbar (GtkScrolledWindow* scrolled_window)
 */
-(CGTKWidget *)getHscrollbar;

/*
 * Forwards message to:
 * GtkWidget* gtk_scrolled_window_get_vscrollbar (GtkScrolledWindow* scrolled_window)
 */
-(CGTKWidget *)getVscrollbar;

/*
 * Forwards message to:
 * void gtk_scrolled_window_set_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType hscrollbar_policy, GtkPolicyType vscrollbar_policy)
 */
-(void)setPolicyWithHscrollbarPolicy:(GtkPolicyType)hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType)vscrollbarPolicy;

/*
 * Forwards message to:
 * void gtk_scrolled_window_get_policy (GtkScrolledWindow* scrolled_window, GtkPolicyType* hscrollbar_policy, GtkPolicyType* vscrollbar_policy)
 */
-(void)getPolicyWithHscrollbarPolicy:(GtkPolicyType *)hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType *)vscrollbarPolicy;

/*
 * Forwards message to:
 * void gtk_scrolled_window_set_placement (GtkScrolledWindow* scrolled_window, GtkCornerType window_placement)
 */
-(void)setPlacement:(GtkCornerType)windowPlacement;

/*
 * Forwards message to:
 * void gtk_scrolled_window_unset_placement (GtkScrolledWindow* scrolled_window)
 */
-(void)unsetPlacement;

/*
 * Forwards message to:
 * GtkCornerType gtk_scrolled_window_get_placement (GtkScrolledWindow* scrolled_window)
 */
-(GtkCornerType)getPlacement;

/*
 * Forwards message to:
 * void gtk_scrolled_window_set_shadow_type (GtkScrolledWindow* scrolled_window, GtkShadowType type)
 */
-(void)setShadowType:(GtkShadowType)type;

/*
 * Forwards message to:
 * GtkShadowType gtk_scrolled_window_get_shadow_type (GtkScrolledWindow* scrolled_window)
 */
-(GtkShadowType)getShadowType;

/*
 * Forwards message to:
 * void gtk_scrolled_window_add_with_viewport (GtkScrolledWindow* scrolled_window, GtkWidget* child)
 */
-(void)addWithViewport:(CGTKWidget *)child;

@end
