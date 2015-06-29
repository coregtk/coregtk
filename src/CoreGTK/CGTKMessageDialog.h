
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKMessageDialog : CGTKDialog
{

}


/**
 * Methods
 */
-(GtkMessageDialog*)MESSAGEDIALOG;
-(CGTKWidget*)getImage;
-(CGTKWidget*)getMessageArea;
-(void)setImage:(CGTKWidget*) image;
-(void)setMarkup:(NSString*) str;

@end