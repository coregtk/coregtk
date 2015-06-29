
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVPaned.h"

@implementation CGTKVPaned

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_vpaned_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVPaned*)VPANED
{
	return GTK_VPANED([self GOBJECT]);
}


@end