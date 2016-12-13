/*
 * CGTKIconView.h
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

@interface CGTKIconView : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithArea:(GtkCellArea*) area;
-(id)initWithModel:(GtkTreeModel*) model;

/**
 * Methods
 */

-(GtkIconView*)ICONVIEW;

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
 * -(cairo_surface_t**)createDragIcon:(GtkTreePath*) path;
 *
 * @param path
 * @returns cairo_surface_t*
 */
-(cairo_surface_t*)createDragIcon:(GtkTreePath*) path;

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
 * -(BOOL*)getActivateOnSingleClick;
 *
 * @returns BOOL
 */
-(BOOL)getActivateOnSingleClick;

/**
 * -(BOOL*)getCellRectWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andRect:(GdkRectangle*) rect;
 *
 * @param path
 * @param cell
 * @param rect
 * @returns BOOL
 */
-(BOOL)getCellRectWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andRect:(GdkRectangle*) rect;

/**
 * -(gint*)getColumnSpacing;
 *
 * @returns gint
 */
-(gint)getColumnSpacing;

/**
 * -(gint*)getColumns;
 *
 * @returns gint
 */
-(gint)getColumns;

/**
 * -(BOOL*)getCursorWithPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;
 *
 * @param path
 * @param cell
 * @returns BOOL
 */
-(BOOL)getCursorWithPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;

/**
 * -(BOOL*)getDestItemAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;
 *
 * @param dragX
 * @param dragY
 * @param path
 * @param pos
 * @returns BOOL
 */
-(BOOL)getDestItemAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;

/**
 * -(void*)getDragDestItemWithPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;
 *
 * @param path
 * @param pos
 */
-(void)getDragDestItemWithPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;

/**
 * -(BOOL*)getItemAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;
 *
 * @param x
 * @param y
 * @param path
 * @param cell
 * @returns BOOL
 */
-(BOOL)getItemAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;

/**
 * -(gint*)getItemColumn:(GtkTreePath*) path;
 *
 * @param path
 * @returns gint
 */
-(gint)getItemColumn:(GtkTreePath*) path;

/**
 * -(GtkOrientation*)getItemOrientation;
 *
 * @returns GtkOrientation
 */
-(GtkOrientation)getItemOrientation;

/**
 * -(gint*)getItemPadding;
 *
 * @returns gint
 */
-(gint)getItemPadding;

/**
 * -(gint*)getItemRow:(GtkTreePath*) path;
 *
 * @param path
 * @returns gint
 */
-(gint)getItemRow:(GtkTreePath*) path;

/**
 * -(gint*)getItemWidth;
 *
 * @returns gint
 */
-(gint)getItemWidth;

/**
 * -(gint*)getMargin;
 *
 * @returns gint
 */
-(gint)getMargin;

/**
 * -(gint*)getMarkupColumn;
 *
 * @returns gint
 */
-(gint)getMarkupColumn;

/**
 * -(GtkTreeModel**)getModel;
 *
 * @returns GtkTreeModel*
 */
-(GtkTreeModel*)getModel;

/**
 * -(GtkTreePath**)getPathAtPosWithX:(gint) x andY:(gint) y;
 *
 * @param x
 * @param y
 * @returns GtkTreePath*
 */
-(GtkTreePath*)getPathAtPosWithX:(gint) x andY:(gint) y;

/**
 * -(gint*)getPixbufColumn;
 *
 * @returns gint
 */
-(gint)getPixbufColumn;

/**
 * -(BOOL*)getReorderable;
 *
 * @returns BOOL
 */
-(BOOL)getReorderable;

/**
 * -(gint*)getRowSpacing;
 *
 * @returns gint
 */
-(gint)getRowSpacing;

/**
 * -(GList**)getSelectedItems;
 *
 * @returns GList*
 */
-(GList*)getSelectedItems;

/**
 * -(GtkSelectionMode*)getSelectionMode;
 *
 * @returns GtkSelectionMode
 */
-(GtkSelectionMode)getSelectionMode;

/**
 * -(gint*)getSpacing;
 *
 * @returns gint
 */
-(gint)getSpacing;

/**
 * -(gint*)getTextColumn;
 *
 * @returns gint
 */
-(gint)getTextColumn;

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
 * -(BOOL*)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;
 *
 * @param startPath
 * @param endPath
 * @returns BOOL
 */
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;

/**
 * -(void*)itemActivated:(GtkTreePath*) path;
 *
 * @param path
 */
-(void)itemActivated:(GtkTreePath*) path;

/**
 * -(BOOL*)pathIsSelected:(GtkTreePath*) path;
 *
 * @param path
 * @returns BOOL
 */
