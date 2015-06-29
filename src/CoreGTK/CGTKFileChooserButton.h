
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKFileChooserButton : CGTKBox
{

}


/**
 * Constructors
 */
-(id)initWithTitle:(NSString*) title andAction:(GtkFileChooserAction) action;
-(id)initWithDialog:(CGTKWidget*) dialog;

/**
 * Methods
 */
-(GtkFileChooserButton*)FILECHOOSERBUTTON;
-(BOOL)getFocusOnClick;
-(NSString*)getTitle;
-(gint)getWidthChars;
-(void)setFocusOnClick:(BOOL) focusOnClick;
-(void)setTitle:(NSString*) title;
-(void)setWidthChars:(gint) nchars;

@end