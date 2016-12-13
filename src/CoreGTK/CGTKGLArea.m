/*
 * CGTKGLArea.m
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
#import "CoreGTK/CGTKGLArea.h"

@implementation CGTKGLArea

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_gl_area_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkGLArea*)GLAREA
{
	return GTK_GLAREA([self GOBJECT]);
}

-(void)gtkGlAreaAttachBuffers
{
	gtk_gl_area_attach_buffers(GTK_GLAREA([self GOBJECT]));
}

-(BOOL)gtkGlAreaGetAutoRender
{
	return (gtk_gl_area_get_auto_render(GTK_GLAREA([self GOBJECT])) ? YES : NO);
}

-(GdkGLContext*)gtkGlAreaGetContext
{
	return gtk_gl_area_get_context(GTK_GLAREA([self GOBJECT]));
}

-(GError*)gtkGlAreaGetError
{
	return gtk_gl_area_get_error(GTK_GLAREA([self GOBJECT]));
}

-(BOOL)gtkGlAreaGetHasAlpha
{
	return (gtk_gl_area_get_has_alpha(GTK_GLAREA([self GOBJECT])) ? YES : NO);
}

-(BOOL)gtkGlAreaGetHasDepthBuffer
{
	return (gtk_gl_area_get_has_depth_buffer(GTK_GLAREA([self GOBJECT])) ? YES : NO);
}

-(BOOL)gtkGlAreaGetHasStencilBuffer
{
	return (gtk_gl_area_get_has_stencil_buffer(GTK_GLAREA([self GOBJECT])) ? YES : NO);
}

-(void)gtkGlAreaGetRequiredVersionWithMajor:(gint*) major andMinor:(gint*) minor
{
	gtk_gl_area_get_required_version(GTK_GLAREA([self GOBJECT]), major, minor);
}

-(void)gtkGlAreaMakeCurrent
{
	gtk_gl_area_make_current(GTK_GLAREA([self GOBJECT]));
}

-(void)gtkGlAreaQueueRender
{
	gtk_gl_area_queue_render(GTK_GLAREA([self GOBJECT]));
}

-(void)gtkGlAreaSetAutoRender:(BOOL) autoRender
{
	gtk_gl_area_set_auto_render(GTK_GLAREA([self GOBJECT]), (autoRender ? TRUE : FALSE));
}

-(void)gtkGlAreaSetError:(const GError*) error
{
	gtk_gl_area_set_error(GTK_GLAREA([self GOBJECT]), error);
}

-(void)gtkGlAreaSetHasAlpha:(BOOL) hasAlpha
{
	gtk_gl_area_set_has_alpha(GTK_GLAREA([self GOBJECT]), (hasAlpha ? TRUE : FALSE));
}

-(void)gtkGlAreaSetHasDepthBuffer:(BOOL) hasDepthBuffer
{
	gtk_gl_area_set_has_depth_buffer(GTK_GLAREA([self GOBJECT]), (hasDepthBuffer ? TRUE : FALSE));
}

-(void)gtkGlAreaSetHasStencilBuffer:(BOOL) hasStencilBuffer
{
	gtk_gl_area_set_has_stencil_buffer(GTK_GLAREA([self GOBJECT]), (hasStencilBuffer ? TRUE : FALSE));
}

-(void)gtkGlAreaSetRequiredVersionWithMajor:(gint) major andMinor:(gint) minor
{
	gtk_gl_area_set_required_version(GTK_GLAREA([self GOBJECT]), major, minor);
}


@end