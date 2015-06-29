
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHeaderBar.h"

@implementation CGTKHeaderBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_header_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHeaderBar*)HEADERBAR
{
	return GTK_HEADER_BAR([self GOBJECT]);
}

-(CGTKWidget*)getCustomTitle
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_header_bar_get_custom_title(GTK_HEADER_BAR([self GOBJECT]))];
}

-(BOOL)getShowCloseButton
{
	return (gtk_header_bar_get_show_close_button(GTK_HEADER_BAR([self GOBJECT])) ? YES : NO);
}

-(NSString*)getSubtitle
{
	return [NSString stringWithUTF8String:gtk_header_bar_get_subtitle(GTK_HEADER_BAR([self GOBJECT]))];
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_header_bar_get_title(GTK_HEADER_BAR([self GOBJECT]))];
}

-(void)packEnd:(CGTKWidget*) child
{
	gtk_header_bar_pack_end(GTK_HEADER_BAR([self GOBJECT]), [child WIDGET]);
}

-(void)packStart:(CGTKWidget*) child
{
	gtk_header_bar_pack_start(GTK_HEADER_BAR([self GOBJECT]), [child WIDGET]);
}

-(void)setCustomTitle:(CGTKWidget*) titleWidget
{
	gtk_header_bar_set_custom_title(GTK_HEADER_BAR([self GOBJECT]), [titleWidget WIDGET]);
}

-(void)setShowCloseButton:(BOOL) setting
{
	gtk_header_bar_set_show_close_button(GTK_HEADER_BAR([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setSubtitle:(NSString*) subtitle
{
	gtk_header_bar_set_subtitle(GTK_HEADER_BAR([self GOBJECT]), [subtitle UTF8String]);
}

-(void)setTitle:(NSString*) title
{
	gtk_header_bar_set_title(GTK_HEADER_BAR([self GOBJECT]), [title UTF8String]);
}


@end