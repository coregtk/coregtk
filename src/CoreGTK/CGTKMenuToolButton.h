
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolButton.h"

@interface CGTKMenuToolButton : CGTKToolButton
{

}


/**
 * Constructors
 */
-(id)initWithIconWidget:(CGTKWidget*) iconWidget andLabel:(NSString*) label;
-(id)initFromStock:(NSString*) stockId;

/**
 * Methods
 */
-(GtkMenuToolButton*)MENUTOOLBUTTON;
-(CGTKWidget*)getMenu;
-(void)setArrowTooltipMarkup:(NSString*) markup;
-(void)setArrowTooltipText:(NSString*) text;
-(void)setMenu:(CGTKWidget*) menu;

@end