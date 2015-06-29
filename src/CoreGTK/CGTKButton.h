
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKButton : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
-(id)initFromStock:(NSString*) stockId;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkButton*)BUTTON;
-(void)clicked;
-(void)enter;
-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign;
-(BOOL)getAlwaysShowImage;
-(GdkWindow*)getEventWindow;
-(BOOL)getFocusOnClick;
-(CGTKWidget*)getImage;
-(GtkPositionType)getImagePosition;
-(NSString*)getLabel;
-(GtkReliefStyle)getRelief;
-(BOOL)getUseStock;
-(BOOL)getUseUnderline;
-(void)leave;
-(void)pressed;
-(void)released;
-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign;
-(void)setAlwaysShowImage:(BOOL) alwaysShow;
-(void)setFocusOnClick:(BOOL) focusOnClick;
-(void)setImage:(CGTKWidget*) image;
-(void)setImagePosition:(GtkPositionType) position;
-(void)setLabel:(NSString*) label;
-(void)setRelief:(GtkReliefStyle) newstyle;
-(void)setUseStock:(BOOL) useStock;
-(void)setUseUnderline:(BOOL) useUnderline;

@end