
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolItem.h"

@interface CGTKSeparatorToolItem : CGTKToolItem
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkSeparatorToolItem*)SEPARATORTOOLITEM;
-(BOOL)getDraw;
-(void)setDraw:(BOOL) draw;

@end