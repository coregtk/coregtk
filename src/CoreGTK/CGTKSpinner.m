
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSpinner.h"

@implementation CGTKSpinner

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_spinner_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSpinner*)SPINNER
{
	return GTK_SPINNER([self GOBJECT]);
}

-(void)start
{
	gtk_spinner_start(GTK_SPINNER([self GOBJECT]));
}

-(void)stop
{
	gtk_spinner_stop(GTK_SPINNER([self GOBJECT]));
}


@end