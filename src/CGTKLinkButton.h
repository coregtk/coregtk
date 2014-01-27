/*
 * CGTKLinkButton.h
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
#import "CGTKButton.h"

@interface CGTKLinkButton : CGTKButton
{
	
}

-(GtkLinkButton *)LINK_BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_link_button_new (const gchar* uri)
 */
-(id)init:(NSString *)uri;

/*
 * Forwards message to:
 * GtkWidget* gtk_link_button_new_with_label (const gchar* uri, const gchar* label)
 */
-(id)initWithLabelWithUri:(NSString *)uri andLabel:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_link_button_set_uri (GtkLinkButton* link_button, const gchar* uri)
 */
-(void)setUri:(NSString *)uri;

/*
 * Forwards message to:
 * const gchar * gtk_link_button_get_uri (GtkLinkButton* link_button)
 */
-(NSString *)getUri;

/*
 * Forwards message to:
 * gboolean gtk_link_button_get_visited (GtkLinkButton* link_button)
 */
-(BOOL)getVisited;

/*
 * Forwards message to:
 * void gtk_link_button_set_visited (GtkLinkButton* link_button, gboolean visited)
 */
-(void)setVisited:(BOOL)visited;

@end
