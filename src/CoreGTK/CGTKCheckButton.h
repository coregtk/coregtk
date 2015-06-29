
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToggleButton.h"

@interface CGTKCheckButton : CGTKToggleButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkCheckButton*)CHECKBUTTON;

@end