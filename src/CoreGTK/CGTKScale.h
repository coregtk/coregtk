
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKRange.h"

@interface CGTKScale : CGTKRange
{

}


/**
 * Constructors
 */
-(id)initWithOrientation:(GtkOrientation) orientation andAdjustment:(GtkAdjustment*) adjustment;
-(id)initWithRangeWithOrientation:(GtkOrientation) orientation andMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step;

/**
 * Methods
 */
-(GtkScale*)SCALE;
-(void)addMarkWithValue:(gdouble) value andPosition:(GtkPositionType) position andMarkup:(NSString*) markup;
-(void)clearMarks;
-(gint)getDigits;
-(BOOL)getDrawValue;
-(BOOL)getHasOrigin;
-(PangoLayout*)getLayout;
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
-(GtkPositionType)getValuePos;
-(void)setDigits:(gint) digits;
-(void)setDrawValue:(BOOL) drawValue;
-(void)setHasOrigin:(BOOL) hasOrigin;
-(void)setValuePos:(GtkPositionType) pos;

@end