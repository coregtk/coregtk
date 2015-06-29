
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKLabel.h"

@interface CGTKAccelLabel : CGTKLabel
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) string;

/**
 * Methods
 */
-(GtkAccelLabel*)ACCELLABEL;
-(CGTKWidget*)getAccelWidget;
-(guint)getAccelWidth;
-(BOOL)refetch;
-(void)setAccelWithAcceleratorKey:(guint) acceleratorKey andAcceleratorMods:(GdkModifierType) acceleratorMods;
-(void)setAccelClosure:(GClosure*) accelClosure;
-(void)setAccelWidget:(CGTKWidget*) accelWidget;

@end