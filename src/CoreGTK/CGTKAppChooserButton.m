
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAppChooserButton.h"

@implementation CGTKAppChooserButton

-(id)init:(NSString*) contentType
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_button_new([contentType UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAppChooserButton*)APPCHOOSERBUTTON
{
	return GTK_APP_CHOOSER_BUTTON([self GOBJECT]);
}

-(void)appendCustomItemWithName:(NSString*) name andLabel:(NSString*) label andIcon:(GIcon*) icon
{
	gtk_app_chooser_button_append_custom_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT]), [name UTF8String], [label UTF8String], icon);
}

-(void)appendSeparator
{
	gtk_app_chooser_button_append_separator(GTK_APP_CHOOSER_BUTTON([self GOBJECT]));
}

-(NSString*)getHeading
{
	return [NSString stringWithUTF8String:gtk_app_chooser_button_get_heading(GTK_APP_CHOOSER_BUTTON([self GOBJECT]))];
}

-(BOOL)getShowDefaultItem
{
	return (gtk_app_chooser_button_get_show_default_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowDialogItem
{
	return (gtk_app_chooser_button_get_show_dialog_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setActiveCustomItem:(NSString*) name
{
	gtk_app_chooser_button_set_active_custom_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT]), [name UTF8String]);
}

-(void)setHeading:(NSString*) heading
{
	gtk_app_chooser_button_set_heading(GTK_APP_CHOOSER_BUTTON([self GOBJECT]), [heading UTF8String]);
}

-(void)setShowDefaultItem:(BOOL) setting
{
	gtk_app_chooser_button_set_show_default_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setShowDialogItem:(BOOL) setting
{
	gtk_app_chooser_button_set_show_dialog_item(GTK_APP_CHOOSER_BUTTON([self GOBJECT]), (setting ? TRUE : FALSE));
}


@end