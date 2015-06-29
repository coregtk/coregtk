
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVSeparator.h"

@implementation CGTKVSeparator

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_vseparator_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVSeparator*)VSEPARATOR
{
	return GTK_VSEPARATOR([self GOBJECT]);
}


@end