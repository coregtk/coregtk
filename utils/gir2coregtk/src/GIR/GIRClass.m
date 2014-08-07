/*
 * GIRClass.m
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
#import "GIRClass.h"

@implementation GIRClass

@synthesize name;
@synthesize cType;
@synthesize cSymbolPrefix;
@synthesize parent;
@synthesize version;
@synthesize abstract;
@synthesize doc;
@synthesize constructors;
@synthesize fields;
@synthesize methods;
@synthesize virtualMethods;
@synthesize properties;
@synthesize implements;
@synthesize functions;


-(id)init
{
	self = [super init];
	
	if(self)
	{
		self.elementTypeName = @"GIRClass";
		self.constructors = [[NSMutableArray alloc] init];
		self.fields = [[NSMutableArray alloc] init];
		self.methods = [[NSMutableArray alloc] init];
		self.virtualMethods = [[NSMutableArray alloc] init];
		self.properties = [[NSMutableArray alloc] init];
		self.implements = [[NSMutableArray alloc] init];
		self.functions = [[NSMutableArray alloc] init];
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
			|| [key isEqualToString:@"glib:get-type"]
			|| [key isEqualToString:@"glib:signal"])
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
		else if([key isEqualToString:@"parent"])
		{
			self.parent = value;
		}	
		else if([key isEqualToString:@"version"])
		{
			self.version = value;
		}	
		else if([key isEqualToString:@"abstract"])
		{
			self.abstract = [value isEqualToString:@"1"];
		}
		else if([key isEqualToString:@"doc"])
		{
			self.doc = [[GIRDoc alloc] initWithDictionary:value];
		}	
		else if([key isEqualToString:@"constructor"])
		{
			[self processArrayOrDictionary:value withClass:[GIRConstructor class] andArray:constructors];
		}
		else if([key isEqualToString:@"field"])
		{
			[self processArrayOrDictionary:value withClass:[GIRField class] andArray:fields];
		}
		else if([key isEqualToString:@"method"])
		{
			[self processArrayOrDictionary:value withClass:[GIRMethod class] andArray:methods];
		}
		else if([key isEqualToString:@"virtual-method"])
		{
			[self processArrayOrDictionary:value withClass:[GIRVirtualMethod class] andArray:virtualMethods];
		}
		else if([key isEqualToString:@"property"])
		{
			[self processArrayOrDictionary:value withClass:[GIRProperty class] andArray:properties];
		}
		else if([key isEqualToString:@"implements"])
		{
			[self processArrayOrDictionary:value withClass:[GIRImplements class] andArray:implements];
		}
		else if([key isEqualToString:@"function"])
		{
			[self processArrayOrDictionary:value withClass:[GIRFunction class] andArray:functions];
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
	[parent release];
	[version release];
	[doc release];
	[constructors release];
	[fields release];
	[methods release];
	[virtualMethods release];
	[properties release];
	[implements release];
	[functions release];
	[super dealloc];
}

@end
