/*
 * CGTKMenu.h
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
#import "CGTKMenuShell.h"

@interface CGTKMenu : CGTKMenuShell
{
	
}

/**
 * Returns internal GtkMenu
 */
-(GtkMenu *)MENU;

/**
 * Forwards message to:
 * GtkWidget* gtk_menu_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * void gtk_menu_popup (GtkMenu* menu, GtkWidget* parent_menu_shell, GtkWidget* parent_menu_item, GtkMenuPositionFuncfunc, gpointerdata, guintbutton, guint32activate_time)
 */
-(void)popupWithParentMenuShell:(CGTKWidget *)parentMenuShell andParentMenuItem:(CGTKWidget *)parentMenuItem andGtkMenuPositionFuncfunc:(GtkMenuPositionFunc)func andData:(gpointer)data andButton:(NSNumber *)button andActivateTime:(NSNumber *)activateTime;

/**
 * Forwards message to:
 * void gtk_menu_reposition (GtkMenu* menu)
 */
-(void)reposition;

/**
 * Forwards message to:
 * void gtk_menu_popdown (GtkMenu* menu)
 */
-(void)popdown;

/**
 * Forwards message to:
 * GtkWidget* gtk_menu_get_active (GtkMenu* menu)
 */
-(CGTKWidget *)getActive;

/**
 * Forwards message to:
 * void gtk_menu_set_active (GtkMenu* menu, guint index_)
 */
-(void)setActive:(NSNumber *)index;

/**
 * Forwards message to:
 * void gtk_menu_set_accel_group (GtkMenu* menu, GtkAccelGroup* accel_group)
 */
-(void)setAccelGroup:(GtkAccelGroup *)accelGroup;

/**
 * Forwards message to:
 * GtkAccelGroup* gtk_menu_get_accel_group (GtkMenu* menu)
 */
-(GtkAccelGroup *)getAccelGroup;

/**
 * Forwards message to:
 * const gchar*  gtk_menu_get_accel_path (GtkMenu* menu)
 */
-(NSString *)getAccelPath;

/**
 * Forwards message to:
 * void gtk_menu_set_accel_path (GtkMenu* menu, const gchar* accel_path)
 */
-(void)setAccelPath:(NSString *)accelPath;

/**
 * Forwards message to:
 * void gtk_menu_attach_to_widget (GtkMenu* menu, GtkWidget* attach_widget, GtkMenuDetachFuncdetacher)
 */
-(void)attachToWidgetWithAttachWidget:(CGTKWidget *)attachWidget andDetacher:(GtkMenuDetachFunc)detacher;

/**
 * Forwards message to:
 * void gtk_menu_detach (GtkMenu* menu)
 */
-(void)detach;

/**
 * Forwards message to:
 * GtkWidget* gtk_menu_get_attach_widget (GtkMenu* menu)
 */
-(CGTKWidget *)getAttachWidget;

/**
 * Forwards message to:
 * void gtk_menu_set_tearoff_state (GtkMenu* menu, gboolean torn_off)
 */
-(void)setTearoffState:(BOOL)tornOff;

/**
 * Forwards message to:
 * gboolean gtk_menu_get_tearoff_state (GtkMenu* menu)
 */
-(BOOL)getTearoffState;

/**
 * Forwards message to:
 * const gchar* gtk_menu_get_title (GtkMenu* menu)
 */
-(NSString *)getTitle;

/**
 * Forwards message to:
 * void gtk_menu_set_title (GtkMenu* menu, const gchar* title)
 */
-(void)setTitle:(NSString *)title;

/**
 * Forwards message to:
 * void gtk_menu_reorder_child (GtkMenu* menu, GtkWidget* child, gint position)
 */
-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_menu_set_screen (GtkMenu* menu, GdkScreen* screen)
 */
-(void)setScreen:(GdkScreen *)screen;

/**
 * Forwards message to:
 * void gtk_menu_attach (GtkMenu* menu, GtkWidget* child, guint left_attach, guint right_attach, guint top_attach, guint bottom_attach)
 */
-(void)attachWithChild:(CGTKWidget *)child andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach;

/**
 * Forwards message to:
 * void gtk_menu_set_monitor (GtkMenu* menu, gint monitor_num)
 */
-(void)setMonitor:(NSNumber *)monitorNum;

/**
 * Forwards message to:
 * gint gtk_menu_get_monitor (GtkMenu* menu)
 */
-(NSNumber *)getMonitor;

/**
 * Forwards message to:
 * GList* gtk_menu_get_for_attach_widget (GtkWidget* widget)
 */
-(GList *)getForAttachWidget:(CGTKWidget *)widget;

/**
 * Forwards message to:
 * void gtk_menu_set_reserve_toggle_size (GtkMenu* menu, gboolean reserve_toggle_size)
 */
-(void)setReserveToggleSize:(BOOL)reserveToggleSize;

/**
 * Forwards message to:
 * gboolean gtk_menu_get_reserve_toggle_size (GtkMenu* menu)
 */
-(BOOL)getReserveToggleSize;

@end
