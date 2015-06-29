
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSearchEntry.h"

@implementation CGTKSearchEntry

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_search_entry_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSearchEntry*)SEARCHENTRY
{
	return GTK_SEARCH_ENTRY([self GOBJECT]);
}


@end