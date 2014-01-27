/*
 * CGTKIconView.m
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

#import "CGTKIconView.h"

@implementation CGTKIconView

-(GtkIconView *)ICON_VIEW
{
	return GTK_ICON_VIEW([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_icon_view_new ()];

	if(self)
	{

	}

	return self;
}

-(id)initWithModel:(GtkTreeModel *)model
{
	self = [super initWithGtkWidget: gtk_icon_view_new_with_model (model)];

	if(self)
	{

	}

	return self;
}

-(void)setModel:(GtkTreeModel *)model
{
	gtk_icon_view_set_model ([self ICON_VIEW], model);
}

-(GtkTreeModel *)getModel
{
	return gtk_icon_view_get_model ([self ICON_VIEW]);
}

-(void)setTextColumn:(NSNumber *)column
{
	gtk_icon_view_set_text_column ([self ICON_VIEW], [column intValue]);
}

-(NSNumber *)getTextColumn
{
	return [NSNumber numberWithInt:gtk_icon_view_get_text_column ([self ICON_VIEW])];
}

-(void)setMarkupColumn:(NSNumber *)column
{
	gtk_icon_view_set_markup_column ([self ICON_VIEW], [column intValue]);
}

-(NSNumber *)getMarkupColumn
{
	return [NSNumber numberWithInt:gtk_icon_view_get_markup_column ([self ICON_VIEW])];
}

-(void)setPixbufColumn:(NSNumber *)column
{
	gtk_icon_view_set_pixbuf_column ([self ICON_VIEW], [column intValue]);
}

-(NSNumber *)getPixbufColumn
{
	return [NSNumber numberWithInt:gtk_icon_view_get_pixbuf_column ([self ICON_VIEW])];
}

-(void)setItemOrientation:(GtkOrientation)orientation
{
	gtk_icon_view_set_item_orientation ([self ICON_VIEW], orientation);
}

-(GtkOrientation)getItemOrientation
{
	return gtk_icon_view_get_item_orientation ([self ICON_VIEW]);
}

-(void)setColumns:(NSNumber *)columns
{
	gtk_icon_view_set_columns ([self ICON_VIEW], [columns intValue]);
}

-(NSNumber *)getColumns
{
	return [NSNumber numberWithInt:gtk_icon_view_get_columns ([self ICON_VIEW])];
}

-(void)setItemWidth:(NSNumber *)itemWidth
{
	gtk_icon_view_set_item_width ([self ICON_VIEW], [itemWidth intValue]);
}

-(NSNumber *)getItemWidth
{
	return [NSNumber numberWithInt:gtk_icon_view_get_item_width ([self ICON_VIEW])];
}

-(void)setSpacing:(NSNumber *)spacing
{
	gtk_icon_view_set_spacing ([self ICON_VIEW], [spacing intValue]);
}

-(NSNumber *)getSpacing
{
	return [NSNumber numberWithInt:gtk_icon_view_get_spacing ([self ICON_VIEW])];
}

-(void)setRowSpacing:(NSNumber *)rowSpacing
{
	gtk_icon_view_set_row_spacing ([self ICON_VIEW], [rowSpacing intValue]);
}

-(NSNumber *)getRowSpacing
{
	return [NSNumber numberWithInt:gtk_icon_view_get_row_spacing ([self ICON_VIEW])];
}

-(void)setColumnSpacing:(NSNumber *)columnSpacing
{
	gtk_icon_view_set_column_spacing ([self ICON_VIEW], [columnSpacing intValue]);
}

-(NSNumber *)getColumnSpacing
{
	return [NSNumber numberWithInt:gtk_icon_view_get_column_spacing ([self ICON_VIEW])];
}

-(void)setMargin:(NSNumber *)margin
{
	gtk_icon_view_set_margin ([self ICON_VIEW], [margin intValue]);
}

-(NSNumber *)getMargin
{
	return [NSNumber numberWithInt:gtk_icon_view_get_margin ([self ICON_VIEW])];
}

-(void)setItemPadding:(NSNumber *)itemPadding
{
	gtk_icon_view_set_item_padding ([self ICON_VIEW], [itemPadding intValue]);
}

-(NSNumber *)getItemPadding
{
	return [NSNumber numberWithInt:gtk_icon_view_get_item_padding ([self ICON_VIEW])];
}

-(GtkTreePath *)getPathAtPosWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return gtk_icon_view_get_path_at_pos ([self ICON_VIEW], [x intValue], [y intValue]);
}

-(BOOL)getItemAtPosWithX:(NSNumber *)x andY:(NSNumber *)y andPath:(GtkTreePath **)path andCell:(GtkCellRenderer **)cell
{
	return [CGTK getBOOL:gtk_icon_view_get_item_at_pos ([self ICON_VIEW], [x intValue], [y intValue], path, cell)];
}

-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath **)startPath andEndPath:(GtkTreePath **)endPath
{
	return [CGTK getGboolean:gtk_icon_view_get_visible_range ([self ICON_VIEW], startPath, endPath)];
}

-(void)selectedForeachWithFunc:(GtkIconViewForeachFunc)func andData:(gpointer)data
{
	gtk_icon_view_selected_foreach ([self ICON_VIEW], func, data);
}

-(void)setSelectionMode:(GtkSelectionMode)mode
{
	gtk_icon_view_set_selection_mode ([self ICON_VIEW], mode);
}

-(GtkSelectionMode)getSelectionMode
{
	return  gtk_icon_view_get_selection_mode ([self ICON_VIEW]);
}

-(void)selectPath:(GtkTreePath *)path
{
	gtk_icon_view_select_path ([self ICON_VIEW], path);
}

-(void)unselectPath:(GtkTreePath *)path
{
	gtk_icon_view_unselect_path ([self ICON_VIEW], path);
}

-(BOOL)pathIsSelected:(GtkTreePath *)path
{
	return [CGTK getBOOL:gtk_icon_view_path_is_selected ([self ICON_VIEW], path)];
}

-(NSNumber *)getItemRow:(GtkTreePath *)path
{
	return [NSNumber numberWithInt:gtk_icon_view_get_item_row ([self ICON_VIEW], path)];
}

-(NSNumber *)getItemColumn:(GtkTreePath *)path
{
	return [NSNumber numberWithInt:gtk_icon_view_get_item_column ([self ICON_VIEW], path)];
}

-(GList *)getSelectedItems
{
	return gtk_icon_view_get_selected_items ([self ICON_VIEW]);
}

-(void)selectAll
{
	gtk_icon_view_select_all ([self ICON_VIEW]);
}

-(void)unselectAll
{
	gtk_icon_view_unselect_all ([self ICON_VIEW]);
}

-(void)itemActivated:(GtkTreePath *)path
{
	gtk_icon_view_item_activated ([self ICON_VIEW], path);
}

-(void)setCursorWithPath:(GtkTreePath *)path andCell:(GtkCellRenderer *)cell andStartEditing:(BOOL)startEditing
{
	gtk_icon_view_set_cursor ([self ICON_VIEW], path, cell, [CGTK getGboolean:startEditing]);
}

-(BOOL)getCursorWithPath:(GtkTreePath **)path andCell:(GtkCellRenderer **)cell
{
	return [CGTK getBOOL:gtk_icon_view_get_cursor ([self ICON_VIEW], path, cell)];
}

-(void)scrollToPathWithPath:(GtkTreePath *)path andUseAlign:(BOOL)useAlign andRowAlign:(NSNumber *)rowAlign andColAlign:(NSNumber *)colAlign
{
	gtk_icon_view_scroll_to_path ([self ICON_VIEW], path, [CGTK getGboolean:useAlign], [rowAlign floatValue], [colAlign floatValue]);
}

-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType)startButtonMask andTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions
{
	gtk_icon_view_enable_model_drag_source ([self ICON_VIEW], startButtonMask, targets, [nTargets intValue], actions);
}

-(void)enableModelDragDestWithTargets:(const GtkTargetEntry *)targets andNTargets:(NSNumber *)nTargets andActions:(GdkDragAction)actions
{
	gtk_icon_view_enable_model_drag_dest ([self ICON_VIEW], targets, [nTargets intValue], actions);
}

-(void)unsetModelDragSource
{
	gtk_icon_view_unset_model_drag_source ([self ICON_VIEW]);
}

-(void)unsetModelDragDest
{
	gtk_icon_view_unset_model_drag_dest ([self ICON_VIEW]);
}

-(void)setReorderable:(BOOL)reorderable
{
	gtk_icon_view_set_reorderable ([self ICON_VIEW], [CGTK getGboolean:reorderable]);
}

-(BOOL)getReorderable
{
	return [CGTK getBOOL:gtk_icon_view_get_reorderable ([self ICON_VIEW])];
}

-(void)setDragDestItemWithPath:(GtkTreePath *)path andPos:(GtkIconViewDropPosition)pos
{
	gtk_icon_view_set_drag_dest_item ([self ICON_VIEW], path, pos);
}

-(void)getDragDestItemWithPath:(GtkTreePath **)path andPos:(GtkIconViewDropPosition *)pos
{
	gtk_icon_view_get_drag_dest_item ([self ICON_VIEW], path, pos);
}

-(BOOL)getDestItemAtPosWithDragX:(NSNumber *)dragX andDragY:(NSNumber *)dragY andPath:(GtkTreePath **)path andPos:(GtkIconViewDropPosition *)pos
{
	return [CGTK getBOOL:gtk_icon_view_get_dest_item_at_pos ([self ICON_VIEW], [dragX intValue], [dragY intValue], path, pos)];
}

-(GdkPixmap*)createDragIcon:(GtkTreePath *)path
{
	return gtk_icon_view_create_drag_icon ([self ICON_VIEW], path);
}

-(void)convertWidgetToBinWindowCoordsWithWx:(NSNumber *)wx andWy:(NSNumber *)wy andBx:(NSNumber **)bx andBy:(NSNumber **)by
{
	gint gBx;
	gint gBy;
	
	gtk_icon_view_convert_widget_to_bin_window_coords ([self ICON_VIEW], [wx intValue], [wy intValue], &gBx, &gBy);
	
	*bx = [NSNumber numberWithInt:gBx];
	*by = [NSNumber numberWithInt:gBy];
}

-(void)setTooltipItemWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path
{
	gtk_icon_view_set_tooltip_item ([self ICON_VIEW], tooltip, path);
}

-(void)setTooltipCellWithTooltip:(GtkTooltip *)tooltip andPath:(GtkTreePath *)path andCell:(GtkCellRenderer *)cell
{
	gtk_icon_view_set_tooltip_cell ([self ICON_VIEW], tooltip, path, cell);
}

-(BOOL)getTooltipContextWithX:(NSNumber **)x andY:(NSNumber **)y andKeyboardTip:(BOOL)keyboardTip andModel:(GtkTreeModel **)model andPath:(GtkTreePath **)path andIter:(GtkTreeIter *)iter
{
	BOOL result;
	gint gX;
	gint gY;
	
	result = [CGTK getGboolean:gtk_icon_view_get_tooltip_context ([self ICON_VIEW], &gX, &gY, [CGTK getGboolean:keyboardTip], model, path, iter)];
	
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
	
	return result;
}

-(void)setTooltipColumn:(NSNumber *)column
{
	gtk_icon_view_set_tooltip_column ([self ICON_VIEW], [column intValue]);
}

-(NSNumber *)getTooltipColumn
{
	return [NSNumber numberWithInt:gtk_icon_view_get_tooltip_column ([self ICON_VIEW])];
}

@end
