
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKSwitch : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkSwitch*)SWITCH;
-(BOOL)getActive;
-(void)setActive:(BOOL) isActive;

@end