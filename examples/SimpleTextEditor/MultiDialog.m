/*
 * MultiDialog.m
 * This file is part of SimpleTextEditor
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
 * Objective-C imports
 */
#import "MultiDialog.h"

@implementation MultiDialog

+(NSString *)presentOpenDialog
{
	// Variables
	CGTKFileChooserDialog *dialog = nil;
	gchar *gText = NULL;
	gint result;
	NSString *filename = nil;
	
	// Add cancel and open buttons
	CGTKTypeWrapper *btnCancel = [[CGTKTypeWrapper alloc] init];
	btnCancel.gintValue = GTK_RESPONSE_CANCEL;
	
	CGTKTypeWrapper *btnOpen = [[CGTKTypeWrapper alloc] init];
	btnOpen.gintValue = GTK_RESPONSE_ACCEPT;
	
	NSDictionary *buttonTextDict = [NSDictionary dictionaryWithObjectsAndKeys:
		btnCancel, @"_Cancel",
		btnOpen, @"_Open",
		nil];
		
	// Create the dialog itself
	dialog = [[CGTKFileChooserDialog alloc] initWithTitle:@"Open File" andParent:nil andAction:GTK_FILE_CHOOSER_ACTION_OPEN andButtonTextResponseDictionary:buttonTextDict];
	
	// Run the dialog
	result = gtk_dialog_run (GTK_DIALOG ([dialog WIDGET]));

	// If the user clicked Open
	if(result == GTK_RESPONSE_ACCEPT)
	{
		// Extract the filename and convert it to an NSString
		gText = gtk_file_chooser_get_filename ([dialog FILECHOOSERDIALOG]);
		filename = [NSString stringWithUTF8String:gText];
	}

	// Cleanup
	g_free(gText);
	gtk_widget_destroy ([dialog WIDGET]);
	[dialog release];
	[btnCancel release];
	[btnOpen release];
	
	return filename;
}

+(NSString *)presentSaveDialog
{
	// Variables
	CGTKFileChooserDialog *dialog = nil;
	gchar *gText = NULL;
	gint result;
	NSString *filename = nil;

	// Add cancel and save buttons
	CGTKTypeWrapper *btnCancel = [[CGTKTypeWrapper alloc] init];
	btnCancel.gintValue = GTK_RESPONSE_CANCEL;
	
	CGTKTypeWrapper *btnSave = [[CGTKTypeWrapper alloc] init];
	btnSave.gintValue = GTK_RESPONSE_ACCEPT;
	
	NSDictionary *buttonTextDict = [NSDictionary dictionaryWithObjectsAndKeys:
		btnCancel, @"_Cancel",
		btnSave, @"_Save",
		nil];
		
	// Create the dialog itself
	dialog = [[CGTKFileChooserDialog alloc] initWithTitle:@"Save File" andParent:nil andAction:GTK_FILE_CHOOSER_ACTION_SAVE andButtonTextResponseDictionary:buttonTextDict];

	// Set settings
	gtk_file_chooser_set_do_overwrite_confirmation ([dialog FILECHOOSERDIALOG], TRUE);
	gtk_file_chooser_set_current_name([dialog FILECHOOSERDIALOG], "Untitled document");
	
	// Run the dialog
	result = gtk_dialog_run (GTK_DIALOG ([dialog WIDGET]));

	// If the user clicked Save
	if(result == GTK_RESPONSE_ACCEPT)
	{
		// Extract the filename and convert it to an NSString
		gText = gtk_file_chooser_get_filename ([dialog FILECHOOSERDIALOG]);
		filename = [NSString stringWithUTF8String:gText];
	}

	// Cleanup
	g_free(gText);
	gtk_widget_destroy ([dialog WIDGET]);
	[dialog release];
	[btnCancel release];
	[btnSave release];
	
	return filename;
}

@end
