
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKListBox : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkListBox*)LISTBOX;
-(void)dragHighlightRow:(GtkListBoxRow*) row;
-(void)dragUnhighlightRow;
-(BOOL)getActivateOnSingleClick;
-(GtkAdjustment*)getAdjustment;
-(GtkListBoxRow*)getRowAtIndex:(gint) index;
-(GtkListBoxRow*)getRowAtY:(gint) y;
-(GtkListBoxRow*)getSelectedRow;
-(GtkSelectionMode)getSelectionMode;
-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)invalidateFilter;
-(void)invalidateHeaders;
-(void)invalidateSort;
-(void)prepend:(CGTKWidget*) child;
-(void)selectRow:(GtkListBoxRow*) row;
-(void)setActivateOnSingleClick:(BOOL) single;
-(void)setAdjustment:(GtkAdjustment*) adjustment;
-(void)setFilterFuncWithFilterFunc:(GtkListBoxFilterFunc) filterFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
-(void)setHeaderFuncWithUpdateHeader:(GtkListBoxUpdateHeaderFunc) updateHeader andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;
-(void)setPlaceholder:(CGTKWidget*) placeholder;
-(void)setSelectionMode:(GtkSelectionMode) mode;
-(void)setSortFuncWithSortFunc:(GtkListBoxSortFunc) sortFunc andUserData:(gpointer) userData andDestroy:(GDestroyNotify) destroy;

@end