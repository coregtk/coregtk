
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKStackSwitcher.h"

@implementation CGTKStackSwitcher

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_stack_switcher_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkStackSwitcher*)STACKSWITCHER
{
	return GTK_STACK_SWITCHER([self GOBJECT]);
}

-(GtkStack*)getStack
{
	return gtk_stack_switcher_get_stack(GTK_STACK_SWITCHER([self GOBJECT]));
}

-(void)setStack:(GtkStack*) stack
{
	gtk_stack_switcher_set_stack(GTK_STACK_SWITCHER([self GOBJECT]), stack);
}


@end