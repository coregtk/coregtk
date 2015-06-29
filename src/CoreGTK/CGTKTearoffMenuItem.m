
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKTearoffMenuItem.h"

@implementation CGTKTearoffMenuItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_tearoff_menu_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkTearoffMenuItem*)TEAROFFMENUITEM
{
	return GTK_TEAROFF_MENU_ITEM([self GOBJECT]);
}


@end