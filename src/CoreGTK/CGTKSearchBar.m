
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSearchBar.h"

@implementation CGTKSearchBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_search_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSearchBar*)SEARCHBAR
{
	return GTK_SEARCH_BAR([self GOBJECT]);
}

-(void)connectEntry:(GtkEntry*) entry
{
	gtk_search_bar_connect_entry(GTK_SEARCH_BAR([self GOBJECT]), entry);
}

-(BOOL)getSearchMode
{
	return (gtk_search_bar_get_search_mode(GTK_SEARCH_BAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowCloseButton
{
	return (gtk_search_bar_get_show_close_button(GTK_SEARCH_BAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)handleEvent:(GdkEvent*) event
{
	return (gtk_search_bar_handle_event(GTK_SEARCH_BAR([self GOBJECT]), event) ? YES : NO);
}

-(void)setSearchMode:(BOOL) searchMode
{
	gtk_search_bar_set_search_mode(GTK_SEARCH_BAR([self GOBJECT]), (searchMode ? TRUE : FALSE));
}

-(void)setShowCloseButton:(BOOL) visible
{
	gtk_search_bar_set_show_close_button(GTK_SEARCH_BAR([self GOBJECT]), (visible ? TRUE : FALSE));
}


@end