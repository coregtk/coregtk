
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKEntry.h"

@interface CGTKSpinButton : CGTKEntry
{

}


/**
 * Constructors
 */
-(id)initWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits;
-(id)initWithRangeWithMin:(gdouble) min andMax:(gdouble) max andStep:(gdouble) step;

/**
 * Methods
 */
-(GtkSpinButton*)SPINBUTTON;
-(void)configureWithAdjustment:(GtkAdjustment*) adjustment andClimbRate:(gdouble) climbRate andDigits:(guint) digits;
-(GtkAdjustment*)getAdjustment;
-(guint)getDigits;
-(void)getIncrementsWithStep:(gdouble*) step andPage:(gdouble*) page;
-(BOOL)getNumeric;
-(void)getRangeWithMin:(gdouble*) min andMax:(gdouble*) max;
-(BOOL)getSnapToTicks;
-(GtkSpinButtonUpdatePolicy)getUpdatePolicy;
-(gdouble)getValue;
-(gint)getValueAsInt;
-(BOOL)getWrap;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setDigits:(guint) digits;
-(void)setIncrementsWithStep:(gdouble) step andPage:(gdouble) page;
-(void)setNumeric:(BOOL) numeric;
-(void)setRangeWithMin:(gdouble) min andMax:(gdouble) max;
-(void)setSnapToTicks:(BOOL) snapToTicks;
-(void)setUpdatePolicy:(GtkSpinButtonUpdatePolicy) policy;
-(void)setValue:(gdouble) value;
-(void)setWrap:(BOOL) wrap;
-(void)spinWithDirection:(GtkSpinType) direction andIncrement:(gdouble) increment;
-(void)update;

@end