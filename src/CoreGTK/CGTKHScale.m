
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHScale.h"

@implementation CGTKHScale

-(id)init:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_hscale_new(adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step
{
	self = [super initWithGObject:(GObject *)gtk_hscale_new_with_range(min, max, step)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHScale*)HSCALE
{
	return GTK_HSCALE([self GOBJECT]);
}


@end