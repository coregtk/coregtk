
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKListBox.h"

@implementation CGTKListBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_list_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkListBox*)LISTBOX
{
	return GTK_LIST_BOX([self GOBJECT]);
}

-(void)dragHighlightRow:(GtkListBoxRow*) row
{
	gtk_list_box_drag_highlight_row(GTK_LIST_BOX([self GOBJECT]), row);
}

-(void)dragUnhighlightRow
{
	gtk_list_box_drag_unhighlight_row(GTK_LIST_BOX([self GOBJECT]));
}

-(BOOL)getActivateOnSingleClick
{
	return (gtk_list_box_get_activate_on_single_click(GTK_LIST_BOX([self GOBJECT])) ? YES : NO);
}

-(GtkAdjustment*)getAdjustment
{
	return gtk_list_box_get_adjustment(GTK_LIST_BOX([self GOBJECT]));
}

-(GtkListBoxRow*)getRowAtIndex:(gint) index
{
	return gtk_list_box_get_row_at_index(GTK_LIST_BOX([self GOBJECT]), index);
}

-(GtkListBoxRow*)getRowAtY:(gint) y
{
	return gtk_list_box_get_row_at_y(GTK_LIST_BOX([self GOBJECT]), y);
}

-(GtkListBoxRow*)getSelectedRow
{
	return gtk_list_box_get_selected_row(GTK_LIST_BOX([self GOBJECT]));
}

-(GtkSelectionMode)getSelectionMode
{
	return gtk_list_box_get_selection_mode(GTK_LIST_BOX([self GOBJECT]));
}

-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_list_box_insert(GTK_LIST_BOX([self GOBJECT]), [child WIDGET], position);
}

-(void)invalidateFilter
{
	gtk_list_box_invalidate_filter(GTK_LIST_BOX([self GOBJECT]));
}

-(void)invalidateHeaders
{
	gtk_list_box_invalidate_headers(GTK_LIST_BOX([self GOBJECT]));
}

-(void)invalidateSort
{
	gtk_list_box_invalidate_sort(GTK_LIST_BOX([self GOBJECT]));
}

-(void)prepend:(CGTKWidget*) child
{
	gtk_list_box_prepend(GTK_LIST_BOX([self GOBJECT]), [child WIDGET]);
}

-(void)selectRow:(GtkListBoxRow*) row
{
	gtk_list_box_select_row(GTK_LIST_BOX([self GOBJECT]), row);
}

-(void)setActivateOnSingleClick:(BOOL) single
{
	gtk_list_box_set_activate_on_single_click(GTK_LIST_BOX([self GOBJECT]), (single ? TRUE : FALSE));
}

-(void)setAdjustment:(GtkAdjustment*) adjustment
{
	gtk_list_box_set_adjustment(GTK_LIST_BOX([self GOBJECT]), adjustment);
}

-(void)setFilterFuncWithFilterFunc:(GtkListBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_list_box_set_filter_func(GTK_LIST_BOX([self GOBJECT]), filterFunc, userData, destroy);
}

-(void)setHeaderFuncWithUpdateHeader:(GtkListBoxUpdateHeaderFunc) updateHeader andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_list_box_set_header_func(GTK_LIST_BOX([self GOBJECT]), updateHeader, userData, destroy);
}

-(void)setPlaceholder:(CGTKWidget*) placeholder
{
	gtk_list_box_set_placeholder(GTK_LIST_BOX([self GOBJECT]), [placeholder WIDGET]);
}

-(void)setSelectionMode:(GtkSelectionMode) mode
{
	gtk_list_box_set_selection_mode(GTK_LIST_BOX([self GOBJECT]), mode);
}

-(void)setSortFuncWithSortFunc:(GtkListBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy
{
	gtk_list_box_set_sort_func(GTK_LIST_BOX([self GOBJECT]), sortFunc, userData, destroy);
}


@end