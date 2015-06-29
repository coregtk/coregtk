
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAppChooserDialog.h"

@implementation CGTKAppChooserDialog

-(id)initWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andFile:(GFile*) file
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_dialog_new(parent, flags, file)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initForContentTypeWithParent:(GtkWindow*) parent andFlags:(GtkDialogFlags) flags andContentType:(NSString*) contentType
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_dialog_new_for_content_type(parent, flags, [contentType UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAppChooserDialog*)APPCHOOSERDIALOG
{
	return GTK_APP_CHOOSER_DIALOG([self GOBJECT]);
}

-(NSString*)getHeading
{
	return [NSString stringWithUTF8String:gtk_app_chooser_dialog_get_heading(GTK_APP_CHOOSER_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_app_chooser_dialog_get_widget(GTK_APP_CHOOSER_DIALOG([self GOBJECT]))];
}

-(void)setHeading:(NSString*) heading
{
	gtk_app_chooser_dialog_set_heading(GTK_APP_CHOOSER_DIALOG([self GOBJECT]), [heading UTF8String]);
}


@end