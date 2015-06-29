
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKSearchBar : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkSearchBar*)SEARCHBAR;
-(void)connectEntry:(GtkEntry*) entry;
-(BOOL)getSearchMode;
-(BOOL)getShowCloseButton;
-(BOOL)handleEvent:(GdkEvent*) event;
-(void)setSearchMode:(BOOL) searchMode;
-(void)setShowCloseButton:(BOOL) visible;

@end