/*
 * CGTKNotebook.h
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

/*
 * Objective-C imports
 */
#import "CGTKContainer.h"

@interface CGTKNotebook : CGTKContainer
{
	
}

/**
 * Returns internal GtkNotebook
 */
-(GtkNotebook *)NOTEBOOK;

/**
 * Forwards message to:
 * GtkWidget* gtk_notebook_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * gint gtk_notebook_append_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label)
 */
-(NSNumber *)appendPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel;

/**
 * Forwards message to:
 * gint gtk_notebook_append_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label)
 */
-(NSNumber *)appendPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel;

/**
 * Forwards message to:
 * gint gtk_notebook_prepend_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label)
 */
-(NSNumber *)prependPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel;

/**
 * Forwards message to:
 * gint gtk_notebook_prepend_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label)
 */
-(NSNumber *)prependPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel;

/**
 * Forwards message to:
 * gint gtk_notebook_insert_page (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, gint position)
 */
-(NSNumber *)insertPageWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * gint gtk_notebook_insert_page_menu (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label, GtkWidget* menu_label, gint position)
 */
-(NSNumber *)insertPageMenuWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel andMenuLabel:(CGTKWidget *)menuLabel andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_notebook_remove_page (GtkNotebook* notebook, gint page_num)
 */
-(void)removePage:(NSNumber *)pageNum;

/**
 * Forwards message to:
 * const gchar* gtk_notebook_get_group_name (GtkNotebook* notebook)
 */
-(NSString *)getGroupName;

/**
 * Forwards message to:
 * void gtk_notebook_set_group_name (GtkNotebook* notebook, const gchar* group_name)
 */
-(void)setGroupName:(NSString *)groupName;

/**
 * Forwards message to:
 * gint gtk_notebook_get_current_page (GtkNotebook* notebook)
 */
-(NSNumber *)getCurrentPage;

/**
 * Forwards message to:
 * GtkWidget* gtk_notebook_get_nth_page (GtkNotebook* notebook, gint page_num)
 */
-(CGTKWidget *)getNthPage:(NSNumber *)pageNum;

/**
 * Forwards message to:
 * gint gtk_notebook_get_n_pages (GtkNotebook* notebook)
 */
-(NSNumber *)getNPages;

/**
 * Forwards message to:
 * gint gtk_notebook_page_num (GtkNotebook* notebook, GtkWidget* child)
 */
-(NSNumber *)pageNum:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_current_page (GtkNotebook* notebook, gint page_num)
 */
-(void)setCurrentPage:(NSNumber *)pageNum;

/**
 * Forwards message to:
 * void gtk_notebook_next_page (GtkNotebook* notebook)
 */
-(void)nextPage;

/**
 * Forwards message to:
 * void gtk_notebook_prev_page (GtkNotebook* notebook)
 */
-(void)prevPage;

/**
 * Forwards message to:
 * void gtk_notebook_set_show_border (GtkNotebook* notebook, gboolean show_border)
 */
-(void)setShowBorder:(BOOL)showBorder;

/**
 * Forwards message to:
 * gboolean gtk_notebook_get_show_border (GtkNotebook* notebook)
 */
-(BOOL)getShowBorder;

/**
 * Forwards message to:
 * void gtk_notebook_set_show_tabs (GtkNotebook* notebook, gboolean show_tabs)
 */
-(void)setShowTabs:(BOOL)showTabs;

/**
 * Forwards message to:
 * gboolean gtk_notebook_get_show_tabs (GtkNotebook* notebook)
 */
-(BOOL)getShowTabs;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_pos (GtkNotebook* notebook, GtkPositionType pos)
 */
-(void)setTabPos:(GtkPositionType)pos;

/**
 * Forwards message to:
 * GtkPositionType gtk_notebook_get_tab_pos (GtkNotebook* notebook)
 */
-(GtkPositionType)getTabPos;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_border (GtkNotebook* notebook, guint border_width)
 */
-(void)setTabBorder:(NSNumber *)borderWidth;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_hborder (GtkNotebook* notebook, guint tab_hborder)
 */
-(void)setTabHborder:(NSNumber *)tabHborder;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_vborder (GtkNotebook* notebook, guint tab_vborder)
 */
-(void)setTabVborder:(NSNumber *)tabVborder;

/**
 * Forwards message to:
 * void gtk_notebook_set_scrollable (GtkNotebook* notebook, gboolean scrollable)
 */
