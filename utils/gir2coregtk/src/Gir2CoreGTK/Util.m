/*
 * Util.m
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
#import "Util.h"

@implementation Util

+(BOOL)writeString:(NSString *) str toFile:(NSString *) file
{
	NSError *error;
	BOOL succeed = [str writeToFile:file atomically:YES encoding:NSUTF8StringEncoding error:&error];
	if (!succeed)
	{
		NSLog(@"FAILED TO WRITE FILE %@", file);
	}
	
	return succeed;
}

+(NSString *)convertUSSToCamelCase:(NSString *)input
{
	NSString *output = [Util convertUSSToCapCase:input];
	
	if([output length] > 1)
	{	
		return [NSString stringWithFormat:@"%@%@",[[output substringToIndex:1] lowercaseString],[output substringFromIndex:1]];
	}
	else
	{
		return [output lowercaseString];
	}
}

+(NSString *)convertUSSToCapCase:(NSString *)input
{
	NSMutableString *output = [[[NSMutableString alloc] init] autorelease];
	NSArray *inputItems = [input componentsSeparatedByString:@"_"];
	
	for(NSString *item in inputItems)
	{
		if([item length] > 1)
		{
			[output appendFormat:@"%@%@",[[item substringToIndex:1] uppercaseString], [item substringFromIndex:1]];
		}
		else
		{
			[output appendString:[item uppercaseString]];
		}
	}

	return output;
}

@end
