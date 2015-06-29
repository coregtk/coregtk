
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKInvisible : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initForScreen:(GdkScreen*) screen;

/**
 * Methods
 */
-(GtkInvisible*)INVISIBLE;
-(GdkScreen*)getScreen;
-(void)setScreen:(GdkScreen*) screen;

@end