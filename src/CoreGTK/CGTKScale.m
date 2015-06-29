
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScale.h"

@implementation CGTKScale

-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment
{
	self = [super initWithGObject:(GObject *)gtk_scale_new(orientation, adjustment)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithRangeWithOrientation:(GtkOrientation) orientation andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step
{
	self = [super initWithGObject:(GObject *)gtk_scale_new_with_range(orientation, min, max, step)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkScale*)SCALE
{
	return GTK_SCALE([self GOBJECT]);
}

-(void)addMarkWithValue:(gdouble) value andPosition:(GtkPositionType) position andMarkup:(NSString*) markup
{
	gtk_scale_add_mark(GTK_SCALE([self GOBJECT]), value, position, [markup UTF8String]);
}

-(void)clearMarks
{
	gtk_scale_clear_marks(GTK_SCALE([self GOBJECT]));
}

-(gint)getDigits
{
	return gtk_scale_get_digits(GTK_SCALE([self GOBJECT]));
}

-(BOOL)getDrawValue
{
	return (gtk_scale_get_draw_value(GTK_SCALE([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHasOrigin
{
	return (gtk_scale_get_has_origin(GTK_SCALE([self GOBJECT])) ? YES : NO);
}

-(PangoLayout*)getLayout
{
	return gtk_scale_get_layout(GTK_SCALE([self GOBJECT]));
}

-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y
{
	gtk_scale_get_layout_offsets(GTK_SCALE([self GOBJECT]), x, y);
}

-(GtkPositionType)getValuePos
{
	return gtk_scale_get_value_pos(GTK_SCALE([self GOBJECT]));
}

-(void)setDigits:(gint) digits
{
	gtk_scale_set_digits(GTK_SCALE([self GOBJECT]), digits);
}

-(void)setDrawValue:(BOOL) drawValue
{
	gtk_scale_set_draw_value(GTK_SCALE([self GOBJECT]), (drawValue ? TRUE : FALSE));
}

-(void)setHasOrigin:(BOOL) hasOrigin
{
	gtk_scale_set_has_origin(GTK_SCALE([self GOBJECT]), (hasOrigin ? TRUE : FALSE));
}

-(void)setValuePos:(GtkPositionType) pos
{
	gtk_scale_set_value_pos(GTK_SCALE([self GOBJECT]), pos);
}


@end