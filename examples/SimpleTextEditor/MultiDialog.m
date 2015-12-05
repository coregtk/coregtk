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

	// Create the dialog itself
	dialog = [[CGTKFileChooserDialog alloc] initWithTitle:@"Open File" andParent:nil andAction:GTK_FILE_CHOOSER_ACTION_OPEN];
	
	// Add cancel and open buttons
	gtk_dialog_add_button ([dialog DIALOG],
                   "_Cancel",
                   GTK_RESPONSE_CANCEL);
	gtk_dialog_add_button ([dialog DIALOG],
                   "_Open",
                   GTK_RESPONSE_ACCEPT);
	
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
	
	return filename;
}

+(NSString *)presentSaveDialog
{
	// Variables
	CGTKFileChooserDialog *dialog = nil;
	gchar *gText = NULL;
	gint result;
	NSString *filename = nil;

	// Create the dialog itself
	dialog = [[CGTKFileChooserDialog alloc] initWithTitle:@"Save File" andParent:nil andAction:GTK_FILE_CHOOSER_ACTION_SAVE];
	
	// Add cancel and save buttons
	gtk_dialog_add_button ([dialog DIALOG],
                   "_Cancel",
                   GTK_RESPONSE_CANCEL);
	gtk_dialog_add_button ([dialog DIALOG],
                   "_Save",
                   GTK_RESPONSE_ACCEPT);

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
	
	return filename;
}

@end
