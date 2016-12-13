/*
 * CGTKRecentChooserDialog.m
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
#import "CoreGTK/CGTKRecentChooserDialog.h"

@implementation CGTKRecentChooserDialog

-(id)initForManagerWithTitle:(NSString *)title andParent:(CGTKWindow *)parent andManager:(GtkRecentManager*)manager andButtonTextResponseDictionary:(NSDictionary *)buttonTextDict
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_dialog_new_for_manager([title UTF8String], [parent WINDOW], manager, NULL, NULL)];

	if(self)
	{
		CGTKTypeWrapper *wrapper;
		
		for(NSString *text in buttonTextDict)
		{
			wrapper = [buttonTextDict objectForKey:text];
			
			[self addButtonWithButtonText:text andResponseId:wrapper.gintValue];
		}
	}

	return self;
}

-(id)initWithTitle:(NSString *)title andParent:(CGTKWindow *)parent andButtonTextResponseDictionary:(NSDictionary *)buttonTextDict
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_dialog_new([title UTF8String], [parent WINDOW], NULL, NULL)];

	if(self)
	{
		CGTKTypeWrapper *wrapper;
		
		for(NSString *text in buttonTextDict)
		{
			wrapper = [buttonTextDict objectForKey:text];
			
			[self addButtonWithButtonText:text andResponseId:wrapper.gintValue];
		}
	}

	return self;
}

-(GtkRecentChooserDialog*)RECENTCHOOSERDIALOG
{
	return GTK_RECENT_CHOOSER_DIALOG([self GOBJECT]);
}


@end