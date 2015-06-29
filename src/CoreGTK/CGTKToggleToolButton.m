
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToggleToolButton.h"

@implementation CGTKToggleToolButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_toggle_tool_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromStock:(NSString*) stockId
{
	self = [super initWithGObject:(GObject *)gtk_toggle_tool_button_new_from_stock([stockId UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToggleToolButton*)TOGGLETOOLBUTTON
{
	return GTK_TOGGLE_TOOL_BUTTON([self GOBJECT]);
}

-(BOOL)getActive
{
	return (gtk_toggle_tool_button_get_active(GTK_TOGGLE_TOOL_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setActive:(BOOL) isActive
{
	gtk_toggle_tool_button_set_active(GTK_TOGGLE_TOOL_BUTTON([self GOBJECT]), (isActive ? TRUE : FALSE));
}


@end