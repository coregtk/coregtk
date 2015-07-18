/*
 * CGTKMenuItem.h
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
#import "CoreGTK/CGTKBin.h"

@interface CGTKMenuItem : CGTKBin
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

-(GtkMenuItem*)MENUITEM;

/**
 * -(void*)activate;
 *
 */
-(void)activate;

/**
 * -(void*)deselect;
 *
 */
-(void)deselect;

/**
 * -(NSString**)getAccelPath;
 *
 * @returns NSString*
 */
-(NSString*)getAccelPath;

/**
 * -(NSString**)getLabel;
 *
 * @returns NSString*
 */
-(NSString*)getLabel;

/**
 * -(BOOL*)getReserveIndicator;
 *
 * @returns BOOL
 */
-(BOOL)getReserveIndicator;

/**
 * -(BOOL*)getRightJustified;
 *
 * @returns BOOL
 */
-(BOOL)getRightJustified;

/**
 * -(CGTKWidget**)getSubmenu;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getSubmenu;

/**
 * -(BOOL*)getUseUnderline;
 *
 * @returns BOOL
 */
-(BOOL)getUseUnderline;

/**
 * -(void*)select;
 *
 */
-(void)select;

/**
 * -(void*)setAccelPath:(NSString*) accelPath;
 *
 * @param accelPath
 */
-(void)setAccelPath:(NSString*) accelPath;

/**
 * -(void*)setLabel:(NSString*) label;
 *
 * @param label
 */
-(void)setLabel:(NSString*) label;

/**
 * -(void*)setReserveIndicator:(BOOL) reserve;
 *
 * @param reserve
 */
-(void)setReserveIndicator:(BOOL) reserve;

/**
 * -(void*)setRightJustified:(BOOL) rightJustified;
 *
 * @param rightJustified
 */
-(void)setRightJustified:(BOOL) rightJustified;

/**
 * -(void*)setSubmenu:(CGTKWidget*) submenu;
 *
 * @param submenu
 */
-(void)setSubmenu:(CGTKWidget*) submenu;

/**
 * -(void*)setUseUnderline:(BOOL) setting;
 *
 * @param setting
 */
-(void)setUseUnderline:(BOOL) setting;

/**
 * -(void*)toggleSizeAllocate:(gint) allocation;
 *
 * @param allocation
 */
-(void)toggleSizeAllocate:(gint) allocation;

/**
 * -(void*)toggleSizeRequest:(gint*) requisition;
 *
 * @param requisition
 */
-(void)toggleSizeRequest:(gint*) requisition;

@end
