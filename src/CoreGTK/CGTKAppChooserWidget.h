
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKAppChooserWidget : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) contentType;

/**
 * Methods
 */
-(GtkAppChooserWidget*)APPCHOOSERWIDGET;
-(NSString*)getDefaultText;
-(BOOL)getShowAll;
-(BOOL)getShowDefault;
-(BOOL)getShowFallback;
-(BOOL)getShowOther;
-(BOOL)getShowRecommended;
-(void)setDefaultText:(NSString*) text;
-(void)setShowAll:(BOOL) setting;
-(void)setShowDefault:(BOOL) setting;
-(void)setShowFallback:(BOOL) setting;
-(void)setShowOther:(BOOL) setting;
-(void)setShowRecommended:(BOOL) setting;

@end