
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSwitch.h"

@implementation CGTKSwitch

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_switch_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSwitch*)SWITCH
{
	return GTK_SWITCH([self GOBJECT]);
}

-(BOOL)getActive
{
	return (gtk_switch_get_active(GTK_SWITCH([self GOBJECT])) ? YES : NO);
}

-(void)setActive:(BOOL) isActive
{
	gtk_switch_set_active(GTK_SWITCH([self GOBJECT]), (isActive ? TRUE : FALSE));
}


@end