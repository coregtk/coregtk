/*
 * CGTKAppChooserWidget.h
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
#import "CoreGTK/CGTKBox.h"

@interface CGTKAppChooserWidget : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) contentType;

/**
 * Methods
 */

-(GtkAppChooserWidget*)APPCHOOSERWIDGET;

/**
 * -(NSString**)getDefaultText;
 *
 * @returns NSString*
 */
-(NSString*)getDefaultText;

/**
 * -(BOOL*)getShowAll;
 *
 * @returns BOOL
 */
-(BOOL)getShowAll;

/**
 * -(BOOL*)getShowDefault;
 *
 * @returns BOOL
 */
-(BOOL)getShowDefault;

/**
 * -(BOOL*)getShowFallback;
 *
 * @returns BOOL
 */
-(BOOL)getShowFallback;

/**
 * -(BOOL*)getShowOther;
 *
 * @returns BOOL
 */
-(BOOL)getShowOther;

/**
 * -(BOOL*)getShowRecommended;
 *
 * @returns BOOL
 */
-(BOOL)getShowRecommended;

/**
 * -(void*)setDefaultText:(NSString*) text;
 *
 * @param text
 */
-(void)setDefaultText:(NSString*) text;

/**
 * -(void*)setShowAll:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowAll:(BOOL) setting;

/**
 * -(void*)setShowDefault:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowDefault:(BOOL) setting;

/**
 * -(void*)setShowFallback:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowFallback:(BOOL) setting;

/**
 * -(void*)setShowOther:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowOther:(BOOL) setting;

/**
 * -(void*)setShowRecommended:(BOOL) setting;
 *
 * @param setting
 */
-(void)setShowRecommended:(BOOL) setting;

@end