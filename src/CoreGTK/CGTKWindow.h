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

/**
 * -(BOOL*)activateDefault;
 *
 * @returns BOOL
 */
-(BOOL)activateDefault;

/**
 * -(BOOL*)activateFocus;
 *
 * @returns BOOL
 */
-(BOOL)activateFocus;

/**
 * -(BOOL*)activateKey:(GdkEventKey*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)activateKey:(GdkEventKey*) event;

/**
 * -(void*)addAccelGroup:(GtkAccelGroup*) accelGroup;
 *
 * @param accelGroup
 */
-(void)addAccelGroup:(GtkAccelGroup*) accelGroup;

/**
 * -(void*)addMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;
 *
 * @param keyval
 * @param target
 */
-(void)addMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;

/**
 * -(void*)beginMoveDragWithButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;
 *
 * @param button
 * @param rootX
 * @param rootY
 * @param timestamp
 */
-(void)beginMoveDragWithButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;

/**
 * -(void*)beginResizeDragWithEdge:(GdkWindowEdge) edge andButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;
 *
 * @param edge
 * @param button
 * @param rootX
 * @param rootY
 * @param timestamp
 */
-(void)beginResizeDragWithEdge:(GdkWindowEdge) edge andButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp;

/**
 * -(void*)close;
 *
 */
-(void)close;

/**
 * -(void*)deiconify;
 *
 */
-(void)deiconify;

/**
 * -(void*)fullscreen;
 *
 */
-(void)fullscreen;

/**
 * -(BOOL*)getAcceptFocus;
 *
 * @returns BOOL
 */
-(BOOL)getAcceptFocus;

/**
 * -(GtkApplication**)getApplication;
 *
 * @returns GtkApplication*
 */
-(GtkApplication*)getApplication;

/**
 * -(CGTKWidget**)getAttachedTo;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getAttachedTo;

/**
 * -(BOOL*)getDecorated;
 *
 * @returns BOOL
 */
-(BOOL)getDecorated;

/**
 * -(void*)getDefaultSizeWithWidth:(gint*) width andHeight:(gint*) height;
 *
 * @param width
 * @param height
 */
-(void)getDefaultSizeWithWidth:(gint*) width andHeight:(gint*) height;

/**
 * -(CGTKWidget**)getDefaultWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getDefaultWidget;

/**
 * -(BOOL*)getDeletable;
 *
 * @returns BOOL
 */
-(BOOL)getDeletable;

/**
 * -(BOOL*)getDestroyWithParent;
 *
 * @returns BOOL
 */
-(BOOL)getDestroyWithParent;

/**
 * -(CGTKWidget**)getFocus;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getFocus;

/**
 * -(BOOL*)getFocusOnMap;
 *
 * @returns BOOL
 */
-(BOOL)getFocusOnMap;

/**
 * -(BOOL*)getFocusVisible;
 *
 * @returns BOOL
 */
-(BOOL)getFocusVisible;

/**
 * -(GdkGravity*)getGravity;
 *
 * @returns GdkGravity
 */
-(GdkGravity)getGravity;

/**
 * -(GtkWindowGroup**)getGroup;
 *
 * @returns GtkWindowGroup*
 */
-(GtkWindowGroup*)getGroup;

/**
 * -(BOOL*)getHasResizeGrip;
 *
 * @returns BOOL
 */
-(BOOL)getHasResizeGrip;

/**
 * -(BOOL*)getHideTitlebarWhenMaximized;
 *
 * @returns BOOL
 */
-(BOOL)getHideTitlebarWhenMaximized;

/**
 * -(GdkPixbuf**)getIcon;
 *
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getIcon;

/**
 * -(GList**)getIconList;
 *
 * @returns GList*
 */
-(GList*)getIconList;

/**
 * -(NSString**)getIconName;
 *
 * @returns NSString*
 */
-(NSString*)getIconName;

/**
 * -(GdkModifierType*)getMnemonicModifier;
 *
 * @returns GdkModifierType
 */
-(GdkModifierType)getMnemonicModifier;

/**
 * -(BOOL*)getMnemonicsVisible;
 *
 * @returns BOOL
 */
