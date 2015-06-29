
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKStackSwitcher : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkStackSwitcher*)STACKSWITCHER;
-(GtkStack*)getStack;
-(void)setStack:(GtkStack*) stack;

@end