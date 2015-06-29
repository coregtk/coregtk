
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKLockButton.h"

@implementation CGTKLockButton

-(id)init:(GPermission*) permission
{
	self = [super initWithGObject:(GObject *)gtk_lock_button_new(permission)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLockButton*)LOCKBUTTON
{
	return GTK_LOCK_BUTTON([self GOBJECT]);
}

-(GPermission*)getPermission
{
	return gtk_lock_button_get_permission(GTK_LOCK_BUTTON([self GOBJECT]));
}

-(void)setPermission:(GPermission*) permission
{
	gtk_lock_button_set_permission(GTK_LOCK_BUTTON([self GOBJECT]), permission);
}


@end