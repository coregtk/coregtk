
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRecentChooserWidget.h"

@implementation CGTKRecentChooserWidget

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_widget_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForManager:(GtkRecentManager*) manager
{
	self = [super initWithGObject:(GObject *)gtk_recent_chooser_widget_new_for_manager(manager)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRecentChooserWidget*)RECENTCHOOSERWIDGET
{
	return GTK_RECENT_CHOOSER_WIDGET([self GOBJECT]);
}


@end