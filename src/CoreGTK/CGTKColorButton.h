/*
 * CGTKColorButton.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKColorButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithColor:(const GdkColor*) color;
-(id)initWithRgba:(const GdkRGBA*) rgba;

/**
 * Methods
 */

-(GtkColorButton*)COLORBUTTON;

/**
 * -(guint16*)getAlpha;
 *
 * @returns guint16
 */
-(guint16)getAlpha;

/**
 * -(void*)getColor:(GdkColor*) color;
 *
 * @param color
 */
-(void)getColor:(GdkColor*) color;

/**
 * -(void*)getRgba:(GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)getRgba:(GdkRGBA*) rgba;

/**
 * -(NSString**)getTitle;
 *
 * @returns NSString*
 */
-(NSString*)getTitle;

/**
 * -(BOOL*)getUseAlpha;
 *
 * @returns BOOL
 */
-(BOOL)getUseAlpha;

/**
 * -(void*)setAlpha:(guint16) alpha;
 *
 * @param alpha
 */
-(void)setAlpha:(guint16) alpha;

/**
 * -(void*)setColor:(const GdkColor*) color;
 *
 * @param color
 */
-(void)setColor:(const GdkColor*) color;

/**
 * -(void*)setRgba:(const GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)setRgba:(const GdkRGBA*) rgba;

/**
 * -(void*)setTitle:(NSString*) title;
 *
 * @param title
 */
-(void)setTitle:(NSString*) title;

/**
 * -(void*)setUseAlpha:(BOOL) useAlpha;
 *
 * @param useAlpha
 */
-(void)setUseAlpha:(BOOL) useAlpha;

@end
