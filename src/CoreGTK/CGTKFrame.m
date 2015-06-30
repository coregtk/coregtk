/*
 * CGTKFrame.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFrame.h"

@implementation CGTKFrame

-(id)init:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_frame_new([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFrame*)FRAME
{
	return GTK_FRAME([self GOBJECT]);
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_frame_get_label(GTK_FRAME([self GOBJECT]))];
}

-(void)getLabelAlignWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign
{
	gtk_frame_get_label_align(GTK_FRAME([self GOBJECT]), xalign, yalign);
}

-(CGTKWidget*)getLabelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_frame_get_label_widget(GTK_FRAME([self GOBJECT]))];
}

-(GtkShadowType)getShadowType
{
	return gtk_frame_get_shadow_type(GTK_FRAME([self GOBJECT]));
}

-(void)setLabel:(NSString*) label
{
	gtk_frame_set_label(GTK_FRAME([self GOBJECT]), [label UTF8String]);
}

-(void)setLabelAlignWithXalign:(gfloat) xalign andYalign:(gfloat) yalign
{
	gtk_frame_set_label_align(GTK_FRAME([self GOBJECT]), xalign, yalign);
}

-(void)setLabelWidget:(CGTKWidget*) labelWidget
{
	gtk_frame_set_label_widget(GTK_FRAME([self GOBJECT]), [labelWidget WIDGET]);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_frame_set_shadow_type(GTK_FRAME([self GOBJECT]), type);
}


@end