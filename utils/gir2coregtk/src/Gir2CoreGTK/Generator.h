/*
 * Generator.h
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
#import <Foundation/NSDictionary.h>
 
#import "GIR/GIRApi.h"

#import "Gir2CoreGTK/GenObj.h"
#import "Gir2CoreGTK/GenObjConstant.h"
#import "Gir2CoreGTK/GenObjConstructor.h"
#import "Gir2CoreGTK/GenObjEnumeration.h"
#import "Gir2CoreGTK/GenObjFunction.h"

@interface Generator : NSObject
{
	/*
	 * Switches
	 */
	BOOL generateConstants;
	BOOL generateEnumerations;
	BOOL generateFunctions;
	BOOL generateClasses;
	BOOL generateVarArgs;

	/*
	 * Counts
	 */
	unsigned int generatedNamespaceCount;
	unsigned int generatedConstantCount;
	unsigned int generatedEnumerationCount;
	unsigned int generatedFunctionCount;
	unsigned int generatedClassesCount;
	
	/*
	 * Dictionaries
	 */	
	NSMutableDictionary *typeSwapDictionary;
	NSMutableDictionary *generatedClassDictionary;
	
	/**
	 * Config
	 */
	NSString *generatedClassPrefix;
}

/**
 * A flag for generating constants. When TRUE or YES this will include Constants in the conversion. (Default = NO)
 */
@property (assign) BOOL generateConstants;

/**
 * A flag for generating enumerations. When TRUE or YES this will include Enumerations in the conversion. (Default = NO)
 */
@property (assign) BOOL generateEnumerations;

/**
 * A flag for generating functions. When TRUE or YES this will include Functions in the conversion. (Default = YES)
 */
@property (assign) BOOL generateFunctions;

/**
 * A flag for generating classes. When TRUE or YES this will include Classes in the conversion. (Default = YES)
 */
@property (assign) BOOL generateClasses;

/**
 * A flag for generating methods and functions with variable arguments. When TRUE or YES this will include the methods and functions in the conversion. (Default = NO)
 */
@property (assign) BOOL generateVarArgs;

/**
 * A running total of all processed namespaces
 */
@property (assign) unsigned int generatedNamespaceCount;

/**
 * A running total of all processed constants
 */
@property (assign) unsigned int generatedConstantCount;

/**
 * A running total of all processed enumerations
 */
@property (assign) unsigned int generatedEnumerationCount;

/**
 * A running total of all processed functions
 */
@property (assign) unsigned int generatedFunctionCount;

/**
 * A running total of all processed classes
 */
@property (assign) unsigned int generatedClassesCount;

/**
 * A dictionary of generated classes
 */
@property (nonatomic, retain) NSMutableDictionary *generatedClassDictionary;

/**
 * A dictionary of data types to swap between
 */
@property (nonatomic, retain) NSMutableDictionary *typeSwapDictionary;

/**
 * A prefix to add to generated classes
 */
@property (nonatomic, retain) NSString *generatedClassPrefix;

/**
 * Generates CoreGTK Objective-C header files extracted from the GIRApi and written out to the dir
 */
-(BOOL)generateHeadersFromApi:(GIRApi *) api inOutputDir:(NSString *) dir;

/**
 * Generates CoreGTK Objective-C source files extracted from the GIRApi and written out to the dir
 */
-(BOOL)generateSourcesFromApi:(GIRApi *) api inOutputDir:(NSString *) dir;


/**
 * Generates CoreGTK Objective-C header files extracted from the GIRNamespace and written out to the dir
 */
-(BOOL)generateHeadersFromNamespace:(GIRNamespace *) namespace inOutputDir:(NSString *) dir;

/**
 * Generates CoreGTK Objective-C source files extracted from the GIRNamespace and written out to the dir
 */
-(BOOL)generateSourcesFromNamespace:(GIRNamespace *) namespace inOutputDir:(NSString *) dir;

@end
