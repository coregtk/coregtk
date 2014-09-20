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

@synthesize generateConstants;
@synthesize generateEnumerations;
@synthesize generateFunctions;
@synthesize generateClasses;

@synthesize generatedNamespaceCount;
@synthesize generatedConstantCount;
@synthesize generatedEnumerationCount;
@synthesize generatedFunctionCount;
@synthesize generatedClassesCount;

@synthesize typeSwapDictionary;
@synthesize generatedClassDictionary;

@synthesize generatedClassPrefix;

-(id)init
{
	self = [super init];
	
	if(self)
	{
		self.generateConstants = NO;
		self.generateEnumerations = NO;
		self.generateFunctions = YES;
		self.generateClasses = YES;
		
		self.typeSwapDictionary = [[NSMutableDictionary alloc] init];
		self.generatedClassDictionary = [[NSMutableDictionary alloc] init];
	}
	
	return self;
}

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
			
	if(self.generateConstants)
	{
		for(GIRConstant *cnst in namespace.constants)
		{
			[generatedObject.constants addObject:[GenObjConstant objcHeaderString:cnst]];
		
			self.generatedConstantCount++;
		}
	}
	
	if(self.generateEnumerations)
	{
		for(GIREnumeration *enm in namespace.enumerations)
		{
			[generatedObject.enumerations addObject:[GenObjEnumeration objcHeaderString:enm]];
		
			self.generatedEnumerationCount++;
		}
	}
	
	if(self.generateFunctions)
	{
		for(GIRFunction *func in namespace.functions)
		{
			[generatedObject.methods addObject:[GenObjFunction objcHeaderSignature:func]];
		
			self.generatedFunctionCount++;
		}
	}
	
	if(self.generateClasses)
	{
		if(self.generatedClassPrefix == nil)
		{
			self.generatedClassPrefix = @"";
		}
	
		for(GIRClass *clazz in namespace.classes)
		{			
			GenObj *newClass = [[GenObj alloc] init];
			newClass.name = [NSString stringWithFormat:@"%@%@", generatedClassPrefix, clazz.name];
			
			if(clazz.parent != nil)
			{
				newClass.parent = [NSString stringWithFormat:@"%@%@", generatedClassPrefix, clazz.parent];
			}
			else
			{
				newClass.parent = @"NSObject";
			}
			
			// TODO: populate the rest of the newClass object from clazz
			
			[generatedClassDictionary setObject:newClass forKey:newClass.name];
			
			[newClass release];
		
			self.generatedClassesCount++;
		}
	}
	
	[generatedObject writeHeaderToFile:[NSString stringWithFormat:@"%@.h", [dir stringByAppendingPathComponent:name]]];
	
	GenObj *genClass;
	for(NSString *key in generatedClassDictionary)
	{
		genClass = [generatedClassDictionary objectForKey:key];
		[genClass writeHeaderToFile:[NSString stringWithFormat:@"%@.h", [dir stringByAppendingPathComponent:genClass.name]]];
	}
	
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
	
	if(self.generateFunctions)
	{
		for(GIRFunction *func in namespace.functions)
		{
			[generatedObject.methods addObject:[GenObjFunction objcSourceSignature:func]];
		}
	}
	
	if(self.generateClasses)
	{
		if(self.generatedClassPrefix == nil)
		{
			self.generatedClassPrefix = @"";
		}
		
		// TODO write class source files
	}
	
	[generatedObject writeSourceToFile:[NSString stringWithFormat:@"%@.m", [dir stringByAppendingPathComponent:name]]];
	
	[generatedObject release];	
	[output release];
	
	return YES;
}

-(void)dealloc
{
	[self.generatedClassPrefix release];
	[self.typeSwapDictionary release];
	[self.generatedClassDictionary release];
	[super dealloc];
}

@end
