/*
 * CGTKPageSetupUnixDialog.m
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

#import "CGTKPageSetupUnixDialog.h"

@implementation CGTKPageSetupUnixDialog

-(GtkPageSetupUnixDialog *)PAGE_SETUP_UNIX_DIALOG
{
	return GTK_PAGE_SETUP_UNIX_DIALOG([self WIDGET]);
}

-(id)initWithTitle:(NSString *)title andParent:(CGTKWindow *)parent
{
	self = [super initWithGtkWidget:gtk_page_setup_unix_dialog_new([title UTF8String], [parent WINDOW] andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setPageSetup:(GtkPageSetup *)pageSetup
{
	gtk_page_setup_unix_dialog_set_page_setup([self PAGE_SETUP_UNIX_DIALOG], pageSetup);
}

-(GtkPageSetup *)getPageSetup
{
	gtk_page_setup_unix_dialog_get_page_setup([self PAGE_SETUP_UNIX_DIALOG]);
}

-(void)setPrintSetting:(GtkPrintSettings *)printSettings
{
	gtk_page_setup_unix_dialog_set_print_settings([self PAGE_SETUP_UNIX_DIALOG], printSettings);
}

-(GtkPrintSettings *)getPrintSettings
{
	return gtk_page_setup_unix_dialog_get_print_settings([self PAGE_SETUP_UNIX_DIALOG]);
}

@end
