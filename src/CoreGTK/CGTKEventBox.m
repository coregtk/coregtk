
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKEventBox.h"

@implementation CGTKEventBox

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_event_box_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkEventBox*)EVENTBOX
{
	return GTK_EVENT_BOX([self GOBJECT]);
}

-(BOOL)getAboveChild
{
	return (gtk_event_box_get_above_child(GTK_EVENT_BOX([self GOBJECT])) ? YES : NO);
}

-(BOOL)getVisibleWindow
{
	return (gtk_event_box_get_visible_window(GTK_EVENT_BOX([self GOBJECT])) ? YES : NO);
}

-(void)setAboveChild:(BOOL) aboveChild
{
	gtk_event_box_set_above_child(GTK_EVENT_BOX([self GOBJECT]), (aboveChild ? TRUE : FALSE));
}

-(void)setVisibleWindow:(BOOL) visibleWindow
{
	gtk_event_box_set_visible_window(GTK_EVENT_BOX([self GOBJECT]), (visibleWindow ? TRUE : FALSE));
}


@end