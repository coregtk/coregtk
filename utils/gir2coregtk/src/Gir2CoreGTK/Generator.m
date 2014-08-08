/*
 * Generator.m
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
#import "Gir2CoreGTK/Generator.h"

@implementation Generator

@synthesize generatedNamespaceCount;
@synthesize generatedFunctionCount;

-(BOOL)generateHeadersFromApi:(GIRApi *) api inOutputDir:(NSString *) dir
{
	if(api == nil || dir == nil)
	{
		return YES;
	}
	
	NSArray *namespaces = api.namespaces;
	
	if(namespaces == nil)
	{
		return YES;
	}
	
	for(GIRNamespace *ns in namespaces)
	{
		if(![self generateHeadersFromNamespace: ns inOutputDir: dir])
		{
			return NO;
		}
		
		self.generatedNamespaceCount++;
	}
	
	return YES;
}

-(BOOL)generateSourcesFromApi:(GIRApi *) api inOutputDir:(NSString *) dir
{
	if(api == nil || dir == nil)
	{
		return YES;
	}
	
	NSArray *namespaces = api.namespaces;
	
	if(namespaces == nil)
	{
		return YES;
	}
	
	for(GIRNamespace *ns in namespaces)
	{
		if(![self generateSourcesFromNamespace: ns inOutputDir: dir])
		{
			return NO;
		}
	}
	
	return YES;
}

-(BOOL)generateHeadersFromNamespace:(GIRNamespace *) namespace inOutputDir:(NSString *) dir
{
	if(namespace == nil || dir == nil)
	{
		return YES;
	}
	
	NSMutableString *output = [[NSMutableString alloc] init];
	NSString *name = [namespace.name uppercaseString];
	
	GenObj *generatedObject = [[GenObj alloc] init];
	generatedObject.name = name;
	generatedObject.parent = @"NSObject"; // TODO: this should be dynamic
	
	for(GIRFunction *func in namespace.functions)
	{
		[generatedObject.methods addObject:[GenObjFunction objcHeaderSignature:func]];
		
		self.generatedFunctionCount++;
	}
	
	[generatedObject writeHeaderToFile:[NSString stringWithFormat:@"%@.h", [dir stringByAppendingPathComponent:name]]];
	
	[generatedObject release];	
	[output release];
	
	return YES;
}

-(BOOL)generateSourcesFromNamespace:(GIRNamespace *) namespace inOutputDir:(NSString *) dir
{
	if(namespace == nil || dir == nil)
	{
		return YES;
	}
	
	NSMutableString *output = [[NSMutableString alloc] init];
	NSString *name = [namespace.name uppercaseString];
	
	GenObj *generatedObject = [[GenObj alloc] init];
	generatedObject.name = name;
	generatedObject.parent = @"NSObject";
	
	for(GIRFunction *func in namespace.functions)
	{
		[generatedObject.methods addObject:[GenObjFunction objcSourceSignature:func]];
	}
	
	[generatedObject writeSourceToFile:[NSString stringWithFormat:@"%@.m", [dir stringByAppendingPathComponent:name]]];
	
	[generatedObject release];	
	[output release];
	
	return YES;
}

@end