-(BOOL)getMnemonicsVisible;

/**
 * -(BOOL*)getModal;
 *
 * @returns BOOL
 */
-(BOOL)getModal;

/**
 * -(gdouble*)getOpacity;
 *
 * @returns gdouble
 */
-(gdouble)getOpacity;

/**
 * -(void*)getPositionWithRootX:(gint*) rootX andRootY:(gint*) rootY;
 *
 * @param rootX
 * @param rootY
 */
-(void)getPositionWithRootX:(gint*) rootX andRootY:(gint*) rootY;

/**
 * -(BOOL*)getResizable;
 *
 * @returns BOOL
 */
-(BOOL)getResizable;

/**
 * -(BOOL*)getResizeGripArea:(GdkRectangle*) rect;
 *
 * @param rect
 * @returns BOOL
 */
-(BOOL)getResizeGripArea:(GdkRectangle*) rect;

/**
 * -(NSString**)getRole;
 *
 * @returns NSString*
 */
-(NSString*)getRole;

/**
 * -(GdkScreen**)getScreen;
 *
 * @returns GdkScreen*
 */
-(GdkScreen*)getScreen;

/**
 * -(void*)getSizeWithWidth:(gint*) width andHeight:(gint*) height;
 *
 * @param width
 * @param height
 */
-(void)getSizeWithWidth:(gint*) width andHeight:(gint*) height;

/**
 * -(BOOL*)getSkipPagerHint;
 *
 * @returns BOOL
 */
-(BOOL)getSkipPagerHint;

/**
 * -(BOOL*)getSkipTaskbarHint;
 *
 * @returns BOOL
 */
-(BOOL)getSkipTaskbarHint;

/**
 * -(NSString**)getTitle;
 *
 * @returns NSString*
 */
-(NSString*)getTitle;

/**
 * -(GtkWindow**)getTransientFor;
 *
 * @returns GtkWindow*
 */
-(GtkWindow*)getTransientFor;

/**
 * -(GdkWindowTypeHint*)getTypeHint;
 *
 * @returns GdkWindowTypeHint
 */
-(GdkWindowTypeHint)getTypeHint;

/**
 * -(BOOL*)getUrgencyHint;
 *
 * @returns BOOL
 */
-(BOOL)getUrgencyHint;

/**
 * -(GtkWindowType*)getWindowType;
 *
 * @returns GtkWindowType
 */
-(GtkWindowType)getWindowType;

/**
 * -(BOOL*)hasGroup;
 *
 * @returns BOOL
 */
-(BOOL)hasGroup;

/**
 * -(BOOL*)hasToplevelFocus;
 *
 * @returns BOOL
 */
-(BOOL)hasToplevelFocus;

/**
 * -(void*)iconify;
 *
 */
-(void)iconify;

/**
 * -(BOOL*)isActive;
 *
 * @returns BOOL
 */
-(BOOL)isActive;

/**
 * -(void*)maximize;
 *
 */
-(void)maximize;

/**
 * -(BOOL*)mnemonicActivateWithKeyval:(guint) keyval andModifier:(GdkModifierType) modifier;
 *
 * @param keyval
 * @param modifier
 * @returns BOOL
 */
-(BOOL)mnemonicActivateWithKeyval:(guint) keyval andModifier:(GdkModifierType) modifier;

/**
 * -(void*)moveWithX:(gint) x andY:(gint) y;
 *
 * @param x
 * @param y
 */
-(void)moveWithX:(gint) x andY:(gint) y;

/**
 * -(BOOL*)parseGeometry:(NSString*) geometry;
 *
 * @param geometry
 * @returns BOOL
 */
-(BOOL)parseGeometry:(NSString*) geometry;

/**
 * -(void*)present;
 *
 */
-(void)present;

/**
 * -(void*)presentWithTime:(guint32) timestamp;
 *
 * @param timestamp
 */
-(void)presentWithTime:(guint32) timestamp;

/**
 * -(BOOL*)propagateKeyEvent:(GdkEventKey*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)propagateKeyEvent:(GdkEventKey*) event;

/**
 * -(void*)removeAccelGroup:(GtkAccelGroup*) accelGroup;
 *
 * @param accelGroup
 */
