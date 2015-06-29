
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToolbar.h"

@implementation CGTKToolbar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_toolbar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkToolbar*)TOOLBAR
{
	return GTK_TOOLBAR([self GOBJECT]);
}

-(gint)getDropIndexWithX:(gint) x andY:(gint) y
{
	return gtk_toolbar_get_drop_index(GTK_TOOLBAR([self GOBJECT]), x, y);
}

-(GtkIconSize)getIconSize
{
	return gtk_toolbar_get_icon_size(GTK_TOOLBAR([self GOBJECT]));
}

-(gint)getItemIndex:(GtkToolItem*) item
{
	return gtk_toolbar_get_item_index(GTK_TOOLBAR([self GOBJECT]), item);
}

-(gint)getNitems
{
	return gtk_toolbar_get_n_items(GTK_TOOLBAR([self GOBJECT]));
}

-(GtkToolItem*)getNthItem:(gint) n
{
	return gtk_toolbar_get_nth_item(GTK_TOOLBAR([self GOBJECT]), n);
}

-(GtkReliefStyle)getReliefStyle
{
	return gtk_toolbar_get_relief_style(GTK_TOOLBAR([self GOBJECT]));
}

-(BOOL)getShowArrow
{
	return (gtk_toolbar_get_show_arrow(GTK_TOOLBAR([self GOBJECT])) ? YES : NO);
}

-(GtkToolbarStyle)getStyle
{
	return gtk_toolbar_get_style(GTK_TOOLBAR([self GOBJECT]));
}

-(void)insertWithItem:(GtkToolItem*) item andPos:(gint) pos
{
	gtk_toolbar_insert(GTK_TOOLBAR([self GOBJECT]), item, pos);
}

-(void)setDropHighlightItemWithToolItem:(GtkToolItem*) toolItem andIndex:(gint) index
{
	gtk_toolbar_set_drop_highlight_item(GTK_TOOLBAR([self GOBJECT]), toolItem, index);
}

-(void)setIconSize:(GtkIconSize) iconSize
{
	gtk_toolbar_set_icon_size(GTK_TOOLBAR([self GOBJECT]), iconSize);
}

-(void)setShowArrow:(BOOL) showArrow
{
	gtk_toolbar_set_show_arrow(GTK_TOOLBAR([self GOBJECT]), (showArrow ? TRUE : FALSE));
}

-(void)setStyle:(GtkToolbarStyle) style
{
	gtk_toolbar_set_style(GTK_TOOLBAR([self GOBJECT]), style);
}

-(void)unsetIconSize
{
	gtk_toolbar_unset_icon_size(GTK_TOOLBAR([self GOBJECT]));
}

-(void)unsetStyle
{
	gtk_toolbar_unset_style(GTK_TOOLBAR([self GOBJECT]));
}


@end