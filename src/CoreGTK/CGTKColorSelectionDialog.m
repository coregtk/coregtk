
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKColorSelectionDialog.h"

@implementation CGTKColorSelectionDialog

-(id)init:(NSString*) title
{
	self = [super initWithGObject:(GObject *)gtk_color_selection_dialog_new([title UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkColorSelectionDialog*)COLORSELECTIONDIALOG
{
	return GTK_COLOR_SELECTION_DIALOG([self GOBJECT]);
}

-(CGTKWidget*)getColorSelection
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_color_selection_dialog_get_color_selection(GTK_COLOR_SELECTION_DIALOG([self GOBJECT]))];
}


@end