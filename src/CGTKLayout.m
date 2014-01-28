/*
 * CGTKLayout.m
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

#import "CGTKLayout.h"

@implementation CGTKLayout

-(GtkLayout *)LAYOUT
{
	return GTK_LAYOUT([self WIDGET]);
}

-(id)initWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment
{
	self = [super initWithGtkWidget:gtk_layout_new (hadjustment, vadjustment) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(GdkWindow *)getBinWindow
{
	return gtk_layout_get_bin_window ([self LAYOUT]);
}

-(void)putWithChildWidget:(CGTKWidget *)childWidget andX:(NSNumber *)x andY:(NSNumber *)y
{
	gtk_layout_put ([self LAYOUT], [childWidget WIDGET], [x intValue], [y intValue]);
}

-(void)moveWithChildWidget:(CGTKWidget *)childWidget andX:(NSNumber *)x andY:(NSNumber *)y
{
	gtk_layout_move ([self LAYOUT], [childWidget WIDGET], [x intValue], [y intValue]);
}

-(void)setSizeWithWidth:(NSNumber *)width andHeight:(NSNumber *)height
{
	gtk_layout_set_size ([self LAYOUT], [width unsignedIntValue], [height unsignedIntValue]);
}

-(void)getSizeWithWidth:(NSNumber **)width andHeight:(NSNumber **)height
{
	guint gWidth;
	guint gHeight;
	
	gtk_layout_get_size ([self LAYOUT], &gWidth, &gHeight);
	
	*width = [NSNumber numberWithInt:gWidth];
	*height = [NSNumber numberWithInt:gHeight];
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_layout_get_hadjustment ([self LAYOUT]);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_layout_get_vadjustment ([self LAYOUT]);
}

-(void)setHadjustment:(GtkAdjustment *)adjustment
{
	gtk_layout_set_hadjustment ([self LAYOUT], adjustment);
}

-(void)setVadjustment:(GtkAdjustment *)adjustment
{
	gtk_layout_set_vadjustment ([self LAYOUT], adjustment);
}

@end
