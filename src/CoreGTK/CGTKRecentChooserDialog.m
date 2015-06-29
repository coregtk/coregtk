
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRecentChooserDialog.h"

@implementation CGTKRecentChooserDialog

-(GtkRecentChooserDialog*)RECENTCHOOSERDIALOG
{
	return GTK_RECENT_CHOOSER_DIALOG([self GOBJECT]);
}


@end