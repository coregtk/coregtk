
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKInvisible.h"

@implementation CGTKInvisible

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_invisible_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForScreen:(GdkScreen*) screen
{
	self = [super initWithGObject:(GObject *)gtk_invisible_new_for_screen(screen)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkInvisible*)INVISIBLE
{
	return GTK_INVISIBLE([self GOBJECT]);
}

-(GdkScreen*)getScreen
{
	return gtk_invisible_get_screen(GTK_INVISIBLE([self GOBJECT]));
}

-(void)setScreen:(GdkScreen*) screen
{
	gtk_invisible_set_screen(GTK_INVISIBLE([self GOBJECT]), screen);
}


@end