
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKColorSelectionDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) title;

/**
 * Methods
 */
-(GtkColorSelectionDialog*)COLORSELECTIONDIALOG;
-(CGTKWidget*)getColorSelection;

@end