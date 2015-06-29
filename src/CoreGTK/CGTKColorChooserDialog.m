
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKColorChooserDialog.h"

@implementation CGTKColorChooserDialog

-(id)initWithTitle:(NSString*) title andParent:(GtkWindow*) parent
{
	self = [super initWithGObject:(GObject *)gtk_color_chooser_dialog_new([title UTF8String], parent)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkColorChooserDialog*)COLORCHOOSERDIALOG
{
	return GTK_COLOR_CHOOSER_DIALOG([self GOBJECT]);
}


@end