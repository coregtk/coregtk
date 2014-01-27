/*
 * CGTKTreeView.h
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
#import "CGTKEntry.h"

@interface CGTKTreeView : CGTKContainer
{
	
}

/**
 * Returns internal GtkTreeView
 */
-(GtkTreeView *)TREE_VIEW;

/**
 * Forwards message to:
 * GtkWidget* gtk_tree_view_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_tree_view_new_with_model (GtkTreeModel* model)
 */
-(id)initWithModel:(GtkTreeModel *)model;

/**
 * Forwards message to:
 * GtkTreeModel* gtk_tree_view_get_model (GtkTreeView* tree_view)
 */
-(GtkTreeModel *)getModel;

/**
 * Forwards message to:
 * void gtk_tree_view_set_model (GtkTreeView* tree_view, GtkTreeModel* model)
 */
-(void)setModel:(GtkTreeModel *)model;

/**
 * Forwards message to:
 * GtkTreeSelection* gtk_tree_view_get_selection (GtkTreeView* tree_view)
 */
-(GtkTreeSelection *)getSelection;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_tree_view_get_hadjustment (GtkTreeView* tree_view)
 */
-(GtkAdjustment *)getHadjustment;

/**
 * Forwards message to:
 * void gtk_tree_view_set_hadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment)
 */
-(void)setHadjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_tree_view_get_vadjustment (GtkTreeView* tree_view)
 */
-(GtkAdjustment *)getVadjustment;

/**
 * Forwards message to:
 * void gtk_tree_view_set_vadjustment (GtkTreeView* tree_view, GtkAdjustment* adjustment)
 */
-(void)setVadjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_headers_visible (GtkTreeView* tree_view)
 */
-(BOOL)getHeadersVisible;

/**
 * Forwards message to:
 * void gtk_tree_view_set_headers_visible (GtkTreeView* tree_view, gboolean headers_visible)
 */
-(void)setHeadersVisible:(BOOL)headersVisible;

/**
 * Forwards message to:
 * void gtk_tree_view_columns_autosize (GtkTreeView* tree_view)
 */
-(void)columnsAutosize;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_headers_clickable (GtkTreeView* tree_view)
 */
-(BOOL)getHeadersClickable;

/**
 * Forwards message to:
 * void gtk_tree_view_set_headers_clickable (GtkTreeView* tree_view, gboolean setting)
 */
-(void)setHeadersClickable:(BOOL)setting;

/**
 * Forwards message to:
 * void gtk_tree_view_set_rules_hint (GtkTreeView* tree_view, gboolean setting)
 */
-(void)setRulesHint:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_rules_hint (GtkTreeView* tree_view)
 */
-(BOOL)getRulesHint;

/**
 * Forwards message to:
 * gint gtk_tree_view_append_column (GtkTreeView* tree_view, GtkTreeViewColumn* column)
 */
-(NSNumber *)appendColumn:(GtkTreeViewColumn *)column;

/**
 * Forwards message to:
 * gint gtk_tree_view_remove_column (GtkTreeView* tree_view, GtkTreeViewColumn* column)
 */
-(NSNumber *)removeColumn:(GtkTreeViewColumn *)column;

/**
 * Forwards message to:
 * gint gtk_tree_view_insert_column (GtkTreeView* tree_view, GtkTreeViewColumn* column, gint position)
 */
-(NSNumber *)insertColumnWithColumn:(GtkTreeViewColumn *)column andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * gint gtk_tree_view_insert_column_with_data_func (GtkTreeView* tree_view, gint position, const gchar* title, GtkCellRenderer* cell, GtkTreeCellDataFunc func, gpointer data, GDestroyNotify dnotify)
 */
-(NSNumber *)insertColumnWithDataFuncWithPosition:(NSNumber *)position andTitle:(NSString *)title andCell:(GtkCellRenderer *)cell andFunc:(GtkTreeCellDataFunc)func andData:(gpointer)data andDnotify:(GDestroyNotify)dnotify;

/**
 * Forwards message to:
 * GtkTreeViewColumn* gtk_tree_view_get_column (GtkTreeView* tree_view, gint n)
 */
-(GtkTreeViewColumn *)getColumn:(NSNumber *)n;

