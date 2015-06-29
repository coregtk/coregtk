
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScale.h"

@interface CGTKHScale : CGTKScale
{

}


/**
 * Constructors
 */
-(id)init:(GtkAdjustment*) adjustment;
-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step;

/**
 * Methods
 */
-(GtkHScale*)HSCALE;

@end