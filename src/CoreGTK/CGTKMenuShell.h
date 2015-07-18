/*
 * CGTKMenuShell.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKMenuShell : CGTKContainer
{

}


/**
 * Methods
 */

-(GtkMenuShell*)MENUSHELL;

/**
 * -(void*)activateItemWithMenuItem:(CGTKWidget*) menuItem andForceDeactivate:(BOOL) forceDeactivate;
 *
 * @param menuItem
 * @param forceDeactivate
 */
-(void)activateItemWithMenuItem:(CGTKWidget*) menuItem andForceDeactivate:(BOOL) forceDeactivate;

/**
 * -(void*)append:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)append:(CGTKWidget*) child;

/**
 * -(void*)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace andWithSeparators:(BOOL) withSeparators;
 *
 * @param model
 * @param actionNamespace
 * @param withSeparators
 */
-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace andWithSeparators:(BOOL) withSeparators;

/**
 * -(void*)cancel;
 *
 */
-(void)cancel;

/**
 * -(void*)deactivate;
 *
 */
-(void)deactivate;

/**
 * -(void*)deselect;
 *
 */
-(void)deselect;

/**
 * -(CGTKWidget**)getParentShell;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getParentShell;

/**
 * -(CGTKWidget**)getSelectedItem;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getSelectedItem;

/**
 * -(BOOL*)getTakeFocus;
 *
 * @returns BOOL
 */
-(BOOL)getTakeFocus;

/**
 * -(void*)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;
 *
 * @param child
 * @param position
 */
-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;

/**
 * -(void*)prepend:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)prepend:(CGTKWidget*) child;

/**
 * -(void*)selectFirst:(BOOL) searchSensitive;
 *
 * @param searchSensitive
 */
-(void)selectFirst:(BOOL) searchSensitive;

/**
 * -(void*)selectItem:(CGTKWidget*) menuItem;
 *
 * @param menuItem
 */
-(void)selectItem:(CGTKWidget*) menuItem;

/**
 * -(void*)setTakeFocus:(BOOL) takeFocus;
 *
 * @param takeFocus
 */
-(void)setTakeFocus:(BOOL) takeFocus;

@end
