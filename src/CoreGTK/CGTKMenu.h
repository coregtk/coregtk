/*
 * CGTKMenu.h
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
#import "CoreGTK/CGTKMenuShell.h"

@interface CGTKMenu : CGTKMenuShell
{

}

/**
 * Functions
 */
+(GList*)getForAttachWidget:(CGTKWidget*) widget;

/**
 * Constructors
 */
-(id)init;
-(id)initFromModel:(GMenuModel*) model;

/**
 * Methods
 */

-(GtkMenu*)MENU;

/**
 * -(void*)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;
 *
 * @param child
 * @param leftAttach
 * @param rightAttach
 * @param topAttach
 * @param bottomAttach
 */
-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;

/**
 * -(void*)attachToWidgetWithAttachWidget:(CGTKWidget*) attachWidget andDetacher:(GtkMenuDetachFunc) detacher;
 *
 * @param attachWidget
 * @param detacher
 */
-(void)attachToWidgetWithAttachWidget:(CGTKWidget*) attachWidget andDetacher:(GtkMenuDetachFunc) detacher;

/**
 * -(void*)detach;
 *
 */
-(void)detach;

/**
 * -(GtkAccelGroup**)getAccelGroup;
 *
 * @returns GtkAccelGroup*
 */
-(GtkAccelGroup*)getAccelGroup;

/**
 * -(NSString**)getAccelPath;
 *
 * @returns NSString*
 */
-(NSString*)getAccelPath;

/**
 * -(CGTKWidget**)getActive;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getActive;

/**
 * -(CGTKWidget**)getAttachWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getAttachWidget;

/**
 * -(gint*)getMonitor;
 *
 * @returns gint
 */
-(gint)getMonitor;

/**
 * -(BOOL*)getReserveToggleSize;
 *
 * @returns BOOL
 */
-(BOOL)getReserveToggleSize;

/**
 * -(BOOL*)getTearoffState;
 *
 * @returns BOOL
 */
-(BOOL)getTearoffState;

/**
 * -(NSString**)getTitle;
 *
 * @returns NSString*
 */
-(NSString*)getTitle;

/**
 * -(void*)popdown;
 *
 */
-(void)popdown;

/**
 * -(void*)popupWithParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andButton:(guint) button andActivateTime:(guint32) activateTime;
 *
 * @param parentMenuShell
 * @param parentMenuItem
 * @param func
 * @param data
 * @param button
 * @param activateTime
 */
-(void)popupWithParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andButton:(guint) button andActivateTime:(guint32) activateTime;

/**
 * -(void*)popupForDeviceWithDevice:(GdkDevice*) device andParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy andButton:(guint) button andActivateTime:(guint32) activateTime;
 *
 * @param device
 * @param parentMenuShell
 * @param parentMenuItem
 * @param func
 * @param data
 * @param destroy
 * @param button
 * @param activateTime
 */
-(void)popupForDeviceWithDevice:(GdkDevice*) device andParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy andButton:(guint) button andActivateTime:(guint32) activateTime;

/**
 * -(void*)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
 *
 * @param child
 * @param position
 */
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;

/**
 * -(void*)reposition;
 *
 */
-(void)reposition;

/**
 * -(void*)setAccelGroup:(GtkAccelGroup*) accelGroup;
 *
 * @param accelGroup
 */
-(void)setAccelGroup:(GtkAccelGroup*) accelGroup;

/**
 * -(void*)setAccelPath:(NSString*) accelPath;
 *
 * @param accelPath
 */
-(void)setAccelPath:(NSString*) accelPath;

/**
 * -(void*)setActive:(guint) index;
 *
 * @param index
 */
-(void)setActive:(guint) index;

/**
 * -(void*)setMonitor:(gint) monitorNum;
 *
 * @param monitorNum
 */
-(void)setMonitor:(gint) monitorNum;

/**
 * -(void*)setReserveToggleSize:(BOOL) reserveToggleSize;
 *
 * @param reserveToggleSize
 */
-(void)setReserveToggleSize:(BOOL) reserveToggleSize;

/**
 * -(void*)setScreen:(GdkScreen*) screen;
 *
 * @param screen
 */
-(void)setScreen:(GdkScreen*) screen;

/**
 * -(void*)setTearoffState:(BOOL) tornOff;
 *
 * @param tornOff
 */
-(void)setTearoffState:(BOOL) tornOff;

/**
 * -(void*)setTitle:(NSString*) title;
 *
 * @param title
 */
-(void)setTitle:(NSString*) title;

@end