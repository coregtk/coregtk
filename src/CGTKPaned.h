/*
 * CGTKPaned.h
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
#import "CGTKContainer.h"

@interface CGTKPaned : CGTKContainer
{
	
}

/**
 * Returns internal GtkPaned
 */
-(GtkPaned *)PANED;

/**
 * Forwards message to:
 * void gtk_paned_add1 (GtkPaned* paned, GtkWidget* child)
 */
-(void)add1:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_paned_add2 (GtkPaned* paned, GtkWidget* child)
 */
-(void)add2:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_paned_pack1 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink)
 */
-(void)pack1WithChild:(CGTKWidget *)child andResize:(BOOL)resize andShrink:(BOOL)shrink;

/**
 * Forwards message to:
 * void gtk_paned_pack2 (GtkPaned* paned, GtkWidget* child, gboolean resize, gboolean shrink)
 */
-(void)pack2WithChild:(CGTKWidget *)child andResize:(BOOL)resize andShrink:(BOOL)shrink;

/**
 * Forwards message to:
 * gint gtk_paned_get_position (GtkPaned* paned)
 */
-(NSNumber *)getPosition;

/**
 * Forwards message to:
 * void gtk_paned_set_position (GtkPaned* paned, gint position)
 */
-(void)setPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * GtkWidget* gtk_paned_get_child1 (GtkPaned* paned)
 */
-(CGTKWidget *)getChild1;

/**
 * Forwards message to:
 * GtkWidget* gtk_paned_get_child2 (GtkPaned* paned)
 */
-(CGTKWidget *)getChild2;

/**
 * Forwards message to:
 * GdkWindow* gtk_paned_get_handle_window (GtkPaned* paned)
 */
-(GdkWindow *)getHandleWindow;

@end
