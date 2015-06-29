
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKVBox : CGTKBox
{

}


/**
 * Constructors
 */
-(id)initWithHomogeneous:(BOOL) homogeneous andSpacing:(gint) spacing;

/**
 * Methods
 */
-(GtkVBox*)VBOX;

@end