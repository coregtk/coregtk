
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVolumeButton.h"

@implementation CGTKVolumeButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_volume_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVolumeButton*)VOLUMEBUTTON
{
	return GTK_VOLUME_BUTTON([self GOBJECT]);
}


@end