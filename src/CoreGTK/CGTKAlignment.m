
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAlignment.h"

@implementation CGTKAlignment

-(id)initWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale
{
	self = [super initWithGObject:(GObject *)gtk_alignment_new(xalign, yalign, xscale, yscale)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAlignment*)ALIGNMENT
{
	return GTK_ALIGNMENT([self GOBJECT]);
}

-(void)getPaddingWithPaddingTop:(guint*) paddingTop andPaddingBottom:(guint*) paddingBottom andPaddingLeft:(guint*) paddingLeft andPaddingRight:(guint*) paddingRight
{
	gtk_alignment_get_padding(GTK_ALIGNMENT([self GOBJECT]), paddingTop, paddingBottom, paddingLeft, paddingRight);
}

-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andXscale:(gfloat) xscale andYscale:(gfloat) yscale
{
	gtk_alignment_set(GTK_ALIGNMENT([self GOBJECT]), xalign, yalign, xscale, yscale);
}

-(void)setPaddingWithPaddingTop:(guint) paddingTop andPaddingBottom:(guint) paddingBottom andPaddingLeft:(guint) paddingLeft andPaddingRight:(guint) paddingRight
{
	gtk_alignment_set_padding(GTK_ALIGNMENT([self GOBJECT]), paddingTop, paddingBottom, paddingLeft, paddingRight);
}


@end