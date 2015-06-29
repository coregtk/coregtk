
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKFrame.h"

@implementation CGTKFrame

-(id)init:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_frame_new([label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkFrame*)FRAME
{
	return GTK_FRAME([self GOBJECT]);
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_frame_get_label(GTK_FRAME([self GOBJECT]))];
}

-(void)getLabelAlignWithXalign:(gfloat*) xalign andYalign:(gfloat*) yalign
{
	gtk_frame_get_label_align(GTK_FRAME([self GOBJECT]), xalign, yalign);
}

-(CGTKWidget*)getLabelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_frame_get_label_widget(GTK_FRAME([self GOBJECT]))];
}

-(GtkShadowType)getShadowType
{
	return gtk_frame_get_shadow_type(GTK_FRAME([self GOBJECT]));
}

-(void)setLabel:(NSString*) label
{
	gtk_frame_set_label(GTK_FRAME([self GOBJECT]), [label UTF8String]);
}

-(void)setLabelAlignWithXalign:(gfloat) xalign andYalign:(gfloat) yalign
{
	gtk_frame_set_label_align(GTK_FRAME([self GOBJECT]), xalign, yalign);
}

-(void)setLabelWidget:(CGTKWidget*) labelWidget
{
	gtk_frame_set_label_widget(GTK_FRAME([self GOBJECT]), [labelWidget WIDGET]);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_frame_set_shadow_type(GTK_FRAME([self GOBJECT]), type);
}


@end