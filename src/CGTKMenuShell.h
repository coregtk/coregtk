/*
 * CGTKMenuShell.h
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

@interface CGTKMenuShell : CGTKContainer
{
	
}

/**
 * Returns internal GtkMenuShell
 */
-(GtkMenuShell *)MENU_SHELL;

/**
 * Forwards message to:
 * void gtk_menu_shell_append (GtkMenuShell* menu_shell,GtkWidget* child)
 */
-(void)append:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_menu_shell_prepend (GtkMenuShell* menu_shell,GtkWidget* child)
 */
-(void)prepend:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_menu_shell_insert (GtkMenuShell* menu_shell,GtkWidget* child,gint position)
 */
-(void)insertWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_menu_shell_deactivate (GtkMenuShell* menu_shell)
 */
-(void)deactivate;

/**
 * Forwards message to:
 * void gtk_menu_shell_select_item (GtkMenuShell* menu_shell,GtkWidget* menu_item)
 */
-(void)selectItem:(CGTKWidget *)menuItem;

/**
 * Forwards message to:
 * void gtk_menu_shell_deselect (GtkMenuShell* menu_shell)
 */
-(void)deselect;

/**
 * Forwards message to:
 * void gtk_menu_shell_activate_item (GtkMenuShell* menu_shell,GtkWidget* menu_item,gboolean force_deactivate)
 */
-(void)activateItemWithMenuItem:(CGTKWidget *)menuItem andForceDeactivate:(BOOL)forceDeactivate;

/**
 * Forwards message to:
 * void gtk_menu_shell_select_first (GtkMenuShell* menu_shell,gboolean search_sensitive)
 */
-(void)selectFirst:(BOOL)searchSensitive;

/**
 * Forwards message to:
 * void gtk_menu_shell_cancel (GtkMenuShell* menu_shell)
 */
-(void)cancel;

/**
 * Forwards message to:
 * gboolean gtk_menu_shell_get_take_focus (GtkMenuShell* menu_shell)
 */
-(BOOL)getTakeFocus;

/**
 * Forwards message to:
 * void gtk_menu_shell_set_take_focus (GtkMenuShell* menu_shell, gboolean take_focus)
 */
-(void)setTakeFocus:(BOOL)takeFocus;

@end
