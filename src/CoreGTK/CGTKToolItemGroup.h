
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKToolItemGroup : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) label;

/**
 * Methods
 */
-(GtkToolItemGroup*)TOOLITEMGROUP;
-(BOOL)getCollapsed;
-(GtkToolItem*)getDropItemWithX:(gint) x andY:(gint) y;
-(PangoEllipsizeMode)getEllipsize;
-(GtkReliefStyle)getHeaderRelief;
-(gint)getItemPosition:(GtkToolItem*) item;
-(NSString*)getLabel;
-(CGTKWidget*)getLabelWidget;
-(guint)getNitems;
-(GtkToolItem*)getNthItem:(guint) index;
-(void)insertWithItem:(GtkToolItem*) item andPosition:(gint) position;
-(void)setCollapsed:(BOOL) collapsed;
-(void)setEllipsize:(PangoEllipsizeMode) ellipsize;
-(void)setHeaderRelief:(GtkReliefStyle) style;
-(void)setItemPositionWithItem:(GtkToolItem*) item andPosition:(gint) position;
-(void)setLabel:(NSString*) label;
-(void)setLabelWidget:(CGTKWidget*) labelWidget;

@end