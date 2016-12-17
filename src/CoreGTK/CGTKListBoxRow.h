/*
 * CGTKListBoxRow.h
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
#import "CoreGTK/CGTKBin.h"

@interface CGTKListBoxRow : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkListBoxRow*)LISTBOXROW;

/**
 * -(void*)changed;
 *
 */
-(void)changed;

/**
 * -(BOOL*)getActivatable;
 *
 * @returns BOOL
 */
-(BOOL)getActivatable;

/**
 * -(CGTKWidget**)getHeader;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getHeader;

/**
 * -(gint*)getIndex;
 *
 * @returns gint
 */
-(gint)getIndex;

/**
 * -(BOOL*)getSelectable;
 *
 * @returns BOOL
 */
-(BOOL)getSelectable;

/**
 * -(BOOL*)isSelected;
 *
 * @returns BOOL
 */
-(BOOL)isSelected;

/**
 * -(void*)setActivatable:(BOOL) activatable;
 *
 * @param activatable
 */
-(void)setActivatable:(BOOL) activatable;

/**
 * -(void*)setHeader:(CGTKWidget*) header;
 *
 * @param header
 */
-(void)setHeader:(CGTKWidget*) header;

/**
 * -(void*)setSelectable:(BOOL) selectable;
 *
 * @param selectable
 */
-(void)setSelectable:(BOOL) selectable;

@end
