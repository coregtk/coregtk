
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKDialog.h"

@implementation CGTKDialog

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_dialog_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkDialog*)DIALOG
{
	return GTK_DIALOG([self GOBJECT]);
}

-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId
{
	gtk_dialog_add_action_widget(GTK_DIALOG([self GOBJECT]), [child WIDGET], responseId);
}

-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_dialog_add_button(GTK_DIALOG([self GOBJECT]), [buttonText UTF8String], responseId)];
}

-(CGTKWidget*)getActionArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_dialog_get_action_area(GTK_DIALOG([self GOBJECT]))];
}

-(CGTKWidget*)getContentArea
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_dialog_get_content_area(GTK_DIALOG([self GOBJECT]))];
}

-(gint)getResponseForWidget:(CGTKWidget*) widget
{
	return gtk_dialog_get_response_for_widget(GTK_DIALOG([self GOBJECT]), [widget WIDGET]);
}

-(CGTKWidget*)getWidgetForResponse:(gint) responseId
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_dialog_get_widget_for_response(GTK_DIALOG([self GOBJECT]), responseId)];
}

-(void)response:(gint) responseId
{
	gtk_dialog_response(GTK_DIALOG([self GOBJECT]), responseId);
}

-(gint)run
{
	return gtk_dialog_run(GTK_DIALOG([self GOBJECT]));
}

-(void)setAlternativeButtonOrderFromArrayWithNparams:(gint) nparams andNewOrder:(gint*) newOrder
{
	gtk_dialog_set_alternative_button_order_from_array(GTK_DIALOG([self GOBJECT]), nparams, newOrder);
}

-(void)setDefaultResponse:(gint) responseId
{
	gtk_dialog_set_default_response(GTK_DIALOG([self GOBJECT]), responseId);
}

-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting
{
	gtk_dialog_set_response_sensitive(GTK_DIALOG([self GOBJECT]), responseId, (setting ? TRUE : FALSE));
}


@end