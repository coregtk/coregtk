
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMessageDialog.h"

@implementation CGTKMessageDialog

-(GtkMessageDialog*)MESSAGEDIALOG
{
	return GTK_MESSAGE_DIALOG([self GOBJECT]);
}

-(CGTKWidget*)getImage
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_message_dialog_get_image(GTK_MESSAGE_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getMessageArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_message_dialog_get_message_area(GTK_MESSAGE_DIALOG([self GOBJECT]))];
}

-(void)setImage:(CGTKWidget*) image
{
	gtk_message_dialog_set_image(GTK_MESSAGE_DIALOG([self GOBJECT]), [image WIDGET]);
}

-(void)setMarkup:(NSString*) str
{
	gtk_message_dialog_set_markup(GTK_MESSAGE_DIALOG([self GOBJECT]), [str UTF8String]);
}


@end