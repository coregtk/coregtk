
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAccelLabel.h"

@implementation CGTKAccelLabel

-(id)init:(NSString*) string
{
	self = [super initWithGObject:(GObject *)gtk_accel_label_new([string UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAccelLabel*)ACCELLABEL
{
	return GTK_ACCEL_LABEL([self GOBJECT]);
}

-(CGTKWidget*)getAccelWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_accel_label_get_accel_widget(GTK_ACCEL_LABEL([self GOBJECT]))];
}

-(guint)getAccelWidth
{
	return gtk_accel_label_get_accel_width(GTK_ACCEL_LABEL([self GOBJECT]));
}

-(BOOL)refetch
{
	return (gtk_accel_label_refetch(GTK_ACCEL_LABEL([self GOBJECT])) ? YES : NO);
}

-(void)setAccelWithAcceleratorKey:(guint) acceleratorKey andAcceleratorMods:(GdkModifierType) acceleratorMods
{
	gtk_accel_label_set_accel(GTK_ACCEL_LABEL([self GOBJECT]), acceleratorKey, acceleratorMods);
}

-(void)setAccelClosure:(GClosure*) accelClosure
{
	gtk_accel_label_set_accel_closure(GTK_ACCEL_LABEL([self GOBJECT]), accelClosure);
}

-(void)setAccelWidget:(CGTKWidget*) accelWidget
{
	gtk_accel_label_set_accel_widget(GTK_ACCEL_LABEL([self GOBJECT]), [accelWidget WIDGET]);
}


@end