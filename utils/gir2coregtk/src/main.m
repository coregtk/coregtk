/*
 * main.m
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
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
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
#import <Foundation/NSAutoreleasePool.h>
#import <Foundation/NSError.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSString.h>

#import "Gir2CoreGTK/Generator.h"

#import "Gir2Objc/Gir2Objc.h"

/**
 * This is just a sample program showing how to interact with the library classes.
 * After compiling, you can run this program using the sample GIR XML file provided
 * by issuing the command (without quotes) "$ ./gir2objc Tut-0.1.gir".
 */
int main(int argc, char *argv[])
{
	/*
	 * Check error conditions
	 */
	 
	if(argc > 3)
	{
		printf("ERROR - too many arguments!\n");
		return 1;
	}
	else if(argc != 3)
	{
		printf("ERROR - usage [executable] [input path to GIR file] [output directory]\n");
		return 1;
	}

	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];

	Gir2Objc *gir2Objc = [[Gir2Objc alloc] init];
	
	NSString *girFile = [NSString stringWithUTF8String:argv[1]];
	NSError *parseError = nil;
	
	NSLog(@"Processing GIR file %@...", girFile);
	
	GIRApi *api = [gir2Objc firstApiFromGirFile: girFile withError: &parseError];
	
	if(api == nil)
	{
		// Check if it failed due to a parsing error
		if(parseError != nil)
		{
			NSLog(@"Failed to parse GIR file!");
			NSLog(@"%@", parseError);
		}
		// If there wasn't a file parsing error then it failed turning the NSDictionary into the GIRApi
		else
		{
			NSLog(@"Failed to convert dictionary into GIRApi!");
		}
		
		return 1;
	}
	
	Generator *gen = [[Generator alloc] init];
	
	[gen generateHeadersFromApi: api inOutputDir: [NSString stringWithUTF8String:argv[2]]];
	[gen generateSourcesFromApi: api inOutputDir: [NSString stringWithUTF8String:argv[2]]];
	
	NSLog(@"===== Results =====");
	NSLog(@"Namespaces:\t%u", gen.generatedNamespaceCount);
	NSLog(@"Constants:\t%u", gen.generatedConstantCount);
	NSLog(@"Enumerations:\t%u", gen.generatedEnumerationCount);
	NSLog(@"Functions:\t%u", gen.generatedFunctionCount);
	
	/*
	 * Release allocated memory
	 */
	[gen release];
	[gir2Objc release];
	[pool release];
	
	return 0;
}
