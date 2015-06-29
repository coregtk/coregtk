
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKInfoBar : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkInfoBar*)INFOBAR;
-(void)addActionWidgetWithChild:(CGTKWidget*) child andResponseId:(gint) responseId;
-(CGTKWidget*)addButtonWithButtonText:(NSString*) buttonText andResponseId:(gint) responseId;
-(CGTKWidget*)getActionArea;
-(CGTKWidget*)getContentArea;
-(GtkMessageType)getMessageType;
-(BOOL)getShowCloseButton;
-(void)response:(gint) responseId;
-(void)setDefaultResponse:(gint) responseId;
-(void)setMessageType:(GtkMessageType) messageType;
-(void)setResponseSensitiveWithResponseId:(gint) responseId andSetting:(BOOL) setting;
-(void)setShowCloseButton:(BOOL) setting;

@end