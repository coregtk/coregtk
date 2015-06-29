
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKStack : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkStack*)STACK;
-(void)addNamedWithChild:(CGTKWidget*) child andName:(NSString*) name;
-(void)addTitledWithChild:(CGTKWidget*) child andName:(NSString*) name andTitle:(NSString*) title;
-(BOOL)getHomogeneous;
-(guint)getTransitionDuration;
-(GtkStackTransitionType)getTransitionType;
-(CGTKWidget*)getVisibleChild;
-(NSString*)getVisibleChildName;
-(void)setHomogeneous:(BOOL) homogeneous;
-(void)setTransitionDuration:(guint) duration;
-(void)setTransitionType:(GtkStackTransitionType) transition;
-(void)setVisibleChild:(CGTKWidget*) child;
-(void)setVisibleChildFullWithName:(NSString*) name andTransition:(GtkStackTransitionType) transition;
-(void)setVisibleChildName:(NSString*) name;

@end