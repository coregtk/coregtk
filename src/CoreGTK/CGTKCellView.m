
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCellView.h"

@implementation CGTKCellView

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_cell_view_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithContextWithArea:(GtkCellArea*) area andContext:(GtkCellAreaContext*) context
{
	self = [super initWithGObject:(GObject *)gtk_cell_view_new_with_context(area, context)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMarkup:(NSString*) markup
{
	self = [super initWithGObject:(GObject *)gtk_cell_view_new_with_markup([markup UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithPixbuf:(GdkPixbuf*) pixbuf
{
	self = [super initWithGObject:(GObject *)gtk_cell_view_new_with_pixbuf(pixbuf)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithText:(NSString*) text
{
	self = [super initWithGObject:(GObject *)gtk_cell_view_new_with_text([text UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkCellView*)CELLVIEW
{
	return GTK_CELL_VIEW([self GOBJECT]);
}

-(GtkTreePath*)getDisplayedRow
{
	return gtk_cell_view_get_displayed_row(GTK_CELL_VIEW([self GOBJECT]));
}

-(BOOL)getDrawSensitive
{
	return (gtk_cell_view_get_draw_sensitive(GTK_CELL_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getFitModel
{
	return (gtk_cell_view_get_fit_model(GTK_CELL_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkTreeModel*)getModel
{
	return gtk_cell_view_get_model(GTK_CELL_VIEW([self GOBJECT]));
}

-(BOOL)getSizeOfRowWithPath:(GtkTreePath*) path andRequisition:(GtkRequisition*) requisition
{
	return (gtk_cell_view_get_size_of_row(GTK_CELL_VIEW([self GOBJECT]), path, requisition) ? YES : NO);
}

-(void)setBackgroundColor:(const GdkColor*) color
{
	gtk_cell_view_set_background_color(GTK_CELL_VIEW([self GOBJECT]), color);
}

-(void)setBackgroundRgba:(const GdkRGBA*) rgba
{
	gtk_cell_view_set_background_rgba(GTK_CELL_VIEW([self GOBJECT]), rgba);
}

-(void)setDisplayedRow:(GtkTreePath*) path
{
	gtk_cell_view_set_displayed_row(GTK_CELL_VIEW([self GOBJECT]), path);
}

-(void)setDrawSensitive:(BOOL) drawSensitive
{
	gtk_cell_view_set_draw_sensitive(GTK_CELL_VIEW([self GOBJECT]), (drawSensitive ? TRUE : FALSE));
}

-(void)setFitModel:(BOOL) fitModel
{
	gtk_cell_view_set_fit_model(GTK_CELL_VIEW([self GOBJECT]), (fitModel ? TRUE : FALSE));
}

-(void)setModel:(GtkTreeModel*) model
{
	gtk_cell_view_set_model(GTK_CELL_VIEW([self GOBJECT]), model);
}


@end