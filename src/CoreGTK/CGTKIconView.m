/*
 * CGTKIconView.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKIconView.h"

@implementation CGTKIconView

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_icon_view_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithArea:(GtkCellArea*) area
{
	self = [super initWithGObject:(GObject *)gtk_icon_view_new_with_area(area)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithModel:(GtkTreeModel*) model
{
	self = [super initWithGObject:(GObject *)gtk_icon_view_new_with_model(model)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkIconView*)ICONVIEW
{
	return GTK_ICON_VIEW([self GOBJECT]);
}

-(void)convertWidgetToBinWindowCoordsWithWx:(gint) wx andWy:(gint) wy andBx:(gint*) bx andBy:(gint*) by
{
	gtk_icon_view_convert_widget_to_bin_window_coords(GTK_ICON_VIEW([self GOBJECT]), wx, wy, bx, by);
}

-(cairo_surface_t*)createDragIcon:(GtkTreePath*) path
{
	return gtk_icon_view_create_drag_icon(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(void)enableModelDragDestWithTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_icon_view_enable_model_drag_dest(GTK_ICON_VIEW([self GOBJECT]), targets, ntargets, actions);
}

-(void)enableModelDragSourceWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_icon_view_enable_model_drag_source(GTK_ICON_VIEW([self GOBJECT]), startButtonMask, targets, ntargets, actions);
}

-(BOOL)getActivateOnSingleClick
{
	return (gtk_icon_view_get_activate_on_single_click(GTK_ICON_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getCellRectWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andRect:(GdkRectangle*) rect
{
	return (gtk_icon_view_get_cell_rect(GTK_ICON_VIEW([self GOBJECT]), path, cell, rect) ? YES : NO);
}

-(gint)getColumnSpacing
{
	return gtk_icon_view_get_column_spacing(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getColumns
{
	return gtk_icon_view_get_columns(GTK_ICON_VIEW([self GOBJECT]));
}

-(BOOL)getCursorWithPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell
{
	return (gtk_icon_view_get_cursor(GTK_ICON_VIEW([self GOBJECT]), path, cell) ? YES : NO);
}

-(BOOL)getDestItemAtPosWithDragX:(gint) dragX andDragY:(gint) dragY andPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos
{
	return (gtk_icon_view_get_dest_item_at_pos(GTK_ICON_VIEW([self GOBJECT]), dragX, dragY, path, pos) ? YES : NO);
}

-(void)getDragDestItemWithPath:(GtkTreePath**) path andPos:(GtkIconViewDropPosition*) pos
{
	gtk_icon_view_get_drag_dest_item(GTK_ICON_VIEW([self GOBJECT]), path, pos);
}

-(BOOL)getItemAtPosWithX:(gint) x andY:(gint) y andPath:(GtkTreePath**) path andCell:(GtkCellRenderer**) cell
{
	return (gtk_icon_view_get_item_at_pos(GTK_ICON_VIEW([self GOBJECT]), x, y, path, cell) ? YES : NO);
}

-(gint)getItemColumn:(GtkTreePath*) path
{
	return gtk_icon_view_get_item_column(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(GtkOrientation)getItemOrientation
{
	return gtk_icon_view_get_item_orientation(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getItemPadding
{
	return gtk_icon_view_get_item_padding(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getItemRow:(GtkTreePath*) path
{
	return gtk_icon_view_get_item_row(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(gint)getItemWidth
{
	return gtk_icon_view_get_item_width(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getMargin
{
	return gtk_icon_view_get_margin(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getMarkupColumn
{
	return gtk_icon_view_get_markup_column(GTK_ICON_VIEW([self GOBJECT]));
}

-(GtkTreeModel*)getModel
{
	return gtk_icon_view_get_model(GTK_ICON_VIEW([self GOBJECT]));
}

-(GtkTreePath*)getPathAtPosWithX:(gint) x andY:(gint) y
{
	return gtk_icon_view_get_path_at_pos(GTK_ICON_VIEW([self GOBJECT]), x, y);
}

-(gint)getPixbufColumn
{
	return gtk_icon_view_get_pixbuf_column(GTK_ICON_VIEW([self GOBJECT]));
}

-(BOOL)getReorderable
{
	return (gtk_icon_view_get_reorderable(GTK_ICON_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getRowSpacing
{
	return gtk_icon_view_get_row_spacing(GTK_ICON_VIEW([self GOBJECT]));
}

-(GList*)getSelectedItems
{
	return gtk_icon_view_get_selected_items(GTK_ICON_VIEW([self GOBJECT]));
}

-(GtkSelectionMode)getSelectionMode
{
	return gtk_icon_view_get_selection_mode(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getSpacing
{
	return gtk_icon_view_get_spacing(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getTextColumn
{
	return gtk_icon_view_get_text_column(GTK_ICON_VIEW([self GOBJECT]));
}

-(gint)getTooltipColumn
{
	return gtk_icon_view_get_tooltip_column(GTK_ICON_VIEW([self GOBJECT]));
}

-(BOOL)getTooltipContextWithX:(gint*) x andY:(gint*) y andKeyboardTip:(BOOL) keyboardTip andModel:(GtkTreeModel**) model andPath:(GtkTreePath**) path andIter:(GtkTreeIter*) iter
{
	return (gtk_icon_view_get_tooltip_context(GTK_ICON_VIEW([self GOBJECT]), x, y, (keyboardTip ? TRUE : FALSE), model, path, iter) ? YES : NO);
}

-(BOOL)getVisibleRangeWithStartPath:(GtkTreePath**) startPath andEndPath:(GtkTreePath**) endPath
{
	return (gtk_icon_view_get_visible_range(GTK_ICON_VIEW([self GOBJECT]), startPath, endPath) ? YES : NO);
}

-(void)itemActivated:(GtkTreePath*) path
{
	gtk_icon_view_item_activated(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(BOOL)pathIsSelected:(GtkTreePath*) path
{
	return (gtk_icon_view_path_is_selected(GTK_ICON_VIEW([self GOBJECT]), path) ? YES : NO);
}

-(void)scrollToPathWithPath:(GtkTreePath*) path andUseAlign:(BOOL) useAlign andRowAlign:(gfloat) rowAlign andColAlign:(gfloat) colAlign
{
	gtk_icon_view_scroll_to_path(GTK_ICON_VIEW([self GOBJECT]), path, (useAlign ? TRUE : FALSE), rowAlign, colAlign);
}

-(void)selectAll
{
	gtk_icon_view_select_all(GTK_ICON_VIEW([self GOBJECT]));
}

-(void)selectPath:(GtkTreePath*) path
{
	gtk_icon_view_select_path(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(void)selectedForeachWithFunc:(GtkIconViewForeachFunc) func andData:(gpointer) data
{
	gtk_icon_view_selected_foreach(GTK_ICON_VIEW([self GOBJECT]), func, data);
}

-(void)setActivateOnSingleClick:(BOOL) single
{
	gtk_icon_view_set_activate_on_single_click(GTK_ICON_VIEW([self GOBJECT]), (single ? TRUE : FALSE));
}

-(void)setColumnSpacing:(gint) columnSpacing
{
	gtk_icon_view_set_column_spacing(GTK_ICON_VIEW([self GOBJECT]), columnSpacing);
}

-(void)setColumns:(gint) columns
{
	gtk_icon_view_set_columns(GTK_ICON_VIEW([self GOBJECT]), columns);
}

-(void)setCursorWithPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell andStartEditing:(BOOL) startEditing
{
	gtk_icon_view_set_cursor(GTK_ICON_VIEW([self GOBJECT]), path, cell, (startEditing ? TRUE : FALSE));
}

-(void)setDragDestItemWithPath:(GtkTreePath*) path andPos:(GtkIconViewDropPosition) pos
{
	gtk_icon_view_set_drag_dest_item(GTK_ICON_VIEW([self GOBJECT]), path, pos);
}

-(void)setItemOrientation:(GtkOrientation) orientation
{
	gtk_icon_view_set_item_orientation(GTK_ICON_VIEW([self GOBJECT]), orientation);
}

-(void)setItemPadding:(gint) itemPadding
{
	gtk_icon_view_set_item_padding(GTK_ICON_VIEW([self GOBJECT]), itemPadding);
}

-(void)setItemWidth:(gint) itemWidth
{
	gtk_icon_view_set_item_width(GTK_ICON_VIEW([self GOBJECT]), itemWidth);
}

-(void)setMargin:(gint) margin
{
	gtk_icon_view_set_margin(GTK_ICON_VIEW([self GOBJECT]), margin);
}

-(void)setMarkupColumn:(gint) column
{
	gtk_icon_view_set_markup_column(GTK_ICON_VIEW([self GOBJECT]), column);
}

-(void)setModel:(GtkTreeModel*) model
{
	gtk_icon_view_set_model(GTK_ICON_VIEW([self GOBJECT]), model);
}

-(void)setPixbufColumn:(gint) column
{
	gtk_icon_view_set_pixbuf_column(GTK_ICON_VIEW([self GOBJECT]), column);
}

-(void)setReorderable:(BOOL) reorderable
{
	gtk_icon_view_set_reorderable(GTK_ICON_VIEW([self GOBJECT]), (reorderable ? TRUE : FALSE));
}

-(void)setRowSpacing:(gint) rowSpacing
{
	gtk_icon_view_set_row_spacing(GTK_ICON_VIEW([self GOBJECT]), rowSpacing);
}

-(void)setSelectionMode:(GtkSelectionMode) mode
{
	gtk_icon_view_set_selection_mode(GTK_ICON_VIEW([self GOBJECT]), mode);
}

-(void)setSpacing:(gint) spacing
{
	gtk_icon_view_set_spacing(GTK_ICON_VIEW([self GOBJECT]), spacing);
}

-(void)setTextColumn:(gint) column
{
	gtk_icon_view_set_text_column(GTK_ICON_VIEW([self GOBJECT]), column);
}

-(void)setTooltipCellWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path andCell:(GtkCellRenderer*) cell
{
	gtk_icon_view_set_tooltip_cell(GTK_ICON_VIEW([self GOBJECT]), tooltip, path, cell);
}

-(void)setTooltipColumn:(gint) column
{
	gtk_icon_view_set_tooltip_column(GTK_ICON_VIEW([self GOBJECT]), column);
}

-(void)setTooltipItemWithTooltip:(GtkTooltip*) tooltip andPath:(GtkTreePath*) path
{
	gtk_icon_view_set_tooltip_item(GTK_ICON_VIEW([self GOBJECT]), tooltip, path);
}

-(void)unselectAll
{
	gtk_icon_view_unselect_all(GTK_ICON_VIEW([self GOBJECT]));
}

-(void)unselectPath:(GtkTreePath*) path
{
	gtk_icon_view_unselect_path(GTK_ICON_VIEW([self GOBJECT]), path);
}

-(void)unsetModelDragDest
{
	gtk_icon_view_unset_model_drag_dest(GTK_ICON_VIEW([self GOBJECT]));
}

-(void)unsetModelDragSource
{
	gtk_icon_view_unset_model_drag_source(GTK_ICON_VIEW([self GOBJECT]));
}


@end