-(void)removeAccelGroup:(GtkAccelGroup*) accelGroup;

/**
 * -(void*)removeMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;
 *
 * @param keyval
 * @param target
 */
-(void)removeMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target;

/**
 * -(void*)reshowWithInitialSize;
 *
 */
-(void)reshowWithInitialSize;

/**
 * -(void*)resizeWithWidth:(gint) width andHeight:(gint) height;
 *
 * @param width
 * @param height
 */
-(void)resizeWithWidth:(gint) width andHeight:(gint) height;

/**
 * -(BOOL*)resizeGripIsVisible;
 *
 * @returns BOOL
 */
-(BOOL)resizeGripIsVisible;

/**
 * -(void*)resizeToGeometryWithWidth:(gint) width andHeight:(gint) height;
 *
 * @param width
 * @param height
 */
-(void)resizeToGeometryWithWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)setAcceptFocus:(BOOL) setting;
 *
 * @param setting
 */
-(void)setAcceptFocus:(BOOL) setting;

/**
 * -(void*)setApplication:(GtkApplication*) application;
 *
 * @param application
 */
-(void)setApplication:(GtkApplication*) application;

/**
 * -(void*)setAttachedTo:(CGTKWidget*) attachWidget;
 *
 * @param attachWidget
 */
-(void)setAttachedTo:(CGTKWidget*) attachWidget;

/**
 * -(void*)setDecorated:(BOOL) setting;
 *
 * @param setting
 */
-(void)setDecorated:(BOOL) setting;

/**
 * -(void*)setDefault:(CGTKWidget*) defaultWidget;
 *
 * @param defaultWidget
 */
-(void)setDefault:(CGTKWidget*) defaultWidget;

/**
 * -(void*)setDefaultGeometryWithWidth:(gint) width andHeight:(gint) height;
 *
 * @param width
 * @param height
 */
-(void)setDefaultGeometryWithWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)setDefaultSizeWithWidth:(gint) width andHeight:(gint) height;
 *
 * @param width
 * @param height
 */
-(void)setDefaultSizeWithWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)setDeletable:(BOOL) setting;
 *
 * @param setting
 */
-(void)setDeletable:(BOOL) setting;

/**
 * -(void*)setDestroyWithParent:(BOOL) setting;
 *
 * @param setting
 */
-(void)setDestroyWithParent:(BOOL) setting;

/**
 * -(void*)setFocus:(CGTKWidget*) focus;
 *
 * @param focus
 */
-(void)setFocus:(CGTKWidget*) focus;

/**
 * -(void*)setFocusOnMap:(BOOL) setting;
 *
 * @param setting
 */
-(void)setFocusOnMap:(BOOL) setting;

/**
 * -(void*)setFocusVisible:(BOOL) setting;
 *
 * @param setting
 */
-(void)setFocusVisible:(BOOL) setting;

/**
 * -(void*)setGeometryHintsWithGeometryWidget:(CGTKWidget*) geometryWidget andGeometry:(GdkGeometry*) geometry andGeomMask:(GdkWindowHints) geomMask;
 *
 * @param geometryWidget
 * @param geometry
 * @param geomMask
 */
-(void)setGeometryHintsWithGeometryWidget:(CGTKWidget*) geometryWidget andGeometry:(GdkGeometry*) geometry andGeomMask:(GdkWindowHints) geomMask;

/**
 * -(void*)setGravity:(GdkGravity) gravity;
 *
 * @param gravity
 */
-(void)setGravity:(GdkGravity) gravity;

/**
 * -(void*)setHasResizeGrip:(BOOL) value;
 *
 * @param value
 */
-(void)setHasResizeGrip:(BOOL) value;

/**
 * -(void*)setHasUserRefCount:(BOOL) setting;
 *
 * @param setting
 */
-(void)setHasUserRefCount:(BOOL) setting;

/**
 * -(void*)setHideTitlebarWhenMaximized:(BOOL) setting;
 *
 * @param setting
 */
-(void)setHideTitlebarWhenMaximized:(BOOL) setting;

