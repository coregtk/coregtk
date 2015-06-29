
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFontSelectionDialog.h"

@implementation CGTKFontSelectionDialog

-(id)init:(NSString*) title
{
	self = [super initWithGObject:(GObject *)gtk_font_selection_dialog_new([title UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontSelectionDialog*)FONTSELECTIONDIALOG
{
	return GTK_FONT_SELECTION_DIALOG([self GOBJECT]);
}

-(CGTKWidget*)getCancelButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_cancel_button(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(NSString*)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_font_name(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getFontSelection
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_font_selection(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getOkButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_dialog_get_ok_button(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(NSString*)getPreviewText
{
	return [NSString stringWithUTF8String:gtk_font_selection_dialog_get_preview_text(GTK_FONT_SELECTION_DIALOG([self GOBJECT]))];
}

-(BOOL)setFontName:(NSString*) fontname
{
	return (gtk_font_selection_dialog_set_font_name(GTK_FONT_SELECTION_DIALOG([self GOBJECT]), [fontname UTF8String]) ? YES : NO);
}

-(void)setPreviewText:(NSString*) text
{
	gtk_font_selection_dialog_set_preview_text(GTK_FONT_SELECTION_DIALOG([self GOBJECT]), [text UTF8String]);
}


@end