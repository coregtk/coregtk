
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKOffscreenWindow.h"

@implementation CGTKOffscreenWindow

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_offscreen_window_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkOffscreenWindow*)OFFSCREENWINDOW
{
	return GTK_OFFSCREEN_WINDOW([self GOBJECT]);
}

-(GdkPixbuf*)getPixbuf
{
	return gtk_offscreen_window_get_pixbuf(GTK_OFFSCREEN_WINDOW([self GOBJECT]));
}

-(cairo_surface_t*)getSurface
{
	return gtk_offscreen_window_get_surface(GTK_OFFSCREEN_WINDOW([self GOBJECT]));
}


@end