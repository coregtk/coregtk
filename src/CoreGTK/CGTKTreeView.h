/*
 * CGTKTreeView.h
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
-(gint)appendColumn:(GtkTreeViewColumn*) column;
-(void)collapseAll;
-(BOOL)collapseRow:(GtkTreePath*) path;
-(void)columnsAutosize;
-(void)convertBinWindowToTreeCoordsWithBx:(gint) bx andBy:(gint) by andTx:(gint*) tx andTy:(gint*) ty;
-(void)convertBinWindowToWidgetCoordsWithBx:(gint) bx andBy:(gint) by andWx:(gint*) wx andWy:(gint*) wy;
-(void)convertTreeToBinWindowCoordsWithTx:(gint) tx andTy:(gint) ty andBx:(gint*) bx andBy:(gint*) by;
-(void)convertTreeToWidgetCoordsWithTx:(gint) tx andTy:(gint) ty andWx:(gint*) wx andWy:(gint*) wy;
-(void)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by;
-(void)convertWidgetToTreeCoordsWithWx:(gint) wx andWy:(gint) wy andTx:(gint*) tx andTy:(gint*) ty;
-(cairo_surface_t*)createRowDragIcon:(GtkTreePath*) path;
-(void)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(void)expandAll;
-(BOOL)expandRowWithPath:(GtkTreePath*) path andOpenAll:(BOOL) openAll;
-(void)expandToPath:(GtkTreePath*) path;
-(BOOL)getActivateOnSingleClick;
-(void)getBackgroundAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;
-(GdkWindow*)getBinWindow;
-(void)getCellAreaWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andRect:(GdkRectangle*) rect;
-(GtkTreeViewColumn*)getColumn:(gint) n;
-(GList*)getColumns;
-(void)getCursorWithPath:(GtkTreePath**) path andFocusColumn:(GtkTreeViewColumn**) focusColumn;
-(BOOL)getDestRowAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;
-(void)getDragDestRowWithPath:(GtkTreePath**) path andPos:(GtkTreeViewDropPosition*) pos;
-(BOOL)getEnableSearch;
-(BOOL)getEnableTreeLines;
-(GtkTreeViewColumn*)getExpanderColumn;
-(BOOL)getFixedHeightMode;
-(GtkTreeViewGridLines)getGridLines;
-(GtkAdjustment*)getHadjustment;
-(BOOL)getHeadersClickable;
-(BOOL)getHeadersVisible;
-(BOOL)getHoverExpand;
-(BOOL)getHoverSelection;
-(gint)getLevelIndentation;
-(GtkTreeModel*)getModel;
-(guint)getNcolumns;
-(BOOL)getPathAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;
-(BOOL)getReorderable;
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;
-(BOOL)getRubberBanding;
-(BOOL)getRulesHint;
-(gint)getSearchColumn;
-(GtkEntry*)getSearchEntry;
-(GtkTreeViewSearchEqualFunc)getSearchEqualFunc;
-(GtkTreeViewSearchPositionFunc)getSearchPositionFunc;
-(GtkTreeSelection*)getSelection;
-(BOOL)getShowExpanders;
-(gint)getTooltipColumn;
-(BOOL)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter;
-(GtkAdjustment*)getVadjustment;
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;
-(void)getVisibleRect:(GdkRectangle*) visibleRect;
-(gint)insertColumnWithColumn:(GtkTreeViewColumn*) column andPosition:(gint) position;
-(gint)insertColumnWithDataFuncWithPosition:(gint) position andTitle:(NSString*) title andCell:(GtkCellRenderer*) cell andFunc:(GtkTreeCellDataFunc) func andData:(gpointer) data andDnotify:(GDestroyNotify) dnotify;
-(BOOL)isBlankAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andColumn:(GtkTreeViewColumn**) column andCellX:(gint*) cellX andCellY:(gint*) cellY;
-(BOOL)isRubberBandingActive;
-(void)mapExpandedRowsWithFunc:(GtkTreeViewMappingFunc) func andData:(gpointer) data;
-(void)moveColumnAfterWithColumn:(GtkTreeViewColumn*) column andBaseColumn:(GtkTreeViewColumn*) baseColumn;
-(gint)removeColumn:(GtkTreeViewColumn*) column;
-(void)rowActivatedWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column;
-(BOOL)rowExpanded:(GtkTreePath*) path;
-(void)scrollToCellWithPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;
-(void)scrollToPointWithTreeX:(gint) treeX andTreeY:(gint) treeY;
-(void)setActivateOnSingleClick:(BOOL) single;
-(void)setColumnDragFunctionWithFunc:(GtkTreeViewColumnDropFunc) func andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
-(void)setCursorWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andStartEditing:(BOOL) startEditing;
-(void)setCursorOnCellWithPath:(GtkTreePath*) path andFocusColumn:(GtkTreeViewColumn*) focusColumn andFocusCell:(GtkCellRenderer*) focusCell andStartEditing:(BOOL) startEditing;
-(void)setDestroyCountFuncWithFunc:(GtkTreeDestroyCountFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setDragDestRowWithPath:(GtkTreePath*) path andPos:(GtkTreeViewDropPosition) pos;
-(void)setEnableSearch:(BOOL) enableSearch;
-(void)setEnableTreeLines:(BOOL) enabled;
-(void)setExpanderColumn:(GtkTreeViewColumn*) column;
-(void)setFixedHeightMode:(BOOL) enable;
-(void)setGridLines:(GtkTreeViewGridLines) gridLines;
-(void)setHadjustment:(GtkAdjustment*) adjustment;
-(void)setHeadersClickable:(BOOL) setting;
-(void)setHeadersVisible:(BOOL) headersVisible;
-(void)setHoverExpand:(BOOL) expand;
-(void)setHoverSelection:(BOOL) hover;
-(void)setLevelIndentation:(gint) indentation;
-(void)setModel:(GtkTreeModel*) model;
-(void)setReorderable:(BOOL) reorderable;
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setRubberBanding:(BOOL) enable;
-(void)setRulesHint:(BOOL) setting;
-(void)setSearchColumn:(gint) column;
-(void)setSearchEntry:(GtkEntry*) entry;
-(void)setSearchEqualFuncWithSearchEqualFunc:(GtkTreeViewSearchEqualFunc) searchEqualFunc andSearchUserData:(gpointer) searchUserData andSearchDestroy:(GDestroyNotify) searchDestroy;
-(void)setSearchPositionFuncWithFunc:(GtkTreeViewSearchPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setShowExpanders:(BOOL) enabled;
-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andColumn:(GtkTreeViewColumn*) column andCell:(GtkCellRenderer*) cell;
-(void)setTooltipColumn:(gint) column;
-(void)setTooltipRowWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;
-(void)setVadjustment:(GtkAdjustment*) adjustment;
-(void)unsetRowsDragDest;
-(void)unsetRowsDragSource;

@end