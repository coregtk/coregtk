/*
 * CGTKPopover.h
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

@interface CGTKPopover : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init:(CGTKWidget*) relativeTo;
-(id)initFromModelWithRelativeTo:(CGTKWidget*) relativeTo andModel:(GMenuModel*) model;

/**
 * Methods
 */

-(GtkPopover*)POPOVER;

/**
 * -(void*)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace;
 *
 * @param model
 * @param actionNamespace
 */
-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace;

/**
 * -(CGTKWidget**)getDefaultWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getDefaultWidget;

/**
 * -(BOOL*)getModal;
 *
 * @returns BOOL
 */
-(BOOL)getModal;

/**
 * -(BOOL*)getPointingTo:(GdkRectangle*) rect;
 *
 * @param rect
 * @returns BOOL
 */
-(BOOL)getPointingTo:(GdkRectangle*) rect;

/**
 * -(GtkPositionType*)getPosition;
 *
 * @returns GtkPositionType
 */
-(GtkPositionType)getPosition;

/**
 * -(CGTKWidget**)getRelativeTo;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getRelativeTo;

/**
 * -(BOOL*)getTransitionsEnabled;
 *
 * @returns BOOL
 */
-(BOOL)getTransitionsEnabled;

/**
 * -(void*)setDefaultWidget:(CGTKWidget*) widget;
 *
 * @param widget
 */
-(void)setDefaultWidget:(CGTKWidget*) widget;

/**
 * -(void*)setModal:(BOOL) modal;
 *
 * @param modal
 */
-(void)setModal:(BOOL) modal;

/**
 * -(void*)setPointingTo:(const GdkRectangle*) rect;
 *
 * @param rect
 */
-(void)setPointingTo:(const GdkRectangle*) rect;

/**
 * -(void*)setPosition:(GtkPositionType) position;
 *
 * @param position
 */
-(void)setPosition:(GtkPositionType) position;

/**
 * -(void*)setRelativeTo:(CGTKWidget*) relativeTo;
 *
 * @param relativeTo
 */
-(void)setRelativeTo:(CGTKWidget*) relativeTo;

/**
 * -(void*)setTransitionsEnabled:(BOOL) transitionsEnabled;
 *
 * @param transitionsEnabled
 */
-(void)setTransitionsEnabled:(BOOL) transitionsEnabled;

@end
