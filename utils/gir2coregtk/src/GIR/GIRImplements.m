/*
 * GIRImplements.m
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
#import "GIRImplements.h"

@implementation GIRImplements

@synthesize name;

-(id)init
{
	self = [super init];
	
	if(self)
	{
		self.elementTypeName = @"GIRImplements";
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
			|| [key isEqualToString:@"type"])
		{
			// Do nothing
		}
		else if([key isEqualToString:@"name"])
		{
			self.name = value;
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
	[super dealloc];
}

@end
