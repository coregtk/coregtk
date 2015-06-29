
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRadioButton.h"

@implementation CGTKRadioButton

-(id)init:(GSList*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromWidget:(GtkRadioButton*) radioGroupMember
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new_from_widget(radioGroupMember)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new_with_label(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new_with_label_from_widget(radioGroupMember, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new_with_mnemonic(group, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonicFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_radio_button_new_with_mnemonic_from_widget(radioGroupMember, [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRadioButton*)RADIOBUTTON
{
	return GTK_RADIO_BUTTON([self GOBJECT]);
}

-(GSList*)getGroup
{
	return gtk_radio_button_get_group(GTK_RADIO_BUTTON([self GOBJECT]));
}

-(void)joinGroup:(GtkRadioButton*) groupSource
{
	gtk_radio_button_join_group(GTK_RADIO_BUTTON([self GOBJECT]), groupSource);
}

-(void)setGroup:(GSList*) group
{
	gtk_radio_button_set_group(GTK_RADIO_BUTTON([self GOBJECT]), group);
}


@end