/*
 * CGTKToolItem.h
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
-(PangoEllipsizeMode)getEllipsizeMode;
-(BOOL)getExpand;
-(BOOL)getHomogeneous;
-(GtkIconSize)getIconSize;
-(BOOL)getIsImportant;
-(GtkOrientation)getOrientation;
-(CGTKWidget*)getProxyMenuItem:(NSString*) menuItemId;
-(GtkReliefStyle)getReliefStyle;
-(gfloat)getTextAlignment;
-(GtkOrientation)getTextOrientation;
-(GtkSizeGroup*)getTextSizeGroup;
-(GtkToolbarStyle)getToolbarStyle;
-(BOOL)getUseDragWindow;
-(BOOL)getVisibleHorizontal;
-(BOOL)getVisibleVertical;
-(void)rebuildMenu;
-(CGTKWidget*)retrieveProxyMenuItem;
-(void)setExpand:(BOOL) expand;
-(void)setHomogeneous:(BOOL) homogeneous;
-(void)setIsImportant:(BOOL) isImportant;
-(void)setProxyMenuItemWithMenuItemId:(NSString*) menuItemId andMenuItem:(CGTKWidget*) menuItem;
-(void)setTooltipMarkup:(NSString*) markup;
-(void)setTooltipText:(NSString*) text;
-(void)setUseDragWindow:(BOOL) useDragWindow;
-(void)setVisibleHorizontal:(BOOL) visibleHorizontal;
-(void)setVisibleVertical:(BOOL) visibleVertical;
-(void)toolbarReconfigured;

@end