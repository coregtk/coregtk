/*
 * CGTKButton.h
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

@interface CGTKButton : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
-(id)initFromStock:(NSString*) stockId;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */

-(GtkButton*)BUTTON;

/**
 * -(void*)clicked;
 *
 */
-(void)clicked;

/**
 * -(void*)enter;
 *
 */
-(void)enter;

/**
 * -(void*)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;
 *
 * @param xalign
 * @param yalign
 */
-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;

/**
 * -(BOOL*)getAlwaysShowImage;
 *
 * @returns BOOL
 */
-(BOOL)getAlwaysShowImage;

/**
 * -(GdkWindow**)getEventWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getEventWindow;

/**
 * -(BOOL*)getFocusOnClick;
 *
 * @returns BOOL
 */
-(BOOL)getFocusOnClick;

/**
 * -(CGTKWidget**)getImage;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getImage;

/**
 * -(GtkPositionType*)getImagePosition;
 *
 * @returns GtkPositionType
 */
-(GtkPositionType)getImagePosition;

/**
 * -(NSString**)getLabel;
 *
 * @returns NSString*
 */
-(NSString*)getLabel;

/**
 * -(GtkReliefStyle*)getRelief;
 *
 * @returns GtkReliefStyle
 */
-(GtkReliefStyle)getRelief;

/**
 * -(BOOL*)getUseStock;
 *
 * @returns BOOL
 */
-(BOOL)getUseStock;

/**
 * -(BOOL*)getUseUnderline;
 *
 * @returns BOOL
 */
-(BOOL)getUseUnderline;

/**
 * -(void*)leave;
 *
 */
-(void)leave;

/**
 * -(void*)pressed;
 *
 */
-(void)pressed;

/**
 * -(void*)released;
 *
 */
-(void)released;

/**
 * -(void*)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;
 *
 * @param xalign
 * @param yalign
 */
-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;

/**
 * -(void*)setAlwaysShowImage:(BOOL) alwaysShow;
 *
 * @param alwaysShow
 */
-(void)setAlwaysShowImage:(BOOL) alwaysShow;

/**
 * -(void*)setFocusOnClick:(BOOL) focusOnClick;
 *
 * @param focusOnClick
 */
-(void)setFocusOnClick:(BOOL) focusOnClick;

/**
 * -(void*)setImage:(CGTKWidget*) image;
 *
 * @param image
 */
-(void)setImage:(CGTKWidget*) image;

/**
 * -(void*)setImagePosition:(GtkPositionType) position;
 *
 * @param position
 */
-(void)setImagePosition:(GtkPositionType) position;

/**
 * -(void*)setLabel:(NSString*) label;
 *
 * @param label
 */
-(void)setLabel:(NSString*) label;

/**
 * -(void*)setRelief:(GtkReliefStyle) newstyle;
 *
 * @param newstyle
 */
-(void)setRelief:(GtkReliefStyle) newstyle;

/**
 * -(void*)setUseStock:(BOOL) useStock;
 *
 * @param useStock
 */
-(void)setUseStock:(BOOL) useStock;

/**
 * -(void*)setUseUnderline:(BOOL) useUnderline;
 *
 * @param useUnderline
 */
-(void)setUseUnderline:(BOOL) useUnderline;

@end