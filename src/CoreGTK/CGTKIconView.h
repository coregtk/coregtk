/*
 * CGTKIconView.h
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
-(void)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by;
-(cairo_surface_t*)createDragIcon:(GtkTreePath*) path;
-(void)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(BOOL)getActivateOnSingleClick;
-(BOOL)getCellRectWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andRect:(GdkRectangle*) rect;
-(gint)getColumnSpacing;
-(gint)getColumns;
-(BOOL)getCursorWithPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;
-(BOOL)getDestItemAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;
-(void)getDragDestItemWithPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos;
-(BOOL)getItemAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell;
-(gint)getItemColumn:(GtkTreePath*) path;
-(GtkOrientation)getItemOrientation;
-(gint)getItemPadding;
-(gint)getItemRow:(GtkTreePath*) path;
-(gint)getItemWidth;
-(gint)getMargin;
-(gint)getMarkupColumn;
-(GtkTreeModel*)getModel;
-(GtkTreePath*)getPathAtPosWithX:(gint) x andY:(gint) y;
-(gint)getPixbufColumn;
-(BOOL)getReorderable;
-(gint)getRowSpacing;
-(GList*)getSelectedItems;
-(GtkSelectionMode)getSelectionMode;
-(gint)getSpacing;
-(gint)getTextColumn;
-(gint)getTooltipColumn;
-(BOOL)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter;
-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath;
-(void)itemActivated:(GtkTreePath*) path;
-(BOOL)pathIsSelected:(GtkTreePath*) path;
-(void)scrollToPathWithPath:(GtkTreePath*) path andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign;
-(void)selectAll;
-(void)selectPath:(GtkTreePath*) path;
-(void)selectedForeachWithFunc:(GtkIconViewForeachFunc) func andData:(gpointer) data;
-(void)setActivateOnSingleClick:(BOOL) single;
-(void)setColumnSpacing:(gint) columnSpacing;
-(void)setColumns:(gint) columns;
-(void)setCursorWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andStartEditing:(BOOL) startEditing;
-(void)setDragDestItemWithPath:(GtkTreePath*) path andPos:(GtkIconViewDropPosition) pos;
-(void)setItemOrientation:(GtkOrientation) orientation;
-(void)setItemPadding:(gint) itemPadding;
-(void)setItemWidth:(gint) itemWidth;
-(void)setMargin:(gint) margin;
-(void)setMarkupColumn:(gint) column;
-(void)setModel:(GtkTreeModel*) model;
-(void)setPixbufColumn:(gint) column;
-(void)setReorderable:(BOOL) reorderable;
-(void)setRowSpacing:(gint) rowSpacing;
-(void)setSelectionMode:(GtkSelectionMode) mode;
-(void)setSpacing:(gint) spacing;
-(void)setTextColumn:(gint) column;
-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell;
-(void)setTooltipColumn:(gint) column;
-(void)setTooltipItemWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path;
-(void)unselectAll;
-(void)unselectPath:(GtkTreePath*) path;
-(void)unsetModelDragDest;
-(void)unsetModelDragSource;

@end