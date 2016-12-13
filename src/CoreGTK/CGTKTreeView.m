/*
 * CGTKTreeView.m
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
#import "CoreGTK/CGTKTreeView.h"

@implementation CGTKTreeView

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_tree_view_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithModel:(GtkTreeModel*) model
{
	self = [super initWithGObject:(GObject *)gtk_tree_view_new_with_model(model)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkTreeView*)TREEVIEW
{
	return GTK_TREE_VIEW([self GOBJECT]);
}

-(gint)appendColumn:(GtkTreeViewColumn*) column
{
	return gtk_tree_view_append_column(GTK_TREE_VIEW([self GOBJECT]), column);
}

-(void)collapseAll
{
	gtk_tree_view_collapse_all(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)collapseRow:(GtkTreePath*) path
{
	return (gtk_tree_view_collapse_row(GTK_TREE_VIEW([self GOBJECT]), path) ? YES : NO);
}

-(void)columnsAutosize
{
	gtk_tree_view_columns_autosize(GTK_TREE_VIEW([self GOBJECT]));
}

-(void)convertBinWindowToTreeCoordsWithBx:(gint) bx andBy:(gint) by andTx:(gint*) tx andTy:(gint*) ty
{
	gtk_tree_view_convert_bin_window_to_tree_coords(GTK_TREE_VIEW([self GOBJECT]), bx, by, tx, ty);
}

-(void)convertBinWindowToWidgetCoordsWithBx:(gint) bx andBy:(gint) by andWx:(gint*) wx andWy:(gint*) wy
{
	gtk_tree_view_convert_bin_window_to_widget_coords(GTK_TREE_VIEW([self GOBJECT]), bx, by, wx, wy);
}

-(void)convertTreeToBinWindowCoordsWithTx:(gint) tx andTy:(gint) ty andBx:(gint*) bx andBy:(gint*) by
{
	gtk_tree_view_convert_tree_to_bin_window_coords(GTK_TREE_VIEW([self GOBJECT]), tx, ty, bx, by);
}

-(void)convertTreeToWidgetCoordsWithTx:(gint) tx andTy:(gint) ty andWx:(gint*) wx andWy:(gint*) wy
{
	gtk_tree_view_convert_tree_to_widget_coords(GTK_TREE_VIEW([self GOBJECT]), tx, ty, wx, wy);
}

-(void)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by
{
	gtk_tree_view_convert_widget_to_bin_window_coords(GTK_TREE_VIEW([self GOBJECT]), wx, wy, bx, by);
}

-(void)convertWidgetToTreeCoordsWithWx:(gint) wx andWy:(gint) wy andTx:(gint*) tx andTy:(gint*) ty
{
	gtk_tree_view_convert_widget_to_tree_coords(GTK_TREE_VIEW([self GOBJECT]), wx, wy, tx, ty);
}

-(cairo_surface_t*)createRowDragIcon:(GtkTreePath*) path
{
	return gtk_tree_view_create_row_drag_icon(GTK_TREE_VIEW([self GOBJECT]), path);
}

-(void)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_tree_view_enable_model_drag_dest(GTK_TREE_VIEW([self GOBJECT]), targets, ntargets, actions);
}

-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_tree_view_enable_model_drag_source(GTK_TREE_VIEW([self GOBJECT]), startButtonMask, targets, ntargets, actions);
}

-(void)expandAll
{
	gtk_tree_view_expand_all(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)expandRowWithPath:(GtkTreePath*) path andOpenAll:(BOOL) openAll
{
	return (gtk_tree_view_expand_row(GTK_TREE_VIEW([self GOBJECT]), path, (openAll ? TRUE : FALSE)) ? YES : NO);
}

-(void)expandToPath:(GtkTreePath*) path
{
	gtk_tree_view_expand_to_path(GTK_TREE_VIEW([self GOBJECT]), path);
}

-(BOOL)getActivateOnSingleClick
{
	return (gtk_tree_view_get_activate_on_single_click(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(void)getBackgroundAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect
{
	gtk_tree_view_get_background_area(GTK_TREE_VIEW([self GOBJECT]), path, column, rect);
}

-(GdkWindow*)getBinWindow
{
	return gtk_tree_view_get_bin_window(GTK_TREE_VIEW([self GOBJECT]));
}

-(void)getCellAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect
{
	gtk_tree_view_get_cell_area(GTK_TREE_VIEW([self GOBJECT]), path, column, rect);
}

-(GtkTreeViewColumn*)getColumn:(gint) n
{
	return gtk_tree_view_get_column(GTK_TREE_VIEW([self GOBJECT]), n);
}

-(GList*)getColumns
{
	return gtk_tree_view_get_columns(GTK_TREE_VIEW([self GOBJECT]));
}

-(void)getCursorWithPath:(GtkTreePath**) path andFocusColumn:(GtkTreeViewColumn**) focusColumn
{
	gtk_tree_view_get_cursor(GTK_TREE_VIEW([self GOBJECT]), path, focusColumn);
}

-(BOOL)getDestRowAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos
{
	return (gtk_tree_view_get_dest_row_at_pos(GTK_TREE_VIEW([self GOBJECT]), dragX, dragY, path, pos) ? YES : NO);
}

-(void)getDragDestRowWithPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos
{
	gtk_tree_view_get_drag_dest_row(GTK_TREE_VIEW([self GOBJECT]), path, pos);
}

-(BOOL)getEnableSearch
{
	return (gtk_tree_view_get_enable_search(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getEnableTreeLines
{
	return (gtk_tree_view_get_enable_tree_lines(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkTreeViewColumn*)getExpanderColumn
{
	return gtk_tree_view_get_expander_column(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getFixedHeightMode
{
	return (gtk_tree_view_get_fixed_height_mode(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkTreeViewGridLines)getGridLines
{
	return gtk_tree_view_get_grid_lines(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_tree_view_get_hadjustment(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getHeadersClickable
{
	return (gtk_tree_view_get_headers_clickable(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHeadersVisible
{
	return (gtk_tree_view_get_headers_visible(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHoverExpand
{
	return (gtk_tree_view_get_hover_expand(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHoverSelection
{
	return (gtk_tree_view_get_hover_selection(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getLevelIndentation
{
	return gtk_tree_view_get_level_indentation(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkTreeModel*)getModel
{
	return gtk_tree_view_get_model(GTK_TREE_VIEW([self GOBJECT]));
}

-(guint)getNcolumns
{
	return gtk_tree_view_get_n_columns(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getPathAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY
{
	return (gtk_tree_view_get_path_at_pos(GTK_TREE_VIEW([self GOBJECT]), x, y, path, column, cellX, cellY) ? YES : NO);
}

-(BOOL)getReorderable
{
	return (gtk_tree_view_get_reorderable(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc
{
	return gtk_tree_view_get_row_separator_func(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getRubberBanding
{
	return (gtk_tree_view_get_rubber_banding(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getRulesHint
{
	return (gtk_tree_view_get_rules_hint(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getSearchColumn
{
	return gtk_tree_view_get_search_column(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkEntry*)getSearchEntry
{
	return gtk_tree_view_get_search_entry(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkTreeViewSearchEqualFunc)getSearchEqualFunc
{
	return gtk_tree_view_get_search_equal_func(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkTreeViewSearchPositionFunc)getSearchPositionFunc
{
	return gtk_tree_view_get_search_position_func(GTK_TREE_VIEW([self GOBJECT]));
}

-(GtkTreeSelection*)getSelection
{
	return gtk_tree_view_get_selection(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getShowExpanders
{
	return (gtk_tree_view_get_show_expanders(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getTooltipColumn
{
	return gtk_tree_view_get_tooltip_column(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter
{
	return (gtk_tree_view_get_tooltip_context(GTK_TREE_VIEW([self GOBJECT]), x, y, (keyboardTip ? TRUE : FALSE), model, path, iter) ? YES : NO);
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_tree_view_get_vadjustment(GTK_TREE_VIEW([self GOBJECT]));
}

-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath
{
	return (gtk_tree_view_get_visible_range(GTK_TREE_VIEW([self GOBJECT]), startPath, endPath) ? YES : NO);
}

-(void)getVisibleRect:(GdkRectangle*) visibleRect
{
	gtk_tree_view_get_visible_rect(GTK_TREE_VIEW([self GOBJECT]), visibleRect);
}

-(gint)insertColumnWithColumn:(GtkTreeViewColumn*) column andPosition:(gint) position
{
	return gtk_tree_view_insert_column(GTK_TREE_VIEW([self GOBJECT]), column, position);
}

-(gint)insertColumnWithDataFuncWithPosition:(gint) position andTitle:(NSString*) title andCell:(GtkCellRenderer*) cell andFunc:(GtkTreeCellDataFunc) func andData:(gpointer) data andDnotify:(GDestroyNotify) dnotify
{
	return gtk_tree_view_insert_column_with_data_func(GTK_TREE_VIEW([self GOBJECT]), position, [title UTF8String], cell, func, data, dnotify);
}

-(BOOL)isBlankAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY
{
	return (gtk_tree_view_is_blank_at_pos(GTK_TREE_VIEW([self GOBJECT]), x, y, path, column, cellX, cellY) ? YES : NO);
}

-(BOOL)isRubberBandingActive
{
	return (gtk_tree_view_is_rubber_banding_active(GTK_TREE_VIEW([self GOBJECT])) ? YES : NO);
}

-(void)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc) func andData:(gpointer) data
{
	gtk_tree_view_map_expanded_rows(GTK_TREE_VIEW([self GOBJECT]), func, data);
}

-(void)moveColumnAfterWithColumn:(GtkTreeViewColumn*) column andBaseColumn:(GtkTreeViewColumn*) baseColumn
{
	gtk_tree_view_move_column_after(GTK_TREE_VIEW([self GOBJECT]), column, baseColumn);
}

-(gint)removeColumn:(GtkTreeViewColumn*) column
{
	return gtk_tree_view_remove_column(GTK_TREE_VIEW([self GOBJECT]), column);
}

-(void)rowActivatedWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column
{
	gtk_tree_view_row_activated(GTK_TREE_VIEW([self GOBJECT]), path, column);
}

-(BOOL)rowExpanded:(GtkTreePath*) path
{
	return (gtk_tree_view_row_expanded(GTK_TREE_VIEW([self GOBJECT]), path) ? YES : NO);
}

-(void)scrollToCellWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign
{
	gtk_tree_view_scroll_to_cell(GTK_TREE_VIEW([self GOBJECT]), path, column, (useAlign ? TRUE : FALSE), rowAlign, colAlign);
}

-(void)scrollToPointWithTreeX:(gint) treeX andTreeY:(gint) treeY
{
	gtk_tree_view_scroll_to_point(GTK_TREE_VIEW([self GOBJECT]), treeX, treeY);
}

-(void)setActivateOnSingleClick:(BOOL) single
{
	gtk_tree_view_set_activate_on_single_click(GTK_TREE_VIEW([self GOBJECT]), (single ? TRUE : FALSE));
}

-(void)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc) func andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_tree_view_set_column_drag_function(GTK_TREE_VIEW([self GOBJECT]), func, userData, destroy);
}

-(void)setCursorWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andStartEditing:(BOOL) startEditing
{
	gtk_tree_view_set_cursor(GTK_TREE_VIEW([self GOBJECT]), path, focusColumn, (startEditing ? TRUE : FALSE));
}

-(void)setCursorOnCellWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andFocusCell:(GtkCellRenderer*) focusCell andStartEditing:(BOOL) startEditing
{
	gtk_tree_view_set_cursor_on_cell(GTK_TREE_VIEW([self GOBJECT]), path, focusColumn, focusCell, (startEditing ? TRUE : FALSE));
}

-(void)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy
{
	gtk_tree_view_set_destroy_count_func(GTK_TREE_VIEW([self GOBJECT]), func, data, destroy);
}

-(void)setDragDestRowWithPath:(GtkTreePath*) path andPos:(GtkTreeViewDropPosition) pos
{
	gtk_tree_view_set_drag_dest_row(GTK_TREE_VIEW([self GOBJECT]), path, pos);
}

-(void)setEnableSearch:(BOOL) enableSearch
{
	gtk_tree_view_set_enable_search(GTK_TREE_VIEW([self GOBJECT]), (enableSearch ? TRUE : FALSE));
}

-(void)setEnableTreeLines:(BOOL) enabled
{
	gtk_tree_view_set_enable_tree_lines(GTK_TREE_VIEW([self GOBJECT]), (enabled ? TRUE : FALSE));
}

-(void)setExpanderColumn:(GtkTreeViewColumn*) column
{
	gtk_tree_view_set_expander_column(GTK_TREE_VIEW([self GOBJECT]), column);
}

-(void)setFixedHeightMode:(BOOL) enable
{
	gtk_tree_view_set_fixed_height_mode(GTK_TREE_VIEW([self GOBJECT]), (enable ? TRUE : FALSE));
}

-(void)setGridLines:(GtkTreeViewGridLines) gridLines
{
	gtk_tree_view_set_grid_lines(GTK_TREE_VIEW([self GOBJECT]), gridLines);
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_tree_view_set_hadjustment(GTK_TREE_VIEW([self GOBJECT]), adjustment);
}

-(void)setHeadersClickable:(BOOL) setting
{
	gtk_tree_view_set_headers_clickable(GTK_TREE_VIEW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setHeadersVisible:(BOOL) headersVisible
{
	gtk_tree_view_set_headers_visible(GTK_TREE_VIEW([self GOBJECT]), (headersVisible ? TRUE : FALSE));
}

-(void)setHoverExpand:(BOOL) expand
{
	gtk_tree_view_set_hover_expand(GTK_TREE_VIEW([self GOBJECT]), (expand ? TRUE : FALSE));
}

-(void)setHoverSelection:(BOOL) hover
{
	gtk_tree_view_set_hover_selection(GTK_TREE_VIEW([self GOBJECT]), (hover ? TRUE : FALSE));
}

-(void)setLevelIndentation:(gint) indentation
{
	gtk_tree_view_set_level_indentation(GTK_TREE_VIEW([self GOBJECT]), indentation);
}

-(void)setModel:(GtkTreeModel*) model
{
	gtk_tree_view_set_model(GTK_TREE_VIEW([self GOBJECT]), model);
}

-(void)setReorderable:(BOOL) reorderable
{
	gtk_tree_view_set_reorderable(GTK_TREE_VIEW([self GOBJECT]), (reorderable ? TRUE : FALSE));
}

-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy
{
	gtk_tree_view_set_row_separator_func(GTK_TREE_VIEW([self GOBJECT]), func, data, destroy);
}

-(void)setRubberBanding:(BOOL) enable
{
	gtk_tree_view_set_rubber_banding(GTK_TREE_VIEW([self GOBJECT]), (enable ? TRUE : FALSE));
}

-(void)setRulesHint:(BOOL) setting
{
	gtk_tree_view_set_rules_hint(GTK_TREE_VIEW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setSearchColumn:(gint) column
{
	gtk_tree_view_set_search_column(GTK_TREE_VIEW([self GOBJECT]), column);
}

-(void)setSearchEntry:(GtkEntry*) entry
{
	gtk_tree_view_set_search_entry(GTK_TREE_VIEW([self GOBJECT]), entry);
}

-(void)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc) searchEqualFunc andSearchUserData:(gpointer) searchUserData andSearchDestroy:(GDestroyNotify) searchDestroy
{
	gtk_tree_view_set_search_equal_func(GTK_TREE_VIEW([self GOBJECT]), searchEqualFunc, searchUserData, searchDestroy);
}

-(void)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy
{
	gtk_tree_view_set_search_position_func(GTK_TREE_VIEW([self GOBJECT]), func, data, destroy);
}

-(void)setShowExpanders:(BOOL) enabled
{
	gtk_tree_view_set_show_expanders(GTK_TREE_VIEW([self GOBJECT]), (enabled ? TRUE : FALSE));
}

-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andCell:(GtkCellRenderer*) cell
{
	gtk_tree_view_set_tooltip_cell(GTK_TREE_VIEW([self GOBJECT]), tooltip, path, column, cell);
}

-(void)setTooltipColumn:(gint) column
{
	gtk_tree_view_set_tooltip_column(GTK_TREE_VIEW([self GOBJECT]), column);
}

-(void)setTooltipRowWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path
{
	gtk_tree_view_set_tooltip_row(GTK_TREE_VIEW([self GOBJECT]), tooltip, path);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_tree_view_set_vadjustment(GTK_TREE_VIEW([self GOBJECT]), adjustment);
}

-(void)unsetRowsDragDest
{
	gtk_tree_view_unset_rows_drag_dest(GTK_TREE_VIEW([self GOBJECT]));
}

-(void)unsetRowsDragSource
{
	gtk_tree_view_unset_rows_drag_source(GTK_TREE_VIEW([self GOBJECT]));
}


@end
