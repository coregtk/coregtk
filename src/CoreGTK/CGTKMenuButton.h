
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToggleButton.h"

@interface CGTKMenuButton : CGTKToggleButton
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkMenuButton*)MENUBUTTON;
-(CGTKWidget*)getAlignWidget;
-(GtkArrowType)getDirection;
-(GMenuModel*)getMenuModel;
-(GtkMenu*)getPopup;
-(void)setAlignWidget:(CGTKWidget*) alignWidget;
-(void)setDirection:(GtkArrowType) direction;
-(void)setMenuModel:(GMenuModel*) menuModel;
-(void)setPopup:(CGTKWidget*) popup;

@end