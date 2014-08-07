/*
 * Gir2Objc.h
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
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSString.h>

#import "GIR/GIRApi.h"

#import "XMLReader/XMLReader.h"

@interface Gir2Objc : NSObject
{

}

/**
 * Parses the girFile XML into the NSDictionary
 */
-(BOOL)parseGirFromFile:(NSString *) girFile intoDictionary:(NSDictionary **) girDict withError:(NSError **) parseError;

/**
 * Recurses through the NSDictionary looking for the first "api" or "repository" key and then attempts to parse that into 
 * a GIRApi. If no key is found nil is returned.
 */
-(GIRApi *)firstApiFromDictionary:(NSDictionary *) girDict;

/**
 * Parses the girFile XML and then attempts to extract a GIRApi from the parsed contents. If the GIR is successfully parsed, 
 * but no valid data is found, nil is returned.
 */
-(GIRApi *)firstApiFromGirFile:(NSString *) girFile withError:(NSError **) parseError;

@end
