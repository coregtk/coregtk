
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScale.h"

@interface CGTKVScale : CGTKScale
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
-(GtkVScale*)VSCALE;

@end