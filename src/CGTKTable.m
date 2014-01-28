/*
 * CGTKTable.m
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

#import "CGTKTable.h"

@implementation CGTKTable

-(GtkTable *)TABLE
{
	return GTK_TABLE([self WIDGET]);
}

-(id)initWithRows:(NSNumber *)rows andColumns:(NSNumber *)columns andHomogeneous:(BOOL)homogeneous
{
	self = [super initWithGtkWidget:gtk_table_new([rows unsignedIntValue], [columns unsignedIntValue], [CGTK getGboolean:homogeneous]) andIncrementRefCount:NO];
	
	if(self)
	{
	
	}
	
	return self;
}

-(void)resizeWithRows:(NSNumber *)rows andColumns:(NSNumber *)columns
{
	gtk_table_resize ([self TABLE], [rows unsignedIntValue], [columns unsignedIntValue]);
}

-(void)attachWithChild:(CGTKWidget *)child andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach andXoptions:(GtkAttachOptions)xoptions andYoptions:(GtkAttachOptions)yoptions andXpadding:(NSNumber *)xpadding andYpadding:(NSNumber *)ypadding
{
	gtk_table_attach ([self TABLE], [child WIDGET], [leftAttach unsignedIntValue], [rightAttach unsignedIntValue], [topAttach unsignedIntValue], [bottomAttach unsignedIntValue], xoptions, yoptions, [xpadding unsignedIntValue], [ypadding unsignedIntValue]);
}

-(void)attachDefaultsWithWidget:(CGTKWidget *)widget andLeftAttach:(NSNumber *)leftAttach andRightAttach:(NSNumber *)rightAttach andTopAttach:(NSNumber *)topAttach andBottomAttach:(NSNumber *)bottomAttach
{
	gtk_table_attach_defaults ([self TABLE], [widget WIDGET], [leftAttach unsignedIntValue], [rightAttach unsignedIntValue], [topAttach unsignedIntValue], [bottomAttach unsignedIntValue]);
}

-(void)setRowSpacingWithRow:(NSNumber *)row andSpacing:(NSNumber *)spacing
{
	gtk_table_set_row_spacing ([self TABLE], [row unsignedIntValue], [spacing unsignedIntValue]);
}

-(NSNumber *)getRowSpacing:(NSNumber *)row
{
	return [NSNumber numberWithUnsignedInt:gtk_table_get_row_spacing ([self TABLE], [row unsignedIntValue])];
}

-(void)setColSpacingWithColumn:(NSNumber *)column andSpacing:(NSNumber *)spacing
{
	gtk_table_set_col_spacing ([self TABLE], [column unsignedIntValue], [spacing unsignedIntValue]);
}

-(NSNumber *)getColSpacing:(NSNumber *)column
{
	return [NSNumber numberWithUnsignedInt:gtk_table_get_col_spacing ([self TABLE], [column unsignedIntValue])];
}

-(void)setRowSpacings:(NSNumber *)spacing
{
	gtk_table_set_row_spacings ([self TABLE], [spacing unsignedIntValue]);
}

-(NSNumber *)getDefaultRowSpacing
{
	return [NSNumber numberWithUnsignedInt:gtk_table_get_default_row_spacing ([self TABLE])];
}

-(void)setColSpacings:(NSNumber *)spacing
{
	gtk_table_set_col_spacings ([self TABLE], [spacing unsignedIntValue]);
}

-(NSNumber *)getDefaultColSpacing
{
	return [NSNumber numberWithUnsignedInt:gtk_table_get_default_col_spacing ([self TABLE])];
}

-(void)setHomogeneous:(BOOL)homogeneous
{
	gtk_table_set_homogeneous ([self TABLE], [CGTK getGboolean:homogeneous]);
}

-(BOOL)getHomogeneous
{
	return [CGTK getBOOL:gtk_table_get_homogeneous ([self TABLE])];
}

-(void)getSizeWithRows:(NSNumber **)rows andColumns:(NSNumber **)columns
{
	guint gRows;
	guint gColumns;
	
	gtk_table_get_size ([self TABLE], &gRows, &gColumns);
	
	*rows = [NSNumber numberWithUnsignedInt:gRows];
	*columns = [NSNumber numberWithUnsignedInt:gColumns];
}

@end
