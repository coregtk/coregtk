
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKListBoxRow : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkListBoxRow*)LISTBOXROW;
-(void)changed;
-(CGTKWidget*)getHeader;
-(gint)getIndex;
-(void)setHeader:(CGTKWidget*) header;

@end