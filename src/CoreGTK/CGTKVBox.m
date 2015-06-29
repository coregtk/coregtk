
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVBox.h"

@implementation CGTKVBox

-(id)initWithHomogeneous:(BOOL) homogeneous andSpacing:(gint) spacing
{
	self = [super initWithGObject:(GObject *)gtk_vbox_new((homogeneous ? TRUE : FALSE), spacing)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVBox*)VBOX
{
	return GTK_VBOX([self GOBJECT]);
}


@end