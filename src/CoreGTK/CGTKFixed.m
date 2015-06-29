
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFixed.h"

@implementation CGTKFixed

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_fixed_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFixed*)FIXED
{
	return GTK_FIXED([self GOBJECT]);
}

-(void)moveWithWidget:(CGTKWidget*) widget andX:(gint) x andY:(gint) y
{
	gtk_fixed_move(GTK_FIXED([self GOBJECT]), [widget WIDGET], x, y);
}

-(void)putWithWidget:(CGTKWidget*) widget andX:(gint) x andY:(gint) y
{
	gtk_fixed_put(GTK_FIXED([self GOBJECT]), [widget WIDGET], x, y);
}


@end