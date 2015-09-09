/*
 * CGTKCheckMenuItem.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuItem.h"

@interface CGTKCheckMenuItem : CGTKMenuItem
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */

-(GtkCheckMenuItem*)CHECKMENUITEM;

/**
 * -(BOOL*)getActive;
 *
 * @returns BOOL
 */
-(BOOL)getActive;

/**
 * -(BOOL*)getDrawAsRadio;
 *
 * @returns BOOL
 */
-(BOOL)getDrawAsRadio;

/**
 * -(BOOL*)getInconsistent;
 *
 * @returns BOOL
 */
-(BOOL)getInconsistent;

/**
 * -(void*)setActive:(BOOL) isActive;
 *
 * @param isActive
 */
-(void)setActive:(BOOL) isActive;

/**
 * -(void*)setDrawAsRadio:(BOOL) drawAsRadio;
 *
 * @param drawAsRadio
 */
-(void)setDrawAsRadio:(BOOL) drawAsRadio;

/**
 * -(void*)setInconsistent:(BOOL) setting;
 *
 * @param setting
 */
-(void)setInconsistent:(BOOL) setting;

/**
 * -(void*)toggled;
 *
 */
-(void)toggled;

@end