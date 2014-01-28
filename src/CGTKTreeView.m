/*
 * CGTKTreeView.m
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

#import "CGTKTreeView.h"

@implementation CGTKTreeView

-(GtkTreeView *)TREE_VIEW
{
	return GTK_TREE_VIEW([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_tree_view_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithModel:(GtkTreeModel *)model
{
	self = [super initWithGtkWidget:GTK_WIDGET(gtk_tree_view_new_with_model (model)) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(GtkTreeModel *)getModel
{
	return gtk_tree_view_get_model ([self TREE_VIEW]);
}

-(void)setModel:(GtkTreeModel *)model
{
	gtk_tree_view_set_model ([self TREE_VIEW], model);
}

-(GtkTreeSelection *)getSelection
{
	return gtk_tree_view_get_selection ([self TREE_VIEW]);
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_tree_view_get_hadjustment ([self TREE_VIEW]);
}

-(void)setHadjustment:(GtkAdjustment *)adjustment
{
	gtk_tree_view_set_hadjustment ([self TREE_VIEW], adjustment);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_tree_view_get_vadjustment ([self TREE_VIEW]);
}

-(void)setVadjustment:(GtkAdjustment *)adjustment
{
	gtk_tree_view_set_vadjustment ([self TREE_VIEW], adjustment);
}

-(BOOL)getHeadersVisible
{
	return [CGTK getBOOL:gtk_tree_view_get_headers_visible ([self TREE_VIEW])];
}

-(void)setHeadersVisible:(BOOL)headersVisible
{
	gtk_tree_view_set_headers_visible ([self TREE_VIEW], [CGTK getGboolean:headersVisible]);
}

-(void)columnsAutosize
{
	gtk_tree_view_columns_autosize ([self TREE_VIEW]);
}

-(BOOL)getHeadersClickable
{
	return [CGTK getBOOL:gtk_tree_view_get_headers_clickable ([self TREE_VIEW])];
}

-(void)setHeadersClickable:(BOOL)setting
{
	gtk_tree_view_set_headers_clickable ([self TREE_VIEW], [CGTK getGboolean:setting]);
}

-(void)setRulesHint:(BOOL)setting
{
	gtk_tree_view_set_rules_hint ([self TREE_VIEW], [CGTK getGboolean:setting]);
}

-(BOOL)getRulesHint
{
	return [CGTK getBOOL:gtk_tree_view_get_rules_hint ([self TREE_VIEW])];
}

-(NSNumber *)appendColumn:(GtkTreeViewColumn *)column
{
	return [NSNumber numberWithInt:gtk_tree_view_append_column ([self TREE_VIEW], column)];
}

-(NSNumber *)removeColumn:(GtkTreeViewColumn *)column
{
	return [NSNumber numberWithInt:gtk_tree_view_remove_column ([self TREE_VIEW], column)];
}

-(NSNumber *)insertColumnWithColumn:(GtkTreeViewColumn *)column andPosition:(NSNumber *)position
{
	return [NSNumber numberWithInt:gtk_tree_view_insert_column ([self TREE_VIEW], column, [position intValue])];
}

-(NSNumber *)insertColumnWithDataFuncWithPosition:(NSNumber *)position andTitle:(NSString *)title andCell:(GtkCellRenderer *)cell andFunc:(GtkTreeCellDataFunc)func andData:(gpointer)data andDnotify:(GDestroyNotify)dnotify
{
	return [NSNumber numberWithInt:gtk_tree_view_insert_column_with_data_func ([self TREE_VIEW], [position intValue], [title UTF8String], cell, func, data, dnotify)];
}

-(GtkTreeViewColumn *)getColumn:(NSNumber *)n
{
	return gtk_tree_view_get_column ([self TREE_VIEW], [n intValue]);
}

-(GList *)getColumns
{
	return gtk_tree_view_get_columns ([self TREE_VIEW]);
}

-(void)moveColumnAfterWithColumn:(GtkTreeViewColumn *)column andBaseColumn:(GtkTreeViewColumn *)baseColumn
{
	gtk_tree_view_move_column_after ([self TREE_VIEW], column, baseColumn);
}

-(void)setExpanderColumn:(GtkTreeViewColumn *)column
{
	gtk_tree_view_set_expander_column ([self TREE_VIEW], column);
}

-(GtkTreeViewColumn *)getExpanderColumn
{
	return gtk_tree_view_get_expander_column ([self TREE_VIEW]);
}

-(void)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc)func andUserData:(gpointer)userData andDestroy:(GDestroyNotify)destroy
{
	gtk_tree_view_set_column_drag_function ([self TREE_VIEW], func, userData, destroy);
}

-(void)scrollToPointWithTreeX:(NSNumber *)treeX andTreeY:(NSNumber *)treeY
{
	gtk_tree_view_scroll_to_point ([self TREE_VIEW], [treeX intValue], [treeY intValue]);
}

-(void)scrollToCellWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andUseAlign:(BOOL)useAlign andRowAlign:(NSNumber *)rowAlign andColAlign:(NSNumber *)colAlign
{
	gtk_tree_view_scroll_to_cell ([self TREE_VIEW], path, column, [CGTK getGboolean:useAlign], [rowAlign floatValue], [colAlign floatValue]);
}

-(void)rowActivatedWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column
{
	gtk_tree_view_row_activated ([self TREE_VIEW], path, column);
}

-(void)expandAll
{
	gtk_tree_view_expand_all ([self TREE_VIEW]);
}

-(void)collapseAll
{
	gtk_tree_view_collapse_all ([self TREE_VIEW]);
}

-(void)expandToPath:(GtkTreePath *)path
{
	gtk_tree_view_expand_to_path ([self TREE_VIEW], path);
}

-(BOOL)expandRowWithPath:(GtkTreePath *)path andOpenAll:(BOOL)openAll
{
	return [CGTK getBOOL:gtk_tree_view_expand_row ([self TREE_VIEW], path, [CGTK getGboolean:openAll])];
}

-(BOOL)collapseRow:(GtkTreePath *)path
{
	return [CGTK getBOOL:gtk_tree_view_collapse_row ([self TREE_VIEW], path)];
}

-(void)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc)func andData:(gpointer)data
{
	gtk_tree_view_map_expanded_rows ([self TREE_VIEW], func, data);
}

-(BOOL)rowExpanded:(GtkTreePath *)path
{
	return [CGTK getBOOL:gtk_tree_view_row_expanded ([self TREE_VIEW], path)];
}

-(void)setReorderable:(BOOL)reorderable
{
	gtk_tree_view_set_reorderable ([self TREE_VIEW], [CGTK getGboolean:reorderable]);
}

-(BOOL)getReorderable
{
	return [CGTK getBOOL:gtk_tree_view_get_reorderable ([self TREE_VIEW])];
}

-(void)setCursorWithPath:(GtkTreePath *)path andFocusColumn:(GtkTreeViewColumn *)focusColumn andStartEditing:(BOOL)startEditing
{
	gtk_tree_view_set_cursor ([self TREE_VIEW], path, focusColumn, [CGTK getGboolean:startEditing]);
}

-(void)setCursorOnCellWithPath:(GtkTreePath *)path andFocusColumn:(GtkTreeViewColumn *)focusColumn andFocusCell:(GtkCellRenderer *)focusCell andStartEditing:(BOOL)startEditing
{
	gtk_tree_view_set_cursor_on_cell ([self TREE_VIEW], path, focusColumn, focusCell, [CGTK getGboolean:startEditing]);
}

-(void)getCursorWithPath:(GtkTreePath **)path andFocusColumn:(GtkTreeViewColumn **)focusColumn
{
	gtk_tree_view_get_cursor ([self TREE_VIEW], path, focusColumn);
}

-(GdkWindow *)getBinWindow
{
	return gtk_tree_view_get_bin_window ([self TREE_VIEW]);
}

-(BOOL)getPathAtPosWithX:(NSNumber *)x andY:(NSNumber *)y andPath:(GtkTreePath **)path andColumn:(GtkTreeViewColumn **)column andCellX:(NSNumber **)cellX andCellY:(NSNumber **)cellY
{
	BOOL toReturn;
	gint gCellX;
	gint gCellY;
	
	toReturn = [CGTK getBOOL:gtk_tree_view_get_path_at_pos ([self TREE_VIEW], [x intValue], [y intValue], path, column, &gCellX, &gCellY)];
	
	*cellX = [NSNumber numberWithInt:gCellX];
	*cellY = [NSNumber numberWithInt:gCellY];
	
	return toReturn;
}

-(void)getCellAreaWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andRect:(GdkRectangle *)rect
{
	gtk_tree_view_get_cell_area ([self TREE_VIEW], path, column, rect);
}

-(void)getBackgroundAreaWithPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andRect:(GdkRectangle *)rect
{
	gtk_tree_view_get_background_area ([self TREE_VIEW], path, column, rect);
}

-(void)getVisibleRect:(GdkRectangle *)visibleRect
{
	gtk_tree_view_get_visible_rect ([self TREE_VIEW], visibleRect);
}

-(void)treeToWidgetCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andWx:(NSNumber **)wx andWy:(NSNumber **)wy
{
	void gtk_tree_view_tree_to_widget_coords (GtkTreeView* tree_view, gint tx, gint ty, gint* wx, gint* wy);
}

-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath **)startPath andEndPath:(GtkTreePath **)endPath
{
	return [CGTK getBOOL:gtk_tree_view_get_visible_range ([self TREE_VIEW], startPath, endPath)];
}

-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType)startButtonMask andTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions
{
	gtk_tree_view_enable_model_drag_source ([self TREE_VIEW], startButtonMask, targets, [nTargets intValue], actions);
}

-(void)enableModelDragDestWithTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions
{
	gtk_tree_view_enable_model_drag_dest ([self TREE_VIEW], targets, [nTargets intValue], actions);
}

-(void)unsetRowsDragSource
{
	gtk_tree_view_unset_rows_drag_source ([self TREE_VIEW]);
}

-(void)unsetRowsDragDest
{
	gtk_tree_view_unset_rows_drag_dest ([self TREE_VIEW]);
}

-(void)setDragDestRowWithPath:(GtkTreePath *)path andPos:(GtkTreeViewDropPosition)pos
{
	gtk_tree_view_set_drag_dest_row ([self TREE_VIEW], path, pos);
}

-(void)getDragDestRowWithPath:(GtkTreePath **)path andPos:(GtkTreeViewDropPosition *)pos
{
	gtk_tree_view_get_drag_dest_row ([self TREE_VIEW], path, pos);
}

-(BOOL)getDestRowAtPosWithDragX:(NSNumber *)dragX andDragY:(NSNumber *)dragY andPath:(GtkTreePath **)path andPos:(GtkTreeViewDropPosition *)pos
{
	return [CGTK getBOOL:gtk_tree_view_get_dest_row_at_pos ([self TREE_VIEW], [dragX intValue], [dragY intValue], path, pos)];
}

-(GdkPixmap*)createRowDragIcon:(GtkTreePath *)path
{
	return gtk_tree_view_create_row_drag_icon ([self TREE_VIEW], path);
}

-(void)setEnableSearch:(BOOL)enableSearch
{
	gtk_tree_view_set_enable_search ([self TREE_VIEW], [CGTK getGboolean:enableSearch]);
}

-(BOOL)getEnableSearch
{
	return [CGTK getBOOL:gtk_tree_view_get_enable_search ([self TREE_VIEW])];
}

-(NSNumber *)getSearchColumn
{
	return [NSNumber numberWithInt:gtk_tree_view_get_search_column ([self TREE_VIEW])];
}

-(void)setSearchColumn:(NSNumber *)column
{
	gtk_tree_view_set_search_column ([self TREE_VIEW], [column intValue]);
}

-(GtkTreeViewSearchEqualFunc)getSearchEqualFunc
{
	return gtk_tree_view_get_search_equal_func ([self TREE_VIEW]);
}

-(void)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc)searchEqualFunc andSearchUserData:(gpointer)searchUserData andSearchDestroy:(GDestroyNotify)searchDestroy
{
	gtk_tree_view_set_search_equal_func ([self TREE_VIEW], searchEqualFunc, searchUserData, searchDestroy);
}

-(CGTKEntry *)getSearchEntry
{
	return (CGTKEntry*) [CGTKWidget widgetWithGtkWidget: GTK_WIDGET(gtk_tree_view_get_search_entry ([self TREE_VIEW]))];
}

-(void)setSearchEntry:(CGTKEntry *)entry
{
	gtk_tree_view_set_search_entry ([self TREE_VIEW], [entry ENTRY]);
}

-(GtkTreeViewSearchPositionFunc)getSearchPositionFunc
{
	return gtk_tree_view_get_search_position_func ([self TREE_VIEW]);
}

-(void)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_tree_view_set_search_position_func ([self TREE_VIEW], func, data, destroy);
}

-(void)convertWidgetToTreeCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andTx:(NSNumber **)tx andTy:(NSNumber **)ty
{
	gint gTx;
	gint gTy;
	
	gtk_tree_view_convert_widget_to_tree_coords ([self TREE_VIEW], [wx intValue], [wy intValue], &gTx, &gTy);
	
	*tx = [NSNumber numberWithInt:gTx];
	*ty = [NSNumber numberWithInt:gTy];
}

-(void)convertTreeToWidgetCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andWx:(NSNumber **)wx andWy:(NSNumber **)wy
{
	gint gWx;
	gint gWy;
	
	gtk_tree_view_convert_tree_to_widget_coords ([self TREE_VIEW], [tx intValue], [ty intValue], &gWx, &gWy);
	
	*wx = [NSNumber numberWithInt:gWx];
	*wy = [NSNumber numberWithInt:gWy];
}

-(void)convertWidgetToBinWindowCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andBx:(NSNumber **)bx andBy:(NSNumber **)by
{
	gint gBx;
	gint gBy;
	
	gtk_tree_view_convert_widget_to_bin_window_coords ([self TREE_VIEW], [wx intValue], [wy intValue], &gBx, &gBy);
	
	*bx = [NSNumber numberWithInt:gBx];
	*by = [NSNumber numberWithInt:gBy];
}

-(void)convertBinWindowToWidgetCoordsWithBx:(NSNumber *)bx andBy:(NSNumber *)by andWx:(NSNumber **)wx andWy:(NSNumber **)wy
{
	gint gWx;
	gint gWy;
	
	gtk_tree_view_convert_bin_window_to_widget_coords ([self TREE_VIEW], [bx intValue], [by intValue], &gWx, &gWy);
	
	*wx = [NSNumber numberWithInt:gWx];
	*wy = [NSNumber numberWithInt:gWy];
}

-(void)convertTreeToBinWindowCoordsWithTx:(NSNumber *)tx andTy:(NSNumber *)ty andBx:(NSNumber **)bx andBy:(NSNumber **)by
{
	gint gBx;
	gint gBy;

	gtk_tree_view_convert_tree_to_bin_window_coords ([self TREE_VIEW], [tx intValue], [ty intValue], &gBx, &gBy);
	
	*bx = [NSNumber numberWithInt:gBx];
	*by = [NSNumber numberWithInt:gBy];
}

-(void)convertBinWindowToTreeCoordsWithBx:(NSNumber *)bx andBy:(NSNumber *)by andTx:(NSNumber **)tx andTy:(NSNumber **)ty
{
	gint gTx;
	gint gTy;
	
	gtk_tree_view_convert_bin_window_to_tree_coords ([self TREE_VIEW], [bx intValue], [by intValue], &gTx, &gTy);
	
	*tx = [NSNumber numberWithInt:gTx];
	*ty = [NSNumber numberWithInt:gTy];
}

-(void)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_tree_view_set_destroy_count_func ([self TREE_VIEW], func, data, destroy);
}

-(void)setFixedHeightMode:(BOOL)enable
{
	gtk_tree_view_set_fixed_height_mode ([self TREE_VIEW], [CGTK getGboolean:enable]);
}

-(BOOL)getFixedHeightMode
{
	return [CGTK getBOOL:gtk_tree_view_get_fixed_height_mode ([self TREE_VIEW])];
}

-(void)setHoverSelection:(BOOL)hover
{
	gtk_tree_view_set_hover_selection ([self TREE_VIEW], [CGTK getGboolean:hover]);
}

-(BOOL)getHoverSelection
{
	return [CGTK getBOOL:gtk_tree_view_get_hover_selection ([self TREE_VIEW])];
}

-(void)setHoverExpand:(BOOL)expand
{
	gtk_tree_view_set_hover_expand ([self TREE_VIEW], [CGTK getGboolean:expand]);
}

-(BOOL)getHoverExpand
{
	return [CGTK getBOOL:gtk_tree_view_get_hover_expand ([self TREE_VIEW])];
}

-(void)setRubberBanding:(BOOL)enable
{
	gtk_tree_view_set_rubber_banding ([self TREE_VIEW], [CGTK getGboolean:enable]);
}

-(BOOL)getRubberBanding
{
	return [CGTK getBOOL:gtk_tree_view_get_rubber_banding ([self TREE_VIEW])];
}

-(BOOL)isRubberBandingActive
{
	return [CGTK getBOOL:gtk_tree_view_is_rubber_banding_active ([self TREE_VIEW])];
}

-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc
{
	return gtk_tree_view_get_row_separator_func ([self TREE_VIEW]);
}

-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_tree_view_set_row_separator_func ([self TREE_VIEW], func, data, destroy);
}

-(GtkTreeViewGridLines)getGridLines
{
	return gtk_tree_view_get_grid_lines ([self TREE_VIEW]);
}

-(void)setGridLines:(GtkTreeViewGridLines)gridLines
{
	gtk_tree_view_set_grid_lines ([self TREE_VIEW], gridLines);
}

-(BOOL)getEnableTreeLines
{
	return [CGTK getBOOL:gtk_tree_view_get_enable_tree_lines ([self TREE_VIEW])];
}

-(void)setEnableTreeLines:(BOOL)enabled
{
	gtk_tree_view_set_enable_tree_lines ([self TREE_VIEW], [CGTK getGboolean:enabled]);
}

-(void)setShowExpanders:(BOOL)enabled
{
	gtk_tree_view_set_show_expanders ([self TREE_VIEW], [CGTK getGboolean:enabled]);
}

-(BOOL)getShowExpanders
{
	return [CGTK getBOOL:gtk_tree_view_get_show_expanders ([self TREE_VIEW])];
}

-(void)setLevelIndentation:(NSNumber *)indentation
{
	gtk_tree_view_set_level_indentation ([self TREE_VIEW], [indentation intValue]);
}

-(NSNumber *)getLevelIndentation
{
	return [NSNumber numberWithInt:gtk_tree_view_get_level_indentation ([self TREE_VIEW])];
}

-(void)setTooltipRowWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path
{
	gtk_tree_view_set_tooltip_row ([self TREE_VIEW], tooltip, path);
}

-(void)setTooltipCellWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path andColumn:(GtkTreeViewColumn *)column andCell:(GtkCellRenderer *)cell
{
	gtk_tree_view_set_tooltip_cell ([self TREE_VIEW], tooltip, path, column, cell);
}

-(BOOL)getTooltipContextWithX:(NSNumber **)x andY:(NSNumber **)y andKeyboardTip:(BOOL)keyboardTip andModel:(GtkTreeModel **)model andPath:(GtkTreePath **)path andIter:(GtkTreeIter *)iter
{
	BOOL toReturn;
	gint gX = [*x intValue];
	gint gY = [*y intValue];

	toReturn = [CGTK getBOOL:gtk_tree_view_get_tooltip_context ([self TREE_VIEW], &gX, &gY, [CGTK getGboolean:keyboardTip], model, path, iter)];
	
	[*x release];
	[*y release];
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
	return toReturn;
}

-(void)setTooltipColumn:(NSNumber *)column
{
	gtk_tree_view_set_tooltip_column ([self TREE_VIEW], [column intValue]);
}

-(NSNumber *)getTooltipColumn
{
	return [NSNumber numberWithInt:gtk_tree_view_get_tooltip_column ([self TREE_VIEW])];
}

@end
