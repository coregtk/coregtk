
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKGrid : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkGrid*)GRID;
-(void)attachWithChild:(CGTKWidget*) child andLeft:(gint) left andTop:(gint) top andWidth:(gint) width andHeight:(gint) height;
-(void)attachNextToWithChild:(CGTKWidget*) child andSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side andWidth:(gint) width andHeight:(gint) height;
-(gint)getBaselineRow;
-(CGTKWidget*)getChildAtWithLeft:(gint) left andTop:(gint) top;
-(BOOL)getColumnHomogeneous;
-(guint)getColumnSpacing;
-(GtkBaselinePosition)getRowBaselinePosition:(gint) row;
-(BOOL)getRowHomogeneous;
-(guint)getRowSpacing;
-(void)insertColumn:(gint) position;
-(void)insertNextToWithSibling:(CGTKWidget*) sibling andSide:(GtkPositionType) side;
-(void)insertRow:(gint) position;
-(void)removeColumn:(gint) position;
-(void)removeRow:(gint) position;
-(void)setBaselineRow:(gint) row;
-(void)setColumnHomogeneous:(BOOL) homogeneous;
-(void)setColumnSpacing:(guint) spacing;
-(void)setRowBaselinePositionWithRow:(gint) row andPos:(GtkBaselinePosition) pos;
-(void)setRowHomogeneous:(BOOL) homogeneous;
-(void)setRowSpacing:(guint) spacing;

@end