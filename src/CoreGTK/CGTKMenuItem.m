
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuItem.h"

@implementation CGTKMenuItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_menu_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_menu_item_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_menu_item_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenuItem*)MENUITEM
{
	return GTK_MENU_ITEM([self GOBJECT]);
}

-(void)activate
{
	gtk_menu_item_activate(GTK_MENU_ITEM([self GOBJECT]));
}

-(void)deselect
{
	gtk_menu_item_deselect(GTK_MENU_ITEM([self GOBJECT]));
}

-(NSString*)getAccelPath
{
	return [NSString stringWithUTF8String:gtk_menu_item_get_accel_path(GTK_MENU_ITEM([self GOBJECT]))];
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_menu_item_get_label(GTK_MENU_ITEM([self GOBJECT]))];
}

-(BOOL)getReserveIndicator
{
	return (gtk_menu_item_get_reserve_indicator(GTK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(BOOL)getRightJustified
{
	return (gtk_menu_item_get_right_justified(GTK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getSubmenu
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_item_get_submenu(GTK_MENU_ITEM([self GOBJECT]))];
}

-(BOOL)getUseUnderline
{
	return (gtk_menu_item_get_use_underline(GTK_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(void)select
{
	gtk_menu_item_select(GTK_MENU_ITEM([self GOBJECT]));
}

-(void)setAccelPath:(NSString*) accelPath
{
	gtk_menu_item_set_accel_path(GTK_MENU_ITEM([self GOBJECT]), [accelPath UTF8String]);
}

-(void)setLabel:(NSString*) label
{
	gtk_menu_item_set_label(GTK_MENU_ITEM([self GOBJECT]), [label UTF8String]);
}

-(void)setReserveIndicator:(BOOL) reserve
{
	gtk_menu_item_set_reserve_indicator(GTK_MENU_ITEM([self GOBJECT]), (reserve ? TRUE : FALSE));
}

-(void)setRightJustified:(BOOL) rightJustified
{
	gtk_menu_item_set_right_justified(GTK_MENU_ITEM([self GOBJECT]), (rightJustified ? TRUE : FALSE));
}

-(void)setSubmenu:(CGTKWidget*) submenu
{
	gtk_menu_item_set_submenu(GTK_MENU_ITEM([self GOBJECT]), [submenu WIDGET]);
}

-(void)setUseUnderline:(BOOL) setting
{
	gtk_menu_item_set_use_underline(GTK_MENU_ITEM([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)toggleSizeAllocate:(gint) allocation
{
	gtk_menu_item_toggle_size_allocate(GTK_MENU_ITEM([self GOBJECT]), allocation);
}

-(void)toggleSizeRequest:(gint*) requisition
{
	gtk_menu_item_toggle_size_request(GTK_MENU_ITEM([self GOBJECT]), requisition);
}


@end