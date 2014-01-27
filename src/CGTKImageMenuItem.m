/*
 * CGTKImageMenuItem.m
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

#import "CGTKImageMenuItem.h"

@implementation CGTKImageMenuItem

-(GtkImageMenuItem *)IMAGE_MENU_ITEM
{
	return GTK_IMAGE_MENU_ITEM([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_image_menu_item_new ()];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_image_menu_item_new_with_label ([label UTF8String])];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithMnemonic:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_image_menu_item_new_with_mnemonic ([label UTF8String])];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initFromStockWithStockId:(NSString *)stockId andAccelGroup:(GtkAccelGroup *)accelGroup
{
	self = [super initWithGtkWidget:gtk_image_menu_item_new_from_stock ([stockId UTF8String], accelGroup)];
	
	if(self)
	{
	
	}
	
	return self;
}

-(void)setAlwaysShowImage:(BOOL)alwaysShow
{
	gtk_image_menu_item_set_always_show_image ([self IMAGE_MENU_ITEM], [CGTK getGboolean:alwaysShow]);
}

-(BOOL)getAlwaysShowImage
{
	return [CGTK getBOOL:gtk_image_menu_item_get_always_show_image ([self IMAGE_MENU_ITEM])];
}

-(void)setImage:(CGTKWidget *)image
{
	gtk_image_menu_item_set_image ([self IMAGE_MENU_ITEM], [image WIDGET]);
}

-(CGTKWidget *)getImage
{
	return [CGTKWidget widgetWithGtkWidget:gtk_image_menu_item_get_image ([self IMAGE_MENU_ITEM])];
}

-(void)setUseStock:(BOOL)useStock
{
	gtk_image_menu_item_set_use_stock ([self IMAGE_MENU_ITEM], [CGTK getGboolean:useStock]);
}

-(BOOL)getUseStock
{
	return [CGTK getBOOL:gtk_image_menu_item_get_use_stock ([self IMAGE_MENU_ITEM])];
}

-(void)setAccelGroup:(GtkAccelGroup *)accelGroup
{
	gtk_image_menu_item_set_accel_group ([self IMAGE_MENU_ITEM], accelGroup);
}

@end
