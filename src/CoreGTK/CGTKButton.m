/*
 * CGTKButton.m
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
#import "CoreGTK/CGTKButton.h"

@implementation CGTKButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size
{
	self = [super initWithGObject:(GObject *)gtk_button_new_from_icon_name([iconName UTF8String], size)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStock:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_button_new_from_stock([stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_button_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_button_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkButton*)BUTTON
{
	return GTK_BUTTON([self GOBJECT]);
}

-(void)clicked
{
	gtk_button_clicked(GTK_BUTTON([self GOBJECT]));
}

-(void)enter
{
	gtk_button_enter(GTK_BUTTON([self GOBJECT]));
}

-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign
{
	gtk_button_get_alignment(GTK_BUTTON([self GOBJECT]), xalign, yalign);
}

-(BOOL)getAlwaysShowImage
{
	return (gtk_button_get_always_show_image(GTK_BUTTON([self GOBJECT])) ? YES : NO);
}

-(GdkWindow*)getEventWindow
{
	return gtk_button_get_event_window(GTK_BUTTON([self GOBJECT]));
}

-(BOOL)getFocusOnClick
{
	return (gtk_button_get_focus_on_click(GTK_BUTTON([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getImage
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_button_get_image(GTK_BUTTON([self GOBJECT]))];
}

-(GtkPositionType)getImagePosition
{
	return gtk_button_get_image_position(GTK_BUTTON([self GOBJECT]));
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_button_get_label(GTK_BUTTON([self GOBJECT]))];
}

-(GtkReliefStyle)getRelief
{
	return gtk_button_get_relief(GTK_BUTTON([self GOBJECT]));
}

-(BOOL)getUseStock
{
	return (gtk_button_get_use_stock(GTK_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getUseUnderline
{
	return (gtk_button_get_use_underline(GTK_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)leave
{
	gtk_button_leave(GTK_BUTTON([self GOBJECT]));
}

-(void)pressed
{
	gtk_button_pressed(GTK_BUTTON([self GOBJECT]));
}

-(void)released
{
	gtk_button_released(GTK_BUTTON([self GOBJECT]));
}

-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign
{
	gtk_button_set_alignment(GTK_BUTTON([self GOBJECT]), xalign, yalign);
}

-(void)setAlwaysShowImage:(BOOL) alwaysShow
{
	gtk_button_set_always_show_image(GTK_BUTTON([self GOBJECT]), (alwaysShow ? TRUE : FALSE));
}

-(void)setFocusOnClick:(BOOL) focusOnClick
{
	gtk_button_set_focus_on_click(GTK_BUTTON([self GOBJECT]), (focusOnClick ? TRUE : FALSE));
}

-(void)setImage:(CGTKWidget*) image
{
	gtk_button_set_image(GTK_BUTTON([self GOBJECT]), [image WIDGET]);
}

-(void)setImagePosition:(GtkPositionType) position
{
	gtk_button_set_image_position(GTK_BUTTON([self GOBJECT]), position);
}

-(void)setLabel:(NSString*) label
{
	gtk_button_set_label(GTK_BUTTON([self GOBJECT]), [label UTF8String]);
}

-(void)setRelief:(GtkReliefStyle) newstyle
{
	gtk_button_set_relief(GTK_BUTTON([self GOBJECT]), newstyle);
}

-(void)setUseStock:(BOOL) useStock
{
	gtk_button_set_use_stock(GTK_BUTTON([self GOBJECT]), (useStock ? TRUE : FALSE));
}

-(void)setUseUnderline:(BOOL) useUnderline
{
	gtk_button_set_use_underline(GTK_BUTTON([self GOBJECT]), (useUnderline ? TRUE : FALSE));
}


@end
