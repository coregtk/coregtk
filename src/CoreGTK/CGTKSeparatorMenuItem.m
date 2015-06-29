
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSeparatorMenuItem.h"

@implementation CGTKSeparatorMenuItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_separator_menu_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSeparatorMenuItem*)SEPARATORMENUITEM
{
	return GTK_SEPARATOR_MENU_ITEM([self GOBJECT]);
}


@end