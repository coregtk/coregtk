
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKColorSelection : CGTKBox
{

}

/**
 * Functions
 */
+(BOOL)paletteFromStringWithStr:(NSString*) str andColors:(GdkColor**) colors andNcolors:(gint*) ncolors;
+(NSString*)paletteToStringWithColors:(GdkColor*) colors andNcolors:(gint) ncolors;
+(GtkColorSelectionChangePaletteWithScreenFunc)setChangePaletteWithScreenHook:(GtkColorSelectionChangePaletteWithScreenFunc) func;

/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkColorSelection*)COLORSELECTION;
-(guint16)getCurrentAlpha;
-(void)getCurrentColor:(GdkColor*) color;
-(void)getCurrentRgba:(GdkRGBA*) rgba;
-(BOOL)getHasOpacityControl;
-(BOOL)getHasPalette;
-(guint16)getPreviousAlpha;
-(void)getPreviousColor:(GdkColor*) color;
-(void)getPreviousRgba:(GdkRGBA*) rgba;
-(BOOL)isAdjusting;
-(void)setCurrentAlpha:(guint16) alpha;
-(void)setCurrentColor:(const GdkColor*) color;
-(void)setCurrentRgba:(const GdkRGBA*) rgba;
-(void)setHasOpacityControl:(BOOL) hasOpacity;
-(void)setHasPalette:(BOOL) hasPalette;
-(void)setPreviousAlpha:(guint16) alpha;
-(void)setPreviousColor:(const GdkColor*) color;
-(void)setPreviousRgba:(const GdkRGBA*) rgba;

@end