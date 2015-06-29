
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKToggleButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkToggleButton*)TOGGLEBUTTON;
-(BOOL)getActive;
-(BOOL)getInconsistent;
-(BOOL)getMode;
-(void)setActive:(BOOL) isActive;
-(void)setInconsistent:(BOOL) setting;
-(void)setMode:(BOOL) drawIndicator;
-(void)toggled;

@end