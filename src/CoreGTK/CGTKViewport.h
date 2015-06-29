
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKViewport : CGTKBin
{

}


/**
 * Constructors
 */
-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment;

/**
 * Methods
 */
-(GtkViewport*)VIEWPORT;
-(GdkWindow*)getBinWindow;
-(GtkAdjustment*)getHadjustment;
-(GtkShadowType)getShadowType;
-(GtkAdjustment*)getVadjustment;
-(GdkWindow*)getViewWindow;
-(void)setHadjustment:(GtkAdjustment*) adjustment;
-(void)setShadowType:(GtkShadowType) type;
-(void)setVadjustment:(GtkAdjustment*) adjustment;

@end