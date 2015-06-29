
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScrollbar.h"

@implementation CGTKScrollbar

-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_scrollbar_new(orientation, adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkScrollbar*)SCROLLBAR
{
	return GTK_SCROLLBAR([self GOBJECT]);
}


@end