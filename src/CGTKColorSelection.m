/*
 * CGTKColorSelection.m
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

#import "CGTKColorSelection.h"

@implementation CGTKColorSelection

-(GtkColorSelection *)COLOR_SELECTION
{
	return GTK_COLOR_SELECTION([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_color_selection_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(BOOL)getHasOpacityControl
{
	return [CGTK getBOOL:gtk_color_selection_get_has_opacity_control ([self COLOR_SELECTION])];
}

-(void)setHasOpacityControl:(BOOL)hasOpacity
{
	gtk_color_selection_set_has_opacity_control ([self COLOR_SELECTION], [CGTK getGboolean:hasOpacity]);
}

-(BOOL)getHasPalette
{
	return [CGTK getBOOL:gtk_color_selection_get_has_palette ([self COLOR_SELECTION])];
}

-(void)setHasPalette:(BOOL)hasPalette
{
	gtk_color_selection_set_has_palette ([self COLOR_SELECTION], [CGTK getGboolean:hasPalette]);
}

-(void)setCurrentColor:(const GdkColor *)color
{
	gtk_color_selection_set_current_color ([self COLOR_SELECTION], color);
}

-(void)setCurrentAlpha:(NSNumber *)alpha
{
	gtk_color_selection_set_current_alpha ([self COLOR_SELECTION], [alpha unsignedIntValue]);
}

-(void)getCurrentColor:(GdkColor *)color
{
	gtk_color_selection_get_current_color ([self COLOR_SELECTION], color);
}

-(NSNumber *)getCurrentAlpha
{
	return [NSNumber numberWithUnsignedInt:gtk_color_selection_get_current_alpha ([self COLOR_SELECTION])];
}

-(void)setPreviousColor:(const GdkColor *)color
{
	gtk_color_selection_set_previous_color ([self COLOR_SELECTION], color);
}

-(void)setPreviousAlpha:(NSNumber *)alpha
{
	gtk_color_selection_set_previous_alpha ([self COLOR_SELECTION], [alpha unsignedIntValue]);
}

-(void)getPreviousColor:(GdkColor *)color
{
	gtk_color_selection_get_previous_color ([self COLOR_SELECTION], color);
}

-(NSNumber *)getPreviousAlpha
{
	return [NSNumber numberWithUnsignedInt:gtk_color_selection_get_previous_alpha ([self COLOR_SELECTION])];
}

-(BOOL)isAdjusting
{
	return [CGTK getBOOL:gtk_color_selection_is_adjusting ([self COLOR_SELECTION])];
}

-(BOOL)paletteFromStringWithStr:(NSString *)str andColors:(GdkColor **)colors andNColors:(NSNumber **)nColors
{
	gint gNColors;
	BOOL toReturn;
	
	toReturn = [CGTK getBOOL:gtk_color_selection_palette_from_string ([str UTF8String], colors, &gNColors)];
	
	*nColors = [NSNumber numberWithInt:gNColors];
	
	return toReturn;
}

-(NSString *)paletteToStringWithColors:(const GdkColor *)colors andNColors:(NSNumber *)nColors
{
	return [NSString stringWithUTF8String:gtk_color_selection_palette_to_string (colors, [nColors intValue])];
}

-(GtkColorSelectionChangePaletteWithScreenFunc)setChangePaletteWithScreenHook:(GtkColorSelectionChangePaletteWithScreenFunc)func
{
	return gtk_color_selection_set_change_palette_with_screen_hook (func);
}

@end
