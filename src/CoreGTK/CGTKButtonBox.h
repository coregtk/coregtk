
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKButtonBox : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init:(GtkOrientation) orientation;

/**
 * Methods
 */
-(GtkButtonBox*)BUTTONBOX;
-(BOOL)getChildNonHomogeneous:(CGTKWidget*) child;
-(BOOL)getChildSecondary:(CGTKWidget*) child;
-(GtkButtonBoxStyle)getLayout;
-(void)setChildNonHomogeneousWithChild:(CGTKWidget*) child andNonHomogeneous:(BOOL) nonHomogeneous;
-(void)setChildSecondaryWithChild:(CGTKWidget*) child andIsSecondary:(BOOL) isSecondary;
-(void)setLayout:(GtkButtonBoxStyle) layoutStyle;

@end