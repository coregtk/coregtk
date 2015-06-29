
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@implementation CGTKBin

-(GtkBin*)BIN
{
	return GTK_BIN([self GOBJECT]);
}

-(CGTKWidget*)getChild
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_bin_get_child(GTK_BIN([self GOBJECT]))];
}


@end