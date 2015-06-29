
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKInfoBar.h"

@implementation CGTKInfoBar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_info_bar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkInfoBar*)INFOBAR
{
	return GTK_INFO_BAR([self GOBJECT]);
}

-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId
{
	gtk_info_bar_add_action_widget(GTK_INFO_BAR([self GOBJECT]), [child WIDGET], responseId);
}

-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_add_button(GTK_INFO_BAR([self GOBJECT]), [buttonText UTF8String], responseId)];
}

-(CGTKWidget*)getActionArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_get_action_area(GTK_INFO_BAR([self GOBJECT]))];
}

-(CGTKWidget*)getContentArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_info_bar_get_content_area(GTK_INFO_BAR([self GOBJECT]))];
}

-(GtkMessageType)getMessageType
{
	return gtk_info_bar_get_message_type(GTK_INFO_BAR([self GOBJECT]));
}

-(BOOL)getShowCloseButton
{
	return (gtk_info_bar_get_show_close_button(GTK_INFO_BAR([self GOBJECT])) ? YES : NO);
}

-(void)response:(gint) responseId
{
	gtk_info_bar_response(GTK_INFO_BAR([self GOBJECT]), responseId);
}

-(void)setDefaultResponse:(gint) responseId
{
	gtk_info_bar_set_default_response(GTK_INFO_BAR([self GOBJECT]), responseId);
}

-(void)setMessageType:(GtkMessageType) messageType
{
	gtk_info_bar_set_message_type(GTK_INFO_BAR([self GOBJECT]), messageType);
}

-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting
{
	gtk_info_bar_set_response_sensitive(GTK_INFO_BAR([self GOBJECT]), responseId, (setting ? TRUE : FALSE));
}

-(void)setShowCloseButton:(BOOL) setting
{
	gtk_info_bar_set_show_close_button(GTK_INFO_BAR([self GOBJECT]), (setting ? TRUE : FALSE));
}


@end