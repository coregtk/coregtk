
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFrame.h"

@interface CGTKAspectFrame : CGTKFrame
{

}


/**
 * Constructors
 */
-(id)initWithLabel:(NSString*) label andXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild;

/**
 * Methods
 */
-(GtkAspectFrame*)ASPECTFRAME;
-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild;

@end