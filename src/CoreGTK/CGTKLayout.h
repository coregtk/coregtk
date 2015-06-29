
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKLayout : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithHadjustment:(GtkAdjustment*) hadjustment andVadjustment:(GtkAdjustment*) vadjustment;

/**
 * Methods
 */
-(GtkLayout*)LAYOUT;
-(GdkWindow*)getBinWindow;
-(GtkAdjustment*)getHadjustment;
-(void)getSizeWithWidth:(guint*) width andHeight:(guint*) height;
-(GtkAdjustment*)getVadjustment;
-(void)moveWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;
-(void)putWithChildWidget:(CGTKWidget*) childWidget andX:(gint) x andY:(gint) y;
-(void)setHadjustment:(GtkAdjustment*) adjustment;
-(void)setSizeWithWidth:(guint) width andHeight:(guint) height;
-(void)setVadjustment:(GtkAdjustment*) adjustment;

@end