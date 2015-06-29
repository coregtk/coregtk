
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKHSV.h"

@implementation CGTKHSV

+(void)gtkHsvToRgbWithH:(gdouble) h andS:(gdouble) s andV:(gdouble) v andR:(gdouble*) r andG:(gdouble*) g andB:(gdouble*) b
{
	gtk_hsv_to_rgb(h, s, v, r, g, b);
}

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_hsv_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkHSV*)HSV
{
	return GTK_HSV([self GOBJECT]);
}

-(void)gtkHsvGetColorWithH:(gdouble*) h andS:(gdouble*) s andV:(gdouble*) v
{
	gtk_hsv_get_color(GTK_HSV([self GOBJECT]), h, s, v);
}

-(void)gtkHsvGetMetricsWithSize:(gint*) size andRingWidth:(gint*) ringWidth
{
	gtk_hsv_get_metrics(GTK_HSV([self GOBJECT]), size, ringWidth);
}

-(BOOL)gtkHsvIsAdjusting
{
	return (gtk_hsv_is_adjusting(GTK_HSV([self GOBJECT])) ? YES : NO);
}

-(void)gtkHsvSetColorWithH:(double) h andS:(double) s andV:(double) v
{
	gtk_hsv_set_color(GTK_HSV([self GOBJECT]), h, s, v);
}

-(void)gtkHsvSetMetricsWithSize:(gint) size andRingWidth:(gint) ringWidth
{
	gtk_hsv_set_metrics(GTK_HSV([self GOBJECT]), size, ringWidth);
}


@end