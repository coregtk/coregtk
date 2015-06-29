
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSeparator.h"

@implementation CGTKSeparator

-(id)init:(GtkOrientation) orientation
{
	self = [super initWithGObject:(GObject *)gtk_separator_new(orientation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSeparator*)SEPARATOR
{
	return GTK_SEPARATOR([self GOBJECT]);
}


@end