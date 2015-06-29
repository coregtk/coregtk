
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKCellView : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithContextWithArea:(GtkCellArea*) area andContext:(GtkCellAreaContext*) context;
-(id)initWithMarkup:(NSString*) markup;
-(id)initWithPixbuf:(GdkPixbuf*) pixbuf;
-(id)initWithText:(NSString*) text;

/**
 * Methods
 */
-(GtkCellView*)CELLVIEW;
-(GtkTreePath*)getDisplayedRow;
-(BOOL)getDrawSensitive;
-(BOOL)getFitModel;
-(GtkTreeModel*)getModel;
-(BOOL)getSizeOfRowWithPath:(GtkTreePath*) path andRequisition:(GtkRequisition*) requisition;
-(void)setBackgroundColor:(const GdkColor*) color;
-(void)setBackgroundRgba:(const GdkRGBA*) rgba;
-(void)setDisplayedRow:(GtkTreePath*) path;
-(void)setDrawSensitive:(BOOL) drawSensitive;
-(void)setFitModel:(BOOL) fitModel;
-(void)setModel:(GtkTreeModel*) model;

@end