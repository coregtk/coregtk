/*
 * CGTKFlowBox.h
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

@interface CGTKFlowBox : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkFlowBox*)FLOWBOX;

/**
 * -(void*)bindModelWithModel:(GListModel*) model andCreateWidgetFunc:(GtkFlowBoxCreateWidgetFunc) createWidgetFunc andUserData:(gpointer) userData andUserDataFreeFunc:(GDestroyNotify) userDataFreeFunc;
 *
 * @param model
 * @param createWidgetFunc
 * @param userData
 * @param userDataFreeFunc
 */
-(void)bindModelWithModel:(GListModel*) model andCreateWidgetFunc:(GtkFlowBoxCreateWidgetFunc) createWidgetFunc andUserData:(gpointer) userData andUserDataFreeFunc:(GDestroyNotify) userDataFreeFunc;

/**
 * -(BOOL*)getActivateOnSingleClick;
 *
 * @returns BOOL
 */
-(BOOL)getActivateOnSingleClick;

/**
 * -(GtkFlowBoxChild**)getChildAtIndex:(gint) idx;
 *
 * @param idx
 * @returns GtkFlowBoxChild*
 */
-(GtkFlowBoxChild*)getChildAtIndex:(gint) idx;

/**
 * -(guint*)getColumnSpacing;
 *
 * @returns guint
 */
-(guint)getColumnSpacing;

/**
 * -(BOOL*)getHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getHomogeneous;

/**
 * -(guint*)getMaxChildrenPerLine;
 *
 * @returns guint
 */
-(guint)getMaxChildrenPerLine;

/**
 * -(guint*)getMinChildrenPerLine;
 *
 * @returns guint
 */
-(guint)getMinChildrenPerLine;

/**
 * -(guint*)getRowSpacing;
 *
 * @returns guint
 */
-(guint)getRowSpacing;

/**
 * -(GList**)getSelectedChildren;
 *
 * @returns GList*
 */
-(GList*)getSelectedChildren;

/**
 * -(GtkSelectionMode*)getSelectionMode;
 *
 * @returns GtkSelectionMode
 */
-(GtkSelectionMode)getSelectionMode;

/**
 * -(void*)insertWithWidget:(CGTKWidget*) widget andPosition:(gint) position;
 *
 * @param widget
 * @param position
 */
-(void)insertWithWidget:(CGTKWidget*) widget andPosition:(gint) position;

/**
 * -(void*)invalidateFilter;
 *
 */
-(void)invalidateFilter;

/**
 * -(void*)invalidateSort;
 *
 */
-(void)invalidateSort;

/**
 * -(void*)selectAll;
 *
 */
-(void)selectAll;

/**
 * -(void*)selectChild:(GtkFlowBoxChild*) child;
 *
 * @param child
 */
-(void)selectChild:(GtkFlowBoxChild*) child;

/**
 * -(void*)selectedForeachWithFunc:(GtkFlowBoxForeachFunc) func andData:(gpointer) data;
 *
 * @param func
 * @param data
 */
-(void)selectedForeachWithFunc:(GtkFlowBoxForeachFunc) func andData:(gpointer) data;

/**
 * -(void*)setActivateOnSingleClick:(BOOL) single;
 *
 * @param single
 */
-(void)setActivateOnSingleClick:(BOOL) single;

/**
 * -(void*)setColumnSpacing:(guint) spacing;
 *
 * @param spacing
 */
-(void)setColumnSpacing:(guint) spacing;

/**
 * -(void*)setFilterFuncWithFilterFunc:(GtkFlowBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param filterFunc
 * @param userData
 * @param destroy
 */
-(void)setFilterFuncWithFilterFunc:(GtkFlowBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setHadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setHadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setMaxChildrenPerLine:(guint) nchildren;
 *
 * @param nchildren
 */
-(void)setMaxChildrenPerLine:(guint) nchildren;

/**
 * -(void*)setMinChildrenPerLine:(guint) nchildren;
 *
 * @param nchildren
 */
-(void)setMinChildrenPerLine:(guint) nchildren;

/**
 * -(void*)setRowSpacing:(guint) spacing;
 *
 * @param spacing
 */
-(void)setRowSpacing:(guint) spacing;

/**
 * -(void*)setSelectionMode:(GtkSelectionMode) mode;
 *
 * @param mode
 */
-(void)setSelectionMode:(GtkSelectionMode) mode;

/**
 * -(void*)setSortFuncWithSortFunc:(GtkFlowBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param sortFunc
 * @param userData
 * @param destroy
 */
-(void)setSortFuncWithSortFunc:(GtkFlowBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setVadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setVadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)unselectAll;
 *
 */
-(void)unselectAll;

/**
 * -(void*)unselectChild:(GtkFlowBoxChild*) child;
 *
 * @param child
 */
-(void)unselectChild:(GtkFlowBoxChild*) child;

@end