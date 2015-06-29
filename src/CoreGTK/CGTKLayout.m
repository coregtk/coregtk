
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKLayout.h"

@implementation CGTKLayout

-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment
{
	self = [super initWithGObject:(GObject *)gtk_layout_new(hadjustment, vadjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLayout*)LAYOUT
{
	return GTK_LAYOUT([self GOBJECT]);
}

-(GdkWindow*)getBinWindow
{
	return gtk_layout_get_bin_window(GTK_LAYOUT([self GOBJECT]));
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_layout_get_hadjustment(GTK_LAYOUT([self GOBJECT]));
}

-(void)getSizeWithWidth:(guint*) width andHeight:(guint*) height
{
	gtk_layout_get_size(GTK_LAYOUT([self GOBJECT]), width, height);
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_layout_get_vadjustment(GTK_LAYOUT([self GOBJECT]));
}

-(void)moveWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y
{
	gtk_layout_move(GTK_LAYOUT([self GOBJECT]), [childWidget WIDGET], x, y);
}

-(void)putWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y
{
	gtk_layout_put(GTK_LAYOUT([self GOBJECT]), [childWidget WIDGET], x, y);
}

-(void)setHadjustment:(GtkAdjustment*) adjustment
{
	gtk_layout_set_hadjustment(GTK_LAYOUT([self GOBJECT]), adjustment);
}

-(void)setSizeWithWidth:(guint) width andHeight:(guint) height
{
	gtk_layout_set_size(GTK_LAYOUT([self GOBJECT]), width, height);
}

-(void)setVadjustment:(GtkAdjustment*) adjustment
{
	gtk_layout_set_vadjustment(GTK_LAYOUT([self GOBJECT]), adjustment);
}


@end