
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKSpinner : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkSpinner*)SPINNER;
-(void)start;
-(void)stop;

@end