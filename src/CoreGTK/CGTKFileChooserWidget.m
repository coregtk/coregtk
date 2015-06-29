
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFileChooserWidget.h"

@implementation CGTKFileChooserWidget

-(id)init:(GtkFileChooserAction) action
{
	self = [super initWithGObject:(GObject *)gtk_file_chooser_widget_new(action)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFileChooserWidget*)FILECHOOSERWIDGET
{
	return GTK_FILE_CHOOSER_WIDGET([self GOBJECT]);
}


@end