
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHButtonBox.h"

@implementation CGTKHButtonBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_hbutton_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHButtonBox*)HBUTTONBOX
{
	return GTK_HBUTTON_BOX([self GOBJECT]);
}


@end