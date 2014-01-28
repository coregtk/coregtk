/*
 * CGTKMenu.m
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

#import "CGTKMenu.h"

@implementation CGTKMenu

-(GtkMenu *)MENU
{
	return GTK_MENU([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_menu_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)popupWithParentMenuShell:(CGTKWidget *)parentMenuShell andParentMenuItem:(CGTKWidget *)parentMenuItem andGtkMenuPositionFuncfunc:(GtkMenuPositionFunc)func andData:(gpointer)data andButton:(NSNumber *)button andActivateTime:(NSNumber *)activateTime
{
	gtk_menu_popup ([self MENU], [parentMenuShell WIDGET], [parentMenuItem WIDGET], func, data, [button unsignedIntValue], [activateTime unsignedIntValue]);
}

-(void)reposition
{
	gtk_menu_reposition ([self MENU]);
}

-(void)popdown
{
	gtk_menu_popdown ([self MENU]);
}

-(CGTKWidget *)getActive
{
	return [CGTKWidget widgetWithGtkWidget: gtk_menu_get_active ([self MENU])];
}

-(void)setActive:(NSNumber *)index
{
	gtk_menu_set_active ([self MENU], [index unsignedIntValue]);
}

-(void)setAccelGroup:(GtkAccelGroup *)accelGroup
{
	gtk_menu_set_accel_group ([self MENU], accelGroup);
}

-(GtkAccelGroup *)getAccelGroup
{
	return gtk_menu_get_accel_group ([self MENU]);
}

-(NSString *)getAccelPath
{
	return [NSString stringWithUTF8String:gtk_menu_get_accel_path ([self MENU])];
}

-(void)setAccelPath:(NSString *)accelPath
{
	gtk_menu_set_accel_path ([self MENU], [accelPath UTF8String]);
}

-(void)attachToWidgetWithAttachWidget:(CGTKWidget *)attachWidget andDetacher:(GtkMenuDetachFunc)detacher
{
	gtk_menu_attach_to_widget ([self MENU], [attachWidget WIDGET], detacher);
}

-(void)detach
{
	gtk_menu_detach ([self MENU]);
}

-(CGTKWidget *)getAttachWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_menu_get_attach_widget ([self MENU])];
}

-(void)setTearoffState:(BOOL)tornOff
{
	gtk_menu_set_tearoff_state ([self MENU], [CGTK getGboolean:tornOff]);
}

-(BOOL)getTearoffState
{
	return [CGTK getBOOL:gtk_menu_get_tearoff_state ([self MENU])];
}

-(NSString *)getTitle
{
	return [NSString stringWithUTF8String:gtk_menu_get_title ([self MENU])];
}

-(void)setTitle:(NSString *)title
{
	gtk_menu_set_title ([self MENU], [title UTF8String]);
}

-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position
{
	gtk_menu_reorder_child ([self MENU], [child WIDGET], [position intValue]);
}

-(void)setScreen:(GdkScreen *)screen
{
	gtk_menu_set_screen ([self MENU], screen);
}

-(void)attachWithChild:(CGTKWidget *)child andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach
{
	gtk_menu_attach ([self MENU], [child WIDGET], [leftAttach unsignedIntValue], [rightAttach unsignedIntValue], [topAttach unsignedIntValue], [bottomAttach intValue]);
}

-(void)setMonitor:(NSNumber *)monitorNum
{
	gtk_menu_set_monitor ([self MENU], [monitorNum intValue]);
}

-(NSNumber *)getMonitor
{
	return [NSNumber numberWithInt:gtk_menu_get_monitor ([self MENU])];
}

-(GList *)getForAttachWidget:(CGTKWidget *)widget
{
	return gtk_menu_get_for_attach_widget ([widget WIDGET]);
}

-(void)setReserveToggleSize:(BOOL)reserveToggleSize
{
	gtk_menu_set_reserve_toggle_size ([self MENU], [CGTK getGboolean:reserveToggleSize]);
}

-(BOOL)getReserveToggleSize
{
	return [CGTK getBOOL:gtk_menu_get_reserve_toggle_size ([self MENU])];
}

@end