/**
 * Forwards message to:
 * GList* gtk_tree_view_get_columns (GtkTreeView* tree_view)
 */
-(GList *)getColumns;

/**
 * Forwards message to:
 * void gtk_tree_view_move_column_after (GtkTreeView* tree_view, GtkTreeViewColumn* column, GtkTreeViewColumn* base_column)
 */
-(void)moveColumnAfterWithColumn:(GtkTreeViewColumn *)column andBaseColumn:(GtkTreeViewColumn *)baseColumn;

/**
 * Forwards message to:
 * void gtk_tree_view_set_expander_column (GtkTreeView* tree_view, GtkTreeViewColumn* column)
 */
-(void)setExpanderColumn:(GtkTreeViewColumn *)column;

/**
 * Forwards message to:
 * GtkTreeViewColumn* gtk_tree_view_get_expander_column (GtkTreeView* tree_view)
 */
-(GtkTreeViewColumn *)getExpanderColumn;

/**
 * Forwards message to:
 * void gtk_tree_view_set_column_drag_function (GtkTreeView* tree_view, GtkTreeViewColumnDropFunc func, gpointer user_data, GDestroyNotify destroy)
 */
-(void)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc)func andUserData:(gpointer)userData andDestroy:(GDestroyNotify)destroy;

/**
 * Forwards message to:
 * void gtk_tree_view_scroll_to_point (GtkTreeView* tree_view, gint tree_x, gint tree_y)
 */
-(void)scrollToPointWithTreeX:(NSNumber *)treeX andTreeY:(NSNumber *)treeY;

/**
 * Forwards message to:
 * void gtk_tree_view_scroll_to_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, gboolean use_align, gfloat row_align, gfloat col_align)
 */
-(void)scrollToCellWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andUseAlign:(BOOL)useAlign andRowAlign:(NSNumber *)rowAlign andColAlign:(NSNumber *)colAlign;

/**
 * Forwards message to:
 * void gtk_tree_view_row_activated (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column)
 */
-(void)rowActivatedWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column;

/**
 * Forwards message to:
 * void gtk_tree_view_expand_all (GtkTreeView* tree_view)
 */
-(void)expandAll;

/**
 * Forwards message to:
 * void gtk_tree_view_collapse_all (GtkTreeView* tree_view)
 */
-(void)collapseAll;

/**
 * Forwards message to:
 * void gtk_tree_view_expand_to_path (GtkTreeView* tree_view, GtkTreePath* path)
 */
-(void)expandToPath:(GtkTreePath *)path;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_expand_row (GtkTreeView* tree_view, GtkTreePath* path, gboolean open_all)
 */
-(BOOL)expandRowWithPath:(GtkTreePath *)path andOpenAll:(BOOL)openAll;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_collapse_row (GtkTreeView* tree_view, GtkTreePath* path)
 */
-(BOOL)collapseRow:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_tree_view_map_expanded_rows (GtkTreeView* tree_view, GtkTreeViewMappingFunc func, gpointer data)
 */
-(void)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc)func andData:(gpointer)data;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_row_expanded (GtkTreeView* tree_view, GtkTreePath* path)
 */
-(BOOL)rowExpanded:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_tree_view_set_reorderable (GtkTreeView* tree_view, gboolean reorderable)
 */
-(void)setReorderable:(BOOL)reorderable;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_reorderable (GtkTreeView* tree_view)
 */
-(BOOL)getReorderable;

/**
 * Forwards message to:
 * void gtk_tree_view_set_cursor (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, gboolean start_editing)
 */
-(void)setCursorWithPath:(GtkTreePath *)path andFocusColumn:(GtkTreeViewColumn *)focusColumn andStartEditing:(BOOL)startEditing;

/**
 * Forwards message to:
 * void gtk_tree_view_set_cursor_on_cell (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* focus_column, GtkCellRenderer* focus_cell, gboolean start_editing)
 */
-(void)setCursorOnCellWithPath:(GtkTreePath *)path andFocusColumn:(GtkTreeViewColumn *)focusColumn andFocusCell:(GtkCellRenderer *)focusCell andStartEditing:(BOOL)startEditing;

/**
 * Forwards message to:
 * void gtk_tree_view_get_cursor (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewColumn** focus_column)
 */
