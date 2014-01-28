/*
 * CGTKPlug.m
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

#import "CGTKPlug.h"

@implementation CGTKPlug

-(GtkPlug *)PLUG
{
	return GTK_PLUG([self WIDGET]);
}

-(id)initWithSocketId:(GdkNativeWindow)socketId
{
	self = [super initWithGtkWidget:gtk_plug_new (socketId) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initForDisplayWithDisplay:(GdkDisplay*)display andSocketId:(GdkNativeWindow)socketId
{
	self = [super initWithGtkWidget:gtk_plug_new_for_display (display, socketId) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)constructWithSocketId:(GdkNativeWindow)socketId
{
	gtk_plug_construct ([self PLUG], socketId);
}

-(void)constructForDisplayWithDisplay:(GdkDisplay*)display andSocketId:(GdkNativeWindow)socketId
{
	gtk_plug_construct_for_display ([self PLUG], display, socketId);
}

-(GdkNativeWindow)getId
{
	return gtk_plug_get_id ([self PLUG]);
}

-(BOOL)getEmbedded
{
	return [CGTK getBOOL:gtk_plug_get_embedded ([self PLUG])];
}

-(GdkWindow*)getSocketWindow
{
	return gtk_plug_get_socket_window ([self PLUG]);
}

@end
