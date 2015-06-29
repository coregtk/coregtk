
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKPaned.h"

@implementation CGTKPaned

-(id)init:(GtkOrientation) orientation
{
	self = [super initWithGObject:(GObject *)gtk_paned_new(orientation)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkPaned*)PANED
{
	return GTK_PANED([self GOBJECT]);
}

-(void)add1:(CGTKWidget*) child
{
	gtk_paned_add1(GTK_PANED([self GOBJECT]), [child WIDGET]);
}

-(void)add2:(CGTKWidget*) child
{
	gtk_paned_add2(GTK_PANED([self GOBJECT]), [child WIDGET]);
}

-(CGTKWidget*)getChild1
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_paned_get_child1(GTK_PANED([self GOBJECT]))];
}

-(CGTKWidget*)getChild2
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_paned_get_child2(GTK_PANED([self GOBJECT]))];
}

-(GdkWindow*)getHandleWindow
{
	return gtk_paned_get_handle_window(GTK_PANED([self GOBJECT]));
}

-(gint)getPosition
{
	return gtk_paned_get_position(GTK_PANED([self GOBJECT]));
}

-(void)pack1WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink
{
	gtk_paned_pack1(GTK_PANED([self GOBJECT]), [child WIDGET], (resize ? TRUE : FALSE), (shrink ? TRUE : FALSE));
}

-(void)pack2WithChild:(CGTKWidget*) child andResize:(BOOL) resize andShrink:(BOOL) shrink
{
	gtk_paned_pack2(GTK_PANED([self GOBJECT]), [child WIDGET], (resize ? TRUE : FALSE), (shrink ? TRUE : FALSE));
}

-(void)setPosition:(gint) position
{
	gtk_paned_set_position(GTK_PANED([self GOBJECT]), position);
}


@end