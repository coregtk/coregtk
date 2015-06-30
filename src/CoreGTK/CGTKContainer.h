/*
 * CGTKContainer.h
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
#import "CoreGTK/CGTKWidget.h"

@interface CGTKContainer : CGTKWidget
{

}


/**
 * Methods
 */
-(GtkContainer*)CONTAINER;
-(void)add:(CGTKWidget*) widget;
-(void)checkResize;
-(void)childGetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(GValue*) value;
-(void)childGetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
-(void)childNotifyWithChild:(CGTKWidget*) child andChildProperty:(NSString*) childProperty;
-(void)childSetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(const GValue*) value;
-(void)childSetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
-(GType)childType;
-(void)forallWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
-(void)foreachWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
-(guint)getBorderWidth;
-(GList*)getChildren;
-(BOOL)getFocusChain:(GList**) focusableWidgets;
-(CGTKWidget*)getFocusChild;
-(GtkAdjustment*)getFocusHadjustment;
-(GtkAdjustment*)getFocusVadjustment;
-(GtkWidgetPath*)getPathForChild:(CGTKWidget*) child;
-(GtkResizeMode)getResizeMode;
-(void)propagateDrawWithChild:(CGTKWidget*) child andCr:(cairo_t*) cr;
-(void)remove:(CGTKWidget*) widget;
-(void)resizeChildren;
-(void)setBorderWidth:(guint) borderWidth;
-(void)setFocusChain:(GList*) focusableWidgets;
-(void)setFocusChild:(CGTKWidget*) child;
-(void)setFocusHadjustment:(GtkAdjustment*) adjustment;
-(void)setFocusVadjustment:(GtkAdjustment*) adjustment;
-(void)setReallocateRedraws:(BOOL) needsRedraws;
-(void)setResizeMode:(GtkResizeMode) resizeMode;
-(void)unsetFocusChain;

@end