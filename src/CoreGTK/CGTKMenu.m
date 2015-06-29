
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenu.h"

@implementation CGTKMenu

+(GList*)getForAttachWidget:(CGTKWidget*) widget
{
	return gtk_menu_get_for_attach_widget([widget WIDGET]);
}

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_menu_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initFromModel:(GMenuModel*) model
{
	self = [super initWithGObject:(GObject *)gtk_menu_new_from_model(model)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkMenu*)MENU
{
	return GTK_MENU([self GOBJECT]);
}

-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach
{
	gtk_menu_attach(GTK_MENU([self GOBJECT]), [child WIDGET], leftAttach, rightAttach, topAttach, bottomAttach);
}

-(void)attachToWidgetWithAttachWidget:(CGTKWidget*) attachWidget andDetacher:(GtkMenuDetachFunc) detacher
{
	gtk_menu_attach_to_widget(GTK_MENU([self GOBJECT]), [attachWidget WIDGET], detacher);
}

-(void)detach
{
	gtk_menu_detach(GTK_MENU([self GOBJECT]));
}

-(GtkAccelGroup*)getAccelGroup
{
	return gtk_menu_get_accel_group(GTK_MENU([self GOBJECT]));
}

-(NSString*)getAccelPath
{
	return [NSString stringWithUTF8String:gtk_menu_get_accel_path(GTK_MENU([self GOBJECT]))];
}

-(CGTKWidget*)getActive
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_get_active(GTK_MENU([self GOBJECT]))];
}

-(CGTKWidget*)getAttachWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_get_attach_widget(GTK_MENU([self GOBJECT]))];
}

-(gint)getMonitor
{
	return gtk_menu_get_monitor(GTK_MENU([self GOBJECT]));
}

-(BOOL)getReserveToggleSize
{
	return (gtk_menu_get_reserve_toggle_size(GTK_MENU([self GOBJECT])) ? YES : NO);
}

-(BOOL)getTearoffState
{
	return (gtk_menu_get_tearoff_state(GTK_MENU([self GOBJECT])) ? YES : NO);
}

-(NSString*)getTitle
{
	return [NSString stringWithUTF8String:gtk_menu_get_title(GTK_MENU([self GOBJECT]))];
}

-(void)popdown
{
	gtk_menu_popdown(GTK_MENU([self GOBJECT]));
}

-(void)popupWithParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andButton:(guint) button andActivateTime:(guint32) activateTime
{
	gtk_menu_popup(GTK_MENU([self GOBJECT]), [parentMenuShell WIDGET], [parentMenuItem WIDGET], func, data, button, activateTime);
}

-(void)popupForDeviceWithDevice:(GdkDevice*) device andParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy andButton:(guint) button andActivateTime:(guint32) activateTime
{
	gtk_menu_popup_for_device(GTK_MENU([self GOBJECT]), device, [parentMenuShell WIDGET], [parentMenuItem WIDGET], func, data, destroy, button, activateTime);
}

-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_menu_reorder_child(GTK_MENU([self GOBJECT]), [child WIDGET], position);
}

-(void)reposition
{
	gtk_menu_reposition(GTK_MENU([self GOBJECT]));
}

-(void)setAccelGroup:(GtkAccelGroup*) accelGroup
{
	gtk_menu_set_accel_group(GTK_MENU([self GOBJECT]), accelGroup);
}

-(void)setAccelPath:(NSString*) accelPath
{
	gtk_menu_set_accel_path(GTK_MENU([self GOBJECT]), [accelPath UTF8String]);
}

-(void)setActive:(guint) index
{
	gtk_menu_set_active(GTK_MENU([self GOBJECT]), index);
}

-(void)setMonitor:(gint) monitorNum
{
	gtk_menu_set_monitor(GTK_MENU([self GOBJECT]), monitorNum);
}

-(void)setReserveToggleSize:(BOOL) reserveToggleSize
{
	gtk_menu_set_reserve_toggle_size(GTK_MENU([self GOBJECT]), (reserveToggleSize ? TRUE : FALSE));
}

-(void)setScreen:(GdkScreen*) screen
{
	gtk_menu_set_screen(GTK_MENU([self GOBJECT]), screen);
}

-(void)setTearoffState:(BOOL) tornOff
{
	gtk_menu_set_tearoff_state(GTK_MENU([self GOBJECT]), (tornOff ? TRUE : FALSE));
}

-(void)setTitle:(NSString*) title
{
	gtk_menu_set_title(GTK_MENU([self GOBJECT]), [title UTF8String]);
}


@end