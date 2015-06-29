
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFontSelection.h"

@implementation CGTKFontSelection

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_font_selection_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFontSelection*)FONTSELECTION
{
	return GTK_FONT_SELECTION([self GOBJECT]);
}

-(PangoFontFace*)getFace
{
	return gtk_font_selection_get_face(GTK_FONT_SELECTION([self GOBJECT]));
}

-(CGTKWidget*)getFaceList
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_get_face_list(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(PangoFontFamily*)getFamily
{
	return gtk_font_selection_get_family(GTK_FONT_SELECTION([self GOBJECT]));
}

-(CGTKWidget*)getFamilyList
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_get_family_list(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(NSString*)getFontName
{
	return [NSString stringWithUTF8String:gtk_font_selection_get_font_name(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(CGTKWidget*)getPreviewEntry
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_get_preview_entry(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(NSString*)getPreviewText
{
	return [NSString stringWithUTF8String:gtk_font_selection_get_preview_text(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(gint)getSize
{
	return gtk_font_selection_get_size(GTK_FONT_SELECTION([self GOBJECT]));
}

-(CGTKWidget*)getSizeEntry
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_get_size_entry(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(CGTKWidget*)getSizeList
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_font_selection_get_size_list(GTK_FONT_SELECTION([self GOBJECT]))];
}

-(BOOL)setFontName:(NSString*) fontname
{
	return (gtk_font_selection_set_font_name(GTK_FONT_SELECTION([self GOBJECT]), [fontname UTF8String]) ? YES : NO);
}

-(void)setPreviewText:(NSString*) text
{
	gtk_font_selection_set_preview_text(GTK_FONT_SELECTION([self GOBJECT]), [text UTF8String]);
}


@end