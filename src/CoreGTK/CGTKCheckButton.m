
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCheckButton.h"

@implementation CGTKCheckButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_check_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_check_button_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_check_button_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkCheckButton*)CHECKBUTTON
{
	return GTK_CHECK_BUTTON([self GOBJECT]);
}


@end