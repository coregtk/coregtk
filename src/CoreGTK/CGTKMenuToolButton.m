
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuToolButton.h"

@implementation CGTKMenuToolButton

-(id)initWithIconWidget:(CGTKWidget*) iconWidget andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_menu_tool_button_new([iconWidget WIDGET], [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStock:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_menu_tool_button_new_from_stock([stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuToolButton*)MENUTOOLBUTTON
{
	return GTK_MENU_TOOL_BUTTON([self GOBJECT]);
}

-(CGTKWidget*)getMenu
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_tool_button_get_menu(GTK_MENU_TOOL_BUTTON([self GOBJECT]))];
}

-(void)setArrowTooltipMarkup:(NSString*) markup
{
	gtk_menu_tool_button_set_arrow_tooltip_markup(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [markup UTF8String]);
}

-(void)setArrowTooltipText:(NSString*) text
{
	gtk_menu_tool_button_set_arrow_tooltip_text(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [text UTF8String]);
}

-(void)setMenu:(CGTKWidget*) menu
{
	gtk_menu_tool_button_set_menu(GTK_MENU_TOOL_BUTTON([self GOBJECT]), [menu WIDGET]);
}


@end