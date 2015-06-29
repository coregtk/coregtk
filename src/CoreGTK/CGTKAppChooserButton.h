
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKComboBox.h"

@interface CGTKAppChooserButton : CGTKComboBox
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) contentType;

/**
 * Methods
 */
-(GtkAppChooserButton*)APPCHOOSERBUTTON;
-(void)appendCustomItemWithName:(NSString*) name andLabel:(NSString*) label andIcon:(GIcon*) icon;
-(void)appendSeparator;
-(NSString*)getHeading;
-(BOOL)getShowDefaultItem;
-(BOOL)getShowDialogItem;
-(void)setActiveCustomItem:(NSString*) name;
-(void)setHeading:(NSString*) heading;
-(void)setShowDefaultItem:(BOOL) setting;
-(void)setShowDialogItem:(BOOL) setting;

@end