/*
 * CGTKFileChooserDialog.m
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

#import "CGTKFileChooserDialog.h"

@implementation CGTKFileChooserDialog

-(id)initOpenDialogWithTitle:(NSString *)title andParent:(CGTKWindow *)parent andAction:(GtkFileChooserAction)action
{
	self = [super initWithGtkWidget:gtk_file_chooser_dialog_new ([title UTF8String], [parent WINDOW],
	GTK_FILE_CHOOSER_ACTION_OPEN,
	GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
	GTK_STOCK_OPEN, GTK_RESPONSE_ACCEPT,
	NULL)  andIncrementRefCount:NO];
	
	if(self)
    {
    	// Do nothing
    }
    
    return self;
}

-(id)initSaveDialogWithTitle:(NSString *)title andParent:(CGTKWindow *)parent andAction:(GtkFileChooserAction)action
{
	self = [super initWithGtkWidget:gtk_file_chooser_dialog_new ([title UTF8String], [parent WINDOW],
	GTK_FILE_CHOOSER_ACTION_SAVE,
	GTK_STOCK_CANCEL, GTK_RESPONSE_CANCEL,
	GTK_STOCK_SAVE, GTK_RESPONSE_ACCEPT,
	NULL)  andIncrementRefCount:NO];
	
	if(self)
    {
    	// Do nothing
    }
    
    return self;
}

-(GtkFileChooserDialog *)FILE_CHOOSER_DIALOG
{
	return GTK_FILE_CHOOSER_DIALOG([self WIDGET]);
}

@end
