
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScaleButton.h"

@implementation CGTKScaleButton

-(id)initWithSize:(GtkIconSize) size andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step andIcons:(gchar**) icons
{
	self = [super initWithGObject:(GObject *)gtk_scale_button_new(size, min, max, step, icons)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkScaleButton*)SCALEBUTTON
{
	return GTK_SCALE_BUTTON([self GOBJECT]);
}

-(GtkAdjustment*)getAdjustment
{
	return gtk_scale_button_get_adjustment(GTK_SCALE_BUTTON([self GOBJECT]));
}

-(CGTKWidget*)getMinusButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_scale_button_get_minus_button(GTK_SCALE_BUTTON([self GOBJECT]))];
}

-(CGTKWidget*)getPlusButton
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_scale_button_get_plus_button(GTK_SCALE_BUTTON([self GOBJECT]))];
}

-(CGTKWidget*)getPopup
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_scale_button_get_popup(GTK_SCALE_BUTTON([self GOBJECT]))];
}

-(gdouble)getValue
{
	return gtk_scale_button_get_value(GTK_SCALE_BUTTON([self GOBJECT]));
}

-(void)setAdjustment:(GtkAdjustment*) adjustment
{
	gtk_scale_button_set_adjustment(GTK_SCALE_BUTTON([self GOBJECT]), adjustment);
}

-(void)setIcons:(gchar**) icons
{
	gtk_scale_button_set_icons(GTK_SCALE_BUTTON([self GOBJECT]), icons);
}

-(void)setValue:(gdouble) value
{
	gtk_scale_button_set_value(GTK_SCALE_BUTTON([self GOBJECT]), value);
}


@end