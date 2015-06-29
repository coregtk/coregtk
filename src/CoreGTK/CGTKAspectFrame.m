
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAspectFrame.h"

@implementation CGTKAspectFrame

-(id)initWithLabel:(NSString*) label andXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild
{
	self = [super initWithGObject:(GObject *)gtk_aspect_frame_new([label UTF8String], xalign, yalign, ratio, (obeyChild ? TRUE : FALSE))];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAspectFrame*)ASPECTFRAME
{
	return GTK_ASPECT_FRAME([self GOBJECT]);
}

-(void)setWithXalign:(gfloat) xalign andYalign:(gfloat) yalign andRatio:(gfloat) ratio andObeyChild:(BOOL) obeyChild
{
	gtk_aspect_frame_set(GTK_ASPECT_FRAME([self GOBJECT]), xalign, yalign, ratio, (obeyChild ? TRUE : FALSE));
}


@end