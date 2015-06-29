
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenu.h"

@interface CGTKRecentChooserMenu : CGTKMenu
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
-(GtkRecentChooserMenu*)RECENTCHOOSERMENU;
-(BOOL)getShowNumbers;
-(void)setShowNumbers:(BOOL) showNumbers;

@end