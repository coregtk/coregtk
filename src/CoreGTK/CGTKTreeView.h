/*
 * CGTKTreeView.h
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

@interface CGTKTreeView : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithModel:(GtkTreeModel*) model;

/**
 * Methods
 */

-(GtkTreeView*)TREEVIEW;

/**
 * -(gint*)appendColumn:(GtkTreeViewColumn*) column;
 *
 * @param column
 * @returns gint
 */
-(gint)appendColumn:(GtkTreeViewColumn*) column;

/**
 * -(void*)collapseAll;
 *
 */
-(void)collapseAll;

/**
 * -(BOOL*)collapseRow:(GtkTreePath*) path;
 *
 * @param path
 * @returns BOOL
 */
-(BOOL)collapseRow:(GtkTreePath*) path;

/**
 * -(void*)columnsAutosize;
 *
 */
-(void)columnsAutosize;

/**
 * -(void*)convertBinWindowToTreeCoordsWithBx:(gint) bx andBy:(gint) by andTx:(gint*) tx andTy:(gint*) ty;
 *
 * @param bx
 * @param by
 * @param tx
 * @param ty
 */
-(void)convertBinWindowToTreeCoordsWithBx:(gint) bx andBy:(gint) by andTx:(gint*) tx andTy:(gint*) ty;

/**
 * -(void*)convertBinWindowToWidgetCoordsWithBx:(gint) bx andBy:(gint) by andWx:(gint*) wx andWy:(gint*) wy;
 *
 * @param bx
 * @param by
 * @param wx
 * @param wy
 */
-(void)convertBinWindowToWidgetCoordsWithBx:(gint) bx andBy:(gint) by andWx:(gint*) wx andWy:(gint*) wy;

/**
 * -(void*)convertTreeToBinWindowCoordsWithTx:(gint) tx andTy:(gint) ty andBx:(gint*) bx andBy:(gint*) by;
 *
 * @param tx
 * @param ty
 * @param bx
 * @param by
 */
-(void)convertTreeToBinWindowCoordsWithTx:(gint) tx andTy:(gint) ty andBx:(gint*) bx andBy:(gint*) by;

/**
 * -(void*)convertTreeToWidgetCoordsWithTx:(gint) tx andTy:(gint) ty andWx:(gint*) wx andWy:(gint*) wy;
 *
 * @param tx
 * @param ty
 * @param wx
 * @param wy
 */
-(void)convertTreeToWidgetCoordsWithTx:(gint) tx andTy:(gint) ty andWx:(gint*) wx andWy:(gint*) wy;

/**
 * -(void*)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by;
 *
 * @param wx
 * @param wy
 * @param bx
 * @param by
 */
-(void)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by;

/**
 * -(void*)convertWidgetToTreeCoordsWithWx:(gint) wx andWy:(gint) wy andTx:(gint*) tx andTy:(gint*) ty;
 *
 * @param wx
 * @param wy
 * @param tx
 * @param ty
 */
-(void)convertWidgetToTreeCoordsWithWx:(gint) wx andWy:(gint) wy andTx:(gint*) tx andTy:(gint*) ty;

/**
 * -(cairo_surface_t**)createRowDragIcon:(GtkTreePath*) path;
 *
 * @param path
 * @returns cairo_surface_t*
 */
-(cairo_surface_t*)createRowDragIcon:(GtkTreePath*) path;

/**
 * -(void*)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
 *
 * @param targets
 * @param ntargets
 * @param actions
 */
-(void)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;

/**
 * -(void*)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
 *
 * @param startButtonMask
 * @param targets
 * @param ntargets
 * @param actions
 */
-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;

/**
 * -(void*)expandAll;
 *
 */
-(void)expandAll;

/**
 * -(BOOL*)expandRowWithPath:(GtkTreePath*) path andOpenAll:(BOOL) openAll;
 *
 * @param path
 * @param openAll
 * @returns BOOL
 */
-(BOOL)expandRowWithPath:(GtkTreePath*) path andOpenAll:(BOOL) openAll;

/**
 * -(void*)expandToPath:(GtkTreePath*) path;
 *
 * @param path
 */
-(void)expandToPath:(GtkTreePath*) path;

/**
 * -(BOOL*)getActivateOnSingleClick;
 *
 * @returns BOOL
 */
-(BOOL)getActivateOnSingleClick;

/**
 * -(void*)getBackgroundAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;
 *
 * @param path
 * @param column
 * @param rect
 */
-(void)getBackgroundAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;

/**
 * -(GdkWindow**)getBinWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getBinWindow;

/**
 * -(void*)getCellAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;
 *
 * @param path
 * @param column
 * @param rect
 */
