
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKListBoxRow.h"

@implementation CGTKListBoxRow

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_list_box_row_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkListBoxRow*)LISTBOXROW
{
	return GTK_LIST_BOX_ROW([self GOBJECT]);
}

-(void)changed
{
	gtk_list_box_row_changed(GTK_LIST_BOX_ROW([self GOBJECT]));
}

-(CGTKWidget*)getHeader
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_list_box_row_get_header(GTK_LIST_BOX_ROW([self GOBJECT]))];
}

-(gint)getIndex
{
	return gtk_list_box_row_get_index(GTK_LIST_BOX_ROW([self GOBJECT]));
}

-(void)setHeader:(CGTKWidget*) header
{
	gtk_list_box_row_set_header(GTK_LIST_BOX_ROW([self GOBJECT]), [header WIDGET]);
}


@end