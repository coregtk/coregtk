
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKColorButton.h"

@implementation CGTKColorButton

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithColor:(const GdkColor*) color
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new_with_color(color)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRgba:(const GdkRGBA*) rgba
{
	self = [super initWithGObject:(GObject *)gtk_color_button_new_with_rgba(rgba)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkColorButton*)COLORBUTTON
{
	return GTK_COLOR_BUTTON([self GOBJECT]);
}

-(guint16)getAlpha
{
	return gtk_color_button_get_alpha(GTK_COLOR_BUTTON([self GOBJECT]));
}

-(void)getColor:(GdkColor*) color
{
	gtk_color_button_get_color(GTK_COLOR_BUTTON([self GOBJECT]), color);
}

-(void)getRgba:(GdkRGBA*) rgba
{
	gtk_color_button_get_rgba(GTK_COLOR_BUTTON([self GOBJECT]), rgba);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_color_button_get_title(GTK_COLOR_BUTTON([self GOBJECT]))];
}

-(BOOL)getUseAlpha
{
	return (gtk_color_button_get_use_alpha(GTK_COLOR_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setAlpha:(guint16) alpha
{
	gtk_color_button_set_alpha(GTK_COLOR_BUTTON([self GOBJECT]), alpha);
}

-(void)setColor:(const GdkColor*) color
{
	gtk_color_button_set_color(GTK_COLOR_BUTTON([self GOBJECT]), color);
}

-(void)setRgba:(const GdkRGBA*) rgba
{
	gtk_color_button_set_rgba(GTK_COLOR_BUTTON([self GOBJECT]), rgba);
}

-(void)setTitle:(NSString*) title
{
	gtk_color_button_set_title(GTK_COLOR_BUTTON([self GOBJECT]), [title UTF8String]);
}

-(void)setUseAlpha:(BOOL) useAlpha
{
	gtk_color_button_set_use_alpha(GTK_COLOR_BUTTON([self GOBJECT]), (useAlpha ? TRUE : FALSE));
}


@end