-(void)getCellAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;

/**
 * -(GtkTreeViewColumn**)getColumn:(gint) n;
 *
 * @param n
 * @returns GtkTreeViewColumn*
 */
-(GtkTreeViewColumn*)getColumn:(gint) n;

/**
 * -(GList**)getColumns;
 *
 * @returns GList*
 */
-(GList*)getColumns;

/**
 * -(void*)getCursorWithPath:(GtkTreePath**) path andFocusColumn:(GtkTreeViewColumn**) focusColumn;
 *
 * @param path
 * @param focusColumn
 */
-(void)getCursorWithPath:(GtkTreePath**) path andFocusColumn:(GtkTreeViewColumn**) focusColumn;

/**
 * -(BOOL*)getDestRowAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;
 *
 * @param dragX
 * @param dragY
 * @param path
 * @param pos
 * @returns BOOL
 */
-(BOOL)getDestRowAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;

/**
 * -(void*)getDragDestRowWithPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;
 *
 * @param path
 * @param pos
 */
-(void)getDragDestRowWithPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;

/**
 * -(BOOL*)getEnableSearch;
 *
 * @returns BOOL
 */
-(BOOL)getEnableSearch;

/**
 * -(BOOL*)getEnableTreeLines;
 *
 * @returns BOOL
 */
-(BOOL)getEnableTreeLines;

/**
 * -(GtkTreeViewColumn**)getExpanderColumn;
 *
 * @returns GtkTreeViewColumn*
 */
-(GtkTreeViewColumn*)getExpanderColumn;

/**
 * -(BOOL*)getFixedHeightMode;
 *
 * @returns BOOL
 */
-(BOOL)getFixedHeightMode;

/**
 * -(GtkTreeViewGridLines*)getGridLines;
 *
 * @returns GtkTreeViewGridLines
 */
-(GtkTreeViewGridLines)getGridLines;

/**
 * -(GtkAdjustment**)getHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getHadjustment;

/**
 * -(BOOL*)getHeadersClickable;
 *
 * @returns BOOL
 */
-(BOOL)getHeadersClickable;

/**
 * -(BOOL*)getHeadersVisible;
 *
 * @returns BOOL
 */
-(BOOL)getHeadersVisible;

/**
 * -(BOOL*)getHoverExpand;
 *
 * @returns BOOL
 */
-(BOOL)getHoverExpand;

/**
 * -(BOOL*)getHoverSelection;
 *
 * @returns BOOL
 */
-(BOOL)getHoverSelection;

/**
 * -(gint*)getLevelIndentation;
 *
 * @returns gint
 */
-(gint)getLevelIndentation;

/**
 * -(GtkTreeModel**)getModel;
 *
 * @returns GtkTreeModel*
 */
-(GtkTreeModel*)getModel;

/**
 * -(guint*)getNcolumns;
 *
 * @returns guint
 */
-(guint)getNcolumns;

/**
 * -(BOOL*)getPathAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;
 *
 * @param x
 * @param y
 * @param path
 * @param column
 * @param cellX
 * @param cellY
 * @returns BOOL
 */
-(BOOL)getPathAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;

/**
 * -(BOOL*)getReorderable;
 *
 * @returns BOOL
 */
-(BOOL)getReorderable;

/**
 * -(GtkTreeViewRowSeparatorFunc*)getRowSeparatorFunc;
 *
 * @returns GtkTreeViewRowSeparatorFunc
 */
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;

/**
 * -(BOOL*)getRubberBanding;
 *
 * @returns BOOL
 */
-(BOOL)getRubberBanding;

/**
 * -(BOOL*)getRulesHint;
 *
 * @returns BOOL
 */
-(BOOL)getRulesHint;

/**
 * -(gint*)getSearchColumn;
 *
 * @returns gint
 */
-(gint)getSearchColumn;

/**
 * -(GtkEntry**)getSearchEntry;
 *
 * @returns GtkEntry*
 */
-(GtkEntry*)getSearchEntry;

/**
 * -(GtkTreeViewSearchEqualFunc*)getSearchEqualFunc;
 *
 * @returns GtkTreeViewSearchEqualFunc
 */
-(GtkTreeViewSearchEqualFunc)getSearchEqualFunc;

/**
 * -(GtkTreeViewSearchPositionFunc*)getSearchPositionFunc;
 *
 * @returns GtkTreeViewSearchPositionFunc
 */
-(GtkTreeViewSearchPositionFunc)getSearchPositionFunc;

/**
 * -(GtkTreeSelection**)getSelection;
 *
 * @returns GtkTreeSelection*
 */
