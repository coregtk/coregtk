/*
 * CGTKRevealer.m
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
#import "CoreGTK/CGTKRevealer.h"

@implementation CGTKRevealer

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_revealer_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRevealer*)REVEALER
{
	return GTK_REVEALER([self GOBJECT]);
}

-(BOOL)getChildRevealed
{
	return (gtk_revealer_get_child_revealed(GTK_REVEALER([self GOBJECT])) ? YES : NO);
}

-(BOOL)getRevealChild
{
	return (gtk_revealer_get_reveal_child(GTK_REVEALER([self GOBJECT])) ? YES : NO);
}

-(guint)getTransitionDuration
{
	return gtk_revealer_get_transition_duration(GTK_REVEALER([self GOBJECT]));
}

-(GtkRevealerTransitionType)getTransitionType
{
	return gtk_revealer_get_transition_type(GTK_REVEALER([self GOBJECT]));
}

-(void)setRevealChild:(BOOL) revealChild
{
	gtk_revealer_set_reveal_child(GTK_REVEALER([self GOBJECT]), (revealChild ? TRUE : FALSE));
}

-(void)setTransitionDuration:(guint) duration
{
	gtk_revealer_set_transition_duration(GTK_REVEALER([self GOBJECT]), duration);
}

-(void)setTransitionType:(GtkRevealerTransitionType) transition
{
	gtk_revealer_set_transition_type(GTK_REVEALER([self GOBJECT]), transition);
}


@end