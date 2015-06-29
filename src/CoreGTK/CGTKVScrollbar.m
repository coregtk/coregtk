
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVScrollbar.h"

@implementation CGTKVScrollbar

-(id)init:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_vscrollbar_new(adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVScrollbar*)VSCROLLBAR
{
	return GTK_VSCROLLBAR([self GOBJECT]);
}


@end