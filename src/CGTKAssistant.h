/*
 * CGTKAssistant.h
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
#import "CGTKWindow.h"

@interface CGTKAssistant : CGTKWindow
{
	
}

-(GtkAssistant *)ASSISTANT;

/*
 * Forwards message to:
 * GtkWidget* gtk_assistant_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * gint gtk_assistant_get_current_page (GtkAssistant* assistant)
 */
-(NSNumber *)getCurrentPage;

/*
 * Forwards message to:
 * void gtk_assistant_set_current_page (GtkAssistant* assistant, gint page_num)
 */
-(void)setCurrentPage:(NSNumber *)pageNum;

/*
 * Forwards message to:
 * gint gtk_assistant_get_n_pages (GtkAssistant* assistant)
 */
-(NSNumber *)getNPages;

/*
 * Forwards message to:
 * GtkWidget* gtk_assistant_get_nth_page (GtkAssistant* assistant, gint page_num)
 */
-(CGTKWidget *)getNthPage:(NSNumber *)pageNum;

/*
 * Forwards message to:
 * gint gtk_assistant_prepend_page (GtkAssistant* assistant, GtkWidget* page)
 */
-(NSNumber *)prependPage:(CGTKWidget *)page;

/*
 * Forwards message to:
 * gint gtk_assistant_append_page (GtkAssistant* assistant, GtkWidget* page)
 */
-(NSNumber *)appendPage:(CGTKWidget *)page;

/*
 * Forwards message to:
 * gint gtk_assistant_insert_page (GtkAssistant* assistant, GtkWidget* page, gint position)
 */
-(NSNumber *)insertPageWithPage:(CGTKWidget *)page andPosition:(NSNumber *)position;

/*
 * Forwards message to:
 * void gtk_assistant_set_forward_page_func (GtkAssistant* assistant, GtkAssistantPageFunc page_func, gpointer data, GDestroyNotify destroy)
 */
-(void)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc)pageFunc andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/*
 * Forwards message to:
 * void gtk_assistant_set_page_type (GtkAssistant* assistant, GtkWidget* page, GtkAssistantPageType type)
 */
-(void)setPageTypeWithPage:(CGTKWidget *)page andType:(GtkAssistantPageType)type;

/*
 * Forwards message to:
 * GtkAssistantPageType gtk_assistant_get_page_type (GtkAssistant* assistant, GtkWidget* page)
 */
-(GtkAssistantPageType)getPageType:(CGTKWidget *)page;

/*
 * Forwards message to:
 * void gtk_assistant_set_page_title (GtkAssistant* assistant, GtkWidget* page, const gchar* title)
 */
-(void)setPageTitleWithPage:(CGTKWidget *)page andTitle:(NSString *)title;

/*
 * Forwards message to:
 * const gchar * gtk_assistant_get_page_title (GtkAssistant* assistant, GtkWidget* page)
 */
-(NSString *)getPageTitleWithPage:(CGTKWidget *)page;

/*
 * Forwards message to:
 * void gtk_assistant_set_page_header_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf)
 */
-(void)setPageHeaderImageWithPage:(CGTKWidget *)page andPixbuf:(GdkPixbuf *)pixbuf;

/*
 * Forwards message to:
 * GdkPixbuf* gtk_assistant_get_page_header_image (GtkAssistant* assistant, GtkWidget* page)
 */
-(GdkPixbuf *)getPageHeaderImage:(CGTKWidget *)page;

/*
 * Forwards message to:
 * void gtk_assistant_set_page_side_image (GtkAssistant* assistant, GtkWidget* page, GdkPixbuf* pixbuf)
 */
-(void)setPageSideImageWithPage:(CGTKWidget *)page andPixbuf:(GdkPixbuf *)pixbuf;

/*
 * Forwards message to:
 * GdkPixbuf* gtk_assistant_get_page_side_image (GtkAssistant* assistant, GtkWidget* page)
 */
-(GdkPixbuf *)getPageSideImage:(CGTKWidget *)page;

/*
 * Forwards message to:
 * void gtk_assistant_set_page_complete (GtkAssistant* assistant, GtkWidget* page, gboolean complete)
 */
-(void)setPageCompleteWithPage:(CGTKWidget *)page andComplete:(BOOL)complete;

/*
 * Forwards message to:
 * gboolean gtk_assistant_get_page_complete (GtkAssistant* assistant, GtkWidget* page)
 */
-(BOOL)getPageComplete:(CGTKWidget *)page;

/*
 * Forwards message to:
 * void gtk_assistant_add_action_widget (GtkAssistant* assistant, GtkWidget* child)
 */
-(void)addActionWidget:(CGTKWidget *)child;

/*
 * Forwards message to:
 * void gtk_assistant_remove_action_widget (GtkAssistant* assistant, GtkWidget* child)
 */
-(void)removeActionWidget:(CGTKWidget *)child;

/*
 * Forwards message to:
 * void gtk_assistant_update_buttons_state (GtkAssistant* assistant)
 */
-(void)updateButtonsState;

/*
 * Forwards message to:
 * void gtk_assistant_commit (GtkAssistant* assistant)
 */
-(void)commit;

@end
