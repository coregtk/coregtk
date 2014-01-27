/*
 * CGTKMenuShell.m
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

#import "CGTKMenuShell.h"

@implementation CGTKMenuShell

-(GtkMenuShell *)MENU_SHELL
{
	return GTK_MENU_SHELL([self WIDGET]);
}

-(void)append:(CGTKWidget *)child
{
	gtk_menu_shell_append ([self MENU_SHELL], [child WIDGET]);
}

-(void)prepend:(CGTKWidget *)child
{
	gtk_menu_shell_prepend ([self MENU_SHELL], [child WIDGET]);
}

-(void)insertWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position
{
	gtk_menu_shell_insert ([self MENU_SHELL], [child WIDGET], [position intValue]);
}

-(void)deactivate
{
	gtk_menu_shell_deactivate ([self MENU_SHELL]);
}

-(void)selectItem:(CGTKWidget *)menuItem
{
	gtk_menu_shell_select_item ([self MENU_SHELL], [menuItem WIDGET]);
}

-(void)deselect
{
	gtk_menu_shell_deselect ([self MENU_SHELL]);
}

-(void)activateItemWithMenuItem:(CGTKWidget *)menuItem andForceDeactivate:(BOOL)forceDeactivate
{
	gtk_menu_shell_activate_item ([self MENU_SHELL], [menuItem WIDGET], [CGTK getGboolean:forceDeactivate]);
}

-(void)selectFirst:(BOOL)searchSensitive
{
	gtk_menu_shell_select_first ([self MENU_SHELL], [CGTK getGboolean:searchSensitive]);
}

-(void)cancel
{
	gtk_menu_shell_cancel ([self MENU_SHELL]);
}

-(BOOL)getTakeFocus
{
	return [CGTK getBOOL:gtk_menu_shell_get_take_focus ([self MENU_SHELL])];
}

-(void)setTakeFocus:(BOOL)takeFocus
{
	gtk_menu_shell_set_take_focus ([self MENU_SHELL], [CGTK getGboolean:takeFocus]);
}

@end
