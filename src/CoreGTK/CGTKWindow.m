/*
 * CGTKWindow.m
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
#import "CoreGTK/CGTKWindow.h"

@implementation CGTKWindow

+(GList*)getDefaultIconList
{
	return gtk_window_get_default_icon_list();
}

+(NSString*)getDefaultIconName
{
	return [NSString stringWithUTF8String:gtk_window_get_default_icon_name()];
}

+(GList*)listToplevels
{
	return gtk_window_list_toplevels();
}

+(void)setAutoStartupNotification:(BOOL) setting
{
	gtk_window_set_auto_startup_notification((setting ? TRUE : FALSE));
}

+(void)setDefaultIcon:(GdkPixbuf*) icon
{
	gtk_window_set_default_icon(icon);
}

+(BOOL)setDefaultIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err
{
	return (gtk_window_set_default_icon_from_file([filename UTF8String], err) ? YES : NO);
}

+(void)setDefaultIconList:(GList*) list
{
	gtk_window_set_default_icon_list(list);
}

+(void)setDefaultIconName:(NSString*) name
{
	gtk_window_set_default_icon_name([name UTF8String]);
}

+(void)setInteractiveDebugging:(BOOL) enable
{
	gtk_window_set_interactive_debugging((enable ? TRUE : FALSE));
}

-(id)init:(GtkWindowType) type
{
	self = [super initWithGObject:(GObject *)gtk_window_new(type)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkWindow*)WINDOW
{
	return GTK_WINDOW([self GOBJECT]);
}

-(BOOL)activateDefault
{
	return (gtk_window_activate_default(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)activateFocus
{
	return (gtk_window_activate_focus(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)activateKey:(GdkEventKey*) event
{
	return (gtk_window_activate_key(GTK_WINDOW([self GOBJECT]), event) ? YES : NO);
}

-(void)addAccelGroup:(GtkAccelGroup*) accelGroup
{
	gtk_window_add_accel_group(GTK_WINDOW([self GOBJECT]), accelGroup);
}

-(void)addMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target
{
	gtk_window_add_mnemonic(GTK_WINDOW([self GOBJECT]), keyval, [target WIDGET]);
}

-(void)beginMoveDragWithButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp
{
	gtk_window_begin_move_drag(GTK_WINDOW([self GOBJECT]), button, rootX, rootY, timestamp);
}

-(void)beginResizeDragWithEdge:(GdkWindowEdge) edge andButton:(gint) button andRootX:(gint) rootX andRootY:(gint) rootY andTimestamp:(guint32) timestamp
{
	gtk_window_begin_resize_drag(GTK_WINDOW([self GOBJECT]), edge, button, rootX, rootY, timestamp);
}

-(void)close
{
	gtk_window_close(GTK_WINDOW([self GOBJECT]));
}

-(void)deiconify
{
	gtk_window_deiconify(GTK_WINDOW([self GOBJECT]));
}

-(void)fullscreen
{
	gtk_window_fullscreen(GTK_WINDOW([self GOBJECT]));
}

-(void)fullscreenOnMonitorWithScreen:(GdkScreen*) screen andMonitor:(gint) monitor
{
	gtk_window_fullscreen_on_monitor(GTK_WINDOW([self GOBJECT]), screen, monitor);
}

-(BOOL)getAcceptFocus
{
	return (gtk_window_get_accept_focus(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GtkApplication*)getApplication
{
	return gtk_window_get_application(GTK_WINDOW([self GOBJECT]));
}

-(CGTKWidget*)getAttachedTo
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_window_get_attached_to(GTK_WINDOW([self GOBJECT]))];
}

-(BOOL)getDecorated
{
	return (gtk_window_get_decorated(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)getDefaultSizeWithWidth:(gint*) width andHeight:(gint*) height
{
	gtk_window_get_default_size(GTK_WINDOW([self GOBJECT]), width, height);
}

-(CGTKWidget*)getDefaultWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_window_get_default_widget(GTK_WINDOW([self GOBJECT]))];
}

-(BOOL)getDeletable
{
	return (gtk_window_get_deletable(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getDestroyWithParent
{
	return (gtk_window_get_destroy_with_parent(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getFocus
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_window_get_focus(GTK_WINDOW([self GOBJECT]))];
}

-(BOOL)getFocusOnMap
{
	return (gtk_window_get_focus_on_map(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getFocusVisible
{
	return (gtk_window_get_focus_visible(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GdkGravity)getGravity
{
	return gtk_window_get_gravity(GTK_WINDOW([self GOBJECT]));
}

-(GtkWindowGroup*)getGroup
{
	return gtk_window_get_group(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)getHasResizeGrip
{
	return (gtk_window_get_has_resize_grip(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHideTitlebarWhenMaximized
{
	return (gtk_window_get_hide_titlebar_when_maximized(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GdkPixbuf*)getIcon
{
	return gtk_window_get_icon(GTK_WINDOW([self GOBJECT]));
}

-(GList*)getIconList
{
	return gtk_window_get_icon_list(GTK_WINDOW([self GOBJECT]));
}

-(NSString*)getIconName
{
	return [NSString stringWithUTF8String:gtk_window_get_icon_name(GTK_WINDOW([self GOBJECT]))];
}

-(GdkModifierType)getMnemonicModifier
{
	return gtk_window_get_mnemonic_modifier(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)getMnemonicsVisible
{
	return (gtk_window_get_mnemonics_visible(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getModal
{
	return (gtk_window_get_modal(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(gdouble)getOpacity
{
	return gtk_window_get_opacity(GTK_WINDOW([self GOBJECT]));
}

-(void)getPositionWithRootX:(gint*) rootX andRootY:(gint*) rootY
{
	gtk_window_get_position(GTK_WINDOW([self GOBJECT]), rootX, rootY);
}

-(BOOL)getResizable
{
	return (gtk_window_get_resizable(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getResizeGripArea:(GdkRectangle*) rect
{
	return (gtk_window_get_resize_grip_area(GTK_WINDOW([self GOBJECT]), rect) ? YES : NO);
}

-(NSString*)getRole
{
	return [NSString stringWithUTF8String:gtk_window_get_role(GTK_WINDOW([self GOBJECT]))];
}

-(GdkScreen*)getScreen
{
	return gtk_window_get_screen(GTK_WINDOW([self GOBJECT]));
}

-(void)getSizeWithWidth:(gint*) width andHeight:(gint*) height
{
	gtk_window_get_size(GTK_WINDOW([self GOBJECT]), width, height);
}

-(BOOL)getSkipPagerHint
{
	return (gtk_window_get_skip_pager_hint(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getSkipTaskbarHint
{
	return (gtk_window_get_skip_taskbar_hint(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_window_get_title(GTK_WINDOW([self GOBJECT]))];
}

-(CGTKWidget*)getTitlebar
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_window_get_titlebar(GTK_WINDOW([self GOBJECT]))];
}

-(GtkWindow*)getTransientFor
{
	return gtk_window_get_transient_for(GTK_WINDOW([self GOBJECT]));
}

-(GdkWindowTypeHint)getTypeHint
{
	return gtk_window_get_type_hint(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)getUrgencyHint
{
	return (gtk_window_get_urgency_hint(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(GtkWindowType)getWindowType
{
	return gtk_window_get_window_type(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)hasGroup
{
	return (gtk_window_has_group(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasToplevelFocus
{
	return (gtk_window_has_toplevel_focus(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)iconify
{
	gtk_window_iconify(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)isActive
{
	return (gtk_window_is_active(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(BOOL)isMaximized
{
	return (gtk_window_is_maximized(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)maximize
{
	gtk_window_maximize(GTK_WINDOW([self GOBJECT]));
}

-(BOOL)mnemonicActivateWithKeyval:(guint) keyval andModifier:(GdkModifierType) modifier
{
	return (gtk_window_mnemonic_activate(GTK_WINDOW([self GOBJECT]), keyval, modifier) ? YES : NO);
}

-(void)moveWithX:(gint) x andY:(gint) y
{
	gtk_window_move(GTK_WINDOW([self GOBJECT]), x, y);
}

-(BOOL)parseGeometry:(NSString*) geometry
{
	return (gtk_window_parse_geometry(GTK_WINDOW([self GOBJECT]), [geometry UTF8String]) ? YES : NO);
}

-(void)present
{
	gtk_window_present(GTK_WINDOW([self GOBJECT]));
}

-(void)presentWithTime:(guint32) timestamp
{
	gtk_window_present_with_time(GTK_WINDOW([self GOBJECT]), timestamp);
}

-(BOOL)propagateKeyEvent:(GdkEventKey*) event
{
	return (gtk_window_propagate_key_event(GTK_WINDOW([self GOBJECT]), event) ? YES : NO);
}

-(void)removeAccelGroup:(GtkAccelGroup*) accelGroup
{
	gtk_window_remove_accel_group(GTK_WINDOW([self GOBJECT]), accelGroup);
}

-(void)removeMnemonicWithKeyval:(guint) keyval andTarget:(CGTKWidget*) target
{
	gtk_window_remove_mnemonic(GTK_WINDOW([self GOBJECT]), keyval, [target WIDGET]);
}

-(void)reshowWithInitialSize
{
	gtk_window_reshow_with_initial_size(GTK_WINDOW([self GOBJECT]));
}

-(void)resizeWithWidth:(gint) width andHeight:(gint) height
{
	gtk_window_resize(GTK_WINDOW([self GOBJECT]), width, height);
}

-(BOOL)resizeGripIsVisible
{
	return (gtk_window_resize_grip_is_visible(GTK_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)resizeToGeometryWithWidth:(gint) width andHeight:(gint) height
{
	gtk_window_resize_to_geometry(GTK_WINDOW([self GOBJECT]), width, height);
}

-(void)setAcceptFocus:(BOOL) setting
{
	gtk_window_set_accept_focus(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setApplication:(GtkApplication*) application
{
	gtk_window_set_application(GTK_WINDOW([self GOBJECT]), application);
}

-(void)setAttachedTo:(CGTKWidget*) attachWidget
{
	gtk_window_set_attached_to(GTK_WINDOW([self GOBJECT]), [attachWidget WIDGET]);
}

-(void)setDecorated:(BOOL) setting
{
	gtk_window_set_decorated(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setDefault:(CGTKWidget*) defaultWidget
{
	gtk_window_set_default(GTK_WINDOW([self GOBJECT]), [defaultWidget WIDGET]);
}

-(void)setDefaultGeometryWithWidth:(gint) width andHeight:(gint) height
{
	gtk_window_set_default_geometry(GTK_WINDOW([self GOBJECT]), width, height);
}

-(void)setDefaultSizeWithWidth:(gint) width andHeight:(gint) height
{
	gtk_window_set_default_size(GTK_WINDOW([self GOBJECT]), width, height);
}

-(void)setDeletable:(BOOL) setting
{
	gtk_window_set_deletable(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setDestroyWithParent:(BOOL) setting
{
	gtk_window_set_destroy_with_parent(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setFocus:(CGTKWidget*) focus
{
	gtk_window_set_focus(GTK_WINDOW([self GOBJECT]), [focus WIDGET]);
}

-(void)setFocusOnMap:(BOOL) setting
{
	gtk_window_set_focus_on_map(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setFocusVisible:(BOOL) setting
{
	gtk_window_set_focus_visible(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setGeometryHintsWithGeometryWidget:(CGTKWidget*) geometryWidget andGeometry:(GdkGeometry*) geometry andGeomMask:(GdkWindowHints) geomMask
{
	gtk_window_set_geometry_hints(GTK_WINDOW([self GOBJECT]), [geometryWidget WIDGET], geometry, geomMask);
}

-(void)setGravity:(GdkGravity) gravity
{
	gtk_window_set_gravity(GTK_WINDOW([self GOBJECT]), gravity);
}

-(void)setHasResizeGrip:(BOOL) value
{
	gtk_window_set_has_resize_grip(GTK_WINDOW([self GOBJECT]), (value ? TRUE : FALSE));
}

-(void)setHasUserRefCount:(BOOL) setting
{
	gtk_window_set_has_user_ref_count(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setHideTitlebarWhenMaximized:(BOOL) setting
{
	gtk_window_set_hide_titlebar_when_maximized(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setIcon:(GdkPixbuf*) icon
{
	gtk_window_set_icon(GTK_WINDOW([self GOBJECT]), icon);
}

-(BOOL)setIconFromFileWithFilename:(NSString*) filename andErr:(GError**) err
{
	return (gtk_window_set_icon_from_file(GTK_WINDOW([self GOBJECT]), [filename UTF8String], err) ? YES : NO);
}

-(void)setIconList:(GList*) list
{
	gtk_window_set_icon_list(GTK_WINDOW([self GOBJECT]), list);
}

-(void)setIconName:(NSString*) name
{
	gtk_window_set_icon_name(GTK_WINDOW([self GOBJECT]), [name UTF8String]);
}

-(void)setKeepAbove:(BOOL) setting
{
	gtk_window_set_keep_above(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setKeepBelow:(BOOL) setting
{
	gtk_window_set_keep_below(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setMnemonicModifier:(GdkModifierType) modifier
{
	gtk_window_set_mnemonic_modifier(GTK_WINDOW([self GOBJECT]), modifier);
}

-(void)setMnemonicsVisible:(BOOL) setting
{
	gtk_window_set_mnemonics_visible(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setModal:(BOOL) modal
{
	gtk_window_set_modal(GTK_WINDOW([self GOBJECT]), (modal ? TRUE : FALSE));
}

-(void)setOpacity:(gdouble) opacity
{
	gtk_window_set_opacity(GTK_WINDOW([self GOBJECT]), opacity);
}

-(void)setPosition:(GtkWindowPosition) position
{
	gtk_window_set_position(GTK_WINDOW([self GOBJECT]), position);
}

-(void)setResizable:(BOOL) resizable
{
	gtk_window_set_resizable(GTK_WINDOW([self GOBJECT]), (resizable ? TRUE : FALSE));
}

-(void)setRole:(NSString*) role
{
	gtk_window_set_role(GTK_WINDOW([self GOBJECT]), [role UTF8String]);
}

-(void)setScreen:(GdkScreen*) screen
{
	gtk_window_set_screen(GTK_WINDOW([self GOBJECT]), screen);
}

-(void)setSkipPagerHint:(BOOL) setting
{
	gtk_window_set_skip_pager_hint(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setSkipTaskbarHint:(BOOL) setting
{
	gtk_window_set_skip_taskbar_hint(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setStartupId:(NSString*) startupId
{
	gtk_window_set_startup_id(GTK_WINDOW([self GOBJECT]), [startupId UTF8String]);
}

-(void)setTitle:(NSString*) title
{
	gtk_window_set_title(GTK_WINDOW([self GOBJECT]), [title UTF8String]);
}

-(void)setTitlebar:(CGTKWidget*) titlebar
{
	gtk_window_set_titlebar(GTK_WINDOW([self GOBJECT]), [titlebar WIDGET]);
}

-(void)setTransientFor:(GtkWindow*) parent
{
	gtk_window_set_transient_for(GTK_WINDOW([self GOBJECT]), parent);
}

-(void)setTypeHint:(GdkWindowTypeHint) hint
{
	gtk_window_set_type_hint(GTK_WINDOW([self GOBJECT]), hint);
}

-(void)setUrgencyHint:(BOOL) setting
{
	gtk_window_set_urgency_hint(GTK_WINDOW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setWmclassWithWmclassName:(NSString*) wmclassName andWmclassClass:(NSString*) wmclassClass
{
	gtk_window_set_wmclass(GTK_WINDOW([self GOBJECT]), [wmclassName UTF8String], [wmclassClass UTF8String]);
}

-(void)stick
{
	gtk_window_stick(GTK_WINDOW([self GOBJECT]));
}

-(void)unfullscreen
{
	gtk_window_unfullscreen(GTK_WINDOW([self GOBJECT]));
}

-(void)unmaximize
{
	gtk_window_unmaximize(GTK_WINDOW([self GOBJECT]));
}

-(void)unstick
{
	gtk_window_unstick(GTK_WINDOW([self GOBJECT]));
}


@end
