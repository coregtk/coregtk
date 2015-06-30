/*
 * CGTKComboBox.h
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
-(gint)getActive;
-(NSString*)getActiveId;
-(BOOL)getActiveIter:(GtkTreeIter*) iter;
-(BOOL)getAddTearoffs;
-(GtkSensitivityType)getButtonSensitivity;
-(gint)getColumnSpanColumn;
-(gint)getEntryTextColumn;
-(BOOL)getFocusOnClick;
-(BOOL)getHasEntry;
-(gint)getIdColumn;
-(GtkTreeModel*)getModel;
-(AtkObject*)getPopupAccessible;
-(BOOL)getPopupFixedWidth;
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;
-(gint)getRowSpanColumn;
-(NSString*)getTitle;
-(gint)getWrapWidth;
-(void)popdown;
-(void)popup;
-(void)popupForDevice:(GdkDevice*) device;
-(void)setActive:(gint) index;
-(BOOL)setActiveId:(NSString*) activeId;
-(void)setActiveIter:(GtkTreeIter*) iter;
-(void)setAddTearoffs:(BOOL) addTearoffs;
-(void)setButtonSensitivity:(GtkSensitivityType) sensitivity;
-(void)setColumnSpanColumn:(gint) columnSpan;
-(void)setEntryTextColumn:(gint) textColumn;
-(void)setFocusOnClick:(BOOL) focusOnClick;
-(void)setIdColumn:(gint) idColumn;
-(void)setModel:(GtkTreeModel*) model;
-(void)setPopupFixedWidth:(BOOL) fixed;
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setRowSpanColumn:(gint) rowSpan;
-(void)setTitle:(NSString*) title;
-(void)setWrapWidth:(gint) width;

@end