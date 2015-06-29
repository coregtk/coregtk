
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKHeaderBar : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkHeaderBar*)HEADERBAR;
-(CGTKWidget*)getCustomTitle;
-(BOOL)getShowCloseButton;
-(NSString*)getSubtitle;
-(NSString*)getTitle;
-(void)packEnd:(CGTKWidget*) child;
-(void)packStart:(CGTKWidget*) child;
-(void)setCustomTitle:(CGTKWidget*) titleWidget;
-(void)setShowCloseButton:(BOOL) setting;
-(void)setSubtitle:(NSString*) subtitle;
-(void)setTitle:(NSString*) title;

@end