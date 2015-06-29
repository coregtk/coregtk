
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKColorButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithColor:(const GdkColor*) color;
-(id)initWithRgba:(const GdkRGBA*) rgba;

/**
 * Methods
 */
-(GtkColorButton*)COLORBUTTON;
-(guint16)getAlpha;
-(void)getColor:(GdkColor*) color;
-(void)getRgba:(GdkRGBA*) rgba;
-(NSString*)getTitle;
-(BOOL)getUseAlpha;
-(void)setAlpha:(guint16) alpha;
-(void)setColor:(const GdkColor*) color;
-(void)setRgba:(const GdkRGBA*) rgba;
-(void)setTitle:(NSString*) title;
-(void)setUseAlpha:(BOOL) useAlpha;

@end