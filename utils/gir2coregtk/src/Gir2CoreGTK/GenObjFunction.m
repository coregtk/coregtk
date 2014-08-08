/*
 * GenObjFunction.m
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
#import "GenObjFunction.h"

@implementation GenObjFunction

+(NSString *)objcBaseSignature:(GIRFunction *)func
{
	int i = 0;
	NSMutableString *output = [[[NSMutableString alloc] init] autorelease];
	
	if([func.parameters count] == 0)
	{
		NSString *returnType = func.returnValue.type.cType;
		if(returnType == nil)
		{
			returnType = func.returnValue.array.cType;
		}

		return [NSString stringWithFormat:@"-(%@)%@",
			 returnType, 
			 [Util convertUSSToCamelCase:func.name]];
	}
	else if([func.parameters count] == 1)
	{
		NSString *returnType = func.returnValue.type.cType;		
		if(returnType == nil)
		{
			returnType = func.returnValue.array.cType;
		}		

		GIRParameter *param = [func.parameters objectAtIndex:0];
		
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
				 [Util convertUSSToCamelCase:func.name],
				 cType,
				 [Util convertUSSToCamelCase:param.name]];
		}
	}
	else
	{
		NSString *returnType = func.returnValue.type.cType;		
		if(returnType == nil)
		{
			returnType = func.returnValue.array.cType;
		}	
	
		[output appendString:[NSString stringWithFormat:@"-(%@)%@With",
			 returnType, 
			 [Util convertUSSToCamelCase:func.name]]];
			
		GIRParameter *param = nil;
		 
		for(i = 0; i < [func.parameters count]; i++)
		{
			param = [func.parameters objectAtIndex:i];
			
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
			
			if(i != [func.parameters count] - 1)
			{
				[output appendString:@" "];
			}
		}
	}
			 
	return output;
}

+(NSString *)objcHeaderSignature:(GIRFunction *)func
{
	return [NSString stringWithFormat:@"%@;", [GenObjFunction objcBaseSignature:func], @";"];
}

+(NSString *)objcSourceSignature:(GIRFunction *)func
{
	int i = 0;
	NSMutableString *output = [[[NSMutableString alloc] init] autorelease];

	[output appendString: [GenObjFunction objcBaseSignature:func]];
	[output appendString:@"\n{\n"];
	
	[output appendString:@"\t"];
	
	if(![func.returnValue.type.cType isEqualToString:@"void"])
	{
		[output appendString:@"return "];
	}
	
	[output appendFormat:@"%@(", func.cIdentifier];
	
	for(i = 0; i < [func.instanceParameters count]; i++)
	{
		[output appendString:@"TODO!!!!!!"]; //TODO: need to actually implement this once we start parsing real classes
		
		if([func.instanceParameters count] > 1 || [func.parameters count] > 0)
		{
			[output appendString:@", "];
		}
	}
	
	for(i = 0; i < [func.parameters count]; i++)
	{
		[output appendString:[Util convertUSSToCamelCase:[[func.parameters objectAtIndex:i] name]]];
		
		if(i != [func.parameters count] - 1)
		{
			[output appendString:@", "];
		}
	}
	
	[output appendString:@");\n}\n"];
	
	return output;
}

@end
