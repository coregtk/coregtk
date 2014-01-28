/*
 * CGTKImage.m
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

#import "CGTKImage.h"

@implementation CGTKImage

-(GtkImage *)IMAGE
{
	return GTK_IMAGE([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_image_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromPixmapWithPixmap:(GdkPixmap*)pixmap andMask:(GdkBitmap *)mask
{
	self = [super initWithGtkWidget:gtk_image_new_from_pixmap (pixmap, mask) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromImageWithImage:(GdkImage *)image andMask:(GdkBitmap *)mask
{
	self = [super initWithGtkWidget:gtk_image_new_from_image (image, mask) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromFile:(NSString *)filename
{
	self = [super initWithGtkWidget:gtk_image_new_from_file ([filename UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromPixbuf:(GdkPixbuf *)pixbuf
{
	self = [super initWithGtkWidget:gtk_image_new_from_pixbuf (pixbuf) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromStockWithStockId:(NSString *)stockId andSize:(GtkIconSize)size
{
	self = [super initWithGtkWidget:gtk_image_new_from_stock ([stockId UTF8String], size) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromIconSetWithIconSet:(GtkIconSet *)iconSet andSize:(GtkIconSize)size
{
	self = [super initWithGtkWidget:gtk_image_new_from_icon_set (iconSet, size) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromAnimation:(GdkPixbufAnimation *)animation
{
	self = [super initWithGtkWidget:gtk_image_new_from_animation (animation) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromIconNameWithIconName:(NSString *)iconName andSize:(GtkIconSize)size
{
	self = [super initWithGtkWidget:gtk_image_new_from_icon_name ([iconName UTF8String], size) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initFromGiconWithIcon:(GIcon *)icon andSize:(GtkIconSize)size
{
	self = [super initWithGtkWidget:gtk_image_new_from_gicon (icon, size) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(void)clear
{
	gtk_image_clear ([self IMAGE]);
}

-(void)setFromPixmapWithPixmap:(GdkPixmap*)pixmap andMask:(GdkBitmap *)mask
{
	gtk_image_set_from_pixmap ([self IMAGE], pixmap, mask);
}

-(void)setFromImageWithGdkImage:(GdkImage *)gdkImage andMask:(GdkBitmap *)mask
{
	gtk_image_set_from_image ([self IMAGE], gdkImage, mask);
}

-(void)setFromFile:(NSString *)filename
{
	gtk_image_set_from_file ([self IMAGE], [filename UTF8String]);
}

-(void)setFromPixbuf:(GdkPixbuf *)pixbuf
{
	gtk_image_set_from_pixbuf ([self IMAGE], pixbuf);
}

-(void)setFromStockWithStockId:(NSString *)stockId andSize:(GtkIconSize)size
{
	gtk_image_set_from_stock ([self IMAGE], [stockId UTF8String], size);
}

-(void)setFromIconSetWithIconSet:(GtkIconSet *)iconSet andSize:(GtkIconSize)size
{
	gtk_image_set_from_icon_set ([self IMAGE], iconSet, size);
}

-(void)setFromAnimation:(GdkPixbufAnimation *)animation
{
	gtk_image_set_from_animation ([self IMAGE], animation);
}

-(void)setFromIconNameWithIconName:(NSString *)iconName andSize:(GtkIconSize)size
{
	gtk_image_set_from_icon_name ([self IMAGE], [iconName UTF8String], size);
}

-(void)setFromGiconWithIcon:(GIcon *)icon andSize:(GtkIconSize)size
{
	gtk_image_set_from_gicon ([self IMAGE], icon, size);
}

-(void)setPixelSize:(NSNumber *)pixelSize
{
	gtk_image_set_pixel_size ([self IMAGE], [pixelSize intValue]);
}

-(GtkImageType)getStorageType
{
	return gtk_image_get_storage_type ([self IMAGE]);
}

-(void)getPixmapWithPixmap:(GdkPixmap **)pixmap andMask:(GdkBitmap **)mask
{
	gtk_image_get_pixmap ([self IMAGE], pixmap, mask);
}

-(void)getImageWithGdkImage:(GdkImage **)gdkImage andMask:(GdkBitmap **)mask
{
	gtk_image_get_image ([self IMAGE], gdkImage, mask);
}

-(GdkPixbuf *)getPixbuf
{
	return gtk_image_get_pixbuf ([self IMAGE]);
}

-(void)getStockWithStockId:(NSString **)stockId andSize:(GtkIconSize *)size
{
	gchar *gStockId;
	gtk_image_get_stock ([self IMAGE], &gStockId, size);
	*stockId = [NSString stringWithUTF8String:gStockId];
}

-(void)getIconSetWithIconSet:(GtkIconSet **)iconSet andSize:(GtkIconSize *)size
{
	gtk_image_get_icon_set ([self IMAGE], iconSet, size);
}

-(GdkPixbufAnimation *)getAnimation
{
	return gtk_image_get_animation ([self IMAGE]);
}

-(void)getIconNameWithIconName:(NSString **)iconName andSize:(GtkIconSize *)size
{
	const gchar *gIconName;
	gtk_image_get_icon_name ([self IMAGE], &gIconName, size);
	*iconName = [NSString stringWithUTF8String:gIconName];
}

-(void)getGiconWithGicon:(GIcon **)gicon andSize:(GtkIconSize *)size
{
	gtk_image_get_gicon ([self IMAGE], gicon, size);
}

-(NSNumber *)getPixelSize
{
	return [NSNumber numberWithInt:gtk_image_get_pixel_size ([self IMAGE])];
}

@end
