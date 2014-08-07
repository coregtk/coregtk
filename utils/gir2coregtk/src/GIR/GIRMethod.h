/*
 * GIRMethod.h
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
#import "GIR/GIRBase.h"
#import "GIR/GIRParameter.h"
#import "GIR/GIRReturnValue.h"

@interface GIRMethod : GIRBase
{
	NSString *name;
	NSString *cIdentifier;
	NSString *version;
	NSString *invoker;
	GIRReturnValue *returnValue;
	GIRDoc *doc;
	GIRDoc *docDeprecated;
	BOOL deprecated;
	NSString *deprecatedVersion;
	BOOL throws;
	BOOL introspectable;
	BOOL shadowedBy;
	BOOL shadows;
	NSMutableArray *parameters;
	NSMutableArray *instanceParameters;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *cIdentifier;
@property (nonatomic, retain) NSString *version;
@property (nonatomic, retain) GIRReturnValue *returnValue;
@property (nonatomic, retain) GIRDoc *doc;
@property (nonatomic, retain) GIRDoc *docDeprecated;
@property (nonatomic, retain) NSString *deprecatedVersion;
@property (nonatomic, retain) NSString *invoker;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL throws;
@property (nonatomic) BOOL introspectable;
@property (nonatomic) BOOL shadowedBy;
@property (nonatomic) BOOL shadows;
@property (nonatomic, retain) NSMutableArray *parameters;
@property (nonatomic, retain) NSMutableArray *instanceParameters;

-(BOOL)tryParseWithKey:(NSString *)key andValue:(id)value;

@end
