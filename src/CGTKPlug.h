/*
 * CGTKPlug.h
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
#import "CGTKWindow.h"

@interface CGTKPlug : CGTKWindow
{
	
}

-(GtkPlug *)PLUG;

/*
 * Forwards message to:
 * GtkWidget* gtk_plug_new (GdkNativeWindow socket_id)
 */
-(id)initWithSocketId:(GdkNativeWindow)socketId;

/*
 * Forwards message to:
 * GtkWidget* gtk_plug_new_for_display (GdkDisplay* display, GdkNativeWindow socket_id)
 */
-(id)initForDisplayWithDisplay:(GdkDisplay*)display andSocketId:(GdkNativeWindow)socketId;

/*
 * Forwards message to:
 * void gtk_plug_construct (GtkPlug* plug, GdkNativeWindow socket_id)
 */
-(void)constructWithSocketId:(GdkNativeWindow)socketId;

/*
 * Forwards message to:
 * void gtk_plug_construct_for_display (GtkPlug* plug, GdkDisplay* display, GdkNativeWindow socket_id)
 */
-(void)constructForDisplayWithDisplay:(GdkDisplay*)display andSocketId:(GdkNativeWindow)socketId;

/*
 * Forwards message to:
 * GdkNativeWindow gtk_plug_get_id (GtkPlug* plug)
 */
-(GdkNativeWindow)getId;

/*
 * Forwards message to:
 * gboolean gtk_plug_get_embedded (GtkPlug* plug)
 */
-(BOOL)getEmbedded;

/*
 * Forwards message to:
 * GdkWindow* gtk_plug_get_socket_window (GtkPlug* plug)
 */
-(GdkWindow*)getSocketWindow;

@end
