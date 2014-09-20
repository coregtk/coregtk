/*
 * GenObjConstructor.m
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
#import "GenObjConstructor.h"

@implementation GenObjConstructor

+(NSString *)objcBaseSignature:(GIRConstructor *)ctor
{
	if([ctor.name hasPrefix:@"new"] && ![ctor.name isEqualToString:@"new"])
	{					
		ctor.name = [NSString stringWithFormat:@"%@%@", @"init", [ctor.name substringWithRange:NSMakeRange(3, [ctor.name length] - 3)]];
	}
	else
	{
		ctor.name = @"init";
	}

	int i = 0;
	NSMutableString *output = [[[NSMutableString alloc] init] autorelease];
	
	if([ctor.parameters count] == 0)
	{
		NSString *returnType = ctor.returnValue.type.cType;
		if(returnType == nil)
		{
			returnType = ctor.returnValue.array.cType;
		}

		return [NSString stringWithFormat:@"-(%@)%@",
			 returnType, 
			 [Util convertUSSToCamelCase:ctor.name]];
	}
	else if([ctor.parameters count] == 1)
	{
		NSString *returnType = ctor.returnValue.type.cType;		
		if(returnType == nil)
		{
			returnType = ctor.returnValue.array.cType;
		}		

		GIRParameter *param = [ctor.parameters objectAtIndex:0];
		
		NSString *cType = param.type.cType;
		if(cType == nil)
		{
			cType = param.array.cType;
		}
		if(cType == nil) // varargs
		{
			return [NSString stringWithFormat:@"-(%@)%@: ...",
				 cType, 
				 [Util convertUSSToCamelCase:param.name]];
		}
		else
		{
			return [NSString stringWithFormat:@"-(%@)%@:(%@) %@",
				 returnType, 
				 [Util convertUSSToCamelCase:ctor.name],
				 cType,
				 [Util convertUSSToCamelCase:param.name]];
		}
	}
	else
	{
		NSString *returnType = ctor.returnValue.type.cType;		
		if(returnType == nil)
		{
			returnType = ctor.returnValue.array.cType;
		}	
	
		[output appendString:[NSString stringWithFormat:@"-(%@)%@With",
			 returnType, 
			 [Util convertUSSToCamelCase:ctor.name]]];
			
		GIRParameter *param = nil;
		 
		for(i = 0; i < [ctor.parameters count]; i++)
		{
			param = [ctor.parameters objectAtIndex:i];
			
			NSString *cType = param.type.cType;			
			if(cType == nil)
			{
				cType = param.array.cType;
			}
			
			if(i != 0)
			{
				[output appendString:@"and"];
			}			
			
			if(cType == nil) // varargs
			{		
				[output appendFormat:@"Varargs: ..."]; //TODO: can't really support varargs unless there is a va_list option... perhaps just remove this completely?
			}
			else
			{			
				[output appendFormat:@"%@:(%@) %@",
					[Util convertUSSToCapCase:param.name],
					cType,
					[Util convertUSSToCamelCase:param.name]];
			}
			
			if(i != [ctor.parameters count] - 1)
			{
				[output appendString:@" "];
			}
		}
	}
			 
	return output;
}

+(NSString *)objcHeaderSignature:(GIRConstructor *)ctor
{
	return [NSString stringWithFormat:@"%@;", [GenObjConstructor objcBaseSignature:ctor], @";"];
}

+(NSString *)objcSourceSignature:(GIRConstructor *)ctor
{
	if([ctor.name hasPrefix:@"new"] && ![ctor.name isEqualToString:@"new"])
	{					
		ctor.name = [NSString stringWithFormat:@"%@%@", @"init", [ctor.name substringWithRange:NSMakeRange(3, [ctor.name length] - 3)]];
	}
	else
	{
		ctor.name = @"init";
	}

	int i = 0;
	NSMutableString *output = [[[NSMutableString alloc] init] autorelease];

	[output appendString: [GenObjConstructor objcBaseSignature:ctor]];
	[output appendString:@"\n{\n"];
	
	[output appendString:@"\t"];
	
	if(![ctor.returnValue.type.cType isEqualToString:@"void"])
	{
		[output appendString:@"return "];
	}
	
	[output appendFormat:@"%@(", ctor.cIdentifier];
	
	for(i = 0; i < [ctor.instanceParameters count]; i++)
	{
		[output appendString:@"TODO!!!!!!"]; //TODO: need to actually implement this once we start parsing real classes
		
		if([ctor.instanceParameters count] > 1 || [ctor.parameters count] > 0)
		{
			[output appendString:@", "];
		}
	}
	
	for(i = 0; i < [ctor.parameters count]; i++)
	{
		[output appendString:[Util convertUSSToCamelCase:[[ctor.parameters objectAtIndex:i] name]]];
		
		if(i != [ctor.parameters count] - 1)
		{
			[output appendString:@", "];
		}
	}
	
	[output appendString:@");\n}\n"];
	
	return output;
}

@end
