/*
 * CGTKStack.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKStack.h"

@implementation CGTKStack

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_stack_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkStack*)STACK
{
	return GTK_STACK([self GOBJECT]);
}

-(void)addNamedWithChild:(CGTKWidget*) child andName:(NSString*) name
{
	gtk_stack_add_named(GTK_STACK([self GOBJECT]), [child WIDGET], [name UTF8String]);
}

-(void)addTitledWithChild:(CGTKWidget*) child andName:(NSString*) name andTitle:(NSString*) title
{
	gtk_stack_add_titled(GTK_STACK([self GOBJECT]), [child WIDGET], [name UTF8String], [title UTF8String]);
}

-(BOOL)getHomogeneous
{
	return (gtk_stack_get_homogeneous(GTK_STACK([self GOBJECT])) ? YES : NO);
}

-(guint)getTransitionDuration
{
	return gtk_stack_get_transition_duration(GTK_STACK([self GOBJECT]));
}

-(GtkStackTransitionType)getTransitionType
{
	return gtk_stack_get_transition_type(GTK_STACK([self GOBJECT]));
}

-(CGTKWidget*)getVisibleChild
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_stack_get_visible_child(GTK_STACK([self GOBJECT]))];
}

-(NSString*)getVisibleChildName
{
	return [NSString stringWithUTF8String:gtk_stack_get_visible_child_name(GTK_STACK([self GOBJECT]))];
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_stack_set_homogeneous(GTK_STACK([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setTransitionDuration:(guint) duration
{
	gtk_stack_set_transition_duration(GTK_STACK([self GOBJECT]), duration);
}

-(void)setTransitionType:(GtkStackTransitionType) transition
{
	gtk_stack_set_transition_type(GTK_STACK([self GOBJECT]), transition);
}

-(void)setVisibleChild:(CGTKWidget*) child
{
	gtk_stack_set_visible_child(GTK_STACK([self GOBJECT]), [child WIDGET]);
}

-(void)setVisibleChildFullWithName:(NSString*) name andTransition:(GtkStackTransitionType) transition
{
	gtk_stack_set_visible_child_full(GTK_STACK([self GOBJECT]), [name UTF8String], transition);
}

-(void)setVisibleChildName:(NSString*) name
{
	gtk_stack_set_visible_child_name(GTK_STACK([self GOBJECT]), [name UTF8String]);
}


@end
