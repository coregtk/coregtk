
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKFontSelection : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkFontSelection*)FONTSELECTION;
-(PangoFontFace*)getFace;
-(CGTKWidget*)getFaceList;
-(PangoFontFamily*)getFamily;
-(CGTKWidget*)getFamilyList;
-(NSString*)getFontName;
-(CGTKWidget*)getPreviewEntry;
-(NSString*)getPreviewText;
-(gint)getSize;
-(CGTKWidget*)getSizeEntry;
-(CGTKWidget*)getSizeList;
-(BOOL)setFontName:(NSString*) fontname;
-(void)setPreviewText:(NSString*) text;

@end