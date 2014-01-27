/*
 * CGTKScrolledWindow.m
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

#import "CGTKScrolledWindow.h"

@implementation CGTKScrolledWindow

-(GtkScrolledWindow *)SCROLLED_WINDOW
{
	return GTK_SCROLLED_WINDOW([self WIDGET]);
}

-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment
{
	self = [super initWithGtkWidget:gtk_scrolled_window_new (hadjustment, vadjustment)];

	if(self)
	{

	}

	return self;
}

-(void)setHadjustment:(GtkAdjustment *)hadjustment
{
	gtk_scrolled_window_set_hadjustment ([self SCROLLED_WINDOW], hadjustment);
}

-(void)setVadjustment:(GtkAdjustment *)vadjustment
{
	gtk_scrolled_window_set_vadjustment ([self SCROLLED_WINDOW], vadjustment);
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_scrolled_window_get_hadjustment ([self SCROLLED_WINDOW]);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_scrolled_window_get_vadjustment ([self SCROLLED_WINDOW]);
}

-(CGTKWidget *)getHscrollbar
{
	return [CGTKWidget widgetWithGtkWidget:gtk_scrolled_window_get_hscrollbar ([self SCROLLED_WINDOW])];
}

-(CGTKWidget *)getVscrollbar
{
	return [CGTKWidget widgetWithGtkWidget:gtk_scrolled_window_get_vscrollbar ([self SCROLLED_WINDOW])];
}

-(void)setPolicyWithHscrollbarPolicy:(GtkPolicyType)hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType)vscrollbarPolicy
{
	gtk_scrolled_window_set_policy ([self SCROLLED_WINDOW], hscrollbarPolicy, vscrollbarPolicy);
}

-(void)getPolicyWithHscrollbarPolicy:(GtkPolicyType *)hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType *)vscrollbarPolicy
{
	gtk_scrolled_window_get_policy ([self SCROLLED_WINDOW], hscrollbarPolicy, vscrollbarPolicy);
}

-(void)setPlacement:(GtkCornerType)windowPlacement
{
	gtk_scrolled_window_set_placement ([self SCROLLED_WINDOW], windowPlacement);
}

-(void)unsetPlacement
{
	gtk_scrolled_window_unset_placement ([self SCROLLED_WINDOW]);
}

-(GtkCornerType)getPlacement
{
	return gtk_scrolled_window_get_placement ([self SCROLLED_WINDOW]);
}

-(void)setShadowType:(GtkShadowType)type
{
	gtk_scrolled_window_set_shadow_type ([self SCROLLED_WINDOW], type);
}

-(GtkShadowType)getShadowType
{
	return gtk_scrolled_window_get_shadow_type ([self SCROLLED_WINDOW]);
}

-(void)addWithViewport:(CGTKWidget *)child
{
	gtk_scrolled_window_add_with_viewport ([self SCROLLED_WINDOW], [child WIDGET]);
}

@end
