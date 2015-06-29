
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKHandleBox : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkHandleBox*)HANDLEBOX;
-(BOOL)getChildDetached;
-(GtkPositionType)getHandlePosition;
-(GtkShadowType)getShadowType;
-(GtkPositionType)getSnapEdge;
-(void)setHandlePosition:(GtkPositionType) position;
-(void)setShadowType:(GtkShadowType) type;
-(void)setSnapEdge:(GtkPositionType) edge;

@end