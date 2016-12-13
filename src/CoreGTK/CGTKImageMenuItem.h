/*
 * CGTKImageMenuItem.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuItem.h"

@interface CGTKImageMenuItem : CGTKMenuItem
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromStockWithStockId:(NSString*) stockId andAccelGroup:(GtkAccelGroup*) accelGroup;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */

-(GtkImageMenuItem*)IMAGEMENUITEM;

/**
 * -(BOOL*)getAlwaysShowImage;
 *
 * @returns BOOL
 */
-(BOOL)getAlwaysShowImage;

/**
 * -(CGTKWidget**)getImage;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getImage;

/**
 * -(BOOL*)getUseStock;
 *
 * @returns BOOL
 */
-(BOOL)getUseStock;

/**
 * -(void*)setAccelGroup:(GtkAccelGroup*) accelGroup;
 *
 * @param accelGroup
 */
-(void)setAccelGroup:(GtkAccelGroup*) accelGroup;

/**
 * -(void*)setAlwaysShowImage:(BOOL) alwaysShow;
 *
 * @param alwaysShow
 */
-(void)setAlwaysShowImage:(BOOL) alwaysShow;

/**
 * -(void*)setImage:(CGTKWidget*) image;
 *
 * @param image
 */
-(void)setImage:(CGTKWidget*) image;

/**
 * -(void*)setUseStock:(BOOL) useStock;
 *
 * @param useStock
 */
-(void)setUseStock:(BOOL) useStock;

@end
