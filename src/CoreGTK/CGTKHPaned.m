
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHPaned.h"

@implementation CGTKHPaned

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_hpaned_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHPaned*)HPANED
{
	return GTK_HPANED([self GOBJECT]);
}


@end