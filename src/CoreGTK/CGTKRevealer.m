
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRevealer.h"

@implementation CGTKRevealer

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_revealer_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkRevealer*)REVEALER
{
	return GTK_REVEALER([self GOBJECT]);
}

-(BOOL)getChildRevealed
{
	return (gtk_revealer_get_child_revealed(GTK_REVEALER([self GOBJECT])) ? YES : NO);
}

-(BOOL)getRevealChild
{
	return (gtk_revealer_get_reveal_child(GTK_REVEALER([self GOBJECT])) ? YES : NO);
}

-(guint)getTransitionDuration
{
	return gtk_revealer_get_transition_duration(GTK_REVEALER([self GOBJECT]));
}

-(GtkRevealerTransitionType)getTransitionType
{
	return gtk_revealer_get_transition_type(GTK_REVEALER([self GOBJECT]));
}

-(void)setRevealChild:(BOOL) revealChild
{
	gtk_revealer_set_reveal_child(GTK_REVEALER([self GOBJECT]), (revealChild ? TRUE : FALSE));
}

-(void)setTransitionDuration:(guint) duration
{
	gtk_revealer_set_transition_duration(GTK_REVEALER([self GOBJECT]), duration);
}

-(void)setTransitionType:(GtkRevealerTransitionType) transition
{
	gtk_revealer_set_transition_type(GTK_REVEALER([self GOBJECT]), transition);
}


@end