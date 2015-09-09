/*
 * CGTKMenuShell.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuShell.h"

@implementation CGTKMenuShell

-(GtkMenuShell*)MENUSHELL
{
	return GTK_MENU_SHELL([self GOBJECT]);
}

-(void)activateItemWithMenuItem:(CGTKWidget*) menuItem andForceDeactivate:(BOOL) forceDeactivate
{
	gtk_menu_shell_activate_item(GTK_MENU_SHELL([self GOBJECT]), [menuItem WIDGET], (forceDeactivate ? TRUE : FALSE));
}

-(void)append:(CGTKWidget*) child
{
	gtk_menu_shell_append(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET]);
}

-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace andWithSeparators:(BOOL) withSeparators
{
	gtk_menu_shell_bind_model(GTK_MENU_SHELL([self GOBJECT]), model, [actionNamespace UTF8String], (withSeparators ? TRUE : FALSE));
}

-(void)cancel
{
	gtk_menu_shell_cancel(GTK_MENU_SHELL([self GOBJECT]));
}

-(void)deactivate
{
	gtk_menu_shell_deactivate(GTK_MENU_SHELL([self GOBJECT]));
}

-(void)deselect
{
	gtk_menu_shell_deselect(GTK_MENU_SHELL([self GOBJECT]));
}

-(CGTKWidget*)getParentShell
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_shell_get_parent_shell(GTK_MENU_SHELL([self GOBJECT]))];
}

-(CGTKWidget*)getSelectedItem
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_shell_get_selected_item(GTK_MENU_SHELL([self GOBJECT]))];
}

-(BOOL)getTakeFocus
{
	return (gtk_menu_shell_get_take_focus(GTK_MENU_SHELL([self GOBJECT])) ? YES : NO);
}

-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_menu_shell_insert(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET], position);
}

-(void)prepend:(CGTKWidget*) child
{
	gtk_menu_shell_prepend(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET]);
}

-(void)selectFirst:(BOOL) searchSensitive
{
	gtk_menu_shell_select_first(GTK_MENU_SHELL([self GOBJECT]), (searchSensitive ? TRUE : FALSE));
}

-(void)selectItem:(CGTKWidget*) menuItem
{
	gtk_menu_shell_select_item(GTK_MENU_SHELL([self GOBJECT]), [menuItem WIDGET]);
}

-(void)setTakeFocus:(BOOL) takeFocus
{
	gtk_menu_shell_set_take_focus(GTK_MENU_SHELL([self GOBJECT]), (takeFocus ? TRUE : FALSE));
}


@end
