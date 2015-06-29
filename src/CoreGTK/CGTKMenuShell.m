
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuShell.h"

@implementation CGTKMenuShell

-(GtkMenuShell*)MENUSHELL
{
	return GTK_MENU_SHELL([self GOBJECT]);
}

-(void)activateItemWithMenuItem:(CGTKWidget*) menuItem andForceDeactivate:(BOOL) forceDeactivate
{
	gtk_menu_shell_activate_item(GTK_MENU_SHELL([self GOBJECT]), [menuItem WIDGET], (forceDeactivate ? TRUE : FALSE));
}

-(void)append:(CGTKWidget*) child
{
	gtk_menu_shell_append(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET]);
}

-(void)bindModelWithModel:(GMenuModel*) model andActionNamespace:(NSString*) actionNamespace andWithSeparators:(BOOL) withSeparators
{
	gtk_menu_shell_bind_model(GTK_MENU_SHELL([self GOBJECT]), model, [actionNamespace UTF8String], (withSeparators ? TRUE : FALSE));
}

-(void)cancel
{
	gtk_menu_shell_cancel(GTK_MENU_SHELL([self GOBJECT]));
}

-(void)deactivate
{
	gtk_menu_shell_deactivate(GTK_MENU_SHELL([self GOBJECT]));
}

-(void)deselect
{
	gtk_menu_shell_deselect(GTK_MENU_SHELL([self GOBJECT]));
}

-(CGTKWidget*)getParentShell
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_shell_get_parent_shell(GTK_MENU_SHELL([self GOBJECT]))];
}

-(CGTKWidget*)getSelectedItem
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_menu_shell_get_selected_item(GTK_MENU_SHELL([self GOBJECT]))];
}

-(BOOL)getTakeFocus
{
	return (gtk_menu_shell_get_take_focus(GTK_MENU_SHELL([self GOBJECT])) ? YES : NO);
}

-(void)insertWithChild:(CGTKWidget*) child andPosition:(gint) position
{
	gtk_menu_shell_insert(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET], position);
}

-(void)prepend:(CGTKWidget*) child
{
	gtk_menu_shell_prepend(GTK_MENU_SHELL([self GOBJECT]), [child WIDGET]);
}

-(void)selectFirst:(BOOL) searchSensitive
{
	gtk_menu_shell_select_first(GTK_MENU_SHELL([self GOBJECT]), (searchSensitive ? TRUE : FALSE));
}

-(void)selectItem:(CGTKWidget*) menuItem
{
	gtk_menu_shell_select_item(GTK_MENU_SHELL([self GOBJECT]), [menuItem WIDGET]);
}

-(void)setTakeFocus:(BOOL) takeFocus
{
	gtk_menu_shell_set_take_focus(GTK_MENU_SHELL([self GOBJECT]), (takeFocus ? TRUE : FALSE));
}


@end