
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBox.h"

@interface CGTKStatusbar : CGTKBox
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkStatusbar*)STATUSBAR;
-(guint)getContextId:(NSString*) contextDescription;
-(CGTKWidget*)getMessageArea;
-(void)pop:(guint) contextId;
-(guint)pushWithContextId:(guint) contextId andText:(NSString*) text;
-(void)removeWithContextId:(guint) contextId andMessageId:(guint) messageId;
-(void)removeAll:(guint) contextId;

@end