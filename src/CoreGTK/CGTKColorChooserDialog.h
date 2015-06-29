
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKColorChooserDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)initWithTitle:(NSString*) title andParent:(GtkWindow*) parent;

/**
 * Methods
 */
-(GtkColorChooserDialog*)COLORCHOOSERDIALOG;

@end