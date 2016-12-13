/*
 * CGTKScrolledWindow.m
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
#import "CoreGTK/CGTKScrolledWindow.h"

@implementation CGTKScrolledWindow

-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment
{
	self = [super initWithGObject:(GObject *)gtk_scrolled_window_new(hadjustment, vadjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkScrolledWindow*)SCROLLEDWINDOW
{
	return GTK_SCROLLED_WINDOW([self GOBJECT]);
}

-(void)addWithViewport:(CGTKWidget*) child
{
	gtk_scrolled_window_add_with_viewport(GTK_SCROLLED_WINDOW([self GOBJECT]), [child WIDGET]);
}

-(BOOL)getCaptureButtonPress
{
	return (gtk_scrolled_window_get_capture_button_press(GTK_SCROLLED_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_scrolled_window_get_hadjustment(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(CGTKWidget*)getHscrollbar
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_scrolled_window_get_hscrollbar(GTK_SCROLLED_WINDOW([self GOBJECT]))];
}

-(BOOL)getKineticScrolling
{
	return (gtk_scrolled_window_get_kinetic_scrolling(GTK_SCROLLED_WINDOW([self GOBJECT])) ? YES : NO);
}

-(gint)getMinContentHeight
{
	return gtk_scrolled_window_get_min_content_height(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(gint)getMinContentWidth
{
	return gtk_scrolled_window_get_min_content_width(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(BOOL)getOverlayScrolling
{
	return (gtk_scrolled_window_get_overlay_scrolling(GTK_SCROLLED_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GtkCornerType)getPlacement
{
	return gtk_scrolled_window_get_placement(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(void)getPolicyWithHscrollbarPolicy:(GtkPolicyType*) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType*) vscrollbarPolicy
{
	gtk_scrolled_window_get_policy(GTK_SCROLLED_WINDOW([self GOBJECT]), hscrollbarPolicy, vscrollbarPolicy);
}

-(GtkShadowType)getShadowType
{
	return gtk_scrolled_window_get_shadow_type(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_scrolled_window_get_vadjustment(GTK_SCROLLED_WINDOW([self GOBJECT]));
}

-(CGTKWidget*)getVscrollbar
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_scrolled_window_get_vscrollbar(GTK_SCROLLED_WINDOW([self GOBJECT]))];
}

-(void)setCaptureButtonPress:(BOOL) captureButtonPress
{
	gtk_scrolled_window_set_capture_button_press(GTK_SCROLLED_WINDOW([self GOBJECT]), (captureButtonPress ? TRUE : FALSE));
}

-(void)setHadjustment:(GtkAdjustment*) hadjustment
{
	gtk_scrolled_window_set_hadjustment(GTK_SCROLLED_WINDOW([self GOBJECT]), hadjustment);
}

-(void)setKineticScrolling:(BOOL) kineticScrolling
{
	gtk_scrolled_window_set_kinetic_scrolling(GTK_SCROLLED_WINDOW([self GOBJECT]), (kineticScrolling ? TRUE : FALSE));
}

-(void)setMinContentHeight:(gint) height
{
	gtk_scrolled_window_set_min_content_height(GTK_SCROLLED_WINDOW([self GOBJECT]), height);
}

-(void)setMinContentWidth:(gint) width
{
	gtk_scrolled_window_set_min_content_width(GTK_SCROLLED_WINDOW([self GOBJECT]), width);
}

-(void)setOverlayScrolling:(BOOL) overlayScrolling
{
	gtk_scrolled_window_set_overlay_scrolling(GTK_SCROLLED_WINDOW([self GOBJECT]), (overlayScrolling ? TRUE : FALSE));
}

-(void)setPlacement:(GtkCornerType) windowPlacement
{
	gtk_scrolled_window_set_placement(GTK_SCROLLED_WINDOW([self GOBJECT]), windowPlacement);
}

-(void)setPolicyWithHscrollbarPolicy:(GtkPolicyType) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType) vscrollbarPolicy
{
	gtk_scrolled_window_set_policy(GTK_SCROLLED_WINDOW([self GOBJECT]), hscrollbarPolicy, vscrollbarPolicy);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_scrolled_window_set_shadow_type(GTK_SCROLLED_WINDOW([self GOBJECT]), type);
}

-(void)setVadjustment:(GtkAdjustment*) vadjustment
{
	gtk_scrolled_window_set_vadjustment(GTK_SCROLLED_WINDOW([self GOBJECT]), vadjustment);
}

-(void)unsetPlacement
{
	gtk_scrolled_window_unset_placement(GTK_SCROLLED_WINDOW([self GOBJECT]));
}


@end
