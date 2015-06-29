
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuBar.h"

@implementation CGTKMenuBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_menu_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromModel:(GMenuModel*) model
{
	self = [super initWithGObject:(GObject *)gtk_menu_bar_new_from_model(model)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuBar*)MENUBAR
{
	return GTK_MENU_BAR([self GOBJECT]);
}

-(GtkPackDirection)getChildPackDirection
{
	return gtk_menu_bar_get_child_pack_direction(GTK_MENU_BAR([self GOBJECT]));
}

-(GtkPackDirection)getPackDirection
{
	return gtk_menu_bar_get_pack_direction(GTK_MENU_BAR([self GOBJECT]));
}

-(void)setChildPackDirection:(GtkPackDirection) childPackDir
{
	gtk_menu_bar_set_child_pack_direction(GTK_MENU_BAR([self GOBJECT]), childPackDir);
}

-(void)setPackDirection:(GtkPackDirection) packDir
{
	gtk_menu_bar_set_pack_direction(GTK_MENU_BAR([self GOBJECT]), packDir);
}


@end