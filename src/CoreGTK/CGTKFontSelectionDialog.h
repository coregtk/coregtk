
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKFontSelectionDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) title;

/**
 * Methods
 */
-(GtkFontSelectionDialog*)FONTSELECTIONDIALOG;
-(CGTKWidget*)getCancelButton;
-(NSString*)getFontName;
-(CGTKWidget*)getFontSelection;
-(CGTKWidget*)getOkButton;
-(NSString*)getPreviewText;
-(BOOL)setFontName:(NSString*) fontname;
-(void)setPreviewText:(NSString*) text;

@end