-(GtkTreeSelection*)getSelection;

/**
 * -(BOOL*)getShowExpanders;
 *
 * @returns BOOL
 */
-(BOOL)getShowExpanders;

/**
 * -(gint*)getTooltipColumn;
 *
 * @returns gint
 */
-(gint)getTooltipColumn;

/**
 * -(BOOL*)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter;
 *
 * @param x
 * @param y
 * @param keyboardTip
 * @param model
 * @param path
 * @param iter
 * @returns BOOL
 */
-(BOOL)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter;

/**
 * -(GtkAdjustment**)getVadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getVadjustment;

/**
 * -(BOOL*)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;
 *
 * @param startPath
 * @param endPath
 * @returns BOOL
 */
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;

/**
 * -(void*)getVisibleRect:(GdkRectangle*) visibleRect;
 *
 * @param visibleRect
 */
-(void)getVisibleRect:(GdkRectangle*) visibleRect;

/**
 * -(gint*)insertColumnWithColumn:(GtkTreeViewColumn*) column andPosition:(gint) position;
 *
 * @param column
 * @param position
 * @returns gint
 */
-(gint)insertColumnWithColumn:(GtkTreeViewColumn*) column andPosition:(gint) position;

/**
 * -(gint*)insertColumnWithDataFuncWithPosition:(gint) position andTitle:(NSString*) title andCell:(GtkCellRenderer*) cell andFunc:(GtkTreeCellDataFunc) func andData:(gpointer) data andDnotify:(GDestroyNotify) dnotify;
 *
 * @param position
 * @param title
 * @param cell
 * @param func
 * @param data
 * @param dnotify
 * @returns gint
 */
-(gint)insertColumnWithDataFuncWithPosition:(gint) position andTitle:(NSString*) title andCell:(GtkCellRenderer*) cell andFunc:(GtkTreeCellDataFunc) func andData:(gpointer) data andDnotify:(GDestroyNotify) dnotify;

/**
 * -(BOOL*)isBlankAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;
 *
 * @param x
 * @param y
 * @param path
 * @param column
 * @param cellX
 * @param cellY
 * @returns BOOL
 */
-(BOOL)isBlankAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;

/**
 * -(BOOL*)isRubberBandingActive;
 *
 * @returns BOOL
 */
-(BOOL)isRubberBandingActive;

/**
 * -(void*)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc) func andData:(gpointer) data;
 *
 * @param func
 * @param data
 */
-(void)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc) func andData:(gpointer) data;

/**
 * -(void*)moveColumnAfterWithColumn:(GtkTreeViewColumn*) column andBaseColumn:(GtkTreeViewColumn*) baseColumn;
 *
 * @param column
 * @param baseColumn
 */
-(void)moveColumnAfterWithColumn:(GtkTreeViewColumn*) column andBaseColumn:(GtkTreeViewColumn*) baseColumn;

/**
 * -(gint*)removeColumn:(GtkTreeViewColumn*) column;
 *
 * @param column
 * @returns gint
 */
-(gint)removeColumn:(GtkTreeViewColumn*) column;

/**
 * -(void*)rowActivatedWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column;
 *
 * @param path
 * @param column
 */
-(void)rowActivatedWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column;

/**
 * -(BOOL*)rowExpanded:(GtkTreePath*) path;
 *
 * @param path
 * @returns BOOL
 */
-(BOOL)rowExpanded:(GtkTreePath*) path;

/**
 * -(void*)scrollToCellWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;
 *
 * @param path
 * @param column
 * @param useAlign
 * @param rowAlign
 * @param colAlign
 */
-(void)scrollToCellWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;

/**
 * -(void*)scrollToPointWithTreeX:(gint) treeX andTreeY:(gint) treeY;
 *
 * @param treeX
 * @param treeY
 */
-(void)scrollToPointWithTreeX:(gint) treeX andTreeY:(gint) treeY;

/**
 * -(void*)setActivateOnSingleClick:(BOOL) single;
 *
 * @param single
 */
-(void)setActivateOnSingleClick:(BOOL) single;

/**
 * -(void*)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc) func andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param userData
 * @param destroy
 */
-(void)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc) func andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setCursorWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andStartEditing:(BOOL) startEditing;
 *
 * @param path
 * @param focusColumn
 * @param startEditing
 */
-(void)setCursorWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andStartEditing:(BOOL) startEditing;

/**
 * -(void*)setCursorOnCellWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andFocusCell:(GtkCellRenderer*) focusCell andStartEditing:(BOOL) startEditing;
 *
 * @param path
 * @param focusColumn
 * @param focusCell
 * @param startEditing
 */
