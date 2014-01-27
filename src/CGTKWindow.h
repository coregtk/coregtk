/*
 * CGTKWindow.h
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
#import "CGTKBin.h"

@interface CGTKWindow : CGTKBin
{
	
}

-(GtkWindow *)WINDOW;

+(CGTKWindow *)windowWithGtkWindow:(GtkWindow *)window;

-(id)initWithGtkWindowType:(GtkWindowType)type;

-(NSString *)getTitle;

-(void)setTitle:(NSString *)title;

-(void)setWmclassWithWmclassName:(NSString *)wmclassName andWmclassClass:(NSString *)wmclassClass;

-(NSString *)getRole;

-(void)setRole:(NSString *)role;

-(void)setStartupId:(NSString *)startupId;

-(void)addAccelGroup:(GtkAccelGroup *)accelGroup;

-(void)removeAccelGroup:(GtkAccelGroup *)accelGroup;

-(void)setPosition:(GtkWindowPosition)position;

-(BOOL)activateFocus;

-(void)setFocus:(CGTKWidget *)focus;

-(CGTKWidget *)getFocus;

-(void)setDefault:(CGTKWidget *)defaultWidget;

-(CGTKWidget *)getDefaultWidget;

-(BOOL)activateDefault;

-(void)setTransientFor:(CGTKWindow *)parent;

-(CGTKWindow *)getTransientFor;

-(void)setOpacity:(NSNumber *)opacity;

-(NSNumber *)getOpacity;

-(void)setTypeHint:(GdkWindowTypeHint)hint;

-(GdkWindowTypeHint)getTypeHint;

-(void)setSkipTaskbarHint:(BOOL)setting;

-(BOOL)getSkipTaskbarHint;

-(void)setSkipPagerHint:(BOOL)setting;

-(BOOL)getSkipPagerHint;

-(void)setUrgencyHint:(BOOL)setting;

-(BOOL)getUrgencyHint;

-(void)setAcceptFocus:(BOOL)setting;

-(BOOL)getAcceptFocus;

-(void)setFocusOnMap:(BOOL)setting;

-(BOOL)getFocusOnMap;

-(void)setDestroyWithParent:(BOOL)setting;

-(BOOL)getDestroyWithParent;

-(void)setMnemonicsVisible:(BOOL)setting;

-(BOOL)getMnemonicsVisible;

-(void)setResizable:(BOOL)resizable;

-(BOOL)getResizable;

-(void)setGravity:(GdkGravity)gravity;

-(GdkGravity)getGravity;

-(void)setGeometryHintsWithGeometryWidget:(CGTKWidget *)geometryWidget andGeometry:(GdkGeometry *)geometry andGeomMask:(GdkWindowHints)geomMask;

-(void)setScreen:(GdkScreen *)screen;

-(GdkScreen *)getScreen;

-(BOOL)isActive;

-(BOOL)hasToplevelFocus;

-(void)setHasFrame:(BOOL)setting;

-(BOOL)getHasFrame;

-(void)setFrameDimensionsWithLeft:(NSNumber *)left andTop:(NSNumber *)top andRight:(NSNumber *)right andBottom:(NSNumber *)bottom;

-(void)getFrameDimensionsWithLeft:(NSNumber **)left andTop:(NSNumber **)top andRight:(NSNumber **)right andBottom:(NSNumber **)bottom;

-(void)setDecorated:(BOOL)setting;

-(BOOL)getDecorated;

-(void)setDeletable:(BOOL)setting;

-(BOOL)getDeletable;

-(void)setIconList:(GList *)list;

-(GList *)getIconList;

-(void)setIcon:(GdkPixbuf *)icon;

-(NSString *)getIconName;

-(void)setIconName:(NSString *)name;

-(BOOL)setIconFromFileWithFilename:(NSString *)filename andErr:(GError **)err;

-(GdkPixbuf *)getIcon;

-(void)setDefaultIconList:(GList *)list;

-(GList *)getDefaultIconList;

-(void)setDefaultIcon:(GdkPixbuf *)icon;

-(NSString *)getDefaultIconName;

-(void)setDefaultIconName:(NSString *)name;

-(BOOL)setDefaultIconFromFileWithFilename:(NSString *)filename andErr:(GError **)err;

-(void)setAutoStartupNotification:(BOOL)setting;

-(void)setModal:(BOOL)modal;

-(BOOL)getModal;

-(GList *)listToplevels;

-(void)addMnemonicWithKeyval:(NSNumber *)keyval andTarget:(CGTKWidget *)target;

-(void)removeMnemonicWithKeyval:(NSNumber *)keyval andTarget:(CGTKWidget *)target;

-(BOOL)mnemonicActivateWithKeyval:(NSNumber *)keyval andModifier:(GdkModifierType)modifier;

-(void)setMnemonicModifier:(GdkModifierType)modifier;

-(GdkModifierType)getMnemonicModifier;

-(BOOL)activateKey:(GdkEventKey *)event;

-(BOOL)propagateKeyEvent:(GdkEventKey *)event;

-(void)present;

-(void)presentWithTime:(NSNumber *)timestamp;

-(void)iconify;

-(void)deiconify;

-(void)stick;

-(void)unstick;

-(void)maximize;

-(void)unmaximize;

-(void)fullscreen;

-(void)unfullscreen;

-(void)setKeepAbove:(BOOL)setting;

-(void)setKeepBelow:(BOOL)setting;

-(void)beginResizeDragWithEdge:(GdkWindowEdge)edge andButton:(NSNumber *)button andRootX:(NSNumber *)rootX andRootY:(NSNumber *)rootY andTimestamp:(NSNumber *)timestamp;

-(void)beginMoveDragWithButton:(NSNumber *)button andRootX:(NSNumber *)rootX andRootY:(NSNumber *)rootY andTimestamp:(NSNumber *)timestamp;

-(void)setDefaultSizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height;

-(void)getDefaultSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height;

-(void)resizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height;

-(void)getSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height;

-(void)moveWithX:(NSNumber *)x andY:(NSNumber *)y;

-(void)getPositionWithRootX:(NSNumber **)rootX andRootY:(NSNumber **)rootY;

-(BOOL)parseGeometry:(NSString *)geometry;

-(GtkWindowGroup *)getGroup;

-(BOOL)hasGroup;

-(void)reshowWithInitialSize;

-(GtkWindowType)getWindowType;

-(GtkWindowGroup *)groupNew;

-(void)groupAddWindowWithWindowGroup:(GtkWindowGroup *)windowGroup andWindow:(CGTKWindow *)window;

+(void)groupRemoveWindowWithWindowGroup:(GtkWindowGroup *)windowGroup andWindow:(CGTKWindow *)window;

+(GList *)groupListWindows:(GtkWindowGroup *)windowGroup;

-(void)removeEmbeddedXid:(GdkNativeWindow)xid;

-(void)addEmbeddedXid:(GdkNativeWindow)xid;

+(CGTKWidget *)groupGetCurrentGrab:(GtkWindowGroup *)windowGroup;

@end
