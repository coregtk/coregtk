
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMenuShell.h"

@interface CGTKMenu : CGTKMenuShell
{

}

/**
 * Functions
 */
+(GList*)getForAttachWidget:(CGTKWidget*) widget;

/**
 * Constructors
 */
-(id)init;
-(id)initFromModel:(GMenuModel*) model;

/**
 * Methods
 */
-(GtkMenu*)MENU;
-(void)attachWithChild:(CGTKWidget*) child andLeftAttach:(guint) leftAttach andRightAttach:(guint) rightAttach andTopAttach:(guint) topAttach andBottomAttach:(guint) bottomAttach;
-(void)attachToWidgetWithAttachWidget:(CGTKWidget*) attachWidget andDetacher:(GtkMenuDetachFunc) detacher;
-(void)detach;
-(GtkAccelGroup*)getAccelGroup;
-(NSString*)getAccelPath;
-(CGTKWidget*)getActive;
-(CGTKWidget*)getAttachWidget;
-(gint)getMonitor;
-(BOOL)getReserveToggleSize;
-(BOOL)getTearoffState;
-(NSString*)getTitle;
-(void)popdown;
-(void)popupWithParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andButton:(guint) button andActivateTime:(guint32) activateTime;
-(void)popupForDeviceWithDevice:(GdkDevice*) device andParentMenuShell:(CGTKWidget*) parentMenuShell andParentMenuItem:(CGTKWidget*) parentMenuItem andFunc:(GtkMenuPositionFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy andButton:(guint) button andActivateTime:(guint32) activateTime;
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
-(void)reposition;
-(void)setAccelGroup:(GtkAccelGroup*) accelGroup;
-(void)setAccelPath:(NSString*) accelPath;
-(void)setActive:(guint) index;
-(void)setMonitor:(gint) monitorNum;
-(void)setReserveToggleSize:(BOOL) reserveToggleSize;
-(void)setScreen:(GdkScreen*) screen;
-(void)setTearoffState:(BOOL) tornOff;
-(void)setTitle:(NSString*) title;

@end