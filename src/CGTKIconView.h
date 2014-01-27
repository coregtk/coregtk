/*
 * CGTKIconView.h
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
#import "CGTKContainer.h"

@interface CGTKIconView : CGTKContainer
{
	
}

/**
 * Returns internal GtkIconView
 */
-(GtkIconView *)ICON_VIEW;

/**
 * Forwards message to:
 * GtkWidget* gtk_icon_view_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_icon_view_new_with_model (GtkTreeModel* model)
 */
-(id)initWithModel:(GtkTreeModel *)model;

/**
 * Forwards message to:
 * void gtk_icon_view_set_model (GtkIconView* icon_view, GtkTreeModel* model)
 */
-(void)setModel:(GtkTreeModel *)model;

/**
 * Forwards message to:
 * GtkTreeModel* gtk_icon_view_get_model (GtkIconView* icon_view)
 */
-(GtkTreeModel *)getModel;

/**
 * Forwards message to:
 * void gtk_icon_view_set_text_column (GtkIconView* icon_view, gint column)
 */
-(void)setTextColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_text_column (GtkIconView* icon_view)
 */
-(NSNumber *)getTextColumn;

/**
 * Forwards message to:
 * void gtk_icon_view_set_markup_column (GtkIconView* icon_view, gint column)
 */
-(void)setMarkupColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_markup_column (GtkIconView* icon_view)
 */
-(NSNumber *)getMarkupColumn;

/**
 * Forwards message to:
 * void gtk_icon_view_set_pixbuf_column (GtkIconView* icon_view, gint column)
 */
-(void)setPixbufColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_pixbuf_column (GtkIconView* icon_view)
 */
-(NSNumber *)getPixbufColumn;

/**
 * Forwards message to:
 * void gtk_icon_view_set_item_orientation (GtkIconView* icon_view, GtkOrientation orientation)
 */
-(void)setItemOrientation:(GtkOrientation)orientation;

/**
 * Forwards message to:
 * GtkOrientation gtk_icon_view_get_item_orientation (GtkIconView* icon_view)
 */
-(GtkOrientation)getItemOrientation;

/**
 * Forwards message to:
 * void gtk_icon_view_set_columns (GtkIconView* icon_view, gint columns)
 */
-(void)setColumns:(NSNumber *)columns;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_columns (GtkIconView* icon_view)
 */
-(NSNumber *)getColumns;

/**
 * Forwards message to:
 * void gtk_icon_view_set_item_width (GtkIconView* icon_view, gint item_width)
 */
-(void)setItemWidth:(NSNumber *)itemWidth;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_item_width (GtkIconView* icon_view)
 */
-(NSNumber *)getItemWidth;

/**
 * Forwards message to:
 * void gtk_icon_view_set_spacing (GtkIconView* icon_view, gint spacing)
 */
-(void)setSpacing:(NSNumber *)spacing;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_spacing (GtkIconView* icon_view)
 */
-(NSNumber *)getSpacing;

/**
 * Forwards message to:
 * void gtk_icon_view_set_row_spacing (GtkIconView* icon_view, gint row_spacing)
 */
-(void)setRowSpacing:(NSNumber *)rowSpacing;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_row_spacing (GtkIconView* icon_view)
 */
-(NSNumber *)getRowSpacing;

/**
 * Forwards message to:
 * void gtk_icon_view_set_column_spacing (GtkIconView* icon_view, gint column_spacing)
 */
-(void)setColumnSpacing:(NSNumber *)columnSpacing;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_column_spacing (GtkIconView* icon_view)
 */
-(NSNumber *)getColumnSpacing;

/**
 * Forwards message to:
 * void gtk_icon_view_set_margin (GtkIconView* icon_view, gint margin)
 */
-(void)setMargin:(NSNumber *)margin;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_margin (GtkIconView* icon_view)
 */
-(NSNumber *)getMargin;

/**
 * Forwards message to:
 * void gtk_icon_view_set_item_padding (GtkIconView* icon_view, gint item_padding)
 */
-(void)setItemPadding:(NSNumber *)itemPadding;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_item_padding (GtkIconView* icon_view)
 */
-(NSNumber *)getItemPadding;

/**
 * Forwards message to:
 * GtkTreePath* gtk_icon_view_get_path_at_pos (GtkIconView* icon_view,gint x,gint y)
 */
-(GtkTreePath *)getPathAtPosWithX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_item_at_pos (GtkIconView* icon_view,gint x,gint y,GtkTreePath** path,GtkCellRenderer** cell)
 */
-(BOOL)getItemAtPosWithX:(NSNumber *)x andY:(NSNumber *)y andPath:(GtkTreePath **)path andCell:(GtkCellRenderer **)cell;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_visible_range (GtkIconView* icon_view,GtkTreePath** start_path,GtkTreePath** end_path)
 */
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath **)startPath andEndPath:(GtkTreePath **)endPath;

/**
 * Forwards message to:
 * void gtk_icon_view_selected_foreach (GtkIconView* icon_view, GtkIconViewForeachFunc func, gpointer data)
 */
-(void)selectedForeachWithFunc:(GtkIconViewForeachFunc)func andData:(gpointer)data;

/**
 * Forwards message to:
 * void gtk_icon_view_set_selection_mode (GtkIconView* icon_view, GtkSelectionMode mode)
 */
-(void)setSelectionMode:(GtkSelectionMode)mode;

/**
 * Forwards message to:
 * GtkSelectionMode gtk_icon_view_get_selection_mode (GtkIconView* icon_view)
 */
-(GtkSelectionMode)getSelectionMode;

/**
 * Forwards message to:
 * void gtk_icon_view_select_path (GtkIconView* icon_view, GtkTreePath* path)
 */
