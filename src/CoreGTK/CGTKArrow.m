
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKArrow.h"

@implementation CGTKArrow

-(id)initWithArrowType:(GtkArrowType) arrowType andShadowType:(GtkShadowType) shadowType
{
	self = [super initWithGObject:(GObject *)gtk_arrow_new(arrowType, shadowType)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkArrow*)ARROW
{
	return GTK_ARROW([self GOBJECT]);
}

-(void)setWithArrowType:(GtkArrowType) arrowType andShadowType:(GtkShadowType) shadowType
{
	gtk_arrow_set(GTK_ARROW([self GOBJECT]), arrowType, shadowType);
}


@end