
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFontChooserWidget.h"

@implementation CGTKFontChooserWidget

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_font_chooser_widget_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontChooserWidget*)FONTCHOOSERWIDGET
{
	return GTK_FONT_CHOOSER_WIDGET([self GOBJECT]);
}


@end