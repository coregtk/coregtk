
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKProgressBar.h"

@implementation CGTKProgressBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_progress_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkProgressBar*)PROGRESSBAR
{
	return GTK_PROGRESS_BAR([self GOBJECT]);
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_progress_bar_get_ellipsize(GTK_PROGRESS_BAR([self GOBJECT]));
}

-(gdouble)getFraction
{
	return gtk_progress_bar_get_fraction(GTK_PROGRESS_BAR([self GOBJECT]));
}

-(BOOL)getInverted
{
	return (gtk_progress_bar_get_inverted(GTK_PROGRESS_BAR([self GOBJECT])) ? YES : NO);
}

-(gdouble)getPulseStep
{
	return gtk_progress_bar_get_pulse_step(GTK_PROGRESS_BAR([self GOBJECT]));
}

-(BOOL)getShowText
{
	return (gtk_progress_bar_get_show_text(GTK_PROGRESS_BAR([self GOBJECT])) ? YES : NO);
}

-(NSString*)getText
{
	return [NSString stringWithUTF8String:gtk_progress_bar_get_text(GTK_PROGRESS_BAR([self GOBJECT]))];
}

-(void)pulse
{
	gtk_progress_bar_pulse(GTK_PROGRESS_BAR([self GOBJECT]));
}

-(void)setEllipsize:(PangoEllipsizeMode) mode
{
	gtk_progress_bar_set_ellipsize(GTK_PROGRESS_BAR([self GOBJECT]), mode);
}

-(void)setFraction:(gdouble) fraction
{
	gtk_progress_bar_set_fraction(GTK_PROGRESS_BAR([self GOBJECT]), fraction);
}

-(void)setInverted:(BOOL) inverted
{
	gtk_progress_bar_set_inverted(GTK_PROGRESS_BAR([self GOBJECT]), (inverted ? TRUE : FALSE));
}

-(void)setPulseStep:(gdouble) fraction
{
	gtk_progress_bar_set_pulse_step(GTK_PROGRESS_BAR([self GOBJECT]), fraction);
}

-(void)setShowText:(BOOL) showText
{
	gtk_progress_bar_set_show_text(GTK_PROGRESS_BAR([self GOBJECT]), (showText ? TRUE : FALSE));
}

-(void)setText:(NSString*) text
{
	gtk_progress_bar_set_text(GTK_PROGRESS_BAR([self GOBJECT]), [text UTF8String]);
}


@end