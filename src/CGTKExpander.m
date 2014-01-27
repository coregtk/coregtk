/*
 * CGTKExpander.m
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

#import "CGTKExpander.h"

@implementation CGTKExpander

-(GtkExpander *)EXPANDER
{
	return GTK_EXPANDER([self WIDGET]);
}

-(id)init:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_expander_new ([label UTF8String])];

	if(self)
	{

	}

	return self;
}

-(id)initWithMnemonic:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_expander_new_with_mnemonic ([label UTF8String])];

	if(self)
	{

	}

	return self;
}

-(void)setExpanded:(BOOL)expanded
{
	gtk_expander_set_expanded ([self EXPANDER], [CGTK getGboolean:expanded]);
}

-(BOOL)getExpanded
{
	return [CGTK getBOOL:gtk_expander_get_expanded ([self EXPANDER])];
}

-(void)setSpacing:(NSNumber *)spacing
{
	gtk_expander_set_spacing ([self EXPANDER], [spacing intValue]);
}

-(NSNumber *)getSpacing
{
	return [NSNumber numberWithInt:gtk_expander_get_spacing ([self EXPANDER])];
}

-(void)setLabel:(NSString *)label
{
	gtk_expander_set_label ([self EXPANDER], [label UTF8String]);
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String:gtk_expander_get_label ([self EXPANDER])];
}

-(void)setUseUnderline:(BOOL)useUnderline
{
	gtk_expander_set_use_underline ([self EXPANDER], [CGTK getGboolean:useUnderline]);
}

-(BOOL)getUseUnderline
{
	return [CGTK getBOOL:gtk_expander_get_use_underline ([self EXPANDER])];
}

-(void)setUseMarkup:(BOOL)useMarkup
{
	gtk_expander_set_use_markup ([self EXPANDER], [CGTK getGboolean:useMarkup]);
}

-(BOOL)getUseMarkup
{
	return [CGTK getBOOL:gtk_expander_get_use_markup ([self EXPANDER])];
}

-(void)setLabelWidget:(CGTKWidget *)labelWidget
{
	gtk_expander_set_label_widget ([self EXPANDER], [labelWidget WIDGET]);
}

-(CGTKWidget *)getLabelWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_expander_get_label_widget ([self EXPANDER])];
}

-(void)setLabelFill:(BOOL)labelFill
{
	gtk_expander_set_label_fill ([self EXPANDER], [CGTK getGboolean:labelFill]);
}

-(BOOL)getLabelFill
{
	return [CGTK getBOOL:gtk_expander_get_label_fill ([self EXPANDER])];
}

@end
