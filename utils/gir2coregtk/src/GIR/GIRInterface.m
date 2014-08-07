/*
 * GIRInterface.m
 * This file is part of gir2objc
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
 * Modified by the gir2objc Team, 2014. See the AUTHORS file for a
 * list of people on the gir2objc Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "GIRInterface.h"

@implementation GIRInterface

@synthesize name;
@synthesize cType;
@synthesize cSymbolPrefix;
@synthesize doc;
@synthesize fields;
@synthesize methods;
@synthesize virtualMethods;
@synthesize properties;
@synthesize prerequisite;

-(id)init
{
	self = [super init];
	
	if(self)
	{
		self.elementTypeName = @"GIRInterface";
		self.fields = [[NSMutableArray alloc] init];
		self.methods = [[NSMutableArray alloc] init];
		self.virtualMethods = [[NSMutableArray alloc] init];
		self.properties = [[NSMutableArray alloc] init];
		self.prerequisite = [[NSMutableArray alloc] init];
	}
	
	return self;
}

-(id)initWithDictionary:(NSDictionary *) dict
{
	self = [self init];
	
	if(self)
	{
		[self parseDictionary:dict];
	}
	
	return self;
}

-(void)parseDictionary:(NSDictionary *) dict
{
	for (NSString *key in dict)
	{	
		id value = [dict objectForKey:key];
	
		if([key isEqualToString:@"text"]
			|| [key isEqualToString:@"glib:type-name"]
			|| [key isEqualToString:@"glib:type-struct"]
			|| [key isEqualToString:@"glib:signal"]
			|| [key isEqualToString:@"glib:get-type"])
		{
			// Do nothing
		}
		else if([key isEqualToString:@"name"])
		{
			self.name = value;
		}
		else if([key isEqualToString:@"c:type"])
		{
			self.cType = value;
		}
		else if([key isEqualToString:@"c:symbol-prefix"])
		{
			self.cSymbolPrefix = value;
		}
		else if([key isEqualToString:@"doc"])
		{
			self.doc = [[GIRDoc alloc] initWithDictionary:value];
		}
		else if([key isEqualToString:@"fields"])
		{
			[self processArrayOrDictionary:value withClass:[GIRField class] andArray:fields];
		}
		else if([key isEqualToString:@"method"])
		{
			[self processArrayOrDictionary:value withClass:[GIRMethod class] andArray:methods];
		}
		else if([key isEqualToString:@"virtual-method"])
		{
			[self processArrayOrDictionary:value withClass:[GIRMethod class] andArray:virtualMethods];
		}
		else if([key isEqualToString:@"property"])
		{
			[self processArrayOrDictionary:value withClass:[GIRProperty class] andArray:properties];
		}
		else if([key isEqualToString:@"prerequisite"])
		{
			self.prerequisite = [[GIRPrerequisite alloc] initWithDictionary:value];
		}
		else
		{
			[self logUnknownElement:key];
		}
	}	
}

-(void)dealloc
{
	[name release];
	[cType release];
	[cSymbolPrefix release];
	[doc release];
	[fields release];
	[methods release];
	[virtualMethods release];
	[properties release];
	[prerequisite release];
	[super dealloc];
}

@end
