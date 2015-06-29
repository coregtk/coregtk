
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolButton.h"

@interface CGTKToggleToolButton : CGTKToolButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromStock:(NSString*) stockId;

/**
 * Methods
 */
-(GtkToggleToolButton*)TOGGLETOOLBUTTON;
-(BOOL)getActive;
-(void)setActive:(BOOL) isActive;

@end