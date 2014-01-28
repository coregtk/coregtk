/*
 * CGTKCheckMenuItem.m
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

#import "CGTKCheckMenuItem.h"

@implementation CGTKCheckMenuItem

-(GtkCheckMenuItem *)CHECK_MENU_ITEM
{
	return GTK_CHECK_MENU_ITEM([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_check_menu_item_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_check_menu_item_new_with_label ([label UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithMnemonic:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_check_menu_item_new_with_mnemonic ([label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(void)setActive:(BOOL)isActive
{
	gtk_check_menu_item_set_active([self CHECK_MENU_ITEM], [CGTK getGboolean:isActive]);
}

-(BOOL)getActive
{
	return [CGTK getBOOL:gtk_check_menu_item_get_active ([self CHECK_MENU_ITEM])];
}

-(void)toggled
{
	gtk_check_menu_item_toggled ([self CHECK_MENU_ITEM]);
}

-(void)setInconsistent:(BOOL)setting
{
	gtk_check_menu_item_set_inconsistent ([self CHECK_MENU_ITEM], [CGTK getGboolean:setting]);
}

-(BOOL)getInconsistent
{
	return [CGTK getBOOL:gtk_check_menu_item_get_inconsistent ([self CHECK_MENU_ITEM])];
}

-(void)setDrawAsRadio:(BOOL)drawAsRadio
{
	gtk_check_menu_item_set_draw_as_radio ([self CHECK_MENU_ITEM], [CGTK getGboolean:drawAsRadio]);
}

-(BOOL)getDrawAsRadio
{
	return [CGTK getBOOL:gtk_check_menu_item_get_draw_as_radio ([self CHECK_MENU_ITEM])];
}

@end