/**
 * -(void*)setIcon:(GdkPixbuf*) icon;
 *
 * @param icon
 */
-(void)setIcon:(GdkPixbuf*) icon;

/**
 * -(BOOL*)setIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
 *
 * @param filename
 * @param err
 * @returns BOOL
 */
-(BOOL)setIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err;

/**
 * -(void*)setIconList:(GList*) list;
 *
 * @param list
 */
-(void)setIconList:(GList*) list;

/**
 * -(void*)setIconName:(NSString*) name;
 *
 * @param name
 */
-(void)setIconName:(NSString*) name;

/**
 * -(void*)setKeepAbove:(BOOL) setting;
 *
 * @param setting
 */
-(void)setKeepAbove:(BOOL) setting;

/**
 * -(void*)setKeepBelow:(BOOL) setting;
 *
 * @param setting
 */
-(void)setKeepBelow:(BOOL) setting;

/**
 * -(void*)setMnemonicModifier:(GdkModifierType) modifier;
 *
 * @param modifier
 */
-(void)setMnemonicModifier:(GdkModifierType) modifier;

/**
 * -(void*)setMnemonicsVisible:(BOOL) setting;
 *
 * @param setting
 */
-(void)setMnemonicsVisible:(BOOL) setting;

/**
 * -(void*)setModal:(BOOL) modal;
 *
 * @param modal
 */
-(void)setModal:(BOOL) modal;

/**
 * -(void*)setOpacity:(gdouble) opacity;
 *
 * @param opacity
 */
-(void)setOpacity:(gdouble) opacity;

/**
 * -(void*)setPosition:(GtkWindowPosition) position;
 *
 * @param position
 */
-(void)setPosition:(GtkWindowPosition) position;

/**
 * -(void*)setResizable:(BOOL) resizable;
 *
 * @param resizable
 */
-(void)setResizable:(BOOL) resizable;

/**
 * -(void*)setRole:(NSString*) role;
 *
 * @param role
 */
-(void)setRole:(NSString*) role;

/**
 * -(void*)setScreen:(GdkScreen*) screen;
 *
 * @param screen
 */
-(void)setScreen:(GdkScreen*) screen;

/**
 * -(void*)setSkipPagerHint:(BOOL) setting;
 *
 * @param setting
 */
-(void)setSkipPagerHint:(BOOL) setting;

/**
 * -(void*)setSkipTaskbarHint:(BOOL) setting;
 *
 * @param setting
 */
-(void)setSkipTaskbarHint:(BOOL) setting;

/**
 * -(void*)setStartupId:(NSString*) startupId;
 *
 * @param startupId
 */
-(void)setStartupId:(NSString*) startupId;

/**
 * -(void*)setTitle:(NSString*) title;
 *
 * @param title
 */
-(void)setTitle:(NSString*) title;

/**
 * -(void*)setTitlebar:(CGTKWidget*) titlebar;
 *
 * @param titlebar
 */
-(void)setTitlebar:(CGTKWidget*) titlebar;

/**
 * -(void*)setTransientFor:(GtkWindow*) parent;
 *
 * @param parent
 */
-(void)setTransientFor:(GtkWindow*) parent;

/**
 * -(void*)setTypeHint:(GdkWindowTypeHint) hint;
 *
 * @param hint
 */
-(void)setTypeHint:(GdkWindowTypeHint) hint;

/**
 * -(void*)setUrgencyHint:(BOOL) setting;
 *
 * @param setting
 */
-(void)setUrgencyHint:(BOOL) setting;

/**
 * -(void*)setWmclassWithWmclassName:(NSString*) wmclassName andWmclassClass:(NSString*) wmclassClass;
 *
 * @param wmclassName
 * @param wmclassClass
 */
-(void)setWmclassWithWmclassName:(NSString*) wmclassName andWmclassClass:(NSString*) wmclassClass;

/**
 * -(void*)stick;
 *
 */
-(void)stick;

/**
 * -(void*)unfullscreen;
 *
 */
-(void)unfullscreen;

/**
 * -(void*)unmaximize;
 *
 */
-(void)unmaximize;

/**
 * -(void*)unstick;
 *
 */
-(void)unstick;

@end