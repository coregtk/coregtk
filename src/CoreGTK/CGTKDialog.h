
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWindow.h"

@interface CGTKDialog : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkDialog*)DIALOG;
-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId;
-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId;
-(CGTKWidget*)getActionArea;
-(CGTKWidget*)getContentArea;
-(gint)getResponseForWidget:(CGTKWidget*) widget;
-(CGTKWidget*)getWidgetForResponse:(gint) responseId;
-(void)response:(gint) responseId;
-(gint)run;
-(void)setAlternativeButtonOrderFromArrayWithNparams:(gint) nparams andNewOrder:(gint*) newOrder;
-(void)setDefaultResponse:(gint) responseId;
-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting;

@end