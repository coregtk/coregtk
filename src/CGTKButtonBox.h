/*
 * CGTKButtonBox.h
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
#import "CGTKBox.h"

@interface CGTKButtonBox : CGTKBox
{
	
}

/**
 * Returns internal GtkButtonBox
 */
-(GtkButtonBox *)BUTTON_BOX;

/**
 * Forwards message to:
 * GtkButtonBoxStyle gtk_button_box_get_layout (GtkButtonBox* widget)
 */
-(GtkButtonBoxStyle)getLayout;

/**
 * Forwards message to:
 * void gtk_button_box_set_layout (GtkButtonBox* widget, GtkButtonBoxStyle layout_style)
 */
-(void)setLayout:(GtkButtonBoxStyle)layoutStyle;

/**
 * Forwards message to:
 * gboolean gtk_button_box_get_child_secondary (GtkButtonBox* widget, GtkWidget* child)
 */
-(BOOL)getChildSecondary:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_button_box_set_child_secondary (GtkButtonBox* widget, GtkWidget* child, gboolean is_secondary)
 */
-(void)setChildSecondaryWithChild:(CGTKWidget *)child andIsSecondary:(BOOL)isSecondary;

@end
