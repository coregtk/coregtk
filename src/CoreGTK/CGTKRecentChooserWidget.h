
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKRecentChooserWidget : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initForManager:(GtkRecentManager*) manager;

/**
 * Methods
 */
-(GtkRecentChooserWidget*)RECENTCHOOSERWIDGET;

@end