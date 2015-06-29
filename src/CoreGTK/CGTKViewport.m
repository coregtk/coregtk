
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKViewport.h"

@implementation CGTKViewport

-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment
{
	self = [super initWithGObject:(GObject *)gtk_viewport_new(hadjustment, vadjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkViewport*)VIEWPORT
{
	return GTK_VIEWPORT([self GOBJECT]);
}

-(GdkWindow*)getBinWindow
{
	return gtk_viewport_get_bin_window(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_viewport_get_hadjustment(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkShadowType)getShadowType
{
	return gtk_viewport_get_shadow_type(GTK_VIEWPORT([self GOBJECT]));
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_viewport_get_vadjustment(GTK_VIEWPORT([self GOBJECT]));
}

-(GdkWindow*)getViewWindow
{
	return gtk_viewport_get_view_window(GTK_VIEWPORT([self GOBJECT]));
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_viewport_set_hadjustment(GTK_VIEWPORT([self GOBJECT]), adjustment);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_viewport_set_shadow_type(GTK_VIEWPORT([self GOBJECT]), type);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_viewport_set_vadjustment(GTK_VIEWPORT([self GOBJECT]), adjustment);
}


@end