
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFileChooserDialog.h"

@implementation CGTKFileChooserDialog

-(GtkFileChooserDialog*)FILECHOOSERDIALOG
{
	return GTK_FILE_CHOOSER_DIALOG([self GOBJECT]);
}


@end