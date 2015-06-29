
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKComboBox : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithArea:(GtkCellArea*) area;
-(id)initWithAreaAndEntry:(GtkCellArea*) area;
-(id)initWithEntry;
-(id)initWithModel:(GtkTreeModel*) model;
-(id)initWithModelAndEntry:(GtkTreeModel*) model;

/**
 * Methods
 */
-(GtkComboBox*)COMBOBOX;
-(gint)getActive;
-(NSString*)getActiveId;
-(BOOL)getActiveIter:(GtkTreeIter*) iter;
-(BOOL)getAddTearoffs;
-(GtkSensitivityType)getButtonSensitivity;
-(gint)getColumnSpanColumn;
-(gint)getEntryTextColumn;
-(BOOL)getFocusOnClick;
-(BOOL)getHasEntry;
-(gint)getIdColumn;
-(GtkTreeModel*)getModel;
-(AtkObject*)getPopupAccessible;
-(BOOL)getPopupFixedWidth;
-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc;
-(gint)getRowSpanColumn;
-(NSString*)getTitle;
-(gint)getWrapWidth;
-(void)popdown;
-(void)popup;
-(void)popupForDevice:(GdkDevice*) device;
-(void)setActive:(gint) index;
-(BOOL)setActiveId:(NSString*) activeId;
-(void)setActiveIter:(GtkTreeIter*) iter;
-(void)setAddTearoffs:(BOOL) addTearoffs;
-(void)setButtonSensitivity:(GtkSensitivityType) sensitivity;
-(void)setColumnSpanColumn:(gint) columnSpan;
-(void)setEntryTextColumn:(gint) textColumn;
-(void)setFocusOnClick:(BOOL) focusOnClick;
-(void)setIdColumn:(gint) idColumn;
-(void)setModel:(GtkTreeModel*) model;
-(void)setPopupFixedWidth:(BOOL) fixed;
-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setRowSpanColumn:(gint) rowSpan;
-(void)setTitle:(NSString*) title;
-(void)setWrapWidth:(gint) width;

@end