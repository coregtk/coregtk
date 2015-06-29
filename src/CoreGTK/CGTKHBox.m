
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHBox.h"

@implementation CGTKHBox

-(id)initWithHomogeneous:(BOOL) homogeneous andSpacing:(gint) spacing
{
	self = [super initWithGObject:(GObject *)gtk_hbox_new((homogeneous ? TRUE : FALSE), spacing)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHBox*)HBOX
{
	return GTK_HBOX([self GOBJECT]);
}


@end