-(void)getCursorWithPath:(GtkTreePath **)path andFocusColumn:(GtkTreeViewColumn **)focusColumn;

/**
 * Forwards message to:
 * GdkWindow* gtk_tree_view_get_bin_window (GtkTreeView* tree_view)
 */
-(GdkWindow *)getBinWindow;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_path_at_pos (GtkTreeView* tree_view, gint x, gint y, GtkTreePath** path, GtkTreeViewColumn** column, gint* cell_x, gint* cell_y)
 */
-(BOOL)getPathAtPosWithX:(NSNumber *)x andY:(NSNumber *)y andPath:(GtkTreePath **)path andColumn:(GtkTreeViewColumn **)column andCellX:(NSNumber **)cellX andCellY:(NSNumber **)cellY;

/**
 * Forwards message to:
 * void gtk_tree_view_get_cell_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect)
 */
-(void)getCellAreaWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andRect:(GdkRectangle *)rect;

/**
 * Forwards message to:
 * void gtk_tree_view_get_background_area (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewColumn* column, GdkRectangle* rect)
 */
-(void)getBackgroundAreaWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andRect:(GdkRectangle *)rect;

/**
 * Forwards message to:
 * void gtk_tree_view_get_visible_rect (GtkTreeView* tree_view, GdkRectangle* visible_rect)
 */
-(void)getVisibleRect:(GdkRectangle *)visibleRect;

/**
 * Forwards message to:
 * void gtk_tree_view_tree_to_widget_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy)
 */
-(void)treeToWidgetCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andWx:(NSNumber **)wx andWy:(NSNumber **)wy;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_visible_range (GtkTreeView* tree_view, GtkTreePath** start_path, GtkTreePath** end_path)
 */
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath **)startPath andEndPath:(GtkTreePath **)endPath;

/**
 * Forwards message to:
 * void gtk_tree_view_enable_model_drag_source (GtkTreeView* tree_view, GdkModifierType start_button_mask, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions)
 */
-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType)startButtonMask andTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * void gtk_tree_view_enable_model_drag_dest (GtkTreeView* tree_view, const GtkTargetEntry* targets, gint n_targets, GdkDragAction actions)
 */
-(void)enableModelDragDestWithTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * void gtk_tree_view_unset_rows_drag_source (GtkTreeView* tree_view)
 */
-(void)unsetRowsDragSource;

/**
 * Forwards message to:
 * void gtk_tree_view_unset_rows_drag_dest (GtkTreeView* tree_view)
 */
-(void)unsetRowsDragDest;

/**
 * Forwards message to:
 * void gtk_tree_view_set_drag_dest_row (GtkTreeView* tree_view, GtkTreePath* path, GtkTreeViewDropPosition pos)
 */
-(void)setDragDestRowWithPath:(GtkTreePath *)path andPos:(GtkTreeViewDropPosition)pos;

/**
 * Forwards message to:
 * void gtk_tree_view_get_drag_dest_row (GtkTreeView* tree_view, GtkTreePath** path, GtkTreeViewDropPosition* pos)
 */
-(void)getDragDestRowWithPath:(GtkTreePath **)path andPos:(GtkTreeViewDropPosition *)pos;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_dest_row_at_pos (GtkTreeView* tree_view, gint drag_x, gint drag_y, GtkTreePath** path, GtkTreeViewDropPosition* pos)
 */
-(BOOL)getDestRowAtPosWithDragX:(NSNumber *)dragX andDragY:(NSNumber *)dragY andPath:(GtkTreePath **)path andPos:(GtkTreeViewDropPosition *)pos;

/**
 * Forwards message to:
 * GdkPixmap* gtk_tree_view_create_row_drag_icon (GtkTreeView* tree_view, GtkTreePath* path)
 */
-(GdkPixmap*)createRowDragIcon:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_tree_view_set_enable_search (GtkTreeView* tree_view,gboolean enable_search)
 */
-(void)setEnableSearch:(BOOL)enableSearch;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_enable_search (GtkTreeView* tree_view)
 */
-(BOOL)getEnableSearch;

/**
 * Forwards message to:
 * gint gtk_tree_view_get_search_column (GtkTreeView* tree_view)
 */
