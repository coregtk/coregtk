/*
 * CGTKStatusbar.h
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
#import "CGTKHBox.h"

@interface CGTKStatusbar : CGTKHBox
{
	
}

/**
 * Returns internal GtkStatusbar
 */
-(GtkStatusbar *)STATUSBAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_statusbar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * guint gtk_statusbar_get_context_id (GtkStatusbar* statusbar, const gchar* context_description)
 */
-(NSNumber *)getContextId:(NSString *)contextDescription;

/**
 * Forwards message to:
 * guint gtk_statusbar_push (GtkStatusbar* statusbar, guint context_id, const gchar* text)
 */
-(NSNumber *)pushWithContextId:(NSNumber *)contextId andText:(NSString *)text;

/**
 * Forwards message to:
 * void gtk_statusbar_pop (GtkStatusbar* statusbar, guint context_id)
 */
-(void)pop:(NSNumber *)contextId;

/**
 * Forwards message to:
 * void gtk_statusbar_remove (GtkStatusbar* statusbar, guint context_id, guint message_id)
 */
-(void)removeWithContextId:(NSNumber *)contextId andMessageId:(NSNumber *)messageId;

/**
 * Forwards message to:
 * void gtk_statusbar_remove_all (GtkStatusbar* statusbar, guint context_id)
 */
-(void)removeAll:(NSNumber *)contextId;

/**
 * Forwards message to:
 * gboolean gtk_statusbar_get_has_resize_grip (GtkStatusbar* statusbar)
 */
-(BOOL)getHasResizeGrip;

/**
 * Forwards message to:
 * GtkWidget* gtk_statusbar_get_message_area (GtkStatusbar* statusbar)
 */
-(CGTKWidget *)getMessageArea;

@end
