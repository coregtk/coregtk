
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKFontChooserDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)initWithTitle:(NSString*) title andParent:(GtkWindow*) parent;

/**
 * Methods
 */
-(GtkFontChooserDialog*)FONTCHOOSERDIALOG;

@end