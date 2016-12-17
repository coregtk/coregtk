/*
 * CGTKFlowBox.m
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
#import "CoreGTK/CGTKFlowBox.h"

@implementation CGTKFlowBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_flow_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFlowBox*)FLOWBOX
{
	return GTK_FLOW_BOX([self GOBJECT]);
}

-(void)bindModelWithModel:(GListModel*) model andCreateWidgetFunc:(GtkFlowBoxCreateWidgetFunc) createWidgetFunc andUserData:(gpointer) userData andUserDataFreeFunc:(GDestroyNotify) userDataFreeFunc
{
	gtk_flow_box_bind_model(GTK_FLOW_BOX([self GOBJECT]), model, createWidgetFunc, userData, userDataFreeFunc);
}

-(BOOL)getActivateOnSingleClick
{
	return (gtk_flow_box_get_activate_on_single_click(GTK_FLOW_BOX([self GOBJECT])) ? YES : NO);
}

-(GtkFlowBoxChild*)getChildAtIndex:(gint) idx
{
	return gtk_flow_box_get_child_at_index(GTK_FLOW_BOX([self GOBJECT]), idx);
}

-(guint)getColumnSpacing
{
	return gtk_flow_box_get_column_spacing(GTK_FLOW_BOX([self GOBJECT]));
}

-(BOOL)getHomogeneous
{
	return (gtk_flow_box_get_homogeneous(GTK_FLOW_BOX([self GOBJECT])) ? YES : NO);
}

-(guint)getMaxChildrenPerLine
{
	return gtk_flow_box_get_max_children_per_line(GTK_FLOW_BOX([self GOBJECT]));
}

-(guint)getMinChildrenPerLine
{
	return gtk_flow_box_get_min_children_per_line(GTK_FLOW_BOX([self GOBJECT]));
}

-(guint)getRowSpacing
{
	return gtk_flow_box_get_row_spacing(GTK_FLOW_BOX([self GOBJECT]));
}

-(GList*)getSelectedChildren
{
	return gtk_flow_box_get_selected_children(GTK_FLOW_BOX([self GOBJECT]));
}

-(GtkSelectionMode)getSelectionMode
{
	return gtk_flow_box_get_selection_mode(GTK_FLOW_BOX([self GOBJECT]));
}

-(void)insertWithWidget:(CGTKWidget*) widget andPosition:(gint) position
{
	gtk_flow_box_insert(GTK_FLOW_BOX([self GOBJECT]), [widget WIDGET], position);
}

-(void)invalidateFilter
{
	gtk_flow_box_invalidate_filter(GTK_FLOW_BOX([self GOBJECT]));
}

-(void)invalidateSort
{
	gtk_flow_box_invalidate_sort(GTK_FLOW_BOX([self GOBJECT]));
}

-(void)selectAll
{
	gtk_flow_box_select_all(GTK_FLOW_BOX([self GOBJECT]));
}

-(void)selectChild:(GtkFlowBoxChild*) child
{
	gtk_flow_box_select_child(GTK_FLOW_BOX([self GOBJECT]), child);
}

-(void)selectedForeachWithFunc:(GtkFlowBoxForeachFunc) func andData:(gpointer) data
{
	gtk_flow_box_selected_foreach(GTK_FLOW_BOX([self GOBJECT]), func, data);
}

-(void)setActivateOnSingleClick:(BOOL) single
{
	gtk_flow_box_set_activate_on_single_click(GTK_FLOW_BOX([self GOBJECT]), (single ? TRUE : FALSE));
}

-(void)setColumnSpacing:(guint) spacing
{
	gtk_flow_box_set_column_spacing(GTK_FLOW_BOX([self GOBJECT]), spacing);
}

-(void)setFilterFuncWithFilterFunc:(GtkFlowBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_flow_box_set_filter_func(GTK_FLOW_BOX([self GOBJECT]), filterFunc, userData, destroy);
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_flow_box_set_hadjustment(GTK_FLOW_BOX([self GOBJECT]), adjustment);
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_flow_box_set_homogeneous(GTK_FLOW_BOX([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setMaxChildrenPerLine:(guint) nchildren
{
	gtk_flow_box_set_max_children_per_line(GTK_FLOW_BOX([self GOBJECT]), nchildren);
}

-(void)setMinChildrenPerLine:(guint) nchildren
{
	gtk_flow_box_set_min_children_per_line(GTK_FLOW_BOX([self GOBJECT]), nchildren);
}

-(void)setRowSpacing:(guint) spacing
{
	gtk_flow_box_set_row_spacing(GTK_FLOW_BOX([self GOBJECT]), spacing);
}

-(void)setSelectionMode:(GtkSelectionMode) mode
{
	gtk_flow_box_set_selection_mode(GTK_FLOW_BOX([self GOBJECT]), mode);
}

-(void)setSortFuncWithSortFunc:(GtkFlowBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_flow_box_set_sort_func(GTK_FLOW_BOX([self GOBJECT]), sortFunc, userData, destroy);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_flow_box_set_vadjustment(GTK_FLOW_BOX([self GOBJECT]), adjustment);
}

-(void)unselectAll
{
	gtk_flow_box_unselect_all(GTK_FLOW_BOX([self GOBJECT]));
}

-(void)unselectChild:(GtkFlowBoxChild*) child
{
	gtk_flow_box_unselect_child(GTK_FLOW_BOX([self GOBJECT]), child);
}


@end
