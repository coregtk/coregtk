
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCheckMenuItem.h"

@implementation CGTKCheckMenuItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_check_menu_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_check_menu_item_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_check_menu_item_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkCheckMenuItem*)CHECKMENUITEM
{
	return GTK_CHECK_MENU_ITEM([self GOBJECT]);
}

-(BOOL)getActive
{
	return (gtk_check_menu_item_get_active(GTK_CHECK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getDrawAsRadio
{
	return (gtk_check_menu_item_get_draw_as_radio(GTK_CHECK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getInconsistent
{
	return (gtk_check_menu_item_get_inconsistent(GTK_CHECK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(void)setActive:(BOOL) isActive
{
	gtk_check_menu_item_set_active(GTK_CHECK_MENU_ITEM([self GOBJECT]), (isActive ? TRUE : FALSE));
}

-(void)setDrawAsRadio:(BOOL) drawAsRadio
{
	gtk_check_menu_item_set_draw_as_radio(GTK_CHECK_MENU_ITEM([self GOBJECT]), (drawAsRadio ? TRUE : FALSE));
}

-(void)setInconsistent:(BOOL) setting
{
	gtk_check_menu_item_set_inconsistent(GTK_CHECK_MENU_ITEM([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)toggled
{
	gtk_check_menu_item_toggled(GTK_CHECK_MENU_ITEM([self GOBJECT]));
}


@end