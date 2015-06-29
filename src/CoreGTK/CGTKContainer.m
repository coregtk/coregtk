
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@implementation CGTKContainer

-(GtkContainer*)CONTAINER
{
	return GTK_CONTAINER([self GOBJECT]);
}

-(void)add:(CGTKWidget*) widget
{
	gtk_container_add(GTK_CONTAINER([self GOBJECT]), [widget WIDGET]);
}

-(void)checkResize
{
	gtk_container_check_resize(GTK_CONTAINER([self GOBJECT]));
}

-(void)childGetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(GValue*) value
{
	gtk_container_child_get_property(GTK_CONTAINER([self GOBJECT]), [child WIDGET], [propertyName UTF8String], value);
}

-(void)childGetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs
{
	gtk_container_child_get_valist(GTK_CONTAINER([self GOBJECT]), [child WIDGET], [firstPropertyName UTF8String], varArgs);
}

-(void)childNotifyWithChild:(CGTKWidget*) child andChildProperty:(NSString*) childProperty
{
	gtk_container_child_notify(GTK_CONTAINER([self GOBJECT]), [child WIDGET], [childProperty UTF8String]);
}

-(void)childSetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(const GValue*) value
{
	gtk_container_child_set_property(GTK_CONTAINER([self GOBJECT]), [child WIDGET], [propertyName UTF8String], value);
}

-(void)childSetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs
{
	gtk_container_child_set_valist(GTK_CONTAINER([self GOBJECT]), [child WIDGET], [firstPropertyName UTF8String], varArgs);
}

-(GType)childType
{
	return gtk_container_child_type(GTK_CONTAINER([self GOBJECT]));
}

-(void)forallWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData
{
	gtk_container_forall(GTK_CONTAINER([self GOBJECT]), callback, callbackData);
}

-(void)foreachWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData
{
	gtk_container_foreach(GTK_CONTAINER([self GOBJECT]), callback, callbackData);
}

-(guint)getBorderWidth
{
	return gtk_container_get_border_width(GTK_CONTAINER([self GOBJECT]));
}

-(GList*)getChildren
{
	return gtk_container_get_children(GTK_CONTAINER([self GOBJECT]));
}

-(BOOL)getFocusChain:(GList**) focusableWidgets
{
	return (gtk_container_get_focus_chain(GTK_CONTAINER([self GOBJECT]), focusableWidgets) ? YES : NO);
}

-(CGTKWidget*)getFocusChild
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_container_get_focus_child(GTK_CONTAINER([self GOBJECT]))];
}

-(GtkAdjustment*)getFocusHadjustment
{
	return gtk_container_get_focus_hadjustment(GTK_CONTAINER([self GOBJECT]));
}

-(GtkAdjustment*)getFocusVadjustment
{
	return gtk_container_get_focus_vadjustment(GTK_CONTAINER([self GOBJECT]));
}

-(GtkWidgetPath*)getPathForChild:(CGTKWidget*) child
{
	return gtk_container_get_path_for_child(GTK_CONTAINER([self GOBJECT]), [child WIDGET]);
}

-(GtkResizeMode)getResizeMode
{
	return gtk_container_get_resize_mode(GTK_CONTAINER([self GOBJECT]));
}

-(void)propagateDrawWithChild:(CGTKWidget*) child andCr:(cairo_t*) cr
{
	gtk_container_propagate_draw(GTK_CONTAINER([self GOBJECT]), [child WIDGET], cr);
}

-(void)remove:(CGTKWidget*) widget
{
	gtk_container_remove(GTK_CONTAINER([self GOBJECT]), [widget WIDGET]);
}

-(void)resizeChildren
{
	gtk_container_resize_children(GTK_CONTAINER([self GOBJECT]));
}

-(void)setBorderWidth:(guint) borderWidth
{
	gtk_container_set_border_width(GTK_CONTAINER([self GOBJECT]), borderWidth);
}

-(void)setFocusChain:(GList*) focusableWidgets
{
	gtk_container_set_focus_chain(GTK_CONTAINER([self GOBJECT]), focusableWidgets);
}

-(void)setFocusChild:(CGTKWidget*) child
{
	gtk_container_set_focus_child(GTK_CONTAINER([self GOBJECT]), [child WIDGET]);
}

-(void)setFocusHadjustment:(GtkAdjustment*) adjustment
{
	gtk_container_set_focus_hadjustment(GTK_CONTAINER([self GOBJECT]), adjustment);
}

-(void)setFocusVadjustment:(GtkAdjustment*) adjustment
{
	gtk_container_set_focus_vadjustment(GTK_CONTAINER([self GOBJECT]), adjustment);
}

-(void)setReallocateRedraws:(BOOL) needsRedraws
{
	gtk_container_set_reallocate_redraws(GTK_CONTAINER([self GOBJECT]), (needsRedraws ? TRUE : FALSE));
}

-(void)setResizeMode:(GtkResizeMode) resizeMode
{
	gtk_container_set_resize_mode(GTK_CONTAINER([self GOBJECT]), resizeMode);
}

-(void)unsetFocusChain
{
	gtk_container_unset_focus_chain(GTK_CONTAINER([self GOBJECT]));
}


@end