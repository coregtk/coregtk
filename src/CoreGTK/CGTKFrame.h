
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKFrame : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) label;

/**
 * Methods
 */
-(GtkFrame*)FRAME;
-(NSString*)getLabel;
-(void)getLabelAlignWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;
-(CGTKWidget*)getLabelWidget;
-(GtkShadowType)getShadowType;
-(void)setLabel:(NSString*) label;
-(void)setLabelAlignWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;
-(void)setLabelWidget:(CGTKWidget*) labelWidget;
-(void)setShadowType:(GtkShadowType) type;

@end