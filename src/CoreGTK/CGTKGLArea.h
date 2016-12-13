/*
 * CGTKGLArea.h
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
#import "CoreGTK/CGTKWidget.h"

@interface CGTKGLArea : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkGLArea*)GLAREA;

/**
 * -(void*)gtkGlAreaAttachBuffers;
 *
 */
-(void)gtkGlAreaAttachBuffers;

/**
 * -(BOOL*)gtkGlAreaGetAutoRender;
 *
 * @returns BOOL
 */
-(BOOL)gtkGlAreaGetAutoRender;

/**
 * -(GdkGLContext**)gtkGlAreaGetContext;
 *
 * @returns GdkGLContext*
 */
-(GdkGLContext*)gtkGlAreaGetContext;

/**
 * -(GError**)gtkGlAreaGetError;
 *
 * @returns GError*
 */
-(GError*)gtkGlAreaGetError;

/**
 * -(BOOL*)gtkGlAreaGetHasAlpha;
 *
 * @returns BOOL
 */
-(BOOL)gtkGlAreaGetHasAlpha;

/**
 * -(BOOL*)gtkGlAreaGetHasDepthBuffer;
 *
 * @returns BOOL
 */
-(BOOL)gtkGlAreaGetHasDepthBuffer;

/**
 * -(BOOL*)gtkGlAreaGetHasStencilBuffer;
 *
 * @returns BOOL
 */
-(BOOL)gtkGlAreaGetHasStencilBuffer;

/**
 * -(void*)gtkGlAreaGetRequiredVersionWithMajor:(gint*) major andMinor:(gint*) minor;
 *
 * @param major
 * @param minor
 */
-(void)gtkGlAreaGetRequiredVersionWithMajor:(gint*) major andMinor:(gint*) minor;

/**
 * -(void*)gtkGlAreaMakeCurrent;
 *
 */
-(void)gtkGlAreaMakeCurrent;

/**
 * -(void*)gtkGlAreaQueueRender;
 *
 */
-(void)gtkGlAreaQueueRender;

/**
 * -(void*)gtkGlAreaSetAutoRender:(BOOL) autoRender;
 *
 * @param autoRender
 */
-(void)gtkGlAreaSetAutoRender:(BOOL) autoRender;

/**
 * -(void*)gtkGlAreaSetError:(const GError*) error;
 *
 * @param error
 */
-(void)gtkGlAreaSetError:(const GError*) error;

/**
 * -(void*)gtkGlAreaSetHasAlpha:(BOOL) hasAlpha;
 *
 * @param hasAlpha
 */
-(void)gtkGlAreaSetHasAlpha:(BOOL) hasAlpha;

/**
 * -(void*)gtkGlAreaSetHasDepthBuffer:(BOOL) hasDepthBuffer;
 *
 * @param hasDepthBuffer
 */
-(void)gtkGlAreaSetHasDepthBuffer:(BOOL) hasDepthBuffer;

/**
 * -(void*)gtkGlAreaSetHasStencilBuffer:(BOOL) hasStencilBuffer;
 *
 * @param hasStencilBuffer
 */
-(void)gtkGlAreaSetHasStencilBuffer:(BOOL) hasStencilBuffer;

/**
 * -(void*)gtkGlAreaSetRequiredVersionWithMajor:(gint) major andMinor:(gint) minor;
 *
 * @param major
 * @param minor
 */
-(void)gtkGlAreaSetRequiredVersionWithMajor:(gint) major andMinor:(gint) minor;

@end