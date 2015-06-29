
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKMisc : CGTKWidget
{

}


/**
 * Methods
 */
-(GtkMisc*)MISC;
-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;
-(void)getPaddingWithXpad:(gint*) xpad andYpad:(gint*) ypad;
-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;
-(void)setPaddingWithXpad:(gint) xpad andYpad:(gint) ypad;

@end