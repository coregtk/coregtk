
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuShell.h"

@interface CGTKMenuBar : CGTKMenuShell
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromModel:(GMenuModel*) model;

/**
 * Methods
 */
-(GtkMenuBar*)MENUBAR;
-(GtkPackDirection)getChildPackDirection;
-(GtkPackDirection)getPackDirection;
-(void)setChildPackDirection:(GtkPackDirection) childPackDir;
-(void)setPackDirection:(GtkPackDirection) packDir;

@end