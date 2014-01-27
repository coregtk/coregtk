/*
 * CGTKBox.m
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

#import "CGTKBox.h"

@implementation CGTKBox

-(GtkBox *)BOX
{
	return GTK_BOX([self WIDGET]);
}

-(void)packStartWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding
{
	gtk_box_pack_start ([self BOX], [child WIDGET], [CGTK getGboolean:expand], [CGTK getGboolean:fill], [padding unsignedIntValue]);
}

-(void)packEndWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding
{
	gtk_box_pack_end ([self BOX], [child WIDGET], [CGTK getGboolean:expand], [CGTK getGboolean:fill], [padding unsignedIntValue]);
}

-(void)setHomogeneous:(BOOL)homogeneous
{
	gtk_box_set_homogeneous ([self BOX], [CGTK getGboolean:homogeneous]);
}

-(BOOL)getHomogeneous
{
	return [CGTK getBOOL:gtk_box_get_homogeneous ([self BOX])];
}

-(void)setSpacing:(NSNumber *)spacing
{
	gtk_box_set_spacing ([self BOX], [spacing intValue]);
}

-(NSNumber *)getSpacing
{
	return [NSNumber numberWithInt:gtk_box_get_spacing ([self BOX])];
}

-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position
{
	gtk_box_reorder_child ([self BOX], [child WIDGET], [position intValue]);
}

-(void)queryChildPackingWithChild:(CGTKWidget *)child andExpand:(BOOL *)expand andFill:(BOOL *)fill andPadding:(NSNumber **)padding andPackType:(GtkPackType *)packType
{
	gboolean gExpand;
	gboolean gFill;
	guint gPadding;
	
	gtk_box_query_child_packing ([self BOX], [child WIDGET], &gExpand, &gFill, &gPadding, packType);

	*expand = [CGTK getBOOL:gExpand];
	*fill = [CGTK getBOOL:gFill];
	*padding = [NSNumber numberWithUnsignedInt:gPadding];
}

-(void)setChildPackingWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPadding:(NSNumber *)padding andPackType:(GtkPackType)packType
{
	gtk_box_set_child_packing ([self BOX], [child WIDGET], [CGTK getGboolean:expand], [CGTK getGboolean:fill], [padding unsignedIntValue], packType);
}

@end
