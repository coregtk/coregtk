
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKContainer.h"

@interface CGTKMenuShell : CGTKContainer
{

}


/**
 * Methods
 */
-(GtkMenuShell*)MENUSHELL;
-(void)activateItemWithMenuItem:(CGTKWidget*) menuItem andForceDeactivate:(BOOL) forceDeactivate;
-(void)append:(CGTKWidget*) child;
-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace andWithSeparators:(BOOL) withSeparators;
-(void)cancel;
-(void)deactivate;
-(void)deselect;
-(CGTKWidget*)getParentShell;
-(CGTKWidget*)getSelectedItem;
-(BOOL)getTakeFocus;
-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)prepend:(CGTKWidget*) child;
-(void)selectFirst:(BOOL) searchSensitive;
-(void)selectItem:(CGTKWidget*) menuItem;
-(void)setTakeFocus:(BOOL) takeFocus;

@end