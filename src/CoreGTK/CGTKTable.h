
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKTable : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)initWithRows:(guint) rows andColumns:(guint) columns andHomogeneous:(BOOL) homogeneous;

/**
 * Methods
 */
-(GtkTable*)TABLE;
-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach andXoptions:(GtkAttachOptions) xoptions andYoptions:(GtkAttachOptions) yoptions andXpadding:(guint) xpadding andYpadding:(guint) ypadding;
-(void)attachDefaultsWithWidget:(CGTKWidget*) widget andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;
-(guint)getColSpacing:(guint) column;
-(guint)getDefaultColSpacing;
-(guint)getDefaultRowSpacing;
-(BOOL)getHomogeneous;
-(guint)getRowSpacing:(guint) row;
-(void)getSizeWithRows:(guint*) rows andColumns:(guint*) columns;
-(void)resizeWithRows:(guint) rows andColumns:(guint) columns;
-(void)setColSpacingWithColumn:(guint) column andSpacing:(guint) spacing;
-(void)setColSpacings:(guint) spacing;
-(void)setHomogeneous:(BOOL) homogeneous;
-(void)setRowSpacingWithRow:(guint) row andSpacing:(guint) spacing;
-(void)setRowSpacings:(guint) spacing;

@end