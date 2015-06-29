
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKToolbar : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkToolbar*)TOOLBAR;
-(gint)getDropIndexWithX:(gint) x andY:(gint) y;
-(GtkIconSize)getIconSize;
-(gint)getItemIndex:(GtkToolItem*) item;
-(gint)getNitems;
-(GtkToolItem*)getNthItem:(gint) n;
-(GtkReliefStyle)getReliefStyle;
-(BOOL)getShowArrow;
-(GtkToolbarStyle)getStyle;
-(void)insertWithItem:(GtkToolItem*) item andPos:(gint) pos;
-(void)setDropHighlightItemWithToolItem:(GtkToolItem*) toolItem andIndex:(gint) index;
-(void)setIconSize:(GtkIconSize) iconSize;
-(void)setShowArrow:(BOOL) showArrow;
-(void)setStyle:(GtkToolbarStyle) style;
-(void)unsetIconSize;
-(void)unsetStyle;

@end