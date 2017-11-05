/*
 * CGTKNativeDialog.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKNativeDialog.h"

@implementation CGTKNativeDialog

-(GtkNativeDialog*)NATIVEDIALOG
{
	return GTK_NATIVE_DIALOG([self GOBJECT]);
}

-(void)destroy
{
	gtk_native_dialog_destroy(GTK_NATIVE_DIALOG([self GOBJECT]));
}

-(BOOL)getModal
{
	return (gtk_native_dialog_get_modal(GTK_NATIVE_DIALOG([self GOBJECT])) ? YES : NO);
}

-(const char*)getTitle
{
	return gtk_native_dialog_get_title(GTK_NATIVE_DIALOG([self GOBJECT]));
}

-(GtkWindow*)getTransientFor
{
	return gtk_native_dialog_get_transient_for(GTK_NATIVE_DIALOG([self GOBJECT]));
}

-(BOOL)getVisible
{
	return (gtk_native_dialog_get_visible(GTK_NATIVE_DIALOG([self GOBJECT])) ? YES : NO);
}

-(void)hide
{
	gtk_native_dialog_hide(GTK_NATIVE_DIALOG([self GOBJECT]));
}

-(gint)run
{
	return gtk_native_dialog_run(GTK_NATIVE_DIALOG([self GOBJECT]));
}

-(void)setModal:(BOOL) modal
{
	gtk_native_dialog_set_modal(GTK_NATIVE_DIALOG([self GOBJECT]), (modal ? TRUE : FALSE));
}

-(void)setTitle:(const char*) title
{
	gtk_native_dialog_set_title(GTK_NATIVE_DIALOG([self GOBJECT]), title);
}

-(void)setTransientFor:(GtkWindow*) parent
{
	gtk_native_dialog_set_transient_for(GTK_NATIVE_DIALOG([self GOBJECT]), parent);
}

-(void)show
{
	gtk_native_dialog_show(GTK_NATIVE_DIALOG([self GOBJECT]));
}


@end