
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKToolItem : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkToolItem*)TOOLITEM;
-(PangoEllipsizeMode)getEllipsizeMode;
-(BOOL)getExpand;
-(BOOL)getHomogeneous;
-(GtkIconSize)getIconSize;
-(BOOL)getIsImportant;
-(GtkOrientation)getOrientation;
-(CGTKWidget*)getProxyMenuItem:(NSString*) menuItemId;
-(GtkReliefStyle)getReliefStyle;
-(gfloat)getTextAlignment;
-(GtkOrientation)getTextOrientation;
-(GtkSizeGroup*)getTextSizeGroup;
-(GtkToolbarStyle)getToolbarStyle;
-(BOOL)getUseDragWindow;
-(BOOL)getVisibleHorizontal;
-(BOOL)getVisibleVertical;
-(void)rebuildMenu;
-(CGTKWidget*)retrieveProxyMenuItem;
-(void)setExpand:(BOOL) expand;
-(void)setHomogeneous:(BOOL) homogeneous;
-(void)setIsImportant:(BOOL) isImportant;
-(void)setProxyMenuItemWithMenuItemId:(NSString*) menuItemId andMenuItem:(CGTKWidget*) menuItem;
-(void)setTooltipMarkup:(NSString*) markup;
-(void)setTooltipText:(NSString*) text;
-(void)setUseDragWindow:(BOOL) useDragWindow;
-(void)setVisibleHorizontal:(BOOL) visibleHorizontal;
-(void)setVisibleVertical:(BOOL) visibleVertical;
-(void)toolbarReconfigured;

@end