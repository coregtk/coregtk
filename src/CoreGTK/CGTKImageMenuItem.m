
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKImageMenuItem.h"

@implementation CGTKImageMenuItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_image_menu_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStockWithStockId:(NSString*) stockId andAccelGroup:(GtkAccelGroup*) accelGroup
{
	self = [super initWithGObject:(GObject *)gtk_image_menu_item_new_from_stock([stockId UTF8String], accelGroup)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_image_menu_item_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_image_menu_item_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkImageMenuItem*)IMAGEMENUITEM
{
	return GTK_IMAGE_MENU_ITEM([self GOBJECT]);
}

-(BOOL)getAlwaysShowImage
{
	return (gtk_image_menu_item_get_always_show_image(GTK_IMAGE_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(CGTKWidget*)getImage
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_image_menu_item_get_image(GTK_IMAGE_MENU_ITEM([self GOBJECT]))];
}

-(BOOL)getUseStock
{
	return (gtk_image_menu_item_get_use_stock(GTK_IMAGE_MENU_ITEM([self GOBJECT])) ? YES : NO);
}

-(void)setAccelGroup:(GtkAccelGroup*) accelGroup
{
	gtk_image_menu_item_set_accel_group(GTK_IMAGE_MENU_ITEM([self GOBJECT]), accelGroup);
}

-(void)setAlwaysShowImage:(BOOL) alwaysShow
{
	gtk_image_menu_item_set_always_show_image(GTK_IMAGE_MENU_ITEM([self GOBJECT]), (alwaysShow ? TRUE : FALSE));
}

-(void)setImage:(CGTKWidget*) image
{
	gtk_image_menu_item_set_image(GTK_IMAGE_MENU_ITEM([self GOBJECT]), [image WIDGET]);
}

-(void)setUseStock:(BOOL) useStock
{
	gtk_image_menu_item_set_use_stock(GTK_IMAGE_MENU_ITEM([self GOBJECT]), (useStock ? TRUE : FALSE));
}


@end