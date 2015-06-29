
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@interface CGTKContainer : CGTKWidget
{

}


/**
 * Methods
 */
-(GtkContainer*)CONTAINER;
-(void)add:(CGTKWidget*) widget;
-(void)checkResize;
-(void)childGetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(GValue*) value;
-(void)childGetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
-(void)childNotifyWithChild:(CGTKWidget*) child andChildProperty:(NSString*) childProperty;
-(void)childSetPropertyWithChild:(CGTKWidget*) child andPropertyName:(NSString*) propertyName andValue:(const GValue*) value;
-(void)childSetValistWithChild:(CGTKWidget*) child andFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
-(GType)childType;
-(void)forallWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
-(void)foreachWithCallback:(GtkCallback) callback andCallbackData:(gpointer) callbackData;
-(guint)getBorderWidth;
-(GList*)getChildren;
-(BOOL)getFocusChain:(GList**) focusableWidgets;
-(CGTKWidget*)getFocusChild;
-(GtkAdjustment*)getFocusHadjustment;
-(GtkAdjustment*)getFocusVadjustment;
-(GtkWidgetPath*)getPathForChild:(CGTKWidget*) child;
-(GtkResizeMode)getResizeMode;
-(void)propagateDrawWithChild:(CGTKWidget*) child andCr:(cairo_t*) cr;
-(void)remove:(CGTKWidget*) widget;
-(void)resizeChildren;
-(void)setBorderWidth:(guint) borderWidth;
-(void)setFocusChain:(GList*) focusableWidgets;
-(void)setFocusChild:(CGTKWidget*) child;
-(void)setFocusHadjustment:(GtkAdjustment*) adjustment;
-(void)setFocusVadjustment:(GtkAdjustment*) adjustment;
-(void)setReallocateRedraws:(BOOL) needsRedraws;
-(void)setResizeMode:(GtkResizeMode) resizeMode;
-(void)unsetFocusChain;

@end