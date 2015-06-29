
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKHBox : CGTKBox
{

}


/**
 * Constructors
 */
-(id)initWithHomogeneous:(BOOL) homogeneous andSpacing:(gint) spacing;

/**
 * Methods
 */
-(GtkHBox*)HBOX;

@end