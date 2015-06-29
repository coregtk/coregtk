
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKColorChooserWidget.h"

@implementation CGTKColorChooserWidget

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_color_chooser_widget_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkColorChooserWidget*)COLORCHOOSERWIDGET
{
	return GTK_COLOR_CHOOSER_WIDGET([self GOBJECT]);
}


@end