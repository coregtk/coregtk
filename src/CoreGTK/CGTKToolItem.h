/*
 * CGTKToolItem.h
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
#import "CoreGTK/CGTKBin.h"

@interface CGTKToolItem : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkToolItem*)TOOLITEM;

/**
 * -(PangoEllipsizeMode*)getEllipsizeMode;
 *
 * @returns PangoEllipsizeMode
 */
-(PangoEllipsizeMode)getEllipsizeMode;

/**
 * -(BOOL*)getExpand;
 *
 * @returns BOOL
 */
-(BOOL)getExpand;

/**
 * -(BOOL*)getHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getHomogeneous;

/**
 * -(GtkIconSize*)getIconSize;
 *
 * @returns GtkIconSize
 */
-(GtkIconSize)getIconSize;

/**
 * -(BOOL*)getIsImportant;
 *
 * @returns BOOL
 */
-(BOOL)getIsImportant;

/**
 * -(GtkOrientation*)getOrientation;
 *
 * @returns GtkOrientation
 */
-(GtkOrientation)getOrientation;

/**
 * -(CGTKWidget**)getProxyMenuItem:(NSString*) menuItemId;
 *
 * @param menuItemId
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getProxyMenuItem:(NSString*) menuItemId;

/**
 * -(GtkReliefStyle*)getReliefStyle;
 *
 * @returns GtkReliefStyle
 */
-(GtkReliefStyle)getReliefStyle;

/**
 * -(gfloat*)getTextAlignment;
 *
 * @returns gfloat
 */
-(gfloat)getTextAlignment;

/**
 * -(GtkOrientation*)getTextOrientation;
 *
 * @returns GtkOrientation
 */
-(GtkOrientation)getTextOrientation;

/**
 * -(GtkSizeGroup**)getTextSizeGroup;
 *
 * @returns GtkSizeGroup*
 */
-(GtkSizeGroup*)getTextSizeGroup;

/**
 * -(GtkToolbarStyle*)getToolbarStyle;
 *
 * @returns GtkToolbarStyle
 */
-(GtkToolbarStyle)getToolbarStyle;

/**
 * -(BOOL*)getUseDragWindow;
 *
 * @returns BOOL
 */
-(BOOL)getUseDragWindow;

/**
 * -(BOOL*)getVisibleHorizontal;
 *
 * @returns BOOL
 */
-(BOOL)getVisibleHorizontal;

/**
 * -(BOOL*)getVisibleVertical;
 *
 * @returns BOOL
 */
-(BOOL)getVisibleVertical;

/**
 * -(void*)rebuildMenu;
 *
 */
-(void)rebuildMenu;

/**
 * -(CGTKWidget**)retrieveProxyMenuItem;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)retrieveProxyMenuItem;

/**
 * -(void*)setExpand:(BOOL) expand;
 *
 * @param expand
 */
-(void)setExpand:(BOOL) expand;

/**
 * -(void*)setHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setIsImportant:(BOOL) isImportant;
 *
 * @param isImportant
 */
-(void)setIsImportant:(BOOL) isImportant;

/**
 * -(void*)setProxyMenuItemWithMenuItemId:(NSString*) menuItemId andMenuItem:(CGTKWidget*) menuItem;
 *
 * @param menuItemId
 * @param menuItem
 */
-(void)setProxyMenuItemWithMenuItemId:(NSString*) menuItemId andMenuItem:(CGTKWidget*) menuItem;

/**
 * -(void*)setTooltipMarkup:(NSString*) markup;
 *
 * @param markup
 */
-(void)setTooltipMarkup:(NSString*) markup;

/**
 * -(void*)setTooltipText:(NSString*) text;
 *
 * @param text
 */
-(void)setTooltipText:(NSString*) text;

/**
 * -(void*)setUseDragWindow:(BOOL) useDragWindow;
 *
 * @param useDragWindow
 */
-(void)setUseDragWindow:(BOOL) useDragWindow;

/**
 * -(void*)setVisibleHorizontal:(BOOL) visibleHorizontal;
 *
 * @param visibleHorizontal
 */
-(void)setVisibleHorizontal:(BOOL) visibleHorizontal;

/**
 * -(void*)setVisibleVertical:(BOOL) visibleVertical;
 *
 * @param visibleVertical
 */
-(void)setVisibleVertical:(BOOL) visibleVertical;

/**
 * -(void*)toolbarReconfigured;
 *
 */
-(void)toolbarReconfigured;

@end