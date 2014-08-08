/*
 * GenObj.h
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
#import <Foundation/NSArray.h>
#import <Foundation/NSString.h>

#import "Gir2CoreGTK/Util.h"

@interface GenObj: NSObject
{
	NSString *name;
	NSString *parent;
	NSMutableArray *variables;
	NSMutableArray *properties;
	NSMutableArray *methods;
}

/**
 * Object name
 */
@property (nonatomic, retain) NSString *name;

/**
 * Object parent
 */
@property (nonatomic, retain) NSString *parent;

/**
 * Object variables
 */
@property (nonatomic, retain) NSMutableArray *variables;

/**
 * Object properties
 */
@property (nonatomic, retain) NSMutableArray *properties;

/**
 * Object methods
 */
@property (nonatomic, retain) NSMutableArray *methods;

/**
 * Writes out the contents of the header file
 */
-(BOOL)writeHeaderToFile:(NSString *) file;

/**
 * Writes out the contents of the source file
 */
-(BOOL)writeSourceToFile:(NSString *) file;

@end
