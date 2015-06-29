
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKProgressBar : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkProgressBar*)PROGRESSBAR;
-(PangoEllipsizeMode)getEllipsize;
-(gdouble)getFraction;
-(BOOL)getInverted;
-(gdouble)getPulseStep;
-(BOOL)getShowText;
-(NSString*)getText;
-(void)pulse;
-(void)setEllipsize:(PangoEllipsizeMode) mode;
-(void)setFraction:(gdouble) fraction;
-(void)setInverted:(BOOL) inverted;
-(void)setPulseStep:(gdouble) fraction;
-(void)setShowText:(BOOL) showText;
-(void)setText:(NSString*) text;

@end