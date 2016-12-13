/*
 * CGTKPopover.m
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
#import "CoreGTK/CGTKPopover.h"

@implementation CGTKPopover

-(id)init:(CGTKWidget*) relativeTo
{
	self = [super initWithGObject:(GObject *)gtk_popover_new([relativeTo WIDGET])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromModelWithRelativeTo:(CGTKWidget*) relativeTo andModel:(GMenuModel*) model
{
	self = [super initWithGObject:(GObject *)gtk_popover_new_from_model([relativeTo WIDGET], model)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkPopover*)POPOVER
{
	return GTK_POPOVER([self GOBJECT]);
}

-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace
{
	gtk_popover_bind_model(GTK_POPOVER([self GOBJECT]), model, [actionNamespace UTF8String]);
}

-(CGTKWidget*)getDefaultWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_popover_get_default_widget(GTK_POPOVER([self GOBJECT]))];
}

-(BOOL)getModal
{
	return (gtk_popover_get_modal(GTK_POPOVER([self GOBJECT])) ? YES : NO);
}

-(BOOL)getPointingTo:(GdkRectangle*) rect
{
	return (gtk_popover_get_pointing_to(GTK_POPOVER([self GOBJECT]), rect) ? YES : NO);
}

-(GtkPositionType)getPosition
{
	return gtk_popover_get_position(GTK_POPOVER([self GOBJECT]));
}

-(CGTKWidget*)getRelativeTo
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_popover_get_relative_to(GTK_POPOVER([self GOBJECT]))];
}

-(BOOL)getTransitionsEnabled
{
	return (gtk_popover_get_transitions_enabled(GTK_POPOVER([self GOBJECT])) ? YES : NO);
}

-(void)setDefaultWidget:(CGTKWidget*) widget
{
	gtk_popover_set_default_widget(GTK_POPOVER([self GOBJECT]), [widget WIDGET]);
}

-(void)setModal:(BOOL) modal
{
	gtk_popover_set_modal(GTK_POPOVER([self GOBJECT]), (modal ? TRUE : FALSE));
}

-(void)setPointingTo:(const GdkRectangle*) rect
{
	gtk_popover_set_pointing_to(GTK_POPOVER([self GOBJECT]), rect);
}

-(void)setPosition:(GtkPositionType) position
{
	gtk_popover_set_position(GTK_POPOVER([self GOBJECT]), position);
}

-(void)setRelativeTo:(CGTKWidget*) relativeTo
{
	gtk_popover_set_relative_to(GTK_POPOVER([self GOBJECT]), [relativeTo WIDGET]);
}

-(void)setTransitionsEnabled:(BOOL) transitionsEnabled
{
	gtk_popover_set_transitions_enabled(GTK_POPOVER([self GOBJECT]), (transitionsEnabled ? TRUE : FALSE));
}


@end