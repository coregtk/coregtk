/*
 * CGTKPaned.m
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

#import "CGTKPaned.h"

@implementation CGTKPaned

-(GtkPaned *)PANED
{
	return GTK_PANED([self WIDGET]);
}

-(void)add1:(CGTKWidget *)child
{
	gtk_paned_add1 ([self PANED], [child WIDGET]);
}

-(void)add2:(CGTKWidget *)child
{
	gtk_paned_add2 ([self PANED], [child WIDGET]);
}

-(void)pack1WithChild:(CGTKWidget *)child andResize:(BOOL)resize andShrink:(BOOL)shrink
{
	gtk_paned_pack1 ([self PANED], [child WIDGET], [CGTK getGboolean:resize], [CGTK getGboolean:shrink]);
}

-(void)pack2WithChild:(CGTKWidget *)child andResize:(BOOL)resize andShrink:(BOOL)shrink
{
	gtk_paned_pack2 ([self PANED], [child WIDGET], [CGTK getGboolean:resize], [CGTK getGboolean:shrink]);
}

-(NSNumber *)getPosition
{
	return [NSNumber numberWithInt:gtk_paned_get_position ([self PANED])];
}

-(void)setPosition:(NSNumber *)position
{
	gtk_paned_set_position ([self PANED], [position intValue]);
}

-(CGTKWidget *)getChild1
{
	return [CGTKWidget widgetWithGtkWidget:gtk_paned_get_child1 ([self PANED])];
}

-(CGTKWidget *)getChild2
{
	return [CGTKWidget widgetWithGtkWidget:gtk_paned_get_child2 ([self PANED])];
}

-(GdkWindow *)getHandleWindow
{
	return gtk_paned_get_handle_window ([self PANED]);
}

@end
