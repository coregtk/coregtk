
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKNotebook : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkNotebook*)NOTEBOOK;
-(gint)appendPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
-(gint)appendPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;
-(CGTKWidget*)getActionWidget:(GtkPackType) packType;
-(gint)getCurrentPage;
-(NSString*)getGroupName;
-(CGTKWidget*)getMenuLabel:(CGTKWidget*) child;
-(NSString*)getMenuLabelText:(CGTKWidget*) child;
-(gint)getNpages;
-(CGTKWidget*)getNthPage:(gint) pageNum;
-(BOOL)getScrollable;
-(BOOL)getShowBorder;
-(BOOL)getShowTabs;
-(BOOL)getTabDetachable:(CGTKWidget*) child;
-(guint16)getTabHborder;
-(CGTKWidget*)getTabLabel:(CGTKWidget*) child;
-(NSString*)getTabLabelText:(CGTKWidget*) child;
-(GtkPositionType)getTabPos;
-(BOOL)getTabReorderable:(CGTKWidget*) child;
-(guint16)getTabVborder;
-(gint)insertPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andPosition:(gint) position;
-(gint)insertPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel andPosition:(gint) position;
-(void)nextPage;
-(gint)pageNum:(CGTKWidget*) child;
-(void)popupDisable;
-(void)popupEnable;
-(gint)prependPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
-(gint)prependPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;
-(void)prevPage;
-(void)removePage:(gint) pageNum;
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)setActionWidgetWithWidget:(CGTKWidget*) widget andPackType:(GtkPackType) packType;
-(void)setCurrentPage:(gint) pageNum;
-(void)setGroupName:(NSString*) groupName;
-(void)setMenuLabelWithChild:(CGTKWidget*) child andMenuLabel:(CGTKWidget*) menuLabel;
-(void)setMenuLabelTextWithChild:(CGTKWidget*) child andMenuText:(NSString*) menuText;
-(void)setScrollable:(BOOL) scrollable;
-(void)setShowBorder:(BOOL) showBorder;
-(void)setShowTabs:(BOOL) showTabs;
-(void)setTabDetachableWithChild:(CGTKWidget*) child andDetachable:(BOOL) detachable;
-(void)setTabLabelWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
-(void)setTabLabelTextWithChild:(CGTKWidget*) child andTabText:(NSString*) tabText;
-(void)setTabPos:(GtkPositionType) pos;
-(void)setTabReorderableWithChild:(CGTKWidget*) child andReorderable:(BOOL) reorderable;

@end