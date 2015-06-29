
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKHSV : CGTKWidget
{

}

/**
 * Functions
 */
+(void)gtkHsvToRgbWithH:(gdouble) h andS:(gdouble) s andV:(gdouble) v andR:(gdouble*) r andG:(gdouble*) g andB:(gdouble*) b;

/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkHSV*)HSV;
-(void)gtkHsvGetColorWithH:(gdouble*) h andS:(gdouble*) s andV:(gdouble*) v;
-(void)gtkHsvGetMetricsWithSize:(gint*) size andRingWidth:(gint*) ringWidth;
-(BOOL)gtkHsvIsAdjusting;
-(void)gtkHsvSetColorWithH:(double) h andS:(double) s andV:(double) v;
-(void)gtkHsvSetMetricsWithSize:(gint) size andRingWidth:(gint) ringWidth;

@end