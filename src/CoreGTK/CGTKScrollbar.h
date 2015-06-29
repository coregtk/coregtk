
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRange.h"

@interface CGTKScrollbar : CGTKRange
{

}


/**
 * Constructors
 */
-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment;

/**
 * Methods
 */
-(GtkScrollbar*)SCROLLBAR;

@end