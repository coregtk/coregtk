/*
 * CGTKViewport.m
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

#import "CGTKViewport.h"

@implementation CGTKViewport

-(GtkViewport *)VIEWPORT
{
	return GTK_VIEWPORT([self WIDGET]);
}

-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment
{
	self = [super initWithGtkWidget:gtk_viewport_new (hadjustment, vadjustment)];

	if(self)
	{

	}

	return self;
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_viewport_get_hadjustment ([self VIEWPORT]);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_viewport_get_vadjustment ([self VIEWPORT]);
}

-(void)setHadjustment:(GtkAdjustment *)adjustment
{
	gtk_viewport_set_hadjustment ([self VIEWPORT], adjustment);
}

-(void)setVadjustment:(GtkAdjustment *)adjustment
{
	gtk_viewport_set_vadjustment ([self VIEWPORT], adjustment);
}

-(void)setShadowType:(GtkShadowType)type
{
	gtk_viewport_set_shadow_type ([self VIEWPORT], type);
}

-(GtkShadowType)getShadowType
{
	return gtk_viewport_get_shadow_type ([self VIEWPORT]);
}

-(GdkWindow *)getBinWindow
{
	return gtk_viewport_get_bin_window ([self VIEWPORT]);
}

-(GdkWindow *)getViewWindow
{
	return gtk_viewport_get_view_window ([self VIEWPORT]);
}

@end
