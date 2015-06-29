
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuItem.h"

@interface CGTKImageMenuItem : CGTKMenuItem
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromStockWithStockId:(NSString*) stockId andAccelGroup:(GtkAccelGroup*) accelGroup;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkImageMenuItem*)IMAGEMENUITEM;
-(BOOL)getAlwaysShowImage;
-(CGTKWidget*)getImage;
-(BOOL)getUseStock;
-(void)setAccelGroup:(GtkAccelGroup*) accelGroup;
-(void)setAlwaysShowImage:(BOOL) alwaysShow;
-(void)setImage:(CGTKWidget*) image;
-(void)setUseStock:(BOOL) useStock;

@end