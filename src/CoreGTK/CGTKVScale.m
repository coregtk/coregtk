
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKVScale.h"

@implementation CGTKVScale

-(id)init:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_vscale_new(adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step
{
	self = [super initWithGObject:(GObject *)gtk_vscale_new_with_range(min, max, step)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkVScale*)VSCALE
{
	return GTK_VSCALE([self GOBJECT]);
}


@end