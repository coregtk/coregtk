
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRadioToolButton.h"

@implementation CGTKRadioToolButton

-(id)init:(GSList*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStockWithGroup:(GSList*) group andStockId:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_from_stock(group, [stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromWidget:(GtkRadioToolButton*) group
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_from_widget(group)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithStockFromWidgetWithGroup:(GtkRadioToolButton*) group andStockId:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_radio_tool_button_new_with_stock_from_widget(group, [stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRadioToolButton*)RADIOTOOLBUTTON
{
	return GTK_RADIO_TOOL_BUTTON([self GOBJECT]);
}

-(GSList*)getGroup
{
	return gtk_radio_tool_button_get_group(GTK_RADIO_TOOL_BUTTON([self GOBJECT]));
}

-(void)setGroup:(GSList*) group
{
	gtk_radio_tool_button_set_group(GTK_RADIO_TOOL_BUTTON([self GOBJECT]), group);
}


@end