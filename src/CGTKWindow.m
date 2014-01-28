/*
 * CGTKWindow.m
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

#import "CGTKWindow.h"

@implementation CGTKWindow

-(GtkWindow *)WINDOW
{
	return GTK_WINDOW([self WIDGET]);
}

-(id)initWithGtkWindowType:(GtkWindowType)type
{
	self = [super initWithGtkWidget:gtk_window_new (type) andIncrementRefCount:NO];

    if(self)
    {
        // Do nothing
    }

    return self;
}

+(CGTKWindow *)windowWithGtkWindow:(GtkWindow *)window
{
	return [[[CGTKWindow alloc] initWithGtkWidget:GTK_WIDGET(window)] autorelease];
}

-(NSString *)getTitle
{
	return [NSString stringWithUTF8String:gtk_window_get_title([self WINDOW])];
}

-(void)setTitle:(NSString *)title
{
	gtk_window_set_title ([self WINDOW], [title UTF8String]);
}

-(void)setWmclassWithWmclassName:(NSString *)wmclassName andWmclassClass:(NSString *)wmclassClass
{
	gtk_window_set_wmclass ([self WINDOW], [wmclassName UTF8String], [wmclassClass UTF8String]);
}

-(NSString *)getRole
{
	return [NSString stringWithUTF8String:gtk_window_get_role([self WINDOW])];
}

-(void)setRole:(NSString *)role
{
	gtk_window_set_role ([self WINDOW], [role UTF8String]);
}

-(void)setStartupId:(NSString *)startupId
{
	gtk_window_set_startup_id ([self WINDOW], [startupId UTF8String]);
}

-(void)addAccelGroup:(GtkAccelGroup *)accelGroup
{
	gtk_window_add_accel_group ([self WINDOW], accelGroup);
}

-(void)removeAccelGroup:(GtkAccelGroup *)accelGroup
{
	gtk_window_remove_accel_group ([self WINDOW], accelGroup);
}

-(void)setPosition:(GtkWindowPosition)position
{
	gtk_window_set_position ([self WINDOW], position);
}

-(BOOL)activateFocus
{
	return [CGTK getBOOL:gtk_window_activate_focus ([self WINDOW])];
}

-(void)setFocus:(CGTKWidget *)focus
{
	gtk_window_set_focus ([self WINDOW], [focus WIDGET]);
}

-(CGTKWidget *)getFocus
{
	return [CGTKWidget widgetWithGtkWidget:gtk_window_get_focus ([self WINDOW])];
}

-(void)setDefault:(CGTKWidget *)defaultWidget
{
	gtk_window_set_default ([self WINDOW], [defaultWidget WIDGET]);
}

-(CGTKWidget *)getDefaultWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_window_get_default_widget ([self WINDOW])];
}

-(BOOL)activateDefault
{
	return [CGTK getBOOL:gtk_window_activate_default ([self WINDOW])];
}

-(void)setTransientFor:(CGTKWindow *)parent
{
	gtk_window_set_transient_for ([self WINDOW], [parent WINDOW]);
}

-(CGTKWindow *)getTransientFor
{
	return [CGTKWindow windowWithGtkWindow:gtk_window_get_transient_for ([self WINDOW])];
}

-(void)setOpacity:(NSNumber *)opacity
{
	gtk_window_set_opacity ([self WINDOW], [opacity doubleValue]);
}

-(NSNumber *)getOpacity
{
	return [NSNumber numberWithDouble:gtk_window_get_opacity ([self WINDOW])];
}

-(void)setTypeHint:(GdkWindowTypeHint)hint
{
	gtk_window_set_type_hint ([self WINDOW], hint);
}

-(GdkWindowTypeHint)getTypeHint
{
	return gtk_window_get_type_hint ([self WINDOW]);
}

-(void)setSkipTaskbarHint:(BOOL)setting
{
	gtk_window_set_skip_taskbar_hint ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getSkipTaskbarHint
{
	return [CGTK getBOOL:gtk_window_get_skip_taskbar_hint ([self WINDOW])];
}

-(void)setSkipPagerHint:(BOOL)setting
{
	gtk_window_set_skip_pager_hint ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getSkipPagerHint
{
	return [CGTK getBOOL:gtk_window_get_skip_pager_hint ([self WINDOW])];
}

-(void)setUrgencyHint:(BOOL)setting
{
	gtk_window_set_urgency_hint ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getUrgencyHint
{
	return [CGTK getBOOL:gtk_window_get_urgency_hint ([self WINDOW])];
}

-(void)setAcceptFocus:(BOOL)setting
{
	gtk_window_set_accept_focus ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getAcceptFocus
{
	return [CGTK getBOOL:gtk_window_get_accept_focus ([self WINDOW])];
}

-(void)setFocusOnMap:(BOOL)setting
{
	gtk_window_set_focus_on_map ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getFocusOnMap
{
	return [CGTK getBOOL:gtk_window_get_focus_on_map ([self WINDOW])];
}

-(void)setDestroyWithParent:(BOOL)setting
{
	gtk_window_set_destroy_with_parent ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getDestroyWithParent
{
	return [CGTK getBOOL:gtk_window_get_destroy_with_parent ([self WINDOW])];
}

-(void)setMnemonicsVisible:(BOOL)setting
{
	gtk_window_set_mnemonics_visible ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getMnemonicsVisible
{
	return [CGTK getBOOL:gtk_window_get_mnemonics_visible ([self WINDOW])];
}

-(void)setResizable:(BOOL)resizable
{
	gtk_window_set_resizable ([self WINDOW], [CGTK getGboolean:resizable]);
}

-(BOOL)getResizable
{
	return [CGTK getBOOL:gtk_window_get_resizable ([self WINDOW])];
}

-(void)setGravity:(GdkGravity)gravity
{
	gtk_window_set_gravity ([self WINDOW], gravity);
}

-(GdkGravity)getGravity
{
	return gtk_window_get_gravity ([self WINDOW]);
}

-(void)setGeometryHintsWithGeometryWidget:(CGTKWidget *)geometryWidget andGeometry:(GdkGeometry *)geometry andGeomMask:(GdkWindowHints)geomMask
{
	gtk_window_set_geometry_hints ([self WINDOW], [geometryWidget WIDGET], geometry, geomMask);
}

-(void)setScreen:(GdkScreen *)screen
{
	gtk_window_set_screen ([self WINDOW], screen);
}

-(GdkScreen *)getScreen
{
	return gtk_window_get_screen ([self WINDOW]);
}

-(BOOL)isActive
{
	return [CGTK getBOOL:gtk_window_is_active ([self WINDOW])];
}

-(BOOL)hasToplevelFocus
{
	return [CGTK getBOOL:gtk_window_has_toplevel_focus ([self WINDOW])];
}

-(void)setHasFrame:(BOOL)setting
{
	void gtk_window_set_has_frame (GtkWindow* window, gboolean setting);
}

-(BOOL)getHasFrame
{
	return [CGTK getBOOL:gtk_window_get_has_frame ([self WINDOW])];
}

-(void)setFrameDimensionsWithLeft:(NSNumber *)left andTop:(NSNumber *)top andRight:(NSNumber *)right andBottom:(NSNumber *)bottom
{
	void gtk_window_set_frame_dimensions (GtkWindow* window, gint left,gint top,gint right,gint bottom);
}

-(void)getFrameDimensionsWithLeft:(NSNumber **)left andTop:(NSNumber **)top andRight:(NSNumber **)right andBottom:(NSNumber **)bottom
{
	void gtk_window_get_frame_dimensions (GtkWindow* window, gint* left,gint* top,gint* right,gint* bottom);
}

-(void)setDecorated:(BOOL)setting
{
	gtk_window_set_decorated ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getDecorated
{
	return [CGTK getBOOL:gtk_window_get_decorated ([self WINDOW])];
}

-(void)setDeletable:(BOOL)setting
{
	gtk_window_set_deletable ([self WINDOW], [CGTK getGboolean:setting]);
}

-(BOOL)getDeletable
{
	return [CGTK getBOOL:gtk_window_get_deletable ([self WINDOW])];
}

-(void)setIconList:(GList *)list
{
	gtk_window_set_icon_list ([self WINDOW], list);
}

-(GList *)getIconList
{
	return gtk_window_get_icon_list ([self WINDOW]);
}

-(void)setIcon:(GdkPixbuf *)icon
{
	gtk_window_set_icon ([self WINDOW], icon);
}

-(NSString *)getIconName
{
	return [NSString stringWithUTF8String:gtk_window_get_icon_name([self WINDOW])];
}

-(void)setIconName:(NSString *)name
{
	gtk_window_set_icon_name ([self WINDOW], [name UTF8String]);
}

-(BOOL)setIconFromFileWithFilename:(NSString *)filename andErr:(GError **)err
{
	return [CGTK getBOOL:gtk_window_set_icon_from_file ([self WINDOW], [filename UTF8String], err)];
}

-(GdkPixbuf *)getIcon
{
	return gtk_window_get_icon ([self WINDOW]);
}

-(void)setDefaultIconList:(GList *)list
{
	gtk_window_set_default_icon_list (list);
}

-(GList *)getDefaultIconList
{
	return gtk_window_get_default_icon_list ();
}

-(void)setDefaultIcon:(GdkPixbuf *)icon
{
	gtk_window_set_default_icon (icon);
}

-(NSString *)getDefaultIconName
{
	return [NSString stringWithUTF8String:gtk_window_get_default_icon_name()];
}

-(void)setDefaultIconName:(NSString *)name
{
	gtk_window_set_default_icon_name ([name UTF8String]);
}

-(BOOL)setDefaultIconFromFileWithFilename:(NSString *)filename andErr:(GError **)err
{
	return [CGTK getBOOL:gtk_window_set_default_icon_from_file ([filename UTF8String], err)];
}

-(void)setAutoStartupNotification:(BOOL)setting
{
	gtk_window_set_auto_startup_notification ([CGTK getBOOL:setting]);
}

-(void)setModal:(BOOL)modal
{
	gtk_window_set_modal ([self WINDOW], [CGTK getGboolean:modal]);
}

-(BOOL)getModal
{
	return [CGTK getBOOL:gtk_window_get_modal ([self WINDOW])];
}

-(GList *)listToplevels
{
	return gtk_window_list_toplevels ();
}

-(void)addMnemonicWithKeyval:(NSNumber *)keyval andTarget:(CGTKWidget *)target
{
	gtk_window_add_mnemonic ([self WINDOW], [keyval unsignedIntValue], [target WIDGET]);
}

-(void)removeMnemonicWithKeyval:(NSNumber *)keyval andTarget:(CGTKWidget *)target
{
	gtk_window_remove_mnemonic ([self WINDOW], [keyval unsignedIntValue], [target WIDGET]);
}

-(BOOL)mnemonicActivateWithKeyval:(NSNumber *)keyval andModifier:(GdkModifierType)modifier
{
	return [CGTK getBOOL:gtk_window_mnemonic_activate ([self WINDOW], [keyval unsignedIntValue], modifier)];
}

-(void)setMnemonicModifier:(GdkModifierType)modifier
{
	gtk_window_set_mnemonic_modifier ([self WINDOW], modifier);
}

-(GdkModifierType)getMnemonicModifier
{
	return gtk_window_get_mnemonic_modifier ([self WINDOW]);
}

-(BOOL)activateKey:(GdkEventKey *)event
{
	return [CGTK getBOOL:gtk_window_activate_key ([self WINDOW], event)];
}

-(BOOL)propagateKeyEvent:(GdkEventKey *)event
{
	return [CGTK getBOOL:gtk_window_propagate_key_event ([self WINDOW], event)];
}

-(void)present
{
	gtk_window_present ([self WINDOW]);
}

-(void)presentWithTime:(NSNumber *)timestamp
{
	gtk_window_present_with_time ([self WINDOW], [timestamp unsignedIntValue]);
}

-(void)iconify
{
	gtk_window_iconify ([self WINDOW]);
}

-(void)deiconify
{
	gtk_window_deiconify ([self WINDOW]);
}

-(void)stick
{
	gtk_window_stick ([self WINDOW]);
}

-(void)unstick
{
	gtk_window_unstick ([self WINDOW]);
}

-(void)maximize
{
	gtk_window_maximize ([self WINDOW]);
}

-(void)unmaximize
{
	gtk_window_unmaximize ([self WINDOW]);
}

-(void)fullscreen
{
	gtk_window_fullscreen ([self WINDOW]);
}

-(void)unfullscreen
{
	gtk_window_unfullscreen ([self WINDOW]);
}

-(void)setKeepAbove:(BOOL)setting
{
	gtk_window_set_keep_above ([self WINDOW], [CGTK getGboolean:setting]);
}

-(void)setKeepBelow:(BOOL)setting
{
	gtk_window_set_keep_below ([self WINDOW], [CGTK getGboolean:setting]);
}

-(void)beginResizeDragWithEdge:(GdkWindowEdge)edge andButton:(NSNumber *)button andRootX:(NSNumber *)rootX andRootY:(NSNumber *)rootY andTimestamp:(NSNumber *)timestamp
{
	gtk_window_begin_resize_drag ([self WINDOW], edge, [button intValue], [rootX intValue], [rootY intValue], [timestamp unsignedIntValue]);
}

-(void)beginMoveDragWithButton:(NSNumber *)button andRootX:(NSNumber *)rootX andRootY:(NSNumber *)rootY andTimestamp:(NSNumber *)timestamp
{
	gtk_window_begin_move_drag ([self WINDOW], [button intValue], [rootX intValue], [rootY intValue], [timestamp unsignedIntValue]);
}

-(void)setDefaultSizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height
{
	gtk_window_set_default_size ([self WINDOW], [width intValue], [height intValue]);
}

-(void)getDefaultSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height
{
	gint gWidth;
	gint gHeight;
	gtk_window_get_default_size ([self WINDOW], &gWidth, &gHeight);
	*width = [NSNumber numberWithInt:gWidth];
	*height = [NSNumber numberWithInt:gHeight];
}

-(void)resizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height
{
	gtk_window_resize ([self WINDOW], [width intValue], [height intValue]);
}

-(void)getSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height
{
	gint gWidth;
	gint gHeight;
	gtk_window_get_size ([self WINDOW], &gWidth, &gHeight);
	*width = [NSNumber numberWithInt:gWidth];
	*height = [NSNumber numberWithInt:gHeight];
}

-(void)moveWithX:(NSNumber *)x andY:(NSNumber *)y
{
	gtk_window_move ([self WINDOW], [x intValue], [y intValue]);
}

-(void)getPositionWithRootX:(NSNumber **)rootX andRootY:(NSNumber **)rootY
{
	gint gRootX;
	gint gRootY;
	gtk_window_get_position ([self WINDOW], &gRootX, &gRootY);
	*rootX = [NSNumber numberWithInt:gRootX];
	*rootY = [NSNumber numberWithInt:gRootY];
}

-(BOOL)parseGeometry:(NSString *)geometry
{
	return [CGTK getBOOL:gtk_window_parse_geometry ([self WINDOW], [geometry UTF8String])];
}

-(GtkWindowGroup *)getGroup
{
	return gtk_window_get_group ([self WINDOW]);
}

-(BOOL)hasGroup
{
	return [CGTK getBOOL:gtk_window_has_group ([self WINDOW])];
}

-(void)reshowWithInitialSize
{
	gtk_window_reshow_with_initial_size ([self WINDOW]);
}

-(GtkWindowType)getWindowType
{
	return gtk_window_get_window_type ([self WINDOW]);
}

-(GtkWindowGroup *)groupNew
{
	return gtk_window_group_new ();
}

-(void)groupAddWindowWithWindowGroup:(GtkWindowGroup *)windowGroup andWindow:(CGTKWindow *)window
{
	gtk_window_group_add_window (windowGroup, [window WINDOW]);
}

+(void)groupRemoveWindowWithWindowGroup:(GtkWindowGroup *)windowGroup andWindow:(CGTKWindow *)window
{
	gtk_window_group_remove_window (windowGroup, [window WINDOW]);
}

+(GList *)groupListWindows:(GtkWindowGroup *)windowGroup
{
	return gtk_window_group_list_windows (windowGroup);
}

-(void)removeEmbeddedXid:(GdkNativeWindow)xid
{
	gtk_window_remove_embedded_xid ([self WINDOW], xid);
}

-(void)addEmbeddedXid:(GdkNativeWindow)xid
{
	gtk_window_add_embedded_xid ([self WINDOW], xid);
}

+(CGTKWidget *)groupGetCurrentGrab:(GtkWindowGroup *)windowGroup
{
	return [CGTKWidget widgetWithGtkWidget:gtk_window_group_get_current_grab (windowGroup)];
}

@end
