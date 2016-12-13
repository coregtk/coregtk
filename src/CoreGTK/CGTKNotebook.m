/*
 * CGTKNotebook.m
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
#import "CoreGTK/CGTKNotebook.h"

@implementation CGTKNotebook

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_notebook_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkNotebook*)NOTEBOOK
{
	return GTK_NOTEBOOK([self GOBJECT]);
}

-(gint)appendPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel
{
	return gtk_notebook_append_page(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET]);
}

-(gint)appendPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel
{
	return gtk_notebook_append_page_menu(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET]);
}

-(void)detachTab:(CGTKWidget*) child
{
	gtk_notebook_detach_tab(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET]);
}

-(CGTKWidget*)getActionWidget:(GtkPackType) packType
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_notebook_get_action_widget(GTK_NOTEBOOK([self GOBJECT]), packType)];
}

-(gint)getCurrentPage
{
	return gtk_notebook_get_current_page(GTK_NOTEBOOK([self GOBJECT]));
}

-(NSString*)getGroupName
{
	return [NSString stringWithUTF8String:gtk_notebook_get_group_name(GTK_NOTEBOOK([self GOBJECT]))];
}

-(CGTKWidget*)getMenuLabel:(CGTKWidget*) child
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_notebook_get_menu_label(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET])];
}

-(NSString*)getMenuLabelText:(CGTKWidget*) child
{
	return [NSString stringWithUTF8String:gtk_notebook_get_menu_label_text(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET])];
}

-(gint)getNpages
{
	return gtk_notebook_get_n_pages(GTK_NOTEBOOK([self GOBJECT]));
}

-(CGTKWidget*)getNthPage:(gint) pageNum
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_notebook_get_nth_page(GTK_NOTEBOOK([self GOBJECT]), pageNum)];
}

-(BOOL)getScrollable
{
	return (gtk_notebook_get_scrollable(GTK_NOTEBOOK([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowBorder
{
	return (gtk_notebook_get_show_border(GTK_NOTEBOOK([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowTabs
{
	return (gtk_notebook_get_show_tabs(GTK_NOTEBOOK([self GOBJECT])) ? YES : NO);
}

-(BOOL)getTabDetachable:(CGTKWidget*) child
{
	return (gtk_notebook_get_tab_detachable(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(guint16)getTabHborder
{
	return gtk_notebook_get_tab_hborder(GTK_NOTEBOOK([self GOBJECT]));
}

-(CGTKWidget*)getTabLabel:(CGTKWidget*) child
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_notebook_get_tab_label(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET])];
}

-(NSString*)getTabLabelText:(CGTKWidget*) child
{
	return [NSString stringWithUTF8String:gtk_notebook_get_tab_label_text(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET])];
}

-(GtkPositionType)getTabPos
{
	return gtk_notebook_get_tab_pos(GTK_NOTEBOOK([self GOBJECT]));
}

-(BOOL)getTabReorderable:(CGTKWidget*) child
{
	return (gtk_notebook_get_tab_reorderable(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(guint16)getTabVborder
{
	return gtk_notebook_get_tab_vborder(GTK_NOTEBOOK([self GOBJECT]));
}

-(gint)insertPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andPosition:(gint) position
{
	return gtk_notebook_insert_page(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET], position);
}

-(gint)insertPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel andPosition:(gint) position
{
	return gtk_notebook_insert_page_menu(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET], position);
}

-(void)nextPage
{
	gtk_notebook_next_page(GTK_NOTEBOOK([self GOBJECT]));
}

-(gint)pageNum:(CGTKWidget*) child
{
	return gtk_notebook_page_num(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET]);
}

-(void)popupDisable
{
	gtk_notebook_popup_disable(GTK_NOTEBOOK([self GOBJECT]));
}

-(void)popupEnable
{
	gtk_notebook_popup_enable(GTK_NOTEBOOK([self GOBJECT]));
}

-(gint)prependPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel
{
	return gtk_notebook_prepend_page(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET]);
}

-(gint)prependPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel
{
	return gtk_notebook_prepend_page_menu(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET], [menuLabel WIDGET]);
}

-(void)prevPage
{
	gtk_notebook_prev_page(GTK_NOTEBOOK([self GOBJECT]));
}

-(void)removePage:(gint) pageNum
{
	gtk_notebook_remove_page(GTK_NOTEBOOK([self GOBJECT]), pageNum);
}

-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_notebook_reorder_child(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], position);
}

-(void)setActionWidgetWithWidget:(CGTKWidget*) widget andPackType:(GtkPackType) packType
{
	gtk_notebook_set_action_widget(GTK_NOTEBOOK([self GOBJECT]), [widget WIDGET], packType);
}

-(void)setCurrentPage:(gint) pageNum
{
	gtk_notebook_set_current_page(GTK_NOTEBOOK([self GOBJECT]), pageNum);
}

-(void)setGroupName:(NSString*) groupName
{
	gtk_notebook_set_group_name(GTK_NOTEBOOK([self GOBJECT]), [groupName UTF8String]);
}

-(void)setMenuLabelWithChild:(CGTKWidget*) child andMenuLabel:(CGTKWidget*) menuLabel
{
	gtk_notebook_set_menu_label(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [menuLabel WIDGET]);
}

-(void)setMenuLabelTextWithChild:(CGTKWidget*) child andMenuText:(NSString*) menuText
{
	gtk_notebook_set_menu_label_text(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [menuText UTF8String]);
}

-(void)setScrollable:(BOOL) scrollable
{
	gtk_notebook_set_scrollable(GTK_NOTEBOOK([self GOBJECT]), (scrollable ? TRUE : FALSE));
}

-(void)setShowBorder:(BOOL) showBorder
{
	gtk_notebook_set_show_border(GTK_NOTEBOOK([self GOBJECT]), (showBorder ? TRUE : FALSE));
}

-(void)setShowTabs:(BOOL) showTabs
{
	gtk_notebook_set_show_tabs(GTK_NOTEBOOK([self GOBJECT]), (showTabs ? TRUE : FALSE));
}

-(void)setTabDetachableWithChild:(CGTKWidget*) child andDetachable:(BOOL) detachable
{
	gtk_notebook_set_tab_detachable(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], (detachable ? TRUE : FALSE));
}

-(void)setTabLabelWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel
{
	gtk_notebook_set_tab_label(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabLabel WIDGET]);
}

-(void)setTabLabelTextWithChild:(CGTKWidget*) child andTabText:(NSString*) tabText
{
	gtk_notebook_set_tab_label_text(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], [tabText UTF8String]);
}

-(void)setTabPos:(GtkPositionType) pos
{
	gtk_notebook_set_tab_pos(GTK_NOTEBOOK([self GOBJECT]), pos);
}

-(void)setTabReorderableWithChild:(CGTKWidget*) child andReorderable:(BOOL) reorderable
{
	gtk_notebook_set_tab_reorderable(GTK_NOTEBOOK([self GOBJECT]), [child WIDGET], (reorderable ? TRUE : FALSE));
}


@end