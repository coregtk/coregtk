/*
 * Gir2Objc.m
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
#import "Gir2Objc.h"

@implementation Gir2Objc

-(BOOL)parseGirFromFile:(NSString *) girFile intoDictionary:(NSDictionary **) girDict withError:(NSError **) parseError;
{
	*girDict = nil;
	*parseError = nil;
	
	NSString *girContents = [[NSString alloc] initWithContentsOfFile:girFile];

	if(girContents == nil)
	{
		NSLog(@"Could not load gir contents!");
		return NO;
	}
	
	// Parse the XML into a dictionary	
	*girDict = [XMLReader dictionaryForXMLString:girContents error:parseError];

	if(*parseError != nil)
	{
		// On error, if a dictionary was still created, clean it up before returning
		if(*girDict != nil)
		{
			[*girDict release];
		}
		
		return NO;
	}
	
	return YES;
}

-(GIRApi *)firstApiFromDictionary:(NSDictionary *) girDict
{
	if(girDict == nil)
	{
		return nil;
	}

	for (NSString *key in girDict)
	{
		id value = [girDict objectForKey:key];
		
		if([key isEqualToString:@"api"] || [key isEqualToString:@"repository"])
		{
			return [[[GIRApi alloc] initWithDictionary:value] autorelease];
		}
		else if([value isKindOfClass:[NSDictionary class]])
		{
			return [self firstApiFromDictionary:value];
		}
	}
	
	return nil;
}

-(GIRApi *)firstApiFromGirFile:(NSString *) girFile withError:(NSError **) parseError
{
	NSDictionary *girDict = nil;
	*parseError = nil;
	
	if(![self parseGirFromFile: girFile intoDictionary: &girDict withError: parseError])
	{
		return nil;
	}
	
	return [self firstApiFromDictionary: girDict];
}

@end
