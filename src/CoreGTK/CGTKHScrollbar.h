
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScrollbar.h"

@interface CGTKHScrollbar : CGTKScrollbar
{

}


/**
 * Constructors
 */
-(id)init:(GtkAdjustment*) adjustment;

/**
 * Methods
 */
-(GtkHScrollbar*)HSCROLLBAR;

@end