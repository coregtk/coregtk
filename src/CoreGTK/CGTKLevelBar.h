
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKLevelBar : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initForIntervalWithMinValue:(gdouble) minValue andMaxValue:(gdouble) maxValue;

/**
 * Methods
 */
-(GtkLevelBar*)LEVELBAR;
-(void)addOffsetValueWithName:(NSString*) name andValue:(gdouble) value;
-(BOOL)getInverted;
-(gdouble)getMaxValue;
-(gdouble)getMinValue;
-(GtkLevelBarMode)getMode;
-(BOOL)getOffsetValueWithName:(NSString*) name andValue:(gdouble*) value;
-(gdouble)getValue;
-(void)removeOffsetValue:(NSString*) name;
-(void)setInverted:(BOOL) inverted;
-(void)setMaxValue:(gdouble) value;
-(void)setMinValue:(gdouble) value;
-(void)setMode:(GtkLevelBarMode) mode;
-(void)setValue:(gdouble) value;

@end