/*
 * CGTKContainer.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CGTKWidget.h"

@interface CGTKContainer : CGTKWidget
{
	
}

-(GtkContainer *)CONTAINER;

-(void)setBorderWidth:(NSNumber *)borderWidth;

-(NSNumber *)getBorderWidth;

-(void)add:(CGTKWidget *)widget;

-(void)remove:(CGTKWidget *)widget;

-(void)setResizeMode:(GtkResizeMode)resizeMode;

-(GtkResizeMode)getResizeMode;

-(void)checkResize;

-(void)foreachWithCallback:(GtkCallback)callback andCallbackData:(gpointer)callbackData;

-(GList *)getChildren;

-(void)propagateExposeWithChild:(CGTKWidget *)child andEvent:(GdkEventExpose *)event;

-(void)setFocusChain:(GList *)focusableWidgets;

-(BOOL)getFocusChain:(GList **)focusableWidgets;

-(void)unsetFocusChain;

-(void)setReallocateRedraws:(BOOL)needsRedraws;

-(void)setFocusChild:(CGTKWidget *)child;

-(CGTKWidget *)getFocusChild;

-(void)setFocusVadjustment:(GtkAdjustment *)adjustment;

-(GtkAdjustment *)getFocusVadjustment;

-(void)setFocusHadjustment:(GtkAdjustment *)adjustment;

-(GtkAdjustment *)getFocusHadjustment;

-(void)resizeChildren;

-(GType)childType;

-(void)classInstallChildPropertyWithCclass:(GtkContainerClass *)cclass andPropertyId:(NSNumber *)propertyId andPspec:(GParamSpec *)pspec;

-(GParamSpec *)classFindChildPropertyWithCclass:(GObjectClass *)cclass andPropertyName:(NSString *)propertyName;

-(GParamSpec **)classListChildPropertiesWithCclass:(GObjectClass *)cclass andNProperties:(NSNumber **)nProperties;

-(void)childSetValistWithChild:(CGTKWidget *)child andFirstPropertyName:(NSString *)firstPropertyName andVarArgs:(va_list)varArgs;

-(void)childGetValistWithChild:(CGTKWidget *)child andFirstPropertyName:(NSString *)firstPropertyName andVarArgs:(va_list)varArgs;

-(void)childSetPropertyWithChild:(CGTKWidget *)child andPropertyName:(NSString *)propertyName andValue:(const GValue *)value;

-(void)childGetPropertyWithChild:(CGTKWidget *)child andPropertyName:(NSString *)propertyName andValue:(GValue *)value;

-(void)forallWithCallback:(GtkCallback)callback andCallbackData:(gpointer)callbackData;

@end
