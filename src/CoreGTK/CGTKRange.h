
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKRange : CGTKWidget
{

}


/**
 * Methods
 */
-(GtkRange*)RANGE;
-(GtkAdjustment*)getAdjustment;
-(gdouble)getFillLevel;
-(BOOL)getFlippable;
-(BOOL)getInverted;
-(GtkSensitivityType)getLowerStepperSensitivity;
-(gint)getMinSliderSize;
-(void)getRangeRect:(GdkRectangle*) rangeRect;
-(BOOL)getRestrictToFillLevel;
-(gint)getRoundDigits;
-(BOOL)getShowFillLevel;
-(void)getSliderRangeWithSliderStart:(gint*) sliderStart andSliderEnd:(gint*) sliderEnd;
-(BOOL)getSliderSizeFixed;
-(GtkSensitivityType)getUpperStepperSensitivity;
-(gdouble)getValue;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setFillLevel:(gdouble) fillLevel;
-(void)setFlippable:(BOOL) flippable;
-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page;
-(void)setInverted:(BOOL) setting;
-(void)setLowerStepperSensitivity:(GtkSensitivityType) sensitivity;
-(void)setMinSliderSize:(gint) minSize;
-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max;
-(void)setRestrictToFillLevel:(BOOL) restrictToFillLevel;
-(void)setRoundDigits:(gint) roundDigits;
-(void)setShowFillLevel:(BOOL) showFillLevel;
-(void)setSliderSizeFixed:(BOOL) sizeFixed;
-(void)setUpperStepperSensitivity:(GtkSensitivityType) sensitivity;
-(void)setValue:(gdouble) value;

@end