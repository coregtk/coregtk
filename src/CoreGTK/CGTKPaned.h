
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKPaned : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init:(GtkOrientation) orientation;

/**
 * Methods
 */
-(GtkPaned*)PANED;
-(void)add1:(CGTKWidget*) child;
-(void)add2:(CGTKWidget*) child;
-(CGTKWidget*)getChild1;
-(CGTKWidget*)getChild2;
-(GdkWindow*)getHandleWindow;
-(gint)getPosition;
-(void)pack1WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;
-(void)pack2WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink;
-(void)setPosition:(gint) position;

@end