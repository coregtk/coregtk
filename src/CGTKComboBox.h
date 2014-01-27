/*
 * CGTKComboBox.h
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
#import "CGTKBin.h"

@interface CGTKComboBox : CGTKBin
{
	
}

/*
 * Returns internal GtkComboBox
 */
-(GtkComboBox *)COMBO_BOX;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_new_with_entry (void)
 */
-(id)initWithEntry;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_new_with_model (GtkTreeModel* model)
 */
-(id)initWithModel:(GtkTreeModel *)model;

/*
 * Forwards message to:
 * GtkWidget* gtk_combo_box_new_with_model_and_entry (GtkTreeModel* model)
 */
-(id)initWithModelAndEntry:(GtkTreeModel *)model;

/*
 * Forwards message to:
 * gint gtk_combo_box_get_wrap_width (GtkComboBox* combo_box)
 */
-(NSNumber *)getWrapWidth;

/*
 * Forwards message to:
 * void gtk_combo_box_set_wrap_width (GtkComboBox* combo_box, gint width)
 */
-(void)setWrapWidth:(NSNumber *)width;

/*
 * Forwards message to:
 * gint gtk_combo_box_get_row_span_column (GtkComboBox* combo_box)
 */
-(NSNumber *)getRowSpanColumn;

/*
 * Forwards message to:
 * void gtk_combo_box_set_row_span_column (GtkComboBox* combo_box, gint row_span)
 */
-(void)setRowSpanColumn:(NSNumber *)rowSpan;

/*
 * Forwards message to:
 * gint gtk_combo_box_get_column_span_column (GtkComboBox* combo_box)
 */
-(NSNumber *)getColumnSpanColumn;

/*
 * Forwards message to:
 * void gtk_combo_box_set_column_span_column (GtkComboBox* combo_box, gint column_span)
 */
-(void)setColumnSpanColumn:(NSNumber *)columnSpan;

/*
 * Forwards message to:
 * gboolean gtk_combo_box_get_add_tearoffs (GtkComboBox* combo_box)
 */
-(BOOL)getAddTearoffs;

/*
 * Forwards message to:
 * void gtk_combo_box_set_add_tearoffs (GtkComboBox* combo_box, gboolean add_tearoffs)
 */
-(void)setAddTearoffs:(BOOL)addTearoffs;

/*
 * Forwards message to:
 * void gtk_combo_box_set_title (GtkComboBox* combo_box, const gchar* title)
 */
-(void)setTitle:(NSString *)title;

/*
 * Forwards message to:
 * const gchat * gtk_combo_box_get_title (GtkComboBox* combo_box)
 */
-(NSString *)getTitle;

/*
 * Forwards message to:
 * gboolean gtk_combo_box_get_focus_on_click (GtkComboBox* combo)
 */
-(BOOL)getFocusOnClick;

/*
 * Forwards message to:
 * void gtk_combo_box_set_focus_on_click (GtkComboBox* combo, gboolean focus_on_click)
 */
-(void)setFocusOnClick:(BOOL)focusOnClick;

/*
 * Forwards message to:
 * gint gtk_combo_box_get_active (GtkComboBox* combo_box)
 */
-(NSNumber *)getActive;

/*
 * Forwards message to:
 * void gtk_combo_box_set_active (GtkComboBox* combo_box, gint index_)
 */
-(void)setActive:(NSNumber *)index;

/*
 * Forwards message to:
 * gboolean gtk_combo_box_get_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter)
 */
-(BOOL)getActiveIter:(GtkTreeIter *)iter;

/*
 * Forwards message to:
 * void gtk_combo_box_set_active_iter (GtkComboBox* combo_box, GtkTreeIter* iter)
 */
-(void)setActiveIter:(GtkTreeIter *)iter;

/*
 * Forwards message to:
 * void gtk_combo_box_set_model (GtkComboBox* combo_box, GtkTreeModel* model)
 */
-(void)setModel:(GtkTreeModel *)model;

/*
 * Forwards message to:
 * GtkTreeModel* gtk_combo_box_get_model (GtkComboBox* combo_box)
 */
-(GtkTreeModel *)getModel;

/*
 * Forwards message to:
 * GtkTreeViewRowSeparatorFunc gtk_combo_box_get_row_separator_func (GtkComboBox* combo_box)
 */
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;

/*
 * Forwards message to:
 * void gtk_combo_box_set_row_separator_func (GtkComboBox* combo_box, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy)
 */
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/*
 * Forwards message to:
 * void gtk_combo_box_set_button_sensitivity (GtkComboBox* combo_box, GtkSensitivityType sensitivity)
 */
-(void)setButtonSensitivity:(GtkSensitivityType)sensitivity;

/*
 * Forwards message to:
 * GtkSensitivityType gtk_combo_box_get_button_sensitivity (GtkComboBox* combo_box)
 */
-(GtkSensitivityType)getButtonSensitivity;

/*
 * Forwards message to:
 * gboolean gtk_combo_box_get_has_entry (GtkComboBox* combo_box)
 */
-(BOOL)getHasEntry;

/*
 * Forwards message to:
 * void gtk_combo_box_set_entry_text_column (GtkComboBox* combo_box, gint text_column)
 */
-(void)setEntryTextColumn:(NSNumber *)textColumn;

/*
 * Forwards message to:
 * gint gtk_combo_box_get_entry_text_column (GtkComboBox* combo_box)
 */
-(NSNumber *)getEntryTextColumn;

/*
 * Forwards message to:
 * void gtk_combo_box_popup (GtkComboBox* combo_box)
 */
-(void)popup;

/*
 * Forwards message to:
 * void gtk_combo_box_popdown (GtkComboBox* combo_box)
 */
-(void)popdown;

/*
 * Forwards message to:
 * AtkObject* gtk_combo_box_get_popup_accessible (GtkComboBox* combo_box)
 */
-(AtkObject *)getPopupAccessible;

@end
