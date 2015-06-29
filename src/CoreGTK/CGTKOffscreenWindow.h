
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWindow.h"

@interface CGTKOffscreenWindow : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkOffscreenWindow*)OFFSCREENWINDOW;
-(GdkPixbuf*)getPixbuf;
-(cairo_surface_t*)getSurface;

@end