
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKFontButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithFont:(NSString*) fontname;

/**
 * Methods
 */
-(GtkFontButton*)FONTBUTTON;
-(NSString*)getFontName;
-(BOOL)getShowSize;
-(BOOL)getShowStyle;
-(NSString*)getTitle;
-(BOOL)getUseFont;
-(BOOL)getUseSize;
-(BOOL)setFontName:(NSString*) fontname;
-(void)setShowSize:(BOOL) showSize;
-(void)setShowStyle:(BOOL) showStyle;
-(void)setTitle:(NSString*) title;
-(void)setUseFont:(BOOL) useFont;
-(void)setUseSize:(BOOL) useSize;

@end