/*
 * main.m
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
#import <Foundation/Foundation.h>

#import "CoreGTK/CGTKBaseBuilder.h"
#import "CoreGTK/CGTKBuilder.h"
#import "CoreGTK/CGTKButton.h"
#import "CoreGTK/CGTKCallbackData.h"
#import "CoreGTK/CGTK.h"
#import "CoreGTK/CGTKSignalConnector.h"
#import "CoreGTK/CGTKWindow.h"

@interface HelloWorld : NSObject
/*
 * These are callbacks
 */
+(void)hello;
+(void)goodbye;
+(void)destroy;

/*
 * Example class methods
 */
+(void) standardExample;
+(void) gladeExample;

@end


@implementation HelloWorld

int main(int argc, char *argv[])
{	
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

	/* 
	 * This is called in all GTK applications. Arguments are parsed
	 * from the command line and are returned to the application. 
	 */
	[CGTK autoInitWithArgc:argc andArgv:argv];

	// Show standard example
	[HelloWorld standardExample];

	// Show GLADE example
	[HelloWorld gladeExample];

	// Release allocated memory	
	[pool release];

	// Return success
	return 0;
}

/*
 * This is an example program showing some CoreGTK features
 */
+(void) standardExample
{
	// We could use also CGTKWidget here instead
	CGTKWindow *window;
	CGTKButton *button;

	// Create a new window
	window = [[CGTKWindow alloc] init:GTK_WINDOW_TOPLEVEL];

	// Here we connect the "destroy" event to a signal handler in the HelloWorld class
	[CGTKSignalConnector connectGpointer:[window WIDGET] withSignal:@"destroy" 
		toTarget:[CGTK class] withSelector:@selector(mainQuit) andData:NULL];

	// Sets the border width of the window
	[window setBorderWidth:10];

	// Sets the title text of the window
	[window setTitle:@"Now supporting GTK+ 3.22!"];

	// Sets the default size to 400x300
	[window setDefaultSizeWithWidth:400 andHeight:300];

	// Creates a new button with the label "Hello World"
	button = [[CGTKButton alloc] initWithLabel:@"Hello World"];

	/* 
	 * When the button receives the "clicked" signal, it will call the
	 * method -hello in the HelloWorld class (below) 
	 */
	[CGTKSignalConnector connectGpointer:[button WIDGET] withSignal:@"clicked" 
		toTarget:[HelloWorld class] withSelector:@selector(hello) andData:NULL];

	// This packs the button into the window (a gtk container)
	[window add:button];

	// The final step is to display this newly created widget
	[button show];

	// and the window
	[window show];

	/* 
	 * All GTK applications must have a [CGTK main] call. Control ends here
	 * and waits for an event to occur (like a key press or
	 * mouse event).
	 */
	[CGTK main];

	// Release allocated memory
	[window release];
}

/*
 * This is an example program showing how to use GLADE with CoreGTK
 */
+(void) gladeExample
{
	// Create a builder to load GLADE file
	CGTKBuilder *builder = [[CGTKBuilder alloc] init];

	if([builder addFromFileWithFilename:@"gladeExample.glade" andErr:NULL] == 0)
	{
		NSLog(@"Error loading GUI file");
		return;
	}

	// Turn debug mode on so we can see signal connecting messages
	[CGTKBaseBuilder setDebug:YES];

	// Use signal dictionary to connect GLADE objects to Objective-C code
	NSDictionary *dic = [[NSDictionary alloc] initWithObjectsAndKeys:
		[CGTKCallbackData withObject:[CGTK class] andSEL:@selector(mainQuit)], @"endGtkLoop",
		[CGTKCallbackData withObject:[HelloWorld class] andSEL:@selector(hello)], @"on_button1_clicked",
		[CGTKCallbackData withObject:[HelloWorld class] andSEL:@selector(goodbye)], @"on_button2_clicked",
		nil];

	// CGTKBaseBuilder is a helper class to maps GLADE signals to Objective-C code
	[CGTKBaseBuilder connectSignalsToObjectsWithBuilder:builder andSignalDictionary:dic];

	// window is autoreleased
	CGTKWidget *window = [CGTKBaseBuilder getWidgetFromBuilder:builder withName:@"window1"];

	if(window != nil)
	{
		[window showAll];
	}

	// Release allocated memory
	[builder release];	

	/* 
	 * All GTK applications must have a [CGTK main] call. Control ends here
	 * and waits for an event to occur (like a key press or
	 * mouse event). 
	 */
	[CGTK main];
}

/*
 * Callback to print hello to console
 */
+(void)hello
{
	NSLog(@"Hello World");
}

/*
 * Callback to print goodbye to console
 */
+(void)goodbye
{
	NSLog(@"Goodbye!");
}

/*
 * Callback to exit GTK loop
 */
+(void)destroy
{
	[CGTK mainQuit];
}

@end
