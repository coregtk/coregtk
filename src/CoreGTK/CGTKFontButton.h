/*
 * CGTKFontButton.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKFontButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithFont:(NSString*) fontname;

/**
 * Methods
 */

-(GtkFontButton*)FONTBUTTON;

/**
 * -(NSString**)getFontName;
 *
 * @returns NSString*
 */
-(NSString*)getFontName;

/**
 * -(BOOL*)getShowSize;
 *
 * @returns BOOL
 */
-(BOOL)getShowSize;

/**
 * -(BOOL*)getShowStyle;
 *
 * @returns BOOL
 */
-(BOOL)getShowStyle;

/**
 * -(NSString**)getTitle;
 *
 * @returns NSString*
 */
-(NSString*)getTitle;

/**
 * -(BOOL*)getUseFont;
 *
 * @returns BOOL
 */
-(BOOL)getUseFont;

/**
 * -(BOOL*)getUseSize;
 *
 * @returns BOOL
 */
-(BOOL)getUseSize;

/**
 * -(BOOL*)setFontName:(NSString*) fontname;
 *
 * @param fontname
 * @returns BOOL
 */
-(BOOL)setFontName:(NSString*) fontname;

/**
 * -(void*)setShowSize:(BOOL) showSize;
 *
 * @param showSize
 */
-(void)setShowSize:(BOOL) showSize;

/**
 * -(void*)setShowStyle:(BOOL) showStyle;
 *
 * @param showStyle
 */
-(void)setShowStyle:(BOOL) showStyle;

/**
 * -(void*)setTitle:(NSString*) title;
 *
 * @param title
 */
-(void)setTitle:(NSString*) title;

/**
 * -(void*)setUseFont:(BOOL) useFont;
 *
 * @param useFont
 */
-(void)setUseFont:(BOOL) useFont;

/**
 * -(void*)setUseSize:(BOOL) useSize;
 *
 * @param useSize
 */
-(void)setUseSize:(BOOL) useSize;

@end