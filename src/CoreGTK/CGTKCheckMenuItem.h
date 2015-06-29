
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuItem.h"

@interface CGTKCheckMenuItem : CGTKMenuItem
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
-(GtkCheckMenuItem*)CHECKMENUITEM;
-(BOOL)getActive;
-(BOOL)getDrawAsRadio;
-(BOOL)getInconsistent;
-(void)setActive:(BOOL) isActive;
-(void)setDrawAsRadio:(BOOL) drawAsRadio;
-(void)setInconsistent:(BOOL) setting;
-(void)toggled;

@end