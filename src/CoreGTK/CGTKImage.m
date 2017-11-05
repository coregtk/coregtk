/*
 * CGTKImage.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKImage.h"

@implementation CGTKImage

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_image_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromAnimation:(GdkPixbufAnimation*) animation
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_animation(animation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromFile:(NSString*) filename
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_file([filename UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_gicon(icon, size)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_icon_name([iconName UTF8String], size)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_icon_set(iconSet, size)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromPixbuf:(GdkPixbuf*) pixbuf
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_pixbuf(pixbuf)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromResource:(NSString*) resourcePath
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_resource([resourcePath UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_stock([stockId UTF8String], size)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromSurface:(cairo_surface_t*) surface
{
	self = [super initWithGObject:(GObject *)gtk_image_new_from_surface(surface)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkImage*)IMAGE
{
	return GTK_IMAGE([self GOBJECT]);
}

-(void)clear
{
	gtk_image_clear(GTK_IMAGE([self GOBJECT]));
}

-(GdkPixbufAnimation*)getAnimation
{
	return gtk_image_get_animation(GTK_IMAGE([self GOBJECT]));
}

-(void)getGiconWithGicon:(GIcon**) gicon andSize:(GtkIconSize*) size
{
	gtk_image_get_gicon(GTK_IMAGE([self GOBJECT]), gicon, size);
}

-(void)getIconNameWithIconName:(const gchar**) iconName andSize:(GtkIconSize*) size
{
	gtk_image_get_icon_name(GTK_IMAGE([self GOBJECT]), iconName, size);
}

-(void)getIconSetWithIconSet:(GtkIconSet**) iconSet andSize:(GtkIconSize*) size
{
	gtk_image_get_icon_set(GTK_IMAGE([self GOBJECT]), iconSet, size);
}

-(GdkPixbuf*)getPixbuf
{
	return gtk_image_get_pixbuf(GTK_IMAGE([self GOBJECT]));
}

-(gint)getPixelSize
{
	return gtk_image_get_pixel_size(GTK_IMAGE([self GOBJECT]));
}

-(void)getStockWithStockId:(gchar**) stockId andSize:(GtkIconSize*) size
{
	gtk_image_get_stock(GTK_IMAGE([self GOBJECT]), stockId, size);
}

-(GtkImageType)getStorageType
{
	return gtk_image_get_storage_type(GTK_IMAGE([self GOBJECT]));
}

-(void)setFromAnimation:(GdkPixbufAnimation*) animation
{
	gtk_image_set_from_animation(GTK_IMAGE([self GOBJECT]), animation);
}

-(void)setFromFile:(NSString*) filename
{
	gtk_image_set_from_file(GTK_IMAGE([self GOBJECT]), [filename UTF8String]);
}

-(void)setFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size
{
	gtk_image_set_from_gicon(GTK_IMAGE([self GOBJECT]), icon, size);
}

-(void)setFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size
{
	gtk_image_set_from_icon_name(GTK_IMAGE([self GOBJECT]), [iconName UTF8String], size);
}

-(void)setFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size
{
	gtk_image_set_from_icon_set(GTK_IMAGE([self GOBJECT]), iconSet, size);
}

-(void)setFromPixbuf:(GdkPixbuf*) pixbuf
{
	gtk_image_set_from_pixbuf(GTK_IMAGE([self GOBJECT]), pixbuf);
}

-(void)setFromResource:(NSString*) resourcePath
{
	gtk_image_set_from_resource(GTK_IMAGE([self GOBJECT]), [resourcePath UTF8String]);
}

-(void)setFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size
{
	gtk_image_set_from_stock(GTK_IMAGE([self GOBJECT]), [stockId UTF8String], size);
}

-(void)setFromSurface:(cairo_surface_t*) surface
{
	gtk_image_set_from_surface(GTK_IMAGE([self GOBJECT]), surface);
}

-(void)setPixelSize:(gint) pixelSize
{
	gtk_image_set_pixel_size(GTK_IMAGE([self GOBJECT]), pixelSize);
}


@end