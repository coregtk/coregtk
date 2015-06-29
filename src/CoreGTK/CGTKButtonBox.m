
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButtonBox.h"

@implementation CGTKButtonBox

-(id)init:(GtkOrientation) orientation
{
	self = [super initWithGObject:(GObject *)gtk_button_box_new(orientation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkButtonBox*)BUTTONBOX
{
	return GTK_BUTTON_BOX([self GOBJECT]);
}

-(BOOL)getChildNonHomogeneous:(CGTKWidget*) child
{
	return (gtk_button_box_get_child_non_homogeneous(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(BOOL)getChildSecondary:(CGTKWidget*) child
{
	return (gtk_button_box_get_child_secondary(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET]) ? YES : NO);
}

-(GtkButtonBoxStyle)getLayout
{
	return gtk_button_box_get_layout(GTK_BUTTON_BOX([self GOBJECT]));
}

-(void)setChildNonHomogeneousWithChild:(CGTKWidget*) child andNonHomogeneous:(BOOL) nonHomogeneous
{
	gtk_button_box_set_child_non_homogeneous(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET], (nonHomogeneous ? TRUE : FALSE));
}

-(void)setChildSecondaryWithChild:(CGTKWidget*) child andIsSecondary:(BOOL) isSecondary
{
	gtk_button_box_set_child_secondary(GTK_BUTTON_BOX([self GOBJECT]), [child WIDGET], (isSecondary ? TRUE : FALSE));
}

-(void)setLayout:(GtkButtonBoxStyle) layoutStyle
{
	gtk_button_box_set_layout(GTK_BUTTON_BOX([self GOBJECT]), layoutStyle);
}


@end