/*
 * main.m
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
#import <Foundation/Foundation.h>

#import "CoreGTK/CGTK.h"
#import "SimpleTextEditor.h"

int main(int argc, char *argv[])
{	
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

	/* 
	 * This is called in all GTK applications. Arguments are parsed
	 * from the command line and are returned to the application. 
	 */
	[CGTK autoInitWithArgc:argc andArgv:argv];
	
	// Create and display editor
	SimpleTextEditor *editor = [[SimpleTextEditor alloc] init];
	
	// Check for error
	if(editor == nil)
	{
		return 1;
	}
	
	// Show the window	
	[editor show];
	
	// Start GTK+ loop
	[CGTK main];

	// Release allocated memory
	[editor release];
	[pool release];

	// Return success
	return 0;
}
