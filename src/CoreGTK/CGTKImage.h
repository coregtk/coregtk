/*
 * CGTKImage.h
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
#import "CoreGTK/CGTKMisc.h"

@interface CGTKImage : CGTKMisc
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromAnimation:(GdkPixbufAnimation*) animation;
-(id)initFromFile:(NSString*) filename;
-(id)initFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size;
-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
-(id)initFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size;
-(id)initFromPixbuf:(GdkPixbuf*) pixbuf;
-(id)initFromResource:(NSString*) resourcePath;
-(id)initFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
-(id)initFromSurface:(cairo_surface_t*) surface;

/**
 * Methods
 */

-(GtkImage*)IMAGE;

/**
 * -(void*)clear;
 *
 */
-(void)clear;

/**
 * -(GdkPixbufAnimation**)getAnimation;
 *
 * @returns GdkPixbufAnimation*
 */
-(GdkPixbufAnimation*)getAnimation;

/**
 * -(void*)getGiconWithGicon:(GIcon**) gicon andSize:(GtkIconSize*) size;
 *
 * @param gicon
 * @param size
 */
-(void)getGiconWithGicon:(GIcon**) gicon andSize:(GtkIconSize*) size;

/**
 * -(void*)getIconNameWithIconName:(const gchar**) iconName andSize:(GtkIconSize*) size;
 *
 * @param iconName
 * @param size
 */
-(void)getIconNameWithIconName:(const gchar**) iconName andSize:(GtkIconSize*) size;

/**
 * -(void*)getIconSetWithIconSet:(GtkIconSet**) iconSet andSize:(GtkIconSize*) size;
 *
 * @param iconSet
 * @param size
 */
-(void)getIconSetWithIconSet:(GtkIconSet**) iconSet andSize:(GtkIconSize*) size;

/**
 * -(GdkPixbuf**)getPixbuf;
 *
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getPixbuf;

/**
 * -(gint*)getPixelSize;
 *
 * @returns gint
 */
-(gint)getPixelSize;

/**
 * -(void*)getStockWithStockId:(gchar**) stockId andSize:(GtkIconSize*) size;
 *
 * @param stockId
 * @param size
 */
-(void)getStockWithStockId:(gchar**) stockId andSize:(GtkIconSize*) size;

/**
 * -(GtkImageType*)getStorageType;
 *
 * @returns GtkImageType
 */
-(GtkImageType)getStorageType;

/**
 * -(void*)setFromAnimation:(GdkPixbufAnimation*) animation;
 *
 * @param animation
 */
-(void)setFromAnimation:(GdkPixbufAnimation*) animation;

/**
 * -(void*)setFromFile:(NSString*) filename;
 *
 * @param filename
 */
-(void)setFromFile:(NSString*) filename;

/**
 * -(void*)setFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size;
 *
 * @param icon
 * @param size
 */
-(void)setFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size;

/**
 * -(void*)setFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
 *
 * @param iconName
 * @param size
 */
-(void)setFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;

/**
 * -(void*)setFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size;
 *
 * @param iconSet
 * @param size
 */
-(void)setFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size;

/**
 * -(void*)setFromPixbuf:(GdkPixbuf*) pixbuf;
 *
 * @param pixbuf
 */
-(void)setFromPixbuf:(GdkPixbuf*) pixbuf;

/**
 * -(void*)setFromResource:(NSString*) resourcePath;
 *
 * @param resourcePath
 */
-(void)setFromResource:(NSString*) resourcePath;

/**
 * -(void*)setFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
 *
 * @param stockId
 * @param size
 */
-(void)setFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;

/**
 * -(void*)setFromSurface:(cairo_surface_t*) surface;
 *
 * @param surface
 */
-(void)setFromSurface:(cairo_surface_t*) surface;

/**
 * -(void*)setPixelSize:(gint) pixelSize;
 *
 * @param pixelSize
 */
-(void)setPixelSize:(gint) pixelSize;

@end
