
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKLockButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init:(GPermission*) permission;

/**
 * Methods
 */
-(GtkLockButton*)LOCKBUTTON;
-(GPermission*)getPermission;
-(void)setPermission:(GPermission*) permission;

@end