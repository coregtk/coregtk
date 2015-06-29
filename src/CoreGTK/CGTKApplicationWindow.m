
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKApplicationWindow.h"

@implementation CGTKApplicationWindow

-(id)init:(GtkApplication*) application
{
	self = [super initWithGObject:(GObject *)gtk_application_window_new(application)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkApplicationWindow*)APPLICATIONWINDOW
{
	return GTK_APPLICATION_WINDOW([self GOBJECT]);
}

-(guint)getId
{
	return gtk_application_window_get_id(GTK_APPLICATION_WINDOW([self GOBJECT]));
}

-(BOOL)getShowMenubar
{
	return (gtk_application_window_get_show_menubar(GTK_APPLICATION_WINDOW([self GOBJECT])) ? YES : NO);
}

-(void)setShowMenubar:(BOOL) showMenubar
{
	gtk_application_window_set_show_menubar(GTK_APPLICATION_WINDOW([self GOBJECT]), (showMenubar ? TRUE : FALSE));
}


@end