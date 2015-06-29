
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScrollbar.h"

@interface CGTKVScrollbar : CGTKScrollbar
{

}


/**
 * Constructors
 */
-(id)init:(GtkAdjustment*) adjustment;

/**
 * Methods
 */
-(GtkVScrollbar*)VSCROLLBAR;

@end