-(BOOL)pathIsSelected:(GtkTreePath*) path;

/**
 * -(void*)scrollToPathWithPath:(GtkTreePath*) path andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;
 *
 * @param path
 * @param useAlign
 * @param rowAlign
 * @param colAlign
 */
-(void)scrollToPathWithPath:(GtkTreePath*) path andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;

/**
 * -(void*)selectAll;
 *
 */
-(void)selectAll;

/**
 * -(void*)selectPath:(GtkTreePath*) path;
 *
 * @param path
 */
-(void)selectPath:(GtkTreePath*) path;

/**
 * -(void*)selectedForeachWithFunc:(GtkIconViewForeachFunc) func andData:(gpointer) data;
 *
 * @param func
 * @param data
 */
-(void)selectedForeachWithFunc:(GtkIconViewForeachFunc) func andData:(gpointer) data;

/**
 * -(void*)setActivateOnSingleClick:(BOOL) single;
 *
 * @param single
 */
-(void)setActivateOnSingleClick:(BOOL) single;

/**
 * -(void*)setColumnSpacing:(gint) columnSpacing;
 *
 * @param columnSpacing
 */
-(void)setColumnSpacing:(gint) columnSpacing;

/**
 * -(void*)setColumns:(gint) columns;
 *
 * @param columns
 */
-(void)setColumns:(gint) columns;

/**
 * -(void*)setCursorWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andStartEditing:(BOOL) startEditing;
 *
 * @param path
 * @param cell
 * @param startEditing
 */
-(void)setCursorWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andStartEditing:(BOOL) startEditing;

/**
 * -(void*)setDragDestItemWithPath:(GtkTreePath*) path andPos:(GtkIconViewDropPosition) pos;
 *
 * @param path
 * @param pos
 */
-(void)setDragDestItemWithPath:(GtkTreePath*) path andPos:(GtkIconViewDropPosition) pos;

/**
 * -(void*)setItemOrientation:(GtkOrientation) orientation;
 *
 * @param orientation
 */
-(void)setItemOrientation:(GtkOrientation) orientation;

/**
 * -(void*)setItemPadding:(gint) itemPadding;
 *
 * @param itemPadding
 */
-(void)setItemPadding:(gint) itemPadding;

/**
 * -(void*)setItemWidth:(gint) itemWidth;
 *
 * @param itemWidth
 */
-(void)setItemWidth:(gint) itemWidth;

/**
 * -(void*)setMargin:(gint) margin;
 *
 * @param margin
 */
-(void)setMargin:(gint) margin;

/**
 * -(void*)setMarkupColumn:(gint) column;
 *
 * @param column
 */
-(void)setMarkupColumn:(gint) column;

/**
 * -(void*)setModel:(GtkTreeModel*) model;
 *
 * @param model
 */
-(void)setModel:(GtkTreeModel*) model;

/**
 * -(void*)setPixbufColumn:(gint) column;
 *
 * @param column
 */
-(void)setPixbufColumn:(gint) column;

/**
 * -(void*)setReorderable:(BOOL) reorderable;
 *
 * @param reorderable
 */
-(void)setReorderable:(BOOL) reorderable;

/**
 * -(void*)setRowSpacing:(gint) rowSpacing;
 *
 * @param rowSpacing
 */
-(void)setRowSpacing:(gint) rowSpacing;

/**
 * -(void*)setSelectionMode:(GtkSelectionMode) mode;
 *
 * @param mode
 */
-(void)setSelectionMode:(GtkSelectionMode) mode;

/**
 * -(void*)setSpacing:(gint) spacing;
 *
 * @param spacing
 */
-(void)setSpacing:(gint) spacing;

/**
 * -(void*)setTextColumn:(gint) column;
 *
 * @param column
 */
-(void)setTextColumn:(gint) column;

/**
 * -(void*)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell;
 *
 * @param tooltip
 * @param path
 * @param cell
 */
-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell;

/**
 * -(void*)setTooltipColumn:(gint) column;
 *
 * @param column
 */
-(void)setTooltipColumn:(gint) column;

/**
 * -(void*)setTooltipItemWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;
 *
 * @param tooltip
 * @param path
 */
-(void)setTooltipItemWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;

/**
 * -(void*)unselectAll;
 *
 */
-(void)unselectAll;

/**
 * -(void*)unselectPath:(GtkTreePath*) path;
 *
 * @param path
 */
-(void)unselectPath:(GtkTreePath*) path;

/**
 * -(void*)unsetModelDragDest;
 *
 */
-(void)unsetModelDragDest;

/**
 * -(void*)unsetModelDragSource;
 *
 */
-(void)unsetModelDragSource;

@end
