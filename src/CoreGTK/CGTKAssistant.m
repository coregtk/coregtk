
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAssistant.h"

@implementation CGTKAssistant

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_assistant_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAssistant*)ASSISTANT
{
	return GTK_ASSISTANT([self GOBJECT]);
}

-(void)addActionWidget:(CGTKWidget*) child
{
	gtk_assistant_add_action_widget(GTK_ASSISTANT([self GOBJECT]), [child WIDGET]);
}

-(gint)appendPage:(CGTKWidget*) page
{
	return gtk_assistant_append_page(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]);
}

-(void)commit
{
	gtk_assistant_commit(GTK_ASSISTANT([self GOBJECT]));
}

-(gint)getCurrentPage
{
	return gtk_assistant_get_current_page(GTK_ASSISTANT([self GOBJECT]));
}

-(gint)getNpages
{
	return gtk_assistant_get_n_pages(GTK_ASSISTANT([self GOBJECT]));
}

-(CGTKWidget*)getNthPage:(gint) pageNum
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_assistant_get_nth_page(GTK_ASSISTANT([self GOBJECT]), pageNum)];
}

-(BOOL)getPageComplete:(CGTKWidget*) page
{
	return (gtk_assistant_get_page_complete(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]) ? YES : NO);
}

-(GdkPixbuf*)getPageHeaderImage:(CGTKWidget*) page
{
	return gtk_assistant_get_page_header_image(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]);
}

-(GdkPixbuf*)getPageSideImage:(CGTKWidget*) page
{
	return gtk_assistant_get_page_side_image(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]);
}

-(NSString*)getPageTitle:(CGTKWidget*) page
{
	return [NSString stringWithUTF8String:gtk_assistant_get_page_title(GTK_ASSISTANT([self GOBJECT]), [page WIDGET])];
}

-(GtkAssistantPageType)getPageType:(CGTKWidget*) page
{
	return gtk_assistant_get_page_type(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]);
}

-(gint)insertPageWithPage:(CGTKWidget*) page andPosition:(gint) position
{
	return gtk_assistant_insert_page(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], position);
}

-(void)nextPage
{
	gtk_assistant_next_page(GTK_ASSISTANT([self GOBJECT]));
}

-(gint)prependPage:(CGTKWidget*) page
{
	return gtk_assistant_prepend_page(GTK_ASSISTANT([self GOBJECT]), [page WIDGET]);
}

-(void)previousPage
{
	gtk_assistant_previous_page(GTK_ASSISTANT([self GOBJECT]));
}

-(void)removeActionWidget:(CGTKWidget*) child
{
	gtk_assistant_remove_action_widget(GTK_ASSISTANT([self GOBJECT]), [child WIDGET]);
}

-(void)removePage:(gint) pageNum
{
	gtk_assistant_remove_page(GTK_ASSISTANT([self GOBJECT]), pageNum);
}

-(void)setCurrentPage:(gint) pageNum
{
	gtk_assistant_set_current_page(GTK_ASSISTANT([self GOBJECT]), pageNum);
}

-(void)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc) pageFunc andData:(gpointer) data andDestroy:(GDestroyNotify) destroy
{
	gtk_assistant_set_forward_page_func(GTK_ASSISTANT([self GOBJECT]), pageFunc, data, destroy);
}

-(void)setPageCompleteWithPage:(CGTKWidget*) page andComplete:(BOOL) complete
{
	gtk_assistant_set_page_complete(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], (complete ? TRUE : FALSE));
}

-(void)setPageHeaderImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf
{
	gtk_assistant_set_page_header_image(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], pixbuf);
}

-(void)setPageSideImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf
{
	gtk_assistant_set_page_side_image(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], pixbuf);
}

-(void)setPageTitleWithPage:(CGTKWidget*) page andTitle:(NSString*) title
{
	gtk_assistant_set_page_title(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], [title UTF8String]);
}

-(void)setPageTypeWithPage:(CGTKWidget*) page andType:(GtkAssistantPageType) type
{
	gtk_assistant_set_page_type(GTK_ASSISTANT([self GOBJECT]), [page WIDGET], type);
}

-(void)updateButtonsState
{
	gtk_assistant_update_buttons_state(GTK_ASSISTANT([self GOBJECT]));
}


@end