
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHandleBox.h"

@implementation CGTKHandleBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_handle_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHandleBox*)HANDLEBOX
{
	return GTK_HANDLE_BOX([self GOBJECT]);
}

-(BOOL)getChildDetached
{
	return (gtk_handle_box_get_child_detached(GTK_HANDLE_BOX([self GOBJECT])) ? YES : NO);
}

-(GtkPositionType)getHandlePosition
{
	return gtk_handle_box_get_handle_position(GTK_HANDLE_BOX([self GOBJECT]));
}

-(GtkShadowType)getShadowType
{
	return gtk_handle_box_get_shadow_type(GTK_HANDLE_BOX([self GOBJECT]));
}

-(GtkPositionType)getSnapEdge
{
	return gtk_handle_box_get_snap_edge(GTK_HANDLE_BOX([self GOBJECT]));
}

-(void)setHandlePosition:(GtkPositionType) position
{
	gtk_handle_box_set_handle_position(GTK_HANDLE_BOX([self GOBJECT]), position);
}

-(void)setShadowType:(GtkShadowType) type
{
	gtk_handle_box_set_shadow_type(GTK_HANDLE_BOX([self GOBJECT]), type);
}

-(void)setSnapEdge:(GtkPositionType) edge
{
	gtk_handle_box_set_snap_edge(GTK_HANDLE_BOX([self GOBJECT]), edge);
}


@end