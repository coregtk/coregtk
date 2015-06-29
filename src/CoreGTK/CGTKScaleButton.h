
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKScaleButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)initWithSize:(GtkIconSize) size andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step andIcons:(gchar**) icons;

/**
 * Methods
 */
-(GtkScaleButton*)SCALEBUTTON;
-(GtkAdjustment*)getAdjustment;
-(CGTKWidget*)getMinusButton;
-(CGTKWidget*)getPlusButton;
-(CGTKWidget*)getPopup;
-(gdouble)getValue;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setIcons:(gchar**) icons;
-(void)setValue:(gdouble) value;

@end