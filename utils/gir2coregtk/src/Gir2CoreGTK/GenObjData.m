/*
 * GenObjData.m
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
#import "GenObjData.h"

@implementation GenObjData

@synthesize constants;
@synthesize constructors;
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
		constructors = [[NSMutableArray alloc] init];
		enumerations = [[NSMutableArray alloc] init];
		variables = [[NSMutableArray alloc] init];
		properties = [[NSMutableArray alloc] init];
		methods = [[NSMutableArray alloc] init];
	}
	
	return self;
}

-(void)dealloc
{
	[constants release];
	[constructors release];
	[enumerations release];
	[variables release];
	[properties release];
	[methods release];
	[super dealloc];
}

@end
