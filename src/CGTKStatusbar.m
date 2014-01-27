/*
 * CGTKStatusbar.m
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

#import "CGTKStatusbar.h"

@implementation CGTKStatusbar

-(GtkStatusbar *)STATUSBAR
{
	return GTK_STATUSBAR([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_statusbar_new ()];

	if(self)
	{

	}

	return self;
}

-(NSNumber *)getContextId:(NSString *)contextDescription
{
	return [NSNumber numberWithUnsignedInt:gtk_statusbar_get_context_id ([self STATUSBAR], [contextDescription UTF8String])];
}

-(NSNumber *)pushWithContextId:(NSNumber *)contextId andText:(NSString *)text
{
	return [NSNumber numberWithUnsignedInt:gtk_statusbar_push ([self STATUSBAR], [contextId unsignedIntValue], [text UTF8String])];
}

-(void)pop:(NSNumber *)contextId
{
	gtk_statusbar_pop ([self STATUSBAR], [contextId unsignedIntValue]);
}

-(void)removeWithContextId:(NSNumber *)contextId andMessageId:(NSNumber *)messageId
{
	gtk_statusbar_remove ([self STATUSBAR], [contextId unsignedIntValue], [messageId unsignedIntValue]);
}

-(void)removeAll:(NSNumber *)contextId
{
	gtk_statusbar_remove_all ([self STATUSBAR], [contextId unsignedIntValue]);
}

-(BOOL)getHasResizeGrip
{
	return [CGTK getBOOL:gtk_statusbar_get_has_resize_grip ([self STATUSBAR])];
}

-(CGTKWidget *)getMessageArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_statusbar_get_message_area ([self STATUSBAR])];
}

@end