-(void)selectPath:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_icon_view_unselect_path (GtkIconView* icon_view, GtkTreePath* path)
 */
-(void)unselectPath:(GtkTreePath *)path;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_path_is_selected (GtkIconView* icon_view, GtkTreePath* path)
 */
-(BOOL)pathIsSelected:(GtkTreePath *)path;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_item_row (GtkIconView* icon_view, GtkTreePath* path)
 */
-(NSNumber *)getItemRow:(GtkTreePath *)path;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_item_column (GtkIconView* icon_view, GtkTreePath* path)
 */
-(NSNumber *)getItemColumn:(GtkTreePath *)path;

/**
 * Forwards message to:
 * GList* gtk_icon_view_get_selected_items (GtkIconView* icon_view)
 */
-(GList *)getSelectedItems;

/**
 * Forwards message to:
 * void gtk_icon_view_select_all (GtkIconView* icon_view)
 */
-(void)selectAll;

/**
 * Forwards message to:
 * void gtk_icon_view_unselect_all (GtkIconView* icon_view)
 */
-(void)unselectAll;

/**
 * Forwards message to:
 * void gtk_icon_view_item_activated (GtkIconView* icon_view, GtkTreePath* path)
 */
-(void)itemActivated:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_icon_view_set_cursor (GtkIconView* icon_view, GtkTreePath* path, GtkCellRenderer* cell, gboolean start_editing)
 */
-(void)setCursorWithPath:(GtkTreePath *)path andCell:(GtkCellRenderer *)cell andStartEditing:(BOOL)startEditing;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_cursor (GtkIconView* icon_view, GtkTreePath** path, GtkCellRenderer** cell)
 */
-(BOOL)getCursorWithPath:(GtkTreePath **)path andCell:(GtkCellRenderer **)cell;

/**
 * Forwards message to:
 * void gtk_icon_view_scroll_to_path (GtkIconView* icon_view, GtkTreePath* path, gboolean use_align, gfloat row_align, gfloat col_align)
 */
-(void)scrollToPathWithPath:(GtkTreePath *)path andUseAlign:(BOOL)useAlign andRowAlign:(NSNumber *)rowAlign andColAlign:(NSNumber *)colAlign;

/**
 * Forwards message to:
 * void gtk_icon_view_enable_model_drag_source (GtkIconView* icon_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions)
 */
-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType)startButtonMask andTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * void gtk_icon_view_enable_model_drag_dest (GtkIconView* icon_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions)
 */
-(void)enableModelDragDestWithTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * void gtk_icon_view_unset_model_drag_source (GtkIconView* icon_view)
 */
-(void)unsetModelDragSource;

/**
 * Forwards message to:
 * void gtk_icon_view_unset_model_drag_dest (GtkIconView* icon_view)
 */
-(void)unsetModelDragDest;

/**
 * Forwards message to:
 * void gtk_icon_view_set_reorderable (GtkIconView* icon_view, gboolean reorderable)
 */
-(void)setReorderable:(BOOL)reorderable;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_reorderable (GtkIconView* icon_view)
 */
-(BOOL)getReorderable;

/**
 * Forwards message to:
 * void gtk_icon_view_set_drag_dest_item (GtkIconView* icon_view, GtkTreePath* path, GtkIconViewDropPosition pos)
 */
-(void)setDragDestItemWithPath:(GtkTreePath *)path andPos:(GtkIconViewDropPosition)pos;

/**
 * Forwards message to:
 * void gtk_icon_view_get_drag_dest_item (GtkIconView* icon_view, GtkTreePath** path, GtkIconViewDropPosition* pos)
 */
-(void)getDragDestItemWithPath:(GtkTreePath **)path andPos:(GtkIconViewDropPosition *)pos;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_dest_item_at_pos (GtkIconView* icon_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkIconViewDropPosition* pos)
 */
-(BOOL)getDestItemAtPosWithDragX:(NSNumber *)dragX andDragY:(NSNumber *)dragY andPath:(GtkTreePath **)path andPos:(GtkIconViewDropPosition *)pos;

/**
 * Forwards message to:
 * GdkPixmap* gtk_icon_view_create_drag_icon (GtkIconView* icon_view, GtkTreePath* path)
 */
-(GdkPixmap*)createDragIcon:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_icon_view_convert_widget_to_bin_window_coords (GtkIconView* icon_view, gint wx, gint wy, gint* bx, gint* by)
 */
-(void)convertWidgetToBinWindowCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andBx:(NSNumber **)bx andBy:(NSNumber **)by;

/**
 * Forwards message to:
 * void gtk_icon_view_set_tooltip_item (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path)
 */
-(void)setTooltipItemWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_icon_view_set_tooltip_cell (GtkIconView* icon_view, GtkTooltip* tooltip, GtkTreePath* path, GtkCellRenderer* cell)
 */
-(void)setTooltipCellWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path andCell:(GtkCellRenderer *)cell;

/**
 * Forwards message to:
 * gboolean gtk_icon_view_get_tooltip_context (GtkIconView* icon_view, gint* x, gint* y, gboolean keyboard_tip, GtkTreeModel** model, GtkTreePath** path, GtkTreeIter* iter)
 */
-(BOOL)getTooltipContextWithX:(NSNumber **)x andY:(NSNumber **)y andKeyboardTip:(BOOL)keyboardTip andModel:(GtkTreeModel **)model andPath:(GtkTreePath **)path andIter:(GtkTreeIter *)iter;

/**
 * Forwards message to:
 * void gtk_icon_view_set_tooltip_column (GtkIconView* icon_view, gint column)
 */
-(void)setTooltipColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * gint gtk_icon_view_get_tooltip_column (GtkIconView* icon_view)
 */
-(NSNumber *)getTooltipColumn;

@end
