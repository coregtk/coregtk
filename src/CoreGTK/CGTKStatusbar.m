
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKStatusbar.h"

@implementation CGTKStatusbar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_statusbar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkStatusbar*)STATUSBAR
{
	return GTK_STATUSBAR([self GOBJECT]);
}

-(guint)getContextId:(NSString*) contextDescription
{
	return gtk_statusbar_get_context_id(GTK_STATUSBAR([self GOBJECT]), [contextDescription UTF8String]);
}

-(CGTKWidget*)getMessageArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_statusbar_get_message_area(GTK_STATUSBAR([self GOBJECT]))];
}

-(void)pop:(guint) contextId
{
	gtk_statusbar_pop(GTK_STATUSBAR([self GOBJECT]), contextId);
}

-(guint)pushWithContextId:(guint) contextId andText:(NSString*) text
{
	return gtk_statusbar_push(GTK_STATUSBAR([self GOBJECT]), contextId, [text UTF8String]);
}

-(void)removeWithContextId:(guint) contextId andMessageId:(guint) messageId
{
	gtk_statusbar_remove(GTK_STATUSBAR([self GOBJECT]), contextId, messageId);
}

-(void)removeAll:(guint) contextId
{
	gtk_statusbar_remove_all(GTK_STATUSBAR([self GOBJECT]), contextId);
}


@end