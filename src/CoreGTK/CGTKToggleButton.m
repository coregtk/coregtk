
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToggleButton.h"

@implementation CGTKToggleButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_toggle_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_toggle_button_new_with_label([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_toggle_button_new_with_mnemonic([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToggleButton*)TOGGLEBUTTON
{
	return GTK_TOGGLE_BUTTON([self GOBJECT]);
}

-(BOOL)getActive
{
	return (gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getInconsistent
{
	return (gtk_toggle_button_get_inconsistent(GTK_TOGGLE_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getMode
{
	return (gtk_toggle_button_get_mode(GTK_TOGGLE_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setActive:(BOOL) isActive
{
	gtk_toggle_button_set_active(GTK_TOGGLE_BUTTON([self GOBJECT]), (isActive ? TRUE : FALSE));
}

-(void)setInconsistent:(BOOL) setting
{
	gtk_toggle_button_set_inconsistent(GTK_TOGGLE_BUTTON([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setMode:(BOOL) drawIndicator
{
	gtk_toggle_button_set_mode(GTK_TOGGLE_BUTTON([self GOBJECT]), (drawIndicator ? TRUE : FALSE));
}

-(void)toggled
{
	gtk_toggle_button_toggled(GTK_TOGGLE_BUTTON([self GOBJECT]));
}


@end