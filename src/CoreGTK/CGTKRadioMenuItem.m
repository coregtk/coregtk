
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRadioMenuItem.h"

@implementation CGTKRadioMenuItem

-(id)init:(GSList*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromWidget:(GtkRadioMenuItem*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_from_widget(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_label(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_label_from_widget(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_mnemonic(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_menu_item_new_with_mnemonic_from_widget(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRadioMenuItem*)RADIOMENUITEM
{
	return GTK_RADIO_MENU_ITEM([self GOBJECT]);
}

-(GSList*)getGroup
{
	return gtk_radio_menu_item_get_group(GTK_RADIO_MENU_ITEM([self GOBJECT]));
}

-(void)setGroup:(GSList*) group
{
	gtk_radio_menu_item_set_group(GTK_RADIO_MENU_ITEM([self GOBJECT]), group);
}


@end