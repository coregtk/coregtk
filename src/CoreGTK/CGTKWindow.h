/*
 * CGTKWindow.h
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

@interface CGTKWindow : CGTKBin
{

}

/**
 * Functions
 */
+(GList*)getDefaultIconList;
+(NSString*)getDefaultIconName;
+(GList*)listToplevels;
+(void)setAutoStartupNotification:(BOOL) setting;
+(void)setDefaultIcon:(GdkPixbuf*) icon;
+(BOOL)setDefaultIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
+(void)setDefaultIconList:(GList*) list;
+(void)setDefaultIconName:(NSString*) name;

/**
 * Constructors
 */
-(id)init:(GtkWindowType) type;

/**
 * Methods
 */
-(GtkWindow*)WINDOW;
-(BOOL)activateDefault;
-(BOOL)activateFocus;
-(BOOL)activateKey:(GdkEventKey*) event;
-(void)addAccelGroup:(GtkAccelGroup*) accelGroup;
-(void)addMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;
-(void)beginMoveDragWithButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;
-(void)beginResizeDragWithEdge:(GdkWindowEdge) edge andButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;
-(void)close;
-(void)deiconify;
-(void)fullscreen;
-(BOOL)getAcceptFocus;
-(GtkApplication*)getApplication;
-(CGTKWidget*)getAttachedTo;
-(BOOL)getDecorated;
-(void)getDefaultSizeWithWidth:(gint*) width andHeight:(gint*) height;
-(CGTKWidget*)getDefaultWidget;
-(BOOL)getDeletable;
-(BOOL)getDestroyWithParent;
-(CGTKWidget*)getFocus;
-(BOOL)getFocusOnMap;
-(BOOL)getFocusVisible;
-(GdkGravity)getGravity;
-(GtkWindowGroup*)getGroup;
-(BOOL)getHasResizeGrip;
-(BOOL)getHideTitlebarWhenMaximized;
-(GdkPixbuf*)getIcon;
-(GList*)getIconList;
-(NSString*)getIconName;
-(GdkModifierType)getMnemonicModifier;
-(BOOL)getMnemonicsVisible;
-(BOOL)getModal;
-(gdouble)getOpacity;
-(void)getPositionWithRootX:(gint*) rootX andRootY:(gint*) rootY;
-(BOOL)getResizable;
-(BOOL)getResizeGripArea:(GdkRectangle*) rect;
-(NSString*)getRole;
-(GdkScreen*)getScreen;
-(void)getSizeWithWidth:(gint*) width andHeight:(gint*) height;
-(BOOL)getSkipPagerHint;
-(BOOL)getSkipTaskbarHint;
-(NSString*)getTitle;
-(GtkWindow*)getTransientFor;
-(GdkWindowTypeHint)getTypeHint;
-(BOOL)getUrgencyHint;
-(GtkWindowType)getWindowType;
-(BOOL)hasGroup;
-(BOOL)hasToplevelFocus;
-(void)iconify;
-(BOOL)isActive;
-(void)maximize;
-(BOOL)mnemonicActivateWithKeyval:(guint) keyval andModifier:(GdkModifierType) modifier;
-(void)moveWithX:(gint) x andY:(gint) y;
-(BOOL)parseGeometry:(NSString*) geometry;
-(void)present;
-(void)presentWithTime:(guint32) timestamp;
-(BOOL)propagateKeyEvent:(GdkEventKey*) event;
-(void)removeAccelGroup:(GtkAccelGroup*) accelGroup;
-(void)removeMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;
-(void)reshowWithInitialSize;
-(void)resizeWithWidth:(gint) width andHeight:(gint) height;
-(BOOL)resizeGripIsVisible;
-(void)resizeToGeometryWithWidth:(gint) width andHeight:(gint) height;
-(void)setAcceptFocus:(BOOL) setting;
-(void)setApplication:(GtkApplication*) application;
-(void)setAttachedTo:(CGTKWidget*) attachWidget;
-(void)setDecorated:(BOOL) setting;
-(void)setDefault:(CGTKWidget*) defaultWidget;
-(void)setDefaultGeometryWithWidth:(gint) width andHeight:(gint) height;
-(void)setDefaultSizeWithWidth:(gint) width andHeight:(gint) height;
-(void)setDeletable:(BOOL) setting;
-(void)setDestroyWithParent:(BOOL) setting;
-(void)setFocus:(CGTKWidget*) focus;
-(void)setFocusOnMap:(BOOL) setting;
-(void)setFocusVisible:(BOOL) setting;
-(void)setGeometryHintsWithGeometryWidget:(CGTKWidget*) geometryWidget andGeometry:(GdkGeometry*) geometry andGeomMask:(GdkWindowHints) geomMask;
-(void)setGravity:(GdkGravity) gravity;
-(void)setHasResizeGrip:(BOOL) value;
-(void)setHasUserRefCount:(BOOL) setting;
-(void)setHideTitlebarWhenMaximized:(BOOL) setting;
-(void)setIcon:(GdkPixbuf*) icon;
-(BOOL)setIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
-(void)setIconList:(GList*) list;
-(void)setIconName:(NSString*) name;
-(void)setKeepAbove:(BOOL) setting;
-(void)setKeepBelow:(BOOL) setting;
-(void)setMnemonicModifier:(GdkModifierType) modifier;
-(void)setMnemonicsVisible:(BOOL) setting;
-(void)setModal:(BOOL) modal;
-(void)setOpacity:(gdouble) opacity;
-(void)setPosition:(GtkWindowPosition) position;
-(void)setResizable:(BOOL) resizable;
-(void)setRole:(NSString*) role;
-(void)setScreen:(GdkScreen*) screen;
-(void)setSkipPagerHint:(BOOL) setting;
-(void)setSkipTaskbarHint:(BOOL) setting;
-(void)setStartupId:(NSString*) startupId;
-(void)setTitle:(NSString*) title;
-(void)setTitlebar:(CGTKWidget*) titlebar;
-(void)setTransientFor:(GtkWindow*) parent;
-(void)setTypeHint:(GdkWindowTypeHint) hint;
-(void)setUrgencyHint:(BOOL) setting;
-(void)setWmclassWithWmclassName:(NSString*) wmclassName andWmclassClass:(NSString*) wmclassClass;
-(void)stick;
-(void)unfullscreen;
-(void)unmaximize;
-(void)unstick;

@end