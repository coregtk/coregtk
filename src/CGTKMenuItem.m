/*
 * CGTKMenuItem.m
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

#import "CGTKMenuItem.h"

@implementation CGTKMenuItem

-(GtkMenuItem *)MENU_ITEM
{
	return GTK_MENU_ITEM([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_menu_item_new ()];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_menu_item_new_with_label ([label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithMnemonic:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_menu_item_new_with_mnemonic ([label UTF8String])];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setSubmenu:(CGTKWidget *)submenu
{
	gtk_menu_item_set_submenu ([self MENU_ITEM], [submenu WIDGET]);
}

-(CGTKWidget *)getSubmenu
{
	return [CGTKWidget widgetWithGtkWidget:gtk_menu_item_get_submenu ([self MENU_ITEM])];
}

-(void)select
{
	gtk_menu_item_select ([self MENU_ITEM]);
}

-(void)deselect
{
	gtk_menu_item_deselect ([self MENU_ITEM]);
}

-(void)activate
{
	gtk_menu_item_activate ([self MENU_ITEM]);
}

-(void)toggleSizeRequest:(NSNumber **)requisition
{
	gint gRequisition;
	gtk_menu_item_toggle_size_request ([self MENU_ITEM], &gRequisition);
	*requisition = [NSNumber numberWithInt:gRequisition];
}

-(void)toggleSizeAllocate:(NSNumber *)allocation
{
	gtk_menu_item_toggle_size_allocate ([self MENU_ITEM], [allocation intValue]);
}

-(void)setRightJustified:(BOOL)rightJustified
{
	gtk_menu_item_set_right_justified ([self MENU_ITEM], [CGTK getGboolean:rightJustified]);
}

-(BOOL)getRightJustified
{
	return [CGTK getBOOL:gtk_menu_item_get_right_justified ([self MENU_ITEM])];
}

-(void)setAccelPath:(NSString *)accelPath
{
	gtk_menu_item_set_accel_path ([self MENU_ITEM], [accelPath UTF8String]);
}

-(NSString *)getAccelPath
{
	return [NSString stringWithUTF8String:gtk_menu_item_get_accel_path ([self MENU_ITEM])];
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String:gtk_menu_item_get_label ([self MENU_ITEM])];
	
}

-(void)setLabel:(NSString *)label
{
	gtk_menu_item_set_label ([self MENU_ITEM], [label UTF8String]);
}

-(void)setUseUnderline:(BOOL)setting
{
	gtk_menu_item_set_use_underline ([self MENU_ITEM], [CGTK getGboolean:setting]);
}

-(BOOL)getUseUnderline
{
	return [CGTK getBOOL:gtk_menu_item_get_use_underline ([self MENU_ITEM])];
}

@end
