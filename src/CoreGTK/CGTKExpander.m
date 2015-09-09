/*
 * CGTKExpander.m
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
#import "CoreGTK/CGTKExpander.h"

@implementation CGTKExpander

-(id)init:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_expander_new([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_expander_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkExpander*)EXPANDER
{
	return GTK_EXPANDER([self GOBJECT]);
}

-(BOOL)getExpanded
{
	return (gtk_expander_get_expanded(GTK_EXPANDER([self GOBJECT])) ? YES : NO);
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_expander_get_label(GTK_EXPANDER([self GOBJECT]))];
}

-(BOOL)getLabelFill
{
	return (gtk_expander_get_label_fill(GTK_EXPANDER([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getLabelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_expander_get_label_widget(GTK_EXPANDER([self GOBJECT]))];
}

-(BOOL)getResizeToplevel
{
	return (gtk_expander_get_resize_toplevel(GTK_EXPANDER([self GOBJECT])) ? YES : NO);
}

-(gint)getSpacing
{
	return gtk_expander_get_spacing(GTK_EXPANDER([self GOBJECT]));
}

-(BOOL)getUseMarkup
{
	return (gtk_expander_get_use_markup(GTK_EXPANDER([self GOBJECT])) ? YES : NO);
}

-(BOOL)getUseUnderline
{
	return (gtk_expander_get_use_underline(GTK_EXPANDER([self GOBJECT])) ? YES : NO);
}

-(void)setExpanded:(BOOL) expanded
{
	gtk_expander_set_expanded(GTK_EXPANDER([self GOBJECT]), (expanded ? TRUE : FALSE));
}

-(void)setLabel:(NSString*) label
{
	gtk_expander_set_label(GTK_EXPANDER([self GOBJECT]), [label UTF8String]);
}

-(void)setLabelFill:(BOOL) labelFill
{
	gtk_expander_set_label_fill(GTK_EXPANDER([self GOBJECT]), (labelFill ? TRUE : FALSE));
}

-(void)setLabelWidget:(CGTKWidget*) labelWidget
{
	gtk_expander_set_label_widget(GTK_EXPANDER([self GOBJECT]), [labelWidget WIDGET]);
}

-(void)setResizeToplevel:(BOOL) resizeToplevel
{
	gtk_expander_set_resize_toplevel(GTK_EXPANDER([self GOBJECT]), (resizeToplevel ? TRUE : FALSE));
}

-(void)setSpacing:(gint) spacing
{
	gtk_expander_set_spacing(GTK_EXPANDER([self GOBJECT]), spacing);
}

-(void)setUseMarkup:(BOOL) useMarkup
{
	gtk_expander_set_use_markup(GTK_EXPANDER([self GOBJECT]), (useMarkup ? TRUE : FALSE));
}

-(void)setUseUnderline:(BOOL) useUnderline
{
	gtk_expander_set_use_underline(GTK_EXPANDER([self GOBJECT]), (useUnderline ? TRUE : FALSE));
}


@end
