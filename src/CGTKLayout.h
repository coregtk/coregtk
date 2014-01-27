/*
 * CGTKLayout.h
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

@interface CGTKLayout : CGTKContainer
{
	
}

/**
 * Returns internal GtkLayout
 */
-(GtkLayout *)LAYOUT;

/**
 * Forwards message to:
 * GtkWidget* gtk_layout_new (GtkAdjustment* hadjustment, GtkAdjustment* vadjustment)
 */
-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment;

/**
 * Forwards message to:
 * GdkWindow* gtk_layout_get_bin_window (GtkLayout* layout)
 */
-(GdkWindow *)getBinWindow;

/**
 * Forwards message to:
 * void gtk_layout_put (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y)
 */
-(void)putWithChildWidget:(CGTKWidget *)childWidget andX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_layout_move (GtkLayout* layout, GtkWidget* child_widget, gint x, gint y)
 */
-(void)moveWithChildWidget:(CGTKWidget *)childWidget andX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_layout_set_size (GtkLayout* layout, guint width, guint height)
 */
-(void)setSizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height;

/**
 * Forwards message to:
 * void gtk_layout_get_size (GtkLayout* layout, guint* width, guint* height)
 */
-(void)getSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_layout_get_hadjustment (GtkLayout* layout)
 */
-(GtkAdjustment *)getHadjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_layout_get_vadjustment (GtkLayout* layout)
 */
-(GtkAdjustment *)getVadjustment;

/**
 * Forwards message to:
 * void gtk_layout_set_hadjustment (GtkLayout* layout, GtkAdjustment* adjustment)
 */
-(void)setHadjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * void gtk_layout_set_vadjustment (GtkLayout* layout, GtkAdjustment* adjustment)
 */
-(void)setVadjustment:(GtkAdjustment *)adjustment;

@end
