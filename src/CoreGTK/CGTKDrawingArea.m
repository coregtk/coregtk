
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDrawingArea.h"

@implementation CGTKDrawingArea

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_drawing_area_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkDrawingArea*)DRAWINGAREA
{
	return GTK_DRAWING_AREA([self GOBJECT]);
}


@end