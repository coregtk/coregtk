
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKEventBox : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkEventBox*)EVENTBOX;
-(BOOL)getAboveChild;
-(BOOL)getVisibleWindow;
-(void)setAboveChild:(BOOL) aboveChild;
-(void)setVisibleWindow:(BOOL) visibleWindow;

@end