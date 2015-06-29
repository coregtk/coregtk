
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVButtonBox.h"

@implementation CGTKVButtonBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_vbutton_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVButtonBox*)VBUTTONBOX
{
	return GTK_VBUTTON_BOX([self GOBJECT]);
}


@end