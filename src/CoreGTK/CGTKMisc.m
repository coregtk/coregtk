
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMisc.h"

@implementation CGTKMisc

-(GtkMisc*)MISC
{
	return GTK_MISC([self GOBJECT]);
}

-(void)getAlignmentWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign
{
	gtk_misc_get_alignment(GTK_MISC([self GOBJECT]), xalign, yalign);
}

-(void)getPaddingWithXpad:(gint*) xpad andYpad:(gint*) ypad
{
	gtk_misc_get_padding(GTK_MISC([self GOBJECT]), xpad, ypad);
}

-(void)setAlignmentWithXalign:(gfloat) xalign andYalign:(gfloat) yalign
{
	gtk_misc_set_alignment(GTK_MISC([self GOBJECT]), xalign, yalign);
}

-(void)setPaddingWithXpad:(gint) xpad andYpad:(gint) ypad
{
	gtk_misc_set_padding(GTK_MISC([self GOBJECT]), xpad, ypad);
}


@end