-(NSNumber *)getSearchColumn;

/**
 * Forwards message to:
 * void gtk_tree_view_set_search_column (GtkTreeView* tree_view,gint column)
 */
-(void)setSearchColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * GtkTreeViewSearchEqualFunc gtk_tree_view_get_search_equal_func (GtkTreeView* tree_view)
 */
-(GtkTreeViewSearchEqualFunc)getSearchEqualFunc;

/**
 * Forwards message to:
 * void gtk_tree_view_set_search_equal_func (GtkTreeView* tree_view,GtkTreeViewSearchEqualFunc search_equal_func,gpointer search_user_data,GDestroyNotify search_destroy)
 */
-(void)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc)searchEqualFunc andSearchUserData:(gpointer)searchUserData andSearchDestroy:(GDestroyNotify)searchDestroy;

/**
 * Forwards message to:
 * GtkEntry* gtk_tree_view_get_search_entry (GtkTreeView* tree_view)
 */
-(CGTKEntry *)getSearchEntry;

/**
 * Forwards message to:
 * void gtk_tree_view_set_search_entry (GtkTreeView* tree_view, GtkEntry* entry)
 */
-(void)setSearchEntry:(CGTKEntry *)entry;

/**
 * Forwards message to:
 * GtkTreeViewSearchPositionFunc gtk_tree_view_get_search_position_func (GtkTreeView* tree_view)
 */
-(GtkTreeViewSearchPositionFunc)getSearchPositionFunc;

/**
 * Forwards message to:
 * void gtk_tree_view_set_search_position_func (GtkTreeView* tree_view, GtkTreeViewSearchPositionFunc func, gpointer data, GDestroyNotify destroy)
 */
-(void)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_widget_to_tree_coords (GtkTreeView* tree_view,gint wx,gint wy,gint* tx,gint* ty)
 */
-(void)convertWidgetToTreeCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andTx:(NSNumber **)tx andTy:(NSNumber **)ty;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_tree_to_widget_coords (GtkTreeView* tree_view,gint tx,gint ty,gint* wx,gint* wy)
 */
-(void)convertTreeToWidgetCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andWx:(NSNumber **)wx andWy:(NSNumber **)wy;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_widget_to_bin_window_coords (GtkTreeView* tree_view,gint wx,gint wy,gint* bx,gint* by)
 */
-(void)convertWidgetToBinWindowCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andBx:(NSNumber **)bx andBy:(NSNumber **)by;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_bin_window_to_widget_coords (GtkTreeView* tree_view,gint bx,gint by,gint* wx,gint* wy)
 */
-(void)convertBinWindowToWidgetCoordsWithBx:(NSNumber *)bx andBy:(NSNumber *)by andWx:(NSNumber **)wx andWy:(NSNumber **)wy;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_tree_to_bin_window_coords (GtkTreeView* tree_view,gint tx,gint ty,gint* bx,gint* by)
 */
-(void)convertTreeToBinWindowCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andBx:(NSNumber **)bx andBy:(NSNumber **)by;

/**
 * Forwards message to:
 * void gtk_tree_view_convert_bin_window_to_tree_coords (GtkTreeView* tree_view,gint bx,gint by,gint* tx,gint* ty)
 */
-(void)convertBinWindowToTreeCoordsWithBx:(NSNumber *)bx andBy:(NSNumber *)by andTx:(NSNumber **)tx andTy:(NSNumber **)ty;

/**
 * Forwards message to:
 * void gtk_tree_view_set_destroy_count_func (GtkTreeView* tree_view, GtkTreeDestroyCountFunc func, gpointer data, GDestroyNotify destroy)
 */
-(void)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/**
 * Forwards message to:
 * void gtk_tree_view_set_fixed_height_mode (GtkTreeView* tree_view, gboolean enable)
 */
-(void)setFixedHeightMode:(BOOL)enable;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_fixed_height_mode (GtkTreeView* tree_view)
 */
-(BOOL)getFixedHeightMode;

/**
 * Forwards message to:
 * void gtk_tree_view_set_hover_selection (GtkTreeView* tree_view, gboolean hover)
 */
