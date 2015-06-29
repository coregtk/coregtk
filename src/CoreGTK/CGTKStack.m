
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKStack.h"

@implementation CGTKStack

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_stack_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkStack*)STACK
{
	return GTK_STACK([self GOBJECT]);
}

-(void)addNamedWithChild:(CGTKWidget*) child andName:(NSString*) name
{
	gtk_stack_add_named(GTK_STACK([self GOBJECT]), [child WIDGET], [name UTF8String]);
}

-(void)addTitledWithChild:(CGTKWidget*) child andName:(NSString*) name andTitle:(NSString*) title
{
	gtk_stack_add_titled(GTK_STACK([self GOBJECT]), [child WIDGET], [name UTF8String], [title UTF8String]);
}

-(BOOL)getHomogeneous
{
	return (gtk_stack_get_homogeneous(GTK_STACK([self GOBJECT])) ? YES : NO);
}

-(guint)getTransitionDuration
{
	return gtk_stack_get_transition_duration(GTK_STACK([self GOBJECT]));
}

-(GtkStackTransitionType)getTransitionType
{
	return gtk_stack_get_transition_type(GTK_STACK([self GOBJECT]));
}

-(CGTKWidget*)getVisibleChild
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_stack_get_visible_child(GTK_STACK([self GOBJECT]))];
}

-(NSString*)getVisibleChildName
{
	return [NSString stringWithUTF8String:gtk_stack_get_visible_child_name(GTK_STACK([self GOBJECT]))];
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_stack_set_homogeneous(GTK_STACK([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setTransitionDuration:(guint) duration
{
	gtk_stack_set_transition_duration(GTK_STACK([self GOBJECT]), duration);
}

-(void)setTransitionType:(GtkStackTransitionType) transition
{
	gtk_stack_set_transition_type(GTK_STACK([self GOBJECT]), transition);
}

-(void)setVisibleChild:(CGTKWidget*) child
{
	gtk_stack_set_visible_child(GTK_STACK([self GOBJECT]), [child WIDGET]);
}

-(void)setVisibleChildFullWithName:(NSString*) name andTransition:(GtkStackTransitionType) transition
{
	gtk_stack_set_visible_child_full(GTK_STACK([self GOBJECT]), [name UTF8String], transition);
}

-(void)setVisibleChildName:(NSString*) name
{
	gtk_stack_set_visible_child_name(GTK_STACK([self GOBJECT]), [name UTF8String]);
}


@end