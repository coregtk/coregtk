
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKSeparatorToolItem.h"

@implementation CGTKSeparatorToolItem

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_separator_tool_item_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkSeparatorToolItem*)SEPARATORTOOLITEM
{
	return GTK_SEPARATOR_TOOL_ITEM([self GOBJECT]);
}

-(BOOL)getDraw
{
	return (gtk_separator_tool_item_get_draw(GTK_SEPARATOR_TOOL_ITEM([self GOBJECT])) ? YES : NO);
}

-(void)setDraw:(BOOL) draw
{
	gtk_separator_tool_item_set_draw(GTK_SEPARATOR_TOOL_ITEM([self GOBJECT]), (draw ? TRUE : FALSE));
}


@end