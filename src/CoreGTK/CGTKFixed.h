
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKFixed : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkFixed*)FIXED;
-(void)moveWithWidget:(CGTKWidget*) widget andX:(gint) x andY:(gint) y;
-(void)putWithWidget:(CGTKWidget*) widget andX:(gint) x andY:(gint) y;

@end