-(void)setCursorOnCellWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andFocusCell:(GtkCellRenderer*) focusCell andStartEditing:(BOOL) startEditing;

/**
 * -(void*)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param data
 * @param destroy
 */
-(void)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setDragDestRowWithPath:(GtkTreePath*) path andPos:(GtkTreeViewDropPosition) pos;
 *
 * @param path
 * @param pos
 */
-(void)setDragDestRowWithPath:(GtkTreePath*) path andPos:(GtkTreeViewDropPosition) pos;

/**
 * -(void*)setEnableSearch:(BOOL) enableSearch;
 *
 * @param enableSearch
 */
-(void)setEnableSearch:(BOOL) enableSearch;

/**
 * -(void*)setEnableTreeLines:(BOOL) enabled;
 *
 * @param enabled
 */
-(void)setEnableTreeLines:(BOOL) enabled;

/**
 * -(void*)setExpanderColumn:(GtkTreeViewColumn*) column;
 *
 * @param column
 */
-(void)setExpanderColumn:(GtkTreeViewColumn*) column;

/**
 * -(void*)setFixedHeightMode:(BOOL) enable;
 *
 * @param enable
 */
-(void)setFixedHeightMode:(BOOL) enable;

/**
 * -(void*)setGridLines:(GtkTreeViewGridLines) gridLines;
 *
 * @param gridLines
 */
-(void)setGridLines:(GtkTreeViewGridLines) gridLines;

/**
 * -(void*)setHadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setHadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setHeadersClickable:(BOOL) setting;
 *
 * @param setting
 */
-(void)setHeadersClickable:(BOOL) setting;

/**
 * -(void*)setHeadersVisible:(BOOL) headersVisible;
 *
 * @param headersVisible
 */
-(void)setHeadersVisible:(BOOL) headersVisible;

/**
 * -(void*)setHoverExpand:(BOOL) expand;
 *
 * @param expand
 */
-(void)setHoverExpand:(BOOL) expand;

/**
 * -(void*)setHoverSelection:(BOOL) hover;
 *
 * @param hover
 */
-(void)setHoverSelection:(BOOL) hover;

/**
 * -(void*)setLevelIndentation:(gint) indentation;
 *
 * @param indentation
 */
-(void)setLevelIndentation:(gint) indentation;

/**
 * -(void*)setModel:(GtkTreeModel*) model;
 *
 * @param model
 */
-(void)setModel:(GtkTreeModel*) model;

/**
 * -(void*)setReorderable:(BOOL) reorderable;
 *
 * @param reorderable
 */
-(void)setReorderable:(BOOL) reorderable;

/**
 * -(void*)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param data
 * @param destroy
 */
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setRubberBanding:(BOOL) enable;
 *
 * @param enable
 */
-(void)setRubberBanding:(BOOL) enable;

/**
 * -(void*)setRulesHint:(BOOL) setting;
 *
 * @param setting
 */
-(void)setRulesHint:(BOOL) setting;

/**
 * -(void*)setSearchColumn:(gint) column;
 *
 * @param column
 */
-(void)setSearchColumn:(gint) column;

/**
 * -(void*)setSearchEntry:(GtkEntry*) entry;
 *
 * @param entry
 */
-(void)setSearchEntry:(GtkEntry*) entry;

/**
 * -(void*)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc) searchEqualFunc andSearchUserData:(gpointer) searchUserData andSearchDestroy:(GDestroyNotify) searchDestroy;
 *
 * @param searchEqualFunc
 * @param searchUserData
 * @param searchDestroy
 */
-(void)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc) searchEqualFunc andSearchUserData:(gpointer) searchUserData andSearchDestroy:(GDestroyNotify) searchDestroy;

/**
 * -(void*)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param data
 * @param destroy
 */
-(void)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setShowExpanders:(BOOL) enabled;
 *
 * @param enabled
 */
-(void)setShowExpanders:(BOOL) enabled;

/**
 * -(void*)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andCell:(GtkCellRenderer*) cell;
 *
 * @param tooltip
 * @param path
 * @param column
 * @param cell
 */
-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andCell:(GtkCellRenderer*) cell;

/**
 * -(void*)setTooltipColumn:(gint) column;
 *
 * @param column
 */
-(void)setTooltipColumn:(gint) column;

/**
 * -(void*)setTooltipRowWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;
 *
 * @param tooltip
 * @param path
 */
-(void)setTooltipRowWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;

/**
 * -(void*)setVadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setVadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)unsetRowsDragDest;
 *
 */
-(void)unsetRowsDragDest;

/**
 * -(void*)unsetRowsDragSource;
 *
 */
-(void)unsetRowsDragSource;

@end