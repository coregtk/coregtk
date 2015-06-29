
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKToolPalette : CGTKContainer
{

}

/**
 * Functions
 */
+(const GtkTargetEntry*)getDragTargetGroup;
+(const GtkTargetEntry*)getDragTargetItem;

/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkToolPalette*)TOOLPALETTE;
-(void)addDragDestWithWidget:(CGTKWidget*) widget andFlags:(GtkDestDefaults) flags andTargets:(GtkToolPaletteDragTargets) targets andActions:(GdkDragAction) actions;
-(CGTKWidget*)getDragItem:(const GtkSelectionData*) selection;
-(GtkToolItemGroup*)getDropGroupWithX:(gint) x andY:(gint) y;
-(GtkToolItem*)getDropItemWithX:(gint) x andY:(gint) y;
-(BOOL)getExclusive:(GtkToolItemGroup*) group;
-(BOOL)getExpand:(GtkToolItemGroup*) group;
-(gint)getGroupPosition:(GtkToolItemGroup*) group;
-(GtkAdjustment*)getHadjustment;
-(GtkIconSize)getIconSize;
-(GtkToolbarStyle)getStyle;
-(GtkAdjustment*)getVadjustment;
-(void)setDragSource:(GtkToolPaletteDragTargets) targets;
-(void)setExclusiveWithGroup:(GtkToolItemGroup*) group andExclusive:(BOOL) exclusive;
-(void)setExpandWithGroup:(GtkToolItemGroup*) group andExpand:(BOOL) expand;
-(void)setGroupPositionWithGroup:(GtkToolItemGroup*) group andPosition:(gint) position;
-(void)setIconSize:(GtkIconSize) iconSize;
-(void)setStyle:(GtkToolbarStyle) style;
-(void)unsetIconSize;
-(void)unsetStyle;

@end