-(void)setScrollable:(BOOL)scrollable;

/**
 * Forwards message to:
 * gboolean gtk_notebook_get_scrollable (GtkNotebook* notebook)
 */
-(BOOL)getScrollable;

/**
 * Forwards message to:
 * guint16 gtk_notebook_get_tab_hborder (GtkNotebook* notebook)
 */
-(NSNumber *)getTabHborder;

/**
 * Forwards message to:
 * guint16 gtk_notebook_get_tab_vborder (GtkNotebook* notebook)
 */
-(NSNumber *)getTabVborder;

/**
 * Forwards message to:
 * void gtk_notebook_popup_enable (GtkNotebook* notebook)
 */
-(void)popupEnable;

/**
 * Forwards message to:
 * void gtk_notebook_popup_disable (GtkNotebook* notebook)
 */
-(void)popupDisable;

/**
 * Forwards message to:
 * GtkWidget* gtk_notebook_get_tab_label (GtkNotebook* notebook, GtkWidget* child)
 */
-(CGTKWidget *)getTabLabel:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* tab_label)
 */
-(void)setTabLabelWithChild:(CGTKWidget *)child andTabLabel:(CGTKWidget *)tabLabel;

/**
 * Forwards message to:
 * const gchar* gtk_notebook_get_tab_label_text (GtkNotebook* notebook, GtkWidget* child)
 */
-(NSString *)getTabLabelTextWithChild:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* tab_text)
 */
-(void)setTabLabelTextWithChild:(CGTKWidget *)child andTabText:(NSString *)tabText;

/**
 * Forwards message to:
 * GtkWidget* gtk_notebook_get_menu_label (GtkNotebook* notebook, GtkWidget* child)
 */
-(CGTKWidget *)getMenuLabel:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_menu_label (GtkNotebook* notebook, GtkWidget* child, GtkWidget* menu_label)
 */
-(void)setMenuLabelWithChild:(CGTKWidget *)child andMenuLabel:(CGTKWidget *)menuLabel;

/**
 * Forwards message to:
 * const gchar* gtk_notebook_get_menu_label_text (GtkNotebook* notebook, GtkWidget* child)
 */
-(NSString *)getMenuLabelTextWithChild:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_menu_label_text (GtkNotebook* notebook, GtkWidget* child, const gchar* menu_text)
 */
-(void)setMenuLabelTextWithChild:(CGTKWidget *)child andMenuText:(NSString *)menuText;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_label_packing (GtkNotebook* notebook, GtkWidget* child, gboolean expand, gboolean fill, GtkPackType pack_type)
 */
-(void)setTabLabelPackingWithChild:(CGTKWidget *)child andExpand:(BOOL)expand andFill:(BOOL)fill andPackType:(GtkPackType)packType;

/**
 * Forwards message to:
 * void gtk_notebook_reorder_child (GtkNotebook* notebook, GtkWidget* child, gint position)
 */
-(void)reorderChildWithChild:(CGTKWidget *)child andPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * gboolean gtk_notebook_get_tab_reorderable (GtkNotebook* notebook, GtkWidget* child)
 */
-(BOOL)getTabReorderable:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_reorderable (GtkNotebook* notebook, GtkWidget* child, gboolean reorderable)
 */
-(void)setTabReorderableWithChild:(CGTKWidget *)child andReorderable:(BOOL)reorderable;

/**
 * Forwards message to:
 * gboolean gtk_notebook_get_tab_detachable (GtkNotebook* notebook, GtkWidget* child)
 */
-(BOOL)getTabDetachable:(CGTKWidget *)child;

/**
 * Forwards message to:
 * void gtk_notebook_set_tab_detachable (GtkNotebook* notebook, GtkWidget* child, gboolean detachable)
 */
-(void)setTabDetachableWithChild:(CGTKWidget *)child andDetachable:(BOOL)detachable;

/**
 * Forwards message to:
 * GtkWidget* gtk_notebook_get_action_widget (GtkNotebook* notebook, GtkPackType pack_type)
 */
-(CGTKWidget *)getActionWidget:(GtkPackType)packType;

/**
 * Forwards message to:
 * void gtk_notebook_set_action_widget (GtkNotebook* notebook, GtkWidget* widget, GtkPackType pack_type)
 */
-(void)setActionWidgetWithWidget:(CGTKWidget *)widget andPackType:(GtkPackType)packType;

@end
