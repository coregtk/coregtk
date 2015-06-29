
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@implementation CGTKBox

-(id)initWithOrientation:(GtkOrientation) orientation andSpacing:(gint) spacing
{
	self = [super initWithGObject:(GObject *)gtk_box_new(orientation, spacing)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkBox*)BOX
{
	return GTK_BOX([self GOBJECT]);
}

-(GtkBaselinePosition)getBaselinePosition
{
	return gtk_box_get_baseline_position(GTK_BOX([self GOBJECT]));
}

-(BOOL)getHomogeneous
{
	return (gtk_box_get_homogeneous(GTK_BOX([self GOBJECT])) ? YES : NO);
}

-(gint)getSpacing
{
	return gtk_box_get_spacing(GTK_BOX([self GOBJECT]));
}

-(void)packEndWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding
{
	gtk_box_pack_end(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding);
}

-(void)packStartWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding
{
	gtk_box_pack_start(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding);
}

-(void)queryChildPackingWithChild:(CGTKWidget*) child andExpand:(gboolean*) expand andFill:(gboolean*) fill andPadding:(guint*) padding andPackType:(GtkPackType*) packType
{
	gtk_box_query_child_packing(GTK_BOX([self GOBJECT]), [child WIDGET], expand, fill, padding, packType);
}

-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_box_reorder_child(GTK_BOX([self GOBJECT]), [child WIDGET], position);
}

-(void)setBaselinePosition:(GtkBaselinePosition) position
{
	gtk_box_set_baseline_position(GTK_BOX([self GOBJECT]), position);
}

-(void)setChildPackingWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding andPackType:(GtkPackType) packType
{
	gtk_box_set_child_packing(GTK_BOX([self GOBJECT]), [child WIDGET], (expand ? TRUE : FALSE), (fill ? TRUE : FALSE), padding, packType);
}

-(void)setHomogeneous:(BOOL) homogeneous
{
	gtk_box_set_homogeneous(GTK_BOX([self GOBJECT]), (homogeneous ? TRUE : FALSE));
}

-(void)setSpacing:(gint) spacing
{
	gtk_box_set_spacing(GTK_BOX([self GOBJECT]), spacing);
}


@end