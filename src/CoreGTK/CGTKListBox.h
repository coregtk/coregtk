/*
 * CGTKListBox.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKListBox : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkListBox*)LISTBOX;
-(void)dragHighlightRow:(GtkListBoxRow*) row;
-(void)dragUnhighlightRow;
-(BOOL)getActivateOnSingleClick;
-(GtkAdjustment*)getAdjustment;
-(GtkListBoxRow*)getRowAtIndex:(gint) index;
-(GtkListBoxRow*)getRowAtY:(gint) y;
-(GtkListBoxRow*)getSelectedRow;
-(GtkSelectionMode)getSelectionMode;
-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)invalidateFilter;
-(void)invalidateHeaders;
-(void)invalidateSort;
-(void)prepend:(CGTKWidget*) child;
-(void)selectRow:(GtkListBoxRow*) row;
-(void)setActivateOnSingleClick:(BOOL) single;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setFilterFuncWithFilterFunc:(GtkListBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
-(void)setHeaderFuncWithUpdateHeader:(GtkListBoxUpdateHeaderFunc) updateHeader andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
-(void)setPlaceholder:(CGTKWidget*) placeholder;
-(void)setSelectionMode:(GtkSelectionMode) mode;
-(void)setSortFuncWithSortFunc:(GtkListBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

@end