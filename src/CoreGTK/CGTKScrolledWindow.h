
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKScrolledWindow : CGTKBin
{

}


/**
 * Constructors
 */
-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment;

/**
 * Methods
 */
-(GtkScrolledWindow*)SCROLLEDWINDOW;
-(void)addWithViewport:(CGTKWidget*) child;
-(BOOL)getCaptureButtonPress;
-(GtkAdjustment*)getHadjustment;
-(CGTKWidget*)getHscrollbar;
-(BOOL)getKineticScrolling;
-(gint)getMinContentHeight;
-(gint)getMinContentWidth;
-(GtkCornerType)getPlacement;
-(void)getPolicyWithHscrollbarPolicy:(GtkPolicyType*) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType*) vscrollbarPolicy;
-(GtkShadowType)getShadowType;
-(GtkAdjustment*)getVadjustment;
-(CGTKWidget*)getVscrollbar;
-(void)setCaptureButtonPress:(BOOL) captureButtonPress;
-(void)setHadjustment:(GtkAdjustment*) hadjustment;
-(void)setKineticScrolling:(BOOL) kineticScrolling;
-(void)setMinContentHeight:(gint) height;
-(void)setMinContentWidth:(gint) width;
-(void)setPlacement:(GtkCornerType) windowPlacement;
-(void)setPolicyWithHscrollbarPolicy:(GtkPolicyType) hscrollbarPolicy andVscrollbarPolicy:(GtkPolicyType) vscrollbarPolicy;
-(void)setShadowType:(GtkShadowType) type;
-(void)setVadjustment:(GtkAdjustment*) vadjustment;
-(void)unsetPlacement;

@end