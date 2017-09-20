/*
 * CGTKListBox.h
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

/**
 * -(void*)bindModelWithModel:(GListModel*) model andCreateWidgetFunc:(GtkListBoxCreateWidgetFunc) createWidgetFunc andUserData:(gpointer) userData andUserDataFreeFunc:(GDestroyNotify) userDataFreeFunc;
 *
 * @param model
 * @param createWidgetFunc
 * @param userData
 * @param userDataFreeFunc
 */
-(void)bindModelWithModel:(GListModel*) model andCreateWidgetFunc:(GtkListBoxCreateWidgetFunc) createWidgetFunc andUserData:(gpointer) userData andUserDataFreeFunc:(GDestroyNotify) userDataFreeFunc;

/**
 * -(void*)dragHighlightRow:(GtkListBoxRow*) row;
 *
 * @param row
 */
-(void)dragHighlightRow:(GtkListBoxRow*) row;

/**
 * -(void*)dragUnhighlightRow;
 *
 */
-(void)dragUnhighlightRow;

/**
 * -(BOOL*)getActivateOnSingleClick;
 *
 * @returns BOOL
 */
-(BOOL)getActivateOnSingleClick;

/**
 * -(GtkAdjustment**)getAdjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getAdjustment;

/**
 * -(GtkListBoxRow**)getRowAtIndex:(gint) index;
 *
 * @param index
 * @returns GtkListBoxRow*
 */
-(GtkListBoxRow*)getRowAtIndex:(gint) index;

/**
 * -(GtkListBoxRow**)getRowAtY:(gint) y;
 *
 * @param y
 * @returns GtkListBoxRow*
 */
-(GtkListBoxRow*)getRowAtY:(gint) y;

/**
 * -(GtkListBoxRow**)getSelectedRow;
 *
 * @returns GtkListBoxRow*
 */
-(GtkListBoxRow*)getSelectedRow;

/**
 * -(GList**)getSelectedRows;
 *
 * @returns GList*
 */
-(GList*)getSelectedRows;

/**
 * -(GtkSelectionMode*)getSelectionMode;
 *
 * @returns GtkSelectionMode
 */
-(GtkSelectionMode)getSelectionMode;

/**
 * -(void*)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;
 *
 * @param child
 * @param position
 */
-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;

/**
 * -(void*)invalidateFilter;
 *
 */
-(void)invalidateFilter;

/**
 * -(void*)invalidateHeaders;
 *
 */
-(void)invalidateHeaders;

/**
 * -(void*)invalidateSort;
 *
 */
-(void)invalidateSort;

/**
 * -(void*)prepend:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)prepend:(CGTKWidget*) child;

/**
 * -(void*)selectAll;
 *
 */
-(void)selectAll;

/**
 * -(void*)selectRow:(GtkListBoxRow*) row;
 *
 * @param row
 */
-(void)selectRow:(GtkListBoxRow*) row;

/**
 * -(void*)selectedForeachWithFunc:(GtkListBoxForeachFunc) func andData:(gpointer) data;
 *
 * @param func
 * @param data
 */
-(void)selectedForeachWithFunc:(GtkListBoxForeachFunc) func andData:(gpointer) data;

/**
 * -(void*)setActivateOnSingleClick:(BOOL) single;
 *
 * @param single
 */
-(void)setActivateOnSingleClick:(BOOL) single;

/**
 * -(void*)setAdjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setAdjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setFilterFuncWithFilterFunc:(GtkListBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param filterFunc
 * @param userData
 * @param destroy
 */
-(void)setFilterFuncWithFilterFunc:(GtkListBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setHeaderFuncWithUpdateHeader:(GtkListBoxUpdateHeaderFunc) updateHeader andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param updateHeader
 * @param userData
 * @param destroy
 */
-(void)setHeaderFuncWithUpdateHeader:(GtkListBoxUpdateHeaderFunc) updateHeader andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setPlaceholder:(CGTKWidget*) placeholder;
 *
 * @param placeholder
 */
-(void)setPlaceholder:(CGTKWidget*) placeholder;

/**
 * -(void*)setSelectionMode:(GtkSelectionMode) mode;
 *
 * @param mode
 */
-(void)setSelectionMode:(GtkSelectionMode) mode;

/**
 * -(void*)setSortFuncWithSortFunc:(GtkListBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param sortFunc
 * @param userData
 * @param destroy
 */
-(void)setSortFuncWithSortFunc:(GtkListBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)unselectAll;
 *
 */
-(void)unselectAll;

/**
 * -(void*)unselectRow:(GtkListBoxRow*) row;
 *
 * @param row
 */
-(void)unselectRow:(GtkListBoxRow*) row;

@end
