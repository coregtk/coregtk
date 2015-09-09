/*
 * CGTKColorSelection.h
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
#import "CoreGTK/CGTKBox.h"

@interface CGTKColorSelection : CGTKBox
{

}

/**
 * Functions
 */
+(BOOL)paletteFromStringWithStr:(NSString*) str andColors:(GdkColor**) colors andNcolors:(gint*) ncolors;
+(NSString*)paletteToStringWithColors:(GdkColor*) colors andNcolors:(gint) ncolors;
+(GtkColorSelectionChangePaletteWithScreenFunc)setChangePaletteWithScreenHook:(GtkColorSelectionChangePaletteWithScreenFunc) func;

/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkColorSelection*)COLORSELECTION;

/**
 * -(guint16*)getCurrentAlpha;
 *
 * @returns guint16
 */
-(guint16)getCurrentAlpha;

/**
 * -(void*)getCurrentColor:(GdkColor*) color;
 *
 * @param color
 */
-(void)getCurrentColor:(GdkColor*) color;

/**
 * -(void*)getCurrentRgba:(GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)getCurrentRgba:(GdkRGBA*) rgba;

/**
 * -(BOOL*)getHasOpacityControl;
 *
 * @returns BOOL
 */
-(BOOL)getHasOpacityControl;

/**
 * -(BOOL*)getHasPalette;
 *
 * @returns BOOL
 */
-(BOOL)getHasPalette;

/**
 * -(guint16*)getPreviousAlpha;
 *
 * @returns guint16
 */
-(guint16)getPreviousAlpha;

/**
 * -(void*)getPreviousColor:(GdkColor*) color;
 *
 * @param color
 */
-(void)getPreviousColor:(GdkColor*) color;

/**
 * -(void*)getPreviousRgba:(GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)getPreviousRgba:(GdkRGBA*) rgba;

/**
 * -(BOOL*)isAdjusting;
 *
 * @returns BOOL
 */
-(BOOL)isAdjusting;

/**
 * -(void*)setCurrentAlpha:(guint16) alpha;
 *
 * @param alpha
 */
-(void)setCurrentAlpha:(guint16) alpha;

/**
 * -(void*)setCurrentColor:(const GdkColor*) color;
 *
 * @param color
 */
-(void)setCurrentColor:(const GdkColor*) color;

/**
 * -(void*)setCurrentRgba:(const GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)setCurrentRgba:(const GdkRGBA*) rgba;

/**
 * -(void*)setHasOpacityControl:(BOOL) hasOpacity;
 *
 * @param hasOpacity
 */
-(void)setHasOpacityControl:(BOOL) hasOpacity;

/**
 * -(void*)setHasPalette:(BOOL) hasPalette;
 *
 * @param hasPalette
 */
-(void)setHasPalette:(BOOL) hasPalette;

/**
 * -(void*)setPreviousAlpha:(guint16) alpha;
 *
 * @param alpha
 */
-(void)setPreviousAlpha:(guint16) alpha;

/**
 * -(void*)setPreviousColor:(const GdkColor*) color;
 *
 * @param color
 */
-(void)setPreviousColor:(const GdkColor*) color;

/**
 * -(void*)setPreviousRgba:(const GdkRGBA*) rgba;
 *
 * @param rgba
 */
-(void)setPreviousRgba:(const GdkRGBA*) rgba;

@end