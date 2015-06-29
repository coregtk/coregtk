
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScrolledWindow.h"

@interface CGTKPlacesSidebar : CGTKScrolledWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkPlacesSidebar*)PLACESSIDEBAR;
-(void)addShortcut:(GFile*) location;
-(GFile*)getLocation;
-(GFile*)getNthBookmark:(gint) n;
-(GtkPlacesOpenFlags)getOpenFlags;
-(BOOL)getShowConnectToServer;
-(BOOL)getShowDesktop;
-(GSList*)listShortcuts;
-(void)removeShortcut:(GFile*) location;
-(void)setLocation:(GFile*) location;
-(void)setOpenFlags:(GtkPlacesOpenFlags) flags;
-(void)setShowConnectToServer:(BOOL) showConnectToServer;
-(void)setShowDesktop:(BOOL) showDesktop;

@end