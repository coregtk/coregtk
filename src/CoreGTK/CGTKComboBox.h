/*
 * CGTKComboBox.h
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

@interface CGTKComboBox : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithArea:(GtkCellArea*) area;
-(id)initWithAreaAndEntry:(GtkCellArea*) area;
-(id)initWithEntry;
-(id)initWithModel:(GtkTreeModel*) model;
-(id)initWithModelAndEntry:(GtkTreeModel*) model;

/**
 * Methods
 */

-(GtkComboBox*)COMBOBOX;

/**
 * -(gint*)getActive;
 *
 * @returns gint
 */
-(gint)getActive;

/**
 * -(NSString**)getActiveId;
 *
 * @returns NSString*
 */
-(NSString*)getActiveId;

/**
 * -(BOOL*)getActiveIter:(GtkTreeIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)getActiveIter:(GtkTreeIter*) iter;

/**
 * -(BOOL*)getAddTearoffs;
 *
 * @returns BOOL
 */
-(BOOL)getAddTearoffs;

/**
 * -(GtkSensitivityType*)getButtonSensitivity;
 *
 * @returns GtkSensitivityType
 */
-(GtkSensitivityType)getButtonSensitivity;

/**
 * -(gint*)getColumnSpanColumn;
 *
 * @returns gint
 */
-(gint)getColumnSpanColumn;

/**
 * -(gint*)getEntryTextColumn;
 *
 * @returns gint
 */
-(gint)getEntryTextColumn;

/**
 * -(BOOL*)getFocusOnClick;
 *
 * @returns BOOL
 */
-(BOOL)getFocusOnClick;

/**
 * -(BOOL*)getHasEntry;
 *
 * @returns BOOL
 */
-(BOOL)getHasEntry;

/**
 * -(gint*)getIdColumn;
 *
 * @returns gint
 */
-(gint)getIdColumn;

/**
 * -(GtkTreeModel**)getModel;
 *
 * @returns GtkTreeModel*
 */
-(GtkTreeModel*)getModel;

/**
 * -(AtkObject**)getPopupAccessible;
 *
 * @returns AtkObject*
 */
-(AtkObject*)getPopupAccessible;

/**
 * -(BOOL*)getPopupFixedWidth;
 *
 * @returns BOOL
 */
-(BOOL)getPopupFixedWidth;

/**
 * -(GtkTreeViewRowSeparatorFunc*)getRowSeparatorFunc;
 *
 * @returns GtkTreeViewRowSeparatorFunc
 */
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;

/**
 * -(gint*)getRowSpanColumn;
 *
 * @returns gint
 */
-(gint)getRowSpanColumn;

/**
 * -(NSString**)getTitle;
 *
 * @returns NSString*
 */
-(NSString*)getTitle;

/**
 * -(gint*)getWrapWidth;
 *
 * @returns gint
 */
-(gint)getWrapWidth;

/**
 * -(void*)popdown;
 *
 */
-(void)popdown;

/**
 * -(void*)popup;
 *
 */
-(void)popup;

/**
 * -(void*)popupForDevice:(GdkDevice*) device;
 *
 * @param device
 */
-(void)popupForDevice:(GdkDevice*) device;

/**
 * -(void*)setActive:(gint) index;
 *
 * @param index
 */
-(void)setActive:(gint) index;

/**
 * -(BOOL*)setActiveId:(NSString*) activeId;
 *
 * @param activeId
 * @returns BOOL
 */
-(BOOL)setActiveId:(NSString*) activeId;

/**
 * -(void*)setActiveIter:(GtkTreeIter*) iter;
 *
 * @param iter
 */
-(void)setActiveIter:(GtkTreeIter*) iter;

/**
 * -(void*)setAddTearoffs:(BOOL) addTearoffs;
 *
 * @param addTearoffs
 */
-(void)setAddTearoffs:(BOOL) addTearoffs;

/**
 * -(void*)setButtonSensitivity:(GtkSensitivityType) sensitivity;
 *
 * @param sensitivity
 */
-(void)setButtonSensitivity:(GtkSensitivityType) sensitivity;

/**
 * -(void*)setColumnSpanColumn:(gint) columnSpan;
 *
 * @param columnSpan
 */
-(void)setColumnSpanColumn:(gint) columnSpan;

/**
 * -(void*)setEntryTextColumn:(gint) textColumn;
 *
 * @param textColumn
 */
-(void)setEntryTextColumn:(gint) textColumn;

/**
 * -(void*)setFocusOnClick:(BOOL) focusOnClick;
 *
 * @param focusOnClick
 */
-(void)setFocusOnClick:(BOOL) focusOnClick;

/**
 * -(void*)setIdColumn:(gint) idColumn;
 *
 * @param idColumn
 */
-(void)setIdColumn:(gint) idColumn;

/**
 * -(void*)setModel:(GtkTreeModel*) model;
 *
 * @param model
 */
-(void)setModel:(GtkTreeModel*) model;

/**
 * -(void*)setPopupFixedWidth:(BOOL) fixed;
 *
 * @param fixed
 */
-(void)setPopupFixedWidth:(BOOL) fixed;

/**
 * -(void*)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param data
 * @param destroy
 */
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setRowSpanColumn:(gint) rowSpan;
 *
 * @param rowSpan
 */
-(void)setRowSpanColumn:(gint) rowSpan;

/**
 * -(void*)setTitle:(NSString*) title;
 *
 * @param title
 */
-(void)setTitle:(NSString*) title;

/**
 * -(void*)setWrapWidth:(gint) width;
 *
 * @param width
 */
-(void)setWrapWidth:(gint) width;

@end