-(void)setHoverSelection:(BOOL)hover;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_hover_selection (GtkTreeView* tree_view)
 */
-(BOOL)getHoverSelection;

/**
 * Forwards message to:
 * void gtk_tree_view_set_hover_expand (GtkTreeView* tree_view, gboolean expand)
 */
-(void)setHoverExpand:(BOOL)expand;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_hover_expand (GtkTreeView* tree_view)
 */
-(BOOL)getHoverExpand;

/**
 * Forwards message to:
 * void gtk_tree_view_set_rubber_banding (GtkTreeView* tree_view, gboolean enable)
 */
-(void)setRubberBanding:(BOOL)enable;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_rubber_banding (GtkTreeView* tree_view)
 */
-(BOOL)getRubberBanding;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_is_rubber_banding_active (GtkTreeView* tree_view)
 */
-(BOOL)isRubberBandingActive;

/**
 * Forwards message to:
 * GtkTreeViewRowSeparatorFunc gtk_tree_view_get_row_separator_func (GtkTreeView* tree_view)
 */
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;

/**
 * Forwards message to:
 * void gtk_tree_view_set_row_separator_func (GtkTreeView* tree_view, GtkTreeViewRowSeparatorFunc func, gpointer data, GDestroyNotify destroy)
 */
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/**
 * Forwards message to:
 * GtkTreeViewGridLines gtk_tree_view_get_grid_lines (GtkTreeView* tree_view)
 */
-(GtkTreeViewGridLines)getGridLines;

/**
 * Forwards message to:
 * void gtk_tree_view_set_grid_lines (GtkTreeView* tree_view, GtkTreeViewGridLines grid_lines)
 */
-(void)setGridLines:(GtkTreeViewGridLines)gridLines;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_enable_tree_lines (GtkTreeView* tree_view)
 */
-(BOOL)getEnableTreeLines;

/**
 * Forwards message to:
 * void gtk_tree_view_set_enable_tree_lines (GtkTreeView* tree_view, gboolean enabled)
 */
-(void)setEnableTreeLines:(BOOL)enabled;

/**
 * Forwards message to:
 * void gtk_tree_view_set_show_expanders (GtkTreeView* tree_view, gboolean enabled)
 */
-(void)setShowExpanders:(BOOL)enabled;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_show_expanders (GtkTreeView* tree_view)
 */
-(BOOL)getShowExpanders;

/**
 * Forwards message to:
 * void gtk_tree_view_set_level_indentation (GtkTreeView* tree_view, gint indentation)
 */
-(void)setLevelIndentation:(NSNumber *)indentation;

/**
 * Forwards message to:
 * gint gtk_tree_view_get_level_indentation (GtkTreeView* tree_view)
 */
-(NSNumber *)getLevelIndentation;

/**
 * Forwards message to:
 * void gtk_tree_view_set_tooltip_row (GtkTreeView* tree_view,GtkTooltip* tooltip,GtkTreePath* path)
 */
-(void)setTooltipRowWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path;

/**
 * Forwards message to:
 * void gtk_tree_view_set_tooltip_cell (GtkTreeView* tree_view,GtkTooltip* tooltip,GtkTreePath* path,GtkTreeViewColumn* column,GtkCellRenderer* cell)
 */
-(void)setTooltipCellWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andCell:(GtkCellRenderer *)cell;

/**
 * Forwards message to:
 * gboolean gtk_tree_view_get_tooltip_context (GtkTreeView* tree_view,gint* x,gint* y,gboolean keyboard_tip,GtkTreeModel** model,GtkTreePath** path,GtkTreeIter* iter)
 */
-(BOOL)getTooltipContextWithX:(NSNumber **)x andY:(NSNumber **)y andKeyboardTip:(BOOL)keyboardTip andModel:(GtkTreeModel **)model andPath:(GtkTreePath **)path andIter:(GtkTreeIter *)iter;

/**
 * Forwards message to:
 * void gtk_tree_view_set_tooltip_column (GtkTreeView* tree_view, gint column)
 */
-(void)setTooltipColumn:(NSNumber *)column;

/**
 * Forwards message to:
 * gint gtk_tree_view_get_tooltip_column (GtkTreeView* tree_view)
 */
-(NSNumber *)getTooltipColumn;

@end
