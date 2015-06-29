
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKOverlay : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkOverlay*)OVERLAY;
-(void)addOverlay:(CGTKWidget*) widget;

@end