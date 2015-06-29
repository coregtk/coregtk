
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWindow.h"

@interface CGTKApplicationWindow : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init:(GtkApplication*) application;

/**
 * Methods
 */
-(GtkApplicationWindow*)APPLICATIONWINDOW;
-(guint)getId;
-(BOOL)getShowMenubar;
-(void)setShowMenubar:(BOOL) showMenubar;

@end