
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFontChooserDialog.h"

@implementation CGTKFontChooserDialog

-(id)initWithTitle:(NSString*) title andParent:(GtkWindow*) parent
{
	self = [super initWithGObject:(GObject *)gtk_font_chooser_dialog_new([title UTF8String], parent)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontChooserDialog*)FONTCHOOSERDIALOG
{
	return GTK_FONT_CHOOSER_DIALOG([self GOBJECT]);
}


@end