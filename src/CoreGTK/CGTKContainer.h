/*
 * CGTKContainer.h
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
#import "CoreGTK/CGTKWidget.h"

@interface CGTKContainer : CGTKWidget
{

}


/**
 * Methods
 */

-(GtkContainer*)CONTAINER;

-(void)addWidget:(CGTKWidget *)widget withProperties:(NSDictionary *)properties;

/**
 * -(void*)add:(CGTKWidget*) widget;
 *
 * @param widget
 */
-(void)add:(CGTKWidget*) widget;

/**
 * -(void*)checkResize;
 *
 */
-(void)checkResize;

/**
 * -(void*)childGetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(GValue*) value;
 *
 * @param child
 * @param propertyName
 * @param value
 */
-(void)childGetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(GValue*) value;

/**
 * -(void*)childGetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
 *
 * @param child
 * @param firstPropertyName
 * @param varArgs
 */
-(void)childGetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;

/**
 * -(void*)childNotifyWithChild:(CGTKWidget*) child andChildProperty:(NSString*) childProperty;
 *
 * @param child
 * @param childProperty
 */
-(void)childNotifyWithChild:(CGTKWidget*) child andChildProperty:(NSString*) childProperty;

/**
 * -(void*)childNotifyByPspecWithChild:(CGTKWidget*) child andPspec:(GParamSpec*) pspec;
 *
 * @param child
 * @param pspec
 */
-(void)childNotifyByPspecWithChild:(CGTKWidget*) child andPspec:(GParamSpec*) pspec;

/**
 * -(void*)childSetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(const GValue*) value;
 *
 * @param child
 * @param propertyName
 * @param value
 */
-(void)childSetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(const GValue*) value;

/**
 * -(void*)childSetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
 *
 * @param child
 * @param firstPropertyName
 * @param varArgs
 */
-(void)childSetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;

/**
 * -(GType*)childType;
 *
 * @returns GType
 */
-(GType)childType;

/**
 * -(void*)forallWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
 *
 * @param callback
 * @param callbackData
 */
-(void)forallWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;

/**
 * -(void*)foreachWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
 *
 * @param callback
 * @param callbackData
 */
-(void)foreachWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;

/**
 * -(guint*)getBorderWidth;
 *
 * @returns guint
 */
-(guint)getBorderWidth;

/**
 * -(GList**)getChildren;
 *
 * @returns GList*
 */
-(GList*)getChildren;

/**
 * -(BOOL*)getFocusChain:(GList**) focusableWidgets;
 *
 * @param focusableWidgets
 * @returns BOOL
 */
-(BOOL)getFocusChain:(GList**) focusableWidgets;

/**
 * -(CGTKWidget**)getFocusChild;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getFocusChild;

/**
 * -(GtkAdjustment**)getFocusHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getFocusHadjustment;

/**
 * -(GtkAdjustment**)getFocusVadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getFocusVadjustment;

/**
 * -(GtkWidgetPath**)getPathForChild:(CGTKWidget*) child;
 *
 * @param child
 * @returns GtkWidgetPath*
 */
-(GtkWidgetPath*)getPathForChild:(CGTKWidget*) child;

/**
 * -(GtkResizeMode*)getResizeMode;
 *
 * @returns GtkResizeMode
 */
-(GtkResizeMode)getResizeMode;

/**
 * -(void*)propagateDrawWithChild:(CGTKWidget*) child andCr:(cairo_t*) cr;
 *
 * @param child
 * @param cr
 */
-(void)propagateDrawWithChild:(CGTKWidget*) child andCr:(cairo_t*) cr;

/**
 * -(void*)remove:(CGTKWidget*) widget;
 *
 * @param widget
 */
-(void)remove:(CGTKWidget*) widget;

/**
 * -(void*)resizeChildren;
 *
 */
-(void)resizeChildren;

/**
 * -(void*)setBorderWidth:(guint) borderWidth;
 *
 * @param borderWidth
 */
-(void)setBorderWidth:(guint) borderWidth;

/**
 * -(void*)setFocusChain:(GList*) focusableWidgets;
 *
 * @param focusableWidgets
 */
-(void)setFocusChain:(GList*) focusableWidgets;

/**
 * -(void*)setFocusChild:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)setFocusChild:(CGTKWidget*) child;

/**
 * -(void*)setFocusHadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setFocusHadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setFocusVadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setFocusVadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setReallocateRedraws:(BOOL) needsRedraws;
 *
 * @param needsRedraws
 */
-(void)setReallocateRedraws:(BOOL) needsRedraws;

/**
 * -(void*)setResizeMode:(GtkResizeMode) resizeMode;
 *
 * @param resizeMode
 */
-(void)setResizeMode:(GtkResizeMode) resizeMode;

/**
 * -(void*)unsetFocusChain;
 *
 */
-(void)unsetFocusChain;

@end