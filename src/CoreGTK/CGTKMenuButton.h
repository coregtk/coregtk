/*
 * CGTKMenuButton.h
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
#import "CoreGTK/CGTKToggleButton.h"

@interface CGTKMenuButton : CGTKToggleButton
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkMenuButton*)MENUBUTTON;

/**
 * -(CGTKWidget**)getAlignWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getAlignWidget;

/**
 * -(GtkArrowType*)getDirection;
 *
 * @returns GtkArrowType
 */
-(GtkArrowType)getDirection;

/**
 * -(GMenuModel**)getMenuModel;
 *
 * @returns GMenuModel*
 */
-(GMenuModel*)getMenuModel;

/**
 * -(GtkPopover**)getPopover;
 *
 * @returns GtkPopover*
 */
-(GtkPopover*)getPopover;

/**
 * -(GtkMenu**)getPopup;
 *
 * @returns GtkMenu*
 */
-(GtkMenu*)getPopup;

/**
 * -(BOOL*)getUsePopover;
 *
 * @returns BOOL
 */
-(BOOL)getUsePopover;

/**
 * -(void*)setAlignWidget:(CGTKWidget*) alignWidget;
 *
 * @param alignWidget
 */
-(void)setAlignWidget:(CGTKWidget*) alignWidget;

/**
 * -(void*)setDirection:(GtkArrowType) direction;
 *
 * @param direction
 */
-(void)setDirection:(GtkArrowType) direction;

/**
 * -(void*)setMenuModel:(GMenuModel*) menuModel;
 *
 * @param menuModel
 */
-(void)setMenuModel:(GMenuModel*) menuModel;

/**
 * -(void*)setPopover:(CGTKWidget*) popover;
 *
 * @param popover
 */
-(void)setPopover:(CGTKWidget*) popover;

/**
 * -(void*)setPopup:(CGTKWidget*) menu;
 *
 * @param menu
 */
-(void)setPopup:(CGTKWidget*) menu;

/**
 * -(void*)setUsePopover:(BOOL) usePopover;
 *
 * @param usePopover
 */
-(void)setUsePopover:(BOOL) usePopover;

@end