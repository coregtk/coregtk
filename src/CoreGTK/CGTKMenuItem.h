
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKMenuItem : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithLabel:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkMenuItem*)MENUITEM;
-(void)activate;
-(void)deselect;
-(NSString*)getAccelPath;
-(NSString*)getLabel;
-(BOOL)getReserveIndicator;
-(BOOL)getRightJustified;
-(CGTKWidget*)getSubmenu;
-(BOOL)getUseUnderline;
-(void)select;
-(void)setAccelPath:(NSString*) accelPath;
-(void)setLabel:(NSString*) label;
-(void)setReserveIndicator:(BOOL) reserve;
-(void)setRightJustified:(BOOL) rightJustified;
-(void)setSubmenu:(CGTKWidget*) submenu;
-(void)setUseUnderline:(BOOL) setting;
-(void)toggleSizeAllocate:(gint) allocation;
-(void)toggleSizeRequest:(gint*) requisition;

@end