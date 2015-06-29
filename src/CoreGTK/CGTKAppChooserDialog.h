
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@interface CGTKAppChooserDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)initWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andFile:(GFile*) file;
-(id)initForContentTypeWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andContentType:(NSString*) contentType;

/**
 * Methods
 */
-(GtkAppChooserDialog*)APPCHOOSERDIALOG;
-(NSString*)getHeading;
-(CGTKWidget*)getWidget;
-(void)setHeading:(NSString*) heading;

@end