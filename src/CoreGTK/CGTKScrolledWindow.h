/*
 * CGTKScrolledWindow.h
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

@interface CGTKScrolledWindow : CGTKBin
{

}


/**
 * Constructors
 */
-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment;

/**
 * Methods
 */

-(GtkScrolledWindow*)SCROLLEDWINDOW;

/**
 * -(void*)addWithViewport:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)addWithViewport:(CGTKWidget*) child;

/**
 * -(BOOL*)getCaptureButtonPress;
 *
 * @returns BOOL
 */
-(BOOL)getCaptureButtonPress;

/**
 * -(GtkAdjustment**)getHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getHadjustment;

/**
 * -(CGTKWidget**)getHscrollbar;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getHscrollbar;

/**
 * -(BOOL*)getKineticScrolling;
 *
 * @returns BOOL
 */
-(BOOL)getKineticScrolling;

/**
 * -(gint*)getMinContentHeight;
 *
 * @returns gint
 */
-(gint)getMinContentHeight;

/**
 * -(gint*)getMinContentWidth;
 *
 * @returns gint
 */
-(gint)getMinContentWidth;

/**
 * -(BOOL*)getOverlayScrolling;
 *
 * @returns BOOL
 */
-(BOOL)getOverlayScrolling;

/**
 * -(GtkCornerType*)getPlacement;
 *
 * @returns GtkCornerType
 */
-(GtkCornerType)getPlacement;

/**
 * -(void*)getPolicyWithHscrollbarPolicy:(GtkPolicyType*) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType*) vscrollbarPolicy;
 *
 * @param hscrollbarPolicy
 * @param vscrollbarPolicy
 */
-(void)getPolicyWithHscrollbarPolicy:(GtkPolicyType*) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType*) vscrollbarPolicy;

/**
 * -(GtkShadowType*)getShadowType;
 *
 * @returns GtkShadowType
 */
-(GtkShadowType)getShadowType;

/**
 * -(GtkAdjustment**)getVadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getVadjustment;

/**
 * -(CGTKWidget**)getVscrollbar;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getVscrollbar;

/**
 * -(void*)setCaptureButtonPress:(BOOL) captureButtonPress;
 *
 * @param captureButtonPress
 */
-(void)setCaptureButtonPress:(BOOL) captureButtonPress;

/**
 * -(void*)setHadjustment:(GtkAdjustment*) hadjustment;
 *
 * @param hadjustment
 */
-(void)setHadjustment:(GtkAdjustment*) hadjustment;

/**
 * -(void*)setKineticScrolling:(BOOL) kineticScrolling;
 *
 * @param kineticScrolling
 */
-(void)setKineticScrolling:(BOOL) kineticScrolling;

/**
 * -(void*)setMinContentHeight:(gint) height;
 *
 * @param height
 */
-(void)setMinContentHeight:(gint) height;

/**
 * -(void*)setMinContentWidth:(gint) width;
 *
 * @param width
 */
-(void)setMinContentWidth:(gint) width;

/**
 * -(void*)setOverlayScrolling:(BOOL) overlayScrolling;
 *
 * @param overlayScrolling
 */
-(void)setOverlayScrolling:(BOOL) overlayScrolling;

/**
 * -(void*)setPlacement:(GtkCornerType) windowPlacement;
 *
 * @param windowPlacement
 */
-(void)setPlacement:(GtkCornerType) windowPlacement;

/**
 * -(void*)setPolicyWithHscrollbarPolicy:(GtkPolicyType) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType) vscrollbarPolicy;
 *
 * @param hscrollbarPolicy
 * @param vscrollbarPolicy
 */
-(void)setPolicyWithHscrollbarPolicy:(GtkPolicyType) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType) vscrollbarPolicy;

/**
 * -(void*)setShadowType:(GtkShadowType) type;
 *
 * @param type
 */
-(void)setShadowType:(GtkShadowType) type;

/**
 * -(void*)setVadjustment:(GtkAdjustment*) vadjustment;
 *
 * @param vadjustment
 */
-(void)setVadjustment:(GtkAdjustment*) vadjustment;

/**
 * -(void*)unsetPlacement;
 *
 */
-(void)unsetPlacement;

@end
