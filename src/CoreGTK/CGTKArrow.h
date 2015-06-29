
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMisc.h"

@interface CGTKArrow : CGTKMisc
{

}


/**
 * Constructors
 */
-(id)initWithArrowType:(GtkArrowType) arrowType andShadowType:(GtkShadowType) shadowType;

/**
 * Methods
 */
-(GtkArrow*)ARROW;
-(void)setWithArrowType:(GtkArrowType) arrowType andShadowType:(GtkShadowType) shadowType;

@end