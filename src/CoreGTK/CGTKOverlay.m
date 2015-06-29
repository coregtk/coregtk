
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKOverlay.h"

@implementation CGTKOverlay

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_overlay_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkOverlay*)OVERLAY
{
	return GTK_OVERLAY([self GOBJECT]);
}

-(void)addOverlay:(CGTKWidget*) widget
{
	gtk_overlay_add_overlay(GTK_OVERLAY([self GOBJECT]), [widget WIDGET]);
}


@end