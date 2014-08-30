/*
 * GenObj.m
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
#import "GenObj.h"

@implementation GenObj

@synthesize name;
@synthesize parent;
@synthesize constants;
@synthesize enumerations;
@synthesize variables;
@synthesize properties;
@synthesize methods;

-(id)init
{
	self = [super init];
	
	if(self)
	{
		constants = [[NSMutableArray alloc] init];
		enumerations = [[NSMutableArray alloc] init];
		variables = [[NSMutableArray alloc] init];
		properties = [[NSMutableArray alloc] init];
		methods = [[NSMutableArray alloc] init];
	}
	
	return self;
}

-(BOOL)writeHeaderToFile:(NSString *) file
{
	NSMutableString *output = [[NSMutableString alloc] init];
	
	// TODO: imports
	
	// Constants
	for(NSString *cnst in constants)
	{
		[output appendString:cnst];
	}
	
	if([constants count] > 0)
	{
		[output appendString:@"\n"];
	}
	
	// Enumerations
	for(NSString *enm in enumerations)
	{
		[output appendFormat:@"%@\n", enm];
	}
	
	if([enumerations count] > 0)
	{
		[output appendString:@"\n"];
	}
	
	[output appendFormat:@"@interface %@: %@\n", self.name, self.parent];
	[output appendString:@"{\n\n"];
	
	// Variables
	for(NSString *var in variables)
	{
		[output appendFormat:@"\t%@\n", var];
	}
	
	[output appendString:@"}\n\n"];
	
	// Properties
	for(NSString *prop in properties)
	{
		[output appendFormat:@"@property (nonatomic, retain) %@;\n", prop]; //TODO: change options (nonatomic, retain, etc.) based on prop type
	}
	
	if([properties count] > 0)
	{
		[output appendString:@"\n"];
	}
	
	// Methods
	for(NSString *meth in methods)
	{
		[output appendFormat:@"%@\n", meth];
	}
	
	[output appendString:@"\n@end"];
	
	BOOL retVal = [Util writeString:output toFile:file];
	
	[output release];
	
	return retVal;
}

-(BOOL)writeSourceToFile:(NSString *) file
{
	NSMutableString *output = [[NSMutableString alloc] init];
	
	// Imports
	[output appendFormat:@"#import \"%@.h\"\n\n", self.name];
	
	[output appendFormat:@"@implementation %@\n\n", self.name, self.parent];
	
	// Properties
	for(NSString *prop in properties)
	{
		[output appendFormat:@"@synthesize %@;\n", prop];
	}
	
	if([properties count] > 0)
	{
		[output appendString:@"\n"];
	}
	
	// Methods
	for(NSString *meth in methods)
	{
		[output appendFormat:@"%@\n", meth];
	}
		
	[output appendString:@"@end"];
	
	BOOL retVal = [Util writeString:output toFile:file];
	
	[output release];
	
	return retVal;
}

-(void)dealloc
{
	[name release];
	[parent release];
	[constants release];
	[enumerations release];
	[variables release];
	[properties release];
	[methods release];
	[super dealloc];
}

@end
