
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRecentChooserMenu.h"

@implementation CGTKRecentChooserMenu

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_menu_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForManager:(GtkRecentManager*) manager
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_menu_new_for_manager(manager)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRecentChooserMenu*)RECENTCHOOSERMENU
{
	return GTK_RECENT_CHOOSER_MENU([self GOBJECT]);
}

-(BOOL)getShowNumbers
{
	return (gtk_recent_chooser_menu_get_show_numbers(GTK_RECENT_CHOOSER_MENU([self GOBJECT])) ? YES : NO);
}

-(void)setShowNumbers:(BOOL) showNumbers
{
	gtk_recent_chooser_menu_set_show_numbers(GTK_RECENT_CHOOSER_MENU([self GOBJECT]), (showNumbers ? TRUE : FALSE));
}


@end