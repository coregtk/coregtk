
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFileChooserButton.h"

@implementation CGTKFileChooserButton

-(id)initWithTitle:(NSString*) title andAction:(GtkFileChooserAction) action
{
	self = [super initWithGObject:(GObject *)gtk_file_chooser_button_new([title UTF8String], action)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithDialog:(CGTKWidget*) dialog
{
	self = [super initWithGObject:(GObject *)gtk_file_chooser_button_new_with_dialog([dialog WIDGET])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFileChooserButton*)FILECHOOSERBUTTON
{
	return GTK_FILE_CHOOSER_BUTTON([self GOBJECT]);
}

-(BOOL)getFocusOnClick
{
	return (gtk_file_chooser_button_get_focus_on_click(GTK_FILE_CHOOSER_BUTTON([self GOBJECT])) ? YES : NO);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_file_chooser_button_get_title(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]))];
}

-(gint)getWidthChars
{
	return gtk_file_chooser_button_get_width_chars(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]));
}

-(void)setFocusOnClick:(BOOL) focusOnClick
{
	gtk_file_chooser_button_set_focus_on_click(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), (focusOnClick ? TRUE : FALSE));
}

-(void)setTitle:(NSString*) title
{
	gtk_file_chooser_button_set_title(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), [title UTF8String]);
}

-(void)setWidthChars:(gint) nchars
{
	gtk_file_chooser_button_set_width_chars(GTK_FILE_CHOOSER_BUTTON([self GOBJECT]), nchars);
}


@end