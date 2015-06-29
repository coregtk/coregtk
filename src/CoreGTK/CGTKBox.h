
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKBox : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithOrientation:(GtkOrientation) orientation andSpacing:(gint) spacing;

/**
 * Methods
 */
-(GtkBox*)BOX;
-(GtkBaselinePosition)getBaselinePosition;
-(BOOL)getHomogeneous;
-(gint)getSpacing;
-(void)packEndWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;
-(void)packStartWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding;
-(void)queryChildPackingWithChild:(CGTKWidget*) child andExpand:(gboolean*) expand andFill:(gboolean*) fill andPadding:(guint*) padding andPackType:(GtkPackType*) packType;
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)setBaselinePosition:(GtkBaselinePosition) position;
-(void)setChildPackingWithChild:(CGTKWidget*) child andExpand:(BOOL) expand andFill:(BOOL) fill andPadding:(guint) padding andPackType:(GtkPackType) packType;
-(void)setHomogeneous:(BOOL) homogeneous;
-(void)setSpacing:(gint) spacing;

@end