
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKAlignment : CGTKBin
{

}


/**
 * Constructors
 */
-(id)initWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale;

/**
 * Methods
 */
-(GtkAlignment*)ALIGNMENT;
-(void)getPaddingWithPaddingTop:(guint*) paddingTop andPaddingBottom:(guint*) paddingBottom andPaddingLeft:(guint*) paddingLeft andPaddingRight:(guint*) paddingRight;
-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale;
-(void)setPaddingWithPaddingTop:(guint) paddingTop andPaddingBottom:(guint) paddingBottom andPaddingLeft:(guint) paddingLeft andPaddingRight:(guint) paddingRight;

@end