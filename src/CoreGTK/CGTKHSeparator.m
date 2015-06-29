
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHSeparator.h"

@implementation CGTKHSeparator

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_hseparator_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHSeparator*)HSEPARATOR
{
	return GTK_HSEPARATOR([self GOBJECT]);
}


@end