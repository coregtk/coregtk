/*
 * CGTKImage.h
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
#import "CGTKMisc.h"

@interface CGTKImage : CGTKMisc
{
	
}

/**
 * Returns internal GtkImage
 */
-(GtkImage *)IMAGE;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_pixmap (GdkPixmap* pixmap, GdkBitmap* mask)
 */
-(id)initFromPixmapWithPixmap:(GdkPixmap*)pixmap andMask:(GdkBitmap *)mask;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_image (GdkImage* image, GdkBitmap* mask)
 */
-(id)initFromImageWithImage:(GdkImage *)image andMask:(GdkBitmap *)mask;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_file (const gchar* filename)
 */
-(id)initFromFile:(NSString *)filename;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_pixbuf (GdkPixbuf* pixbuf)
 */
-(id)initFromPixbuf:(GdkPixbuf *)pixbuf;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_stock (const gchar* stock_id, GtkIconSize size)
 */
-(id)initFromStockWithStockId:(NSString *)stockId andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_icon_set (GtkIconSet* icon_set, GtkIconSize size)
 */
-(id)initFromIconSetWithIconSet:(GtkIconSet *)iconSet andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_animation (GdkPixbufAnimation* animation)
 */
-(id)initFromAnimation:(GdkPixbufAnimation *)animation;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_icon_name (const gchar* icon_name, GtkIconSize size)
 */
-(id)initFromIconNameWithIconName:(NSString *)iconName andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * GtkWidget* gtk_image_new_from_gicon (GIcon* icon, GtkIconSize size)
 */
-(id)initFromGiconWithIcon:(GIcon *)icon andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * void gtk_image_clear (GtkImage* image)
 */
-(void)clear;

/**
 * Forwards message to:
 * void gtk_image_set_from_pixmap (GtkImage* image, GdkPixmap* pixmap, GdkBitmap* mask)
 */
-(void)setFromPixmapWithPixmap:(GdkPixmap*)pixmap andMask:(GdkBitmap *)mask;

/**
 * Forwards message to:
 * void gtk_image_set_from_image (GtkImage* image, GdkImage* gdk_image, GdkBitmap* mask)
 */
-(void)setFromImageWithGdkImage:(GdkImage *)gdkImage andMask:(GdkBitmap *)mask;

/**
 * Forwards message to:
 * void gtk_image_set_from_file (GtkImage* image, const gchar* filename)
 */
-(void)setFromFile:(NSString *)filename;

/**
 * Forwards message to:
 * void gtk_image_set_from_pixbuf (GtkImage* image, GdkPixbuf* pixbuf)
 */
-(void)setFromPixbuf:(GdkPixbuf *)pixbuf;

/**
 * Forwards message to:
 * void gtk_image_set_from_stock (GtkImage* image, const gchar* stock_id, GtkIconSize size)
 */
-(void)setFromStockWithStockId:(NSString *)stockId andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * void gtk_image_set_from_icon_set (GtkImage* image, GtkIconSet* icon_set, GtkIconSize size)
 */
-(void)setFromIconSetWithIconSet:(GtkIconSet *)iconSet andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * void gtk_image_set_from_animation (GtkImage* image, GdkPixbufAnimation* animation)
 */
-(void)setFromAnimation:(GdkPixbufAnimation *)animation;

/**
 * Forwards message to:
 * void gtk_image_set_from_icon_name (GtkImage* image, const gchar* icon_name, GtkIconSize size)
 */
-(void)setFromIconNameWithIconName:(NSString *)iconName andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * void gtk_image_set_from_gicon (GtkImage* image, GIcon* icon, GtkIconSize size)
 */
-(void)setFromGiconWithIcon:(GIcon *)icon andSize:(GtkIconSize)size;

/**
 * Forwards message to:
 * void gtk_image_set_pixel_size (GtkImage* image, gint pixel_size)
 */
-(void)setPixelSize:(NSNumber *)pixelSize;

/**
 * Forwards message to:
 * GtkImageType gtk_image_get_storage_type (GtkImage* image)
 */
-(GtkImageType)getStorageType;

/**
 * Forwards message to:
 * void gtk_image_get_pixmap (GtkImage* image, GdkPixmap** pixmap, GdkBitmap** mask)
 */
-(void)getPixmapWithPixmap:(GdkPixmap **)pixmap andMask:(GdkBitmap **)mask;

/**
 * Forwards message to:
 * void gtk_image_get_image (GtkImage* image, GdkImage** gdk_image, GdkBitmap** mask)
 */
-(void)getImageWithGdkImage:(GdkImage **)gdkImage andMask:(GdkBitmap **)mask;

/**
 * Forwards message to:
 * GdkPixbuf* gtk_image_get_pixbuf (GtkImage* image)
 */
-(GdkPixbuf *)getPixbuf;

/**
 * Forwards message to:
 * void gtk_image_get_stock (GtkImage* image, gchar** stock_id, GtkIconSize* size)
 */
-(void)getStockWithStockId:(NSString **)stockId andSize:(GtkIconSize *)size;

/**
 * Forwards message to:
 * void gtk_image_get_icon_set (GtkImage* image, GtkIconSet** icon_set, GtkIconSize* size)
 */
-(void)getIconSetWithIconSet:(GtkIconSet **)iconSet andSize:(GtkIconSize *)size;

/**
 * Forwards message to:
 * GdkPixbufAnimation* gtk_image_get_animation (GtkImage* image)
 */
-(GdkPixbufAnimation *)getAnimation;

/**
 * Forwards message to:
 * void gtk_image_get_icon_name (GtkImage* image, const gchar** icon_name, GtkIconSize* size)
 */
-(void)getIconNameWithIconName:(NSString **)iconName andSize:(GtkIconSize *)size;

/**
 * Forwards message to:
 * void gtk_image_get_gicon (GtkImage* image, GIcon** gicon, GtkIconSize* size)
 */
-(void)getGiconWithGicon:(GIcon **)gicon andSize:(GtkIconSize *)size;

/**
 * Forwards message to:
 * gint gtk_image_get_pixel_size (GtkImage* image)
 */
-(NSNumber *)getPixelSize;

@end
