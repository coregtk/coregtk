
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuButton.h"

@implementation CGTKMenuButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_menu_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuButton*)MENUBUTTON
{
	return GTK_MENU_BUTTON([self GOBJECT]);
}

-(CGTKWidget*)getAlignWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_button_get_align_widget(GTK_MENU_BUTTON([self GOBJECT]))];
}

-(GtkArrowType)getDirection
{
	return gtk_menu_button_get_direction(GTK_MENU_BUTTON([self GOBJECT]));
}

-(GMenuModel*)getMenuModel
{
	return gtk_menu_button_get_menu_model(GTK_MENU_BUTTON([self GOBJECT]));
}

-(GtkMenu*)getPopup
{
	return gtk_menu_button_get_popup(GTK_MENU_BUTTON([self GOBJECT]));
}

-(void)setAlignWidget:(CGTKWidget*) alignWidget
{
	gtk_menu_button_set_align_widget(GTK_MENU_BUTTON([self GOBJECT]), [alignWidget WIDGET]);
}

-(void)setDirection:(GtkArrowType) direction
{
	gtk_menu_button_set_direction(GTK_MENU_BUTTON([self GOBJECT]), direction);
}

-(void)setMenuModel:(GMenuModel*) menuModel
{
	gtk_menu_button_set_menu_model(GTK_MENU_BUTTON([self GOBJECT]), menuModel);
}

-(void)setPopup:(CGTKWidget*) popup
{
	gtk_menu_button_set_popup(GTK_MENU_BUTTON([self GOBJECT]), [popup WIDGET]);
}


@end