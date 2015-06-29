
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKRevealer : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkRevealer*)REVEALER;
-(BOOL)getChildRevealed;
-(BOOL)getRevealChild;
-(guint)getTransitionDuration;
-(GtkRevealerTransitionType)getTransitionType;
-(void)setRevealChild:(BOOL) revealChild;
-(void)setTransitionDuration:(guint) duration;
-(void)setTransitionType:(GtkRevealerTransitionType) transition;

@end