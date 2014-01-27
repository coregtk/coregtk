/*
 * CGTKMisc.h
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

/*
 * Objective-C imports
 */
#import "CGTKWidget.h"

@interface CGTKMisc : CGTKWidget
{
	
}

/**
 * Returns internal GtkMisc
 */
-(GtkMisc *)MISC;

/**
 * Forwards message to:
 * void gtk_misc_get_alignment (GtkMisc* misc,gfloat* xalign,gfloat* yalign)
 */
-(void)getAlignmentWithXalign:(NSNumber **)xalign andYalign:(NSNumber **)yalign;

/**
 * Forwards message to:
 * void gtk_misc_set_alignment (GtkMisc* misc,gfloat xalign,gfloat yalign)
 */
-(void)setAlignmentWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign;

/**
 * Forwards message to:
 * void gtk_misc_get_padding (GtkMisc* misc,gint* xpad,gint* ypad)
 */
-(void)getPaddingWithXpad:(NSNumber **)xpad andYpad:(NSNumber **)ypad;

@end
