/*
 * CGTKCellView.h
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

@interface CGTKCellView : CGTKWidget
{
	
}

/**
 * Returns internal GtkCellView
 */
-(GtkCellView *)CELL_VIEW;

/**
 * Forwards message to:
 * GtkWidget* gtk_cell_view_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_cell_view_new_with_text (const gchar* text)
 */
-(id)initWithText:(NSString *)text;

/**
 * Forwards message to:
 * GtkWidget* gtk_cell_view_new_with_markup (const gchar* markup)
 */
-(id)initWithMarkup:(NSString *)markup;

/**
 * Forwards message to:
 * GtkWidget* gtk_cell_view_new_with_pixbuf (GdkPixbuf* pixbuf)
 */
-(id)initWithPixbuf:(GdkPixbuf *)pixbuf;

/**
 * Forwards message to:
 * void gtk_cell_view_set_model (GtkCellView* cell_view, GtkTreeModel* model)
 */
-(void)setModel:(GtkTreeModel *)model;

/**
 * Forwards message to:
 * GtkTreeModel* gtk_cell_view_get_model (GtkCellView* cell_view)
 */
-(GtkTreeModel *)getModel;

/**
 * Forwards message to:
 * void gtk_cell_view_set_displayed_row (GtkCellView* cell_view, GtkTreePath* path)
 */
-(void)setDisplayedRow:(GtkTreePath *)path;

/**
 * Forwards message to:
 * GtkTreePath* gtk_cell_view_get_displayed_row (GtkCellView* cell_view)
 */
-(GtkTreePath *)getDisplayedRow;

/**
 * Forwards message to:
 * gboolean gtk_cell_view_get_size_of_row (GtkCellView* cell_view, GtkTreePath* path, GtkRequisition* requisition)
 */
-(BOOL)getSizeOfRowWithPath:(GtkTreePath *)path andRequisition:(GtkRequisition *)requisition;

/**
 * Forwards message to:
 * void gtk_cell_view_set_background_color (GtkCellView* cell_view, const GdkColor* color)
 */
-(void)setBackgroundColor:(const GdkColor *)color;

@end
