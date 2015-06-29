
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolItem.h"

@interface CGTKToolButton : CGTKToolItem
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
-(GtkToolButton*)TOOLBUTTON;
-(NSString*)getIconName;
-(CGTKWidget*)getIconWidget;
-(NSString*)getLabel;
-(CGTKWidget*)getLabelWidget;
-(NSString*)getStockId;
-(BOOL)getUseUnderline;
-(void)setIconName:(NSString*) iconName;
-(void)setIconWidget:(CGTKWidget*) iconWidget;
-(void)setLabel:(NSString*) label;
-(void)setLabelWidget:(CGTKWidget*) labelWidget;
-(void)setStockId:(NSString*) stockId;
-(void)setUseUnderline:(BOOL) useUnderline;

@end