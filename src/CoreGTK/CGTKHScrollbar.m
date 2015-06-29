
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHScrollbar.h"

@implementation CGTKHScrollbar

-(id)init:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_hscrollbar_new(adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHScrollbar*)HSCROLLBAR
{
	return GTK_HSCROLLBAR([self GOBJECT]);
}


@end