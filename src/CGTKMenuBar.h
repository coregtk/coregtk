/*
 * CGTKMenuBar.h
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
#import "CGTKMenuShell.h"

@interface CGTKMenuBar : CGTKMenuShell
{
	
}

/**
 * Returns internal GtkMenuBar
 */
-(GtkMenuBar *)MENU_BAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_menu_bar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkPackDirection gtk_menu_bar_get_pack_direction (GtkMenuBar* menubar)
 */
-(GtkPackDirection)getPackDirection;

/**
 * Forwards message to:
 * void gtk_menu_bar_set_pack_direction (GtkMenuBar* menubar, GtkPackDirection pack_dir)
 */
-(void)setPackDirection:(GtkPackDirection)packDir;

/**
 * Forwards message to:
 * GtkPackDirection gtk_menu_bar_get_child_pack_direction (GtkMenuBar* menubar)
 */
-(GtkPackDirection)getChildPackDirection;

/**
 * Forwards message to:
 * void gtk_menu_bar_set_child_pack_direction (GtkMenuBar* menubar,GtkPackDirection child_pack_dir)
 */
-(void)setChildPackDirection:(GtkPackDirection)childPackDir;

@end
