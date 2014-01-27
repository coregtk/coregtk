/*
 * CGTKBox.h
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

@interface CGTKBox : CGTKContainer
{
	
}

/**
 * Returns internal GtkBox
 */
-(GtkBox *)BOX;

/**
 * Forwards message to:
 * void gtk_box_pack_start (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding)
 */
-(void)packStartWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding;

/**
 * Forwards message to:
 * void gtk_box_pack_end (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding)
 */
-(void)packEndWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding;

/**
 * Forwards message to:
 * void gtk_box_set_homogeneous (GtkBox* box, gboolean homogeneous)
 */
-(void)setHomogeneous:(BOOL)homogeneous;

/**
 * Forwards message to:
 * gboolean gtk_box_get_homogeneous (GtkBox* box)
 */
-(BOOL)getHomogeneous;

/**
 * Forwards message to:
 * void gtk_box_set_spacing (GtkBox* box, gint spacing)
 */
-(void)setSpacing:(NSNumber *)spacing;

/**
 * Forwards message to:
 * gint gtk_box_get_spacing (GtkBox* box)
 */
-(NSNumber *)getSpacing;

/**
 * Forwards message to:
 * void gtk_box_reorder_child (GtkBox* box, GtkWidget* child, gint position)
 */
-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_box_query_child_packing (GtkBox* box, GtkWidget* child, gboolean* expand, gboolean* fill, guint* padding, GtkPackType* pack_type)
 */
-(void)queryChildPackingWithChild:(CGTKWidget *)child andExpand:(BOOL *)expand andFill:(BOOL *)fill andPadding:(NSNumber **)padding andPackType:(GtkPackType *)packType;

/**
 * Forwards message to:
 * void gtk_box_set_child_packing (GtkBox* box, GtkWidget* child, gboolean expand, gboolean fill, guint padding, GtkPackType pack_type)
 */
-(void)setChildPackingWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding andPackType:(GtkPackType)packType;

@end
