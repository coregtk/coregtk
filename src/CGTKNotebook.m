/*
 * CGTKNotebook.m
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

#import "CGTKNotebook.h"

@implementation CGTKNotebook

-(GtkNotebook *)NOTEBOOK
{
	return GTK_NOTEBOOK([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_notebook_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(NSNumber *)appendPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel
{
	return [NSNumber numberWithInt:gtk_notebook_append_page ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET])];
}

-(NSNumber *)appendPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel
{
	return [NSNumber numberWithInt:gtk_notebook_append_page_menu ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET])];
}

-(NSNumber *)prependPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel
{
	return [NSNumber numberWithInt:gtk_notebook_prepend_page ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET])];
}

-(NSNumber *)prependPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel
{
	return [NSNumber numberWithInt:gtk_notebook_prepend_page_menu ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET])];
}

-(NSNumber *)insertPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andPosition:(NSNumber *)position
{
	return [NSNumber numberWithInt:gtk_notebook_insert_page ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET], [position intValue])];
}

-(NSNumber *)insertPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel andPosition:(NSNumber *)position
{
	return [NSNumber numberWithInt:gtk_notebook_insert_page_menu ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET], [position intValue])];
}

-(void)removePage:(NSNumber *)pageNum
{
	gtk_notebook_remove_page ([self NOTEBOOK], [pageNum intValue]);
}

-(NSString *)getGroupName
{
	return [NSString stringWithUTF8String:gtk_notebook_get_group_name ([self NOTEBOOK])];
}

-(void)setGroupName:(NSString *)groupName
{
	gtk_notebook_set_group_name ([self NOTEBOOK], [groupName UTF8String]);
}

-(NSNumber *)getCurrentPage
{
	return [NSNumber numberWithInt:gtk_notebook_get_current_page ([self NOTEBOOK])];
}

-(CGTKWidget *)getNthPage:(NSNumber *)pageNum
{
	return [CGTKWidget widgetWithGtkWidget:gtk_notebook_get_nth_page ([self NOTEBOOK], [pageNum intValue])];
}

-(NSNumber *)getNPages
{
	return [NSNumber numberWithInt:gtk_notebook_get_n_pages ([self NOTEBOOK])];
}

-(NSNumber *)pageNum:(CGTKWidget *)child
{
	return [NSNumber numberWithInt:gtk_notebook_page_num ([self NOTEBOOK], [child WIDGET])];
}

-(void)setCurrentPage:(NSNumber *)pageNum
{
	gtk_notebook_set_current_page ([self NOTEBOOK], [pageNum intValue]);
}

-(void)nextPage
{
	gtk_notebook_next_page ([self NOTEBOOK]);
}

-(void)prevPage
{
	gtk_notebook_prev_page ([self NOTEBOOK]);
}

-(void)setShowBorder:(BOOL)showBorder
{
	gtk_notebook_set_show_border ([self NOTEBOOK], [CGTK getGboolean:showBorder]);
}

-(BOOL)getShowBorder
{
	return [CGTK getBOOL:gtk_notebook_get_show_border ([self NOTEBOOK])];
}

-(void)setShowTabs:(BOOL)showTabs
{
	gtk_notebook_set_show_tabs ([self NOTEBOOK], [CGTK getGboolean: showTabs]);
}

-(BOOL)getShowTabs
{
	return [CGTK getBOOL:gtk_notebook_get_show_tabs ([self NOTEBOOK])];
}

-(void)setTabPos:(GtkPositionType)pos
{
	gtk_notebook_set_tab_pos ([self NOTEBOOK], pos);
}

-(GtkPositionType)getTabPos
{
	return gtk_notebook_get_tab_pos ([self NOTEBOOK]);
}

-(void)setTabBorder:(NSNumber *)borderWidth
{
	void gtk_notebook_set_tab_border (GtkNotebook* notebook, guint border_width);
}

-(void)setTabHborder:(NSNumber *)tabHborder
{
	void gtk_notebook_set_tab_hborder (GtkNotebook* notebook, guint tab_hborder);
}

-(void)setTabVborder:(NSNumber *)tabVborder
{
	void gtk_notebook_set_tab_vborder (GtkNotebook* notebook, guint tab_vborder);
}

-(void)setScrollable:(BOOL)scrollable
{
	gtk_notebook_set_scrollable ([self NOTEBOOK], [CGTK getGboolean:scrollable]);
}

-(BOOL)getScrollable
{
	return [CGTK getGboolean:gtk_notebook_get_scrollable ([self NOTEBOOK])];
}

-(NSNumber *)getTabHborder
{
	return [NSNumber numberWithUnsignedInt:gtk_notebook_get_tab_hborder ([self NOTEBOOK])];
}

-(NSNumber *)getTabVborder
{
	return [NSNumber numberWithUnsignedInt:gtk_notebook_get_tab_vborder ([self NOTEBOOK])];
}

-(void)popupEnable
{
	gtk_notebook_popup_enable ([self NOTEBOOK]);
}

-(void)popupDisable
{
	gtk_notebook_popup_disable ([self NOTEBOOK]);
}

-(CGTKWidget *)getTabLabel:(CGTKWidget *)child
{
	return [CGTKWidget widgetWithGtkWidget:gtk_notebook_get_tab_label ([self NOTEBOOK], [child WIDGET])];
}

-(void)setTabLabelWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel
{
	gtk_notebook_set_tab_label ([self NOTEBOOK], [child WIDGET], [tabLabel WIDGET]);
}

-(NSString *)getTabLabelTextWithChild:(CGTKWidget *)child
{
	return [NSString stringWithUTF8String:gtk_notebook_get_tab_label_text ([self NOTEBOOK], [child WIDGET])];
}

-(void)setTabLabelTextWithChild:(CGTKWidget *)child andTabText:(NSString *)tabText
{
	gtk_notebook_set_tab_label_text ([self NOTEBOOK], [child WIDGET], [tabText UTF8String]);
}

-(CGTKWidget *)getMenuLabel:(CGTKWidget *)child
{
	return [CGTKWidget widgetWithGtkWidget:gtk_notebook_get_menu_label ([self NOTEBOOK], [child WIDGET])];
}

-(void)setMenuLabelWithChild:(CGTKWidget *)child andMenuLabel:(CGTKWidget *)menuLabel
{
	gtk_notebook_set_menu_label ([self NOTEBOOK], [child WIDGET], [menuLabel WIDGET]);
}

-(void)setMenuLabelTextWithChild:(CGTKWidget *)child andMenuText:(NSString *)menuText
{
	gtk_notebook_set_menu_label_text ([self NOTEBOOK], [child WIDGET], [menuText UTF8String]);
}

-(void)setTabLabelPackingWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPackType:(GtkPackType)packType
{
	void gtk_notebook_set_tab_label_packing (GtkNotebook* notebook, GtkWidget* child, gboolean expand, gboolean fill, GtkPackType pack_type);
}

-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position
{
	gtk_notebook_reorder_child ([self NOTEBOOK], [child WIDGET], [position intValue]);
}

-(BOOL)getTabReorderable:(CGTKWidget *)child
{
	return [CGTK getBOOL:gtk_notebook_get_tab_reorderable ([self NOTEBOOK], [child WIDGET])];
}

-(void)setTabReorderableWithChild:(CGTKWidget *)child andReorderable:(BOOL)reorderable
{
	gtk_notebook_set_tab_reorderable ([self NOTEBOOK], [child WIDGET], [CGTK getGboolean:reorderable]);
}

-(BOOL)getTabDetachable:(CGTKWidget *)child
{
	return [CGTK getBOOL:gtk_notebook_get_tab_detachable ([self NOTEBOOK], [child WIDGET])];
}

-(NSString *)getMenuLabelTextWithChild:(CGTKWidget *)child
{
	return [NSString stringWithUTF8String:gtk_notebook_get_menu_label_text ([self NOTEBOOK], [child WIDGET])];
}

-(void)setTabDetachableWithChild:(CGTKWidget *)child andDetachable:(BOOL)detachable
{
	gtk_notebook_set_tab_detachable ([self NOTEBOOK], [child WIDGET], [CGTK getGboolean:detachable]);
}

-(CGTKWidget *)getActionWidget:(GtkPackType)packType
{
	return [CGTKWidget widgetWithGtkWidget:gtk_notebook_get_action_widget ([self NOTEBOOK], packType)];
}

-(void)setActionWidgetWithWidget:(CGTKWidget *)widget andPackType:(GtkPackType)packType
{
	gtk_notebook_set_action_widget ([self NOTEBOOK], [widget WIDGET], packType);
}

@end
