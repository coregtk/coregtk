/*
 * CGTKAssistant.m
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

#import "CGTKAssistant.h"

@implementation CGTKAssistant

-(GtkAssistant *)ASSISTANT
{
	return GTK_ASSISTANT([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_assistant_new () andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(NSNumber *)getCurrentPage
{
	return [NSNumber numberWithInt:gtk_assistant_get_current_page ([self ASSISTANT])];
}

-(void)setCurrentPage:(NSNumber *)pageNum
{
	gtk_assistant_set_current_page ([self ASSISTANT], [pageNum intValue]);
}

-(NSNumber *)getNPages
{
	return [NSNumber numberWithInt:gtk_assistant_get_n_pages ([self ASSISTANT])];
}

-(CGTKWidget *)getNthPage:(NSNumber *)pageNum
{
	return [CGTKWidget widgetWithGtkWidget:gtk_assistant_get_nth_page ([self ASSISTANT], [pageNum intValue])];
}

-(NSNumber *)prependPage:(CGTKWidget *)page
{
	return [NSNumber numberWithInt:gtk_assistant_prepend_page ([self ASSISTANT], [page WIDGET])];
}

-(NSNumber *)appendPage:(CGTKWidget *)page
{
	return [NSNumber numberWithInt:gtk_assistant_append_page ([self ASSISTANT], [page WIDGET])];
}

-(NSNumber *)insertPageWithPage:(CGTKWidget *)page andPosition:(NSNumber *)position
{
	return [NSNumber numberWithInt:gtk_assistant_insert_page ([self ASSISTANT], [page WIDGET], [position intValue])];
}

-(void)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc)pageFunc andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_assistant_set_forward_page_func ([self ASSISTANT], pageFunc, data, destroy);
}

-(void)setPageTypeWithPage:(CGTKWidget *)page andType:(GtkAssistantPageType)type
{
	gtk_assistant_set_page_type ([self ASSISTANT], [page WIDGET], type);
}

-(GtkAssistantPageType)getPageType:(CGTKWidget *)page
{
	return gtk_assistant_get_page_type ([self ASSISTANT], [page WIDGET]);
}

-(void)setPageTitleWithPage:(CGTKWidget *)page andTitle:(NSString *)title
{
	gtk_assistant_set_page_title ([self ASSISTANT], [page WIDGET], [title UTF8String]);
}

-(NSString *)getPageTitleWithPage:(CGTKWidget *)page
{
	return [NSString stringWithUTF8String:gtk_assistant_get_page_title ([self ASSISTANT], [page WIDGET])];
}

-(void)setPageHeaderImageWithPage:(CGTKWidget *)page andPixbuf:(GdkPixbuf *)pixbuf
{
	gtk_assistant_set_page_header_image ([self ASSISTANT], [page WIDGET], pixbuf);
}

-(GdkPixbuf *)getPageHeaderImage:(CGTKWidget *)page
{
	return gtk_assistant_get_page_header_image ([self ASSISTANT], [page WIDGET]);
}

-(void)setPageSideImageWithPage:(CGTKWidget *)page andPixbuf:(GdkPixbuf *)pixbuf
{
	gtk_assistant_set_page_side_image ([self ASSISTANT], [page WIDGET], pixbuf);
}

-(GdkPixbuf *)getPageSideImage:(CGTKWidget *)page
{
	return gtk_assistant_get_page_side_image ([self ASSISTANT], [page WIDGET]);
}

-(void)setPageCompleteWithPage:(CGTKWidget *)page andComplete:(BOOL)complete
{
	gtk_assistant_set_page_complete ([self ASSISTANT], [page WIDGET], [CGTK getGboolean:complete]);
}

-(BOOL)getPageComplete:(CGTKWidget *)page
{
	return [CGTK getBOOL:gtk_assistant_get_page_complete ([self ASSISTANT], [page WIDGET])];
}

-(void)addActionWidget:(CGTKWidget *)child
{
	gtk_assistant_add_action_widget ([self ASSISTANT], [child WIDGET]);
}

-(void)removeActionWidget:(CGTKWidget *)child
{
	gtk_assistant_remove_action_widget ([self ASSISTANT], [child WIDGET]);
}

-(void)updateButtonsState
{
	gtk_assistant_update_buttons_state ([self ASSISTANT]);
}

-(void)commit
{
	gtk_assistant_commit ([self ASSISTANT]);
}

@end
