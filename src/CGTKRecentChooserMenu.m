/*
 * CGTKRecentChooserMenu.m
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

#import "CGTKRecentChooserMenu.h"

@implementation CGTKRecentChooserMenu

-(GtkRecentChooserMenu *)RECENT_CHOOSER_MENU
{
	return GTK_RECENT_CHOOSER_MENU([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_recent_chooser_menu_new()];
	
	if(self)
	{
	
	}
	
	return self;
}

-(CGTKWidget *)initForManager:(GtkRecentManager *)manager
{
	self = [super initWithGtkWidget:gtk_recent_chooser_menu_new_for_manager(manager)];
	
	if(self)
	{
	
	}
	
	return self;
}

-(BOOL)getShowNumbers
{
	return [CGTK getBOOL:gtk_recent_chooser_menu_get_show_numbers ([self RECENT_CHOOSER_MENU])];
}

-(void)setShowNumbers:(BOOL)showNumbers
{
	gtk_recent_chooser_menu_set_show_numbers([self RECENT_CHOOSER_MENU], [CGTK getGboolean:showNumbers]);
}

@end
