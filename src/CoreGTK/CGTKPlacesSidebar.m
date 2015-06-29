
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKPlacesSidebar.h"

@implementation CGTKPlacesSidebar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_places_sidebar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkPlacesSidebar*)PLACESSIDEBAR
{
	return GTK_PLACES_SIDEBAR([self GOBJECT]);
}

-(void)addShortcut:(GFile*) location
{
	gtk_places_sidebar_add_shortcut(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(GFile*)getLocation
{
	return gtk_places_sidebar_get_location(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(GFile*)getNthBookmark:(gint) n
{
	return gtk_places_sidebar_get_nth_bookmark(GTK_PLACES_SIDEBAR([self GOBJECT]), n);
}

-(GtkPlacesOpenFlags)getOpenFlags
{
	return gtk_places_sidebar_get_open_flags(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(BOOL)getShowConnectToServer
{
	return (gtk_places_sidebar_get_show_connect_to_server(GTK_PLACES_SIDEBAR([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowDesktop
{
	return (gtk_places_sidebar_get_show_desktop(GTK_PLACES_SIDEBAR([self GOBJECT])) ? YES : NO);
}

-(GSList*)listShortcuts
{
	return gtk_places_sidebar_list_shortcuts(GTK_PLACES_SIDEBAR([self GOBJECT]));
}

-(void)removeShortcut:(GFile*) location
{
	gtk_places_sidebar_remove_shortcut(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(void)setLocation:(GFile*) location
{
	gtk_places_sidebar_set_location(GTK_PLACES_SIDEBAR([self GOBJECT]), location);
}

-(void)setOpenFlags:(GtkPlacesOpenFlags) flags
{
	gtk_places_sidebar_set_open_flags(GTK_PLACES_SIDEBAR([self GOBJECT]), flags);
}

-(void)setShowConnectToServer:(BOOL) showConnectToServer
{
	gtk_places_sidebar_set_show_connect_to_server(GTK_PLACES_SIDEBAR([self GOBJECT]), (showConnectToServer ? TRUE : FALSE));
}

-(void)setShowDesktop:(BOOL) showDesktop
{
	gtk_places_sidebar_set_show_desktop(GTK_PLACES_SIDEBAR([self GOBJECT]), (showDesktop ? TRUE : FALSE));
}


@end