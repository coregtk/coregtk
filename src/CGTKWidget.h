/*
 * CGTKWidget.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import <Foundation/NSArray.h>
#import <Foundation/NSException.h>
#import <Foundation/NSObject.h>

#import "CGTK.h"
#import "CGTKObject.h"

/*
 * C imports
 */
#import <gtk/gtk.h>

/**
 * CGTKWidget — Base class for all widgets
 *
 * Attempts to implement all functionality in GtkWidget (from version 2.24)
 *
 */
@interface CGTKWidget : CGTKObject
{

}

/**
 * Creates and returns a new instance of CGTKWidget holding the GtkWidget.
 *
 * Note this returned instance is autoreleased.
 *
 * @param widget
 *  the GtkWidget to hold internally
 *
 * @returns a new CGTKWidget
 */
+(id)widgetWithGtkWidget:(GtkWidget *)widget;

/**
 * Creates and returns a new instance of CGTKWidget without an internal 
 * GtkWidget set
 *
 * @returns a new CGTKWidget
 */
-(id)init;

/**
 * Creates and returns a new instance of CGTKWidget holding the GtkWidget
 *
 * @param widget
 *  the GtkWidget to hold internally
 *
 * @returns a new CGTKWidget
 */
-(id)initWithGtkWidget:(GtkWidget *)widget;

/**
 * Creates and returns a new instance of CGTKWidget holding the GtkWidget from 
 * the parameter
 *
 * @param widget
 *  the CGTKWidget to get the GtkWidget from
 *
 * @returns a new CGTKWidget
 */
-(id)initWithWidget:(CGTKWidget *)widget;

/**
 * Gets the internal GtkWidget
 *
 * @returns the internal GtkWidget or NULL
 */
-(GtkWidget *)WIDGET;

/**
 * Sets the internal GtkWidget
 *
 * @param widget
 *  the internal widget to set
 */
-(void)setWidget:(GtkWidget *)widget;

/**
 * Destroys a widget. 
 */
-(void)destroy;

/**
 * This function is only for use in widget implementations. Should be called by 
 * implementations of the remove method on GtkContainer, to dissociate a child 
 * from the container.
 */
-(void)unparent;

/**
 * Flags a widget to be displayed. Any widget that isn't shown will not appear 
 * on the screen. If you want to show all the widgets in a container, it's 
 * easier to call showAll on the container, instead of individually showing the 
 * widgets.
 *
 * Remember that you have to show the containers containing a widget, in 
 * addition to the widget itself, before it will appear onscreen.
 *
 * When a toplevel container is shown, it is immediately realized and mapped; 
 * other shown widgets are realized and mapped when their toplevel container is 
 * realized and mapped.
 *
 * @see showAll
 */
-(void)show;

/**
 * Shows a widget. If the widget is an unmapped toplevel widget (i.e. a 
 * GtkWindow that has not yet been shown), enter the main loop and wait for the 
 * window to actually be mapped. Be careful; because the main loop is running, 
 * anything can happen during this function.
 */
-(void)showNow;

/**
 * Reverses the effects of show, causing the widget to be hidden (invisible to 
 * the user).
 *
 * @see show
 */
-(void)hide;

/**
 * Recursively shows a widget, and any child widgets (if the widget is a 
 * container).
 */
-(void)showAll;

/**
 * This function is only for use in widget implementations. Causes a widget to 
 * be mapped if it isn't already.
 */
-(void)map;

/**
 * This function is only for use in widget implementations. Causes a widget to 
 * be unmapped if it's currently mapped.
 */
-(void)unmap;

/**
 * Creates the GDK (windowing system) resources associated with a widget. For 
 * example, widget->window will be created when a widget is realized. Normally 
 * realization happens implicitly; if you show a widget and all its parent 
 * containers, then the widget will be realized and mapped automatically.
 *
 * Realizing a widget requires all the widget's parent widgets to be realized; 
 * calling realize realizes the widget's parents in addition to widget itself. 
 * If a widget is not yet inside a toplevel window when you realize it, bad 
 * things will happen.
 *
 * This function is primarily used in widget implementations, and isn't very 
 * useful otherwise. Many times when you think you might need it, a better 
 * approach is to connect to a signal that will be called after the widget is 
 * realized automatically, such as "draw". Or simply g_signal_connect() to the 
 * "realize" signal.
 */
-(void)realize;

/**
 * This function is only useful in widget implementations. Causes a widget to be 
 * unrealized (frees all GDK resources associated with the widget, such as 
 * widget->window).
 */
-(void)unrealize;

/**
 * Equivalent to calling queueDrawArea for the entire area of a widget.
 *
 * @see queueDrawAreaWithX:andY:andWidth:andHeight:;
 */
-(void)queueDraw;

/**
 * This function is only for use in widget implementations. Flags a widget to 
 * have its size renegotiated; should be called when a widget for some reason 
 * has a new size request. For example, when you change the text in a CGTKLabel, 
 * CGTKLabel queues a resize to ensure there's enough space for the new text.
 *
 * @see CGTKLabel
 */
-(void)queueResize;

/**
 * This function works like queueResize, except that the widget is not 
 * invalidated.
 *
 * @see queueResize
 */
-(void)queueResizeNoRedraw;

/**
 * This function is typically used when implementing a CGTKContainer subclass. 
 * Obtains the preferred size of a widget. The container uses this information 
 * to arrange its child widgets and decide what size allocations to give them 
 * with sizeAllocate.
 *
 * You can also call this function from an application, with some caveats. Most 
 * notably, getting a size request requires the widget to be associated with a 
 * screen, because font information may be needed. Multihead-aware applications 
 * should keep this in mind.
 * 
 * Also remember that the size request is not necessarily the size a widget will 
 * actually be allocated.
 *
 * @param requisition
 *  a GtkRequisition to be filled in
 *
 * @see sizeAllocate:
 *
 * @see CGTKContainer
 */
-(void)sizeRequest:(GtkRequisition *)requisition;

/**
 * This function is only for use in widget implementations. Obtains 
 * widget->requisition, unless someone has forced a particular geometry on the 
 * widget (e.g. with setSizeRequestWithWidth:andHeight:), in which case it 
 * returns that geometry instead of the widget's requisition.
 *
 * This function differs from sizeRequest: in that it retrieves the last size 
 * request value from widget->requisition, while sizeRequest: actually calls the 
 * "size_request" method on widget to compute the size request and fill in 
 * widget->requisition, and only then returns widget->requisition.
 *
 * Because this function does not call the "size_request" method, it can only be 
 * used when you know that widget->requisition is up-to-date, that is, 
 * sizeRequest: has been called since the last time a resize was queued. In 
 * general, only container implementations have this information; applications 
 * should use sizeRequest:.
 *
 * @param requisition
 *  a GtkRequisition to be filled in
 *
 * @see sizeRequest:
 *
 * @see setSizeRequestWithWidth:andHeight:
 */
-(void)getChildRequisition:(GtkRequisition *)requisition;

/**
 * This function is only used by CGTKContainer subclasses, to assign a size and 
 * position to their child widgets.
 *
 * In this function, the allocation may be adjusted. It will be forced to a 1x1 
 * minimum size, and the adjust_size_allocation virtual method on the child will 
 * be used to adjust the allocation. Standard adjustments include removing the 
 * widget's margins, and applying the widget's "halign" and "valign" properties.
 *
 * @param allocation
 *  position and size to be allocated to widget
 *
 * @see CGTKContainer
 */
-(void)sizeAllocate:(GtkAllocation *)allocation;

/**
 * Installs an accelerator for this widget in accelGroup that causes accelSignal 
 * to be emitted if the accelerator is activated. The accelGroup needs to be 
 * added to the widget's toplevel via gtk_window_add_accel_group(), and the 
 * signal must be of type G_RUN_ACTION. Accelerators added through this function
 * are not user changeable during runtime. If you want to support accelerators 
 * that can be changed by the user, use gtk_accel_map_add_entry() and 
 * setAccelPathWithAccelPath:andGroup: or gtk_menu_item_set_accel_path() 
 * instead.
 *
 * @param accelSignal
 *  widget signal to emit on accelerator activation
 *
 * @param accelGroup
 *  accel group for this widget, added to its toplevel
 *
 * @param accelKey
 *  GDK keyval of the accelerator
 *
 * @param accelMods
 * modifier key combination of the accelerator
 *
 * @param accelFlags
 *  flag accelerators, e.g. GTK_ACCEL_VISIBLE
 *
 * @see setAccelPathWithAccelPath:andGroup:
 */
-(void)addAcceleratorWithSignal:(NSString *)accelSignal andAccelGroup:(GtkAccelGroup *)accelGroup andAccelKey:(NSNumber *)accelKey andAccelMods:(GdkModifierType)accelMods andAccelFlags:(GtkAccelFlags)accelFlags;

/**
 * Removes an accelerator from widget, previously installed with 
 * addAcceleratorWithSignal:andAccelGroup:andAccelKey:andAccelMods:andAccelFlags:.
 *
 * @param accelGroup
 *  accel group for this widget, added to its toplevel
 *
 * @param accelKey
 *  GDK keyval of the accelerator
 *
 * @param accelMods
 * modifier key combination of the accelerator
 *
 * @returns whether an accelerator was installed and could be removed
 *
 * @see addAcceleratorWithSignal:andAccelGroup:andAccelKey:andAccelMods:andAccelFlags:
 */
-(BOOL)removeAcceleratorWithGroup:(GtkAccelGroup *)accelGroup andKey:(NSNumber *)accelKey andAccelMods:(GdkModifierType)accelMods;

/**
 * Given an accelerator group, accelGroup, and an accelerator path, accelPath, 
 * sets up an accelerator in accel_group so whenever the key binding that is 
 * defined for accel_path is pressed, widget will be activated. This removes any 
 * accelerators (for any accelerator group) installed by previous calls to 
 * setAccelPathWithAccelPath:andGroup:. Associating accelerators with paths 
 * allows them to be modified by the user and the modifications to be saved for 
 * future use. (See gtk_accel_map_save().)
 *
 * This function is a low level function that would most likely be used by a 
 * menu creation system like GtkUIManager. If you use GtkUIManager, setting up 
 * accelerator paths will be done automatically.
 *
 * Even when you you aren't using GtkUIManager, if you only want to set up 
 * accelerators on menu items gtk_menu_item_set_accel_path() provides a somewhat 
 * more convenient interface.
 *
 * Note that accel_path string will be stored in a GQuark. Therefore, if you 
 * pass a static string, you can save some memory by interning it first with 
 * g_intern_static_string().
 *
 * @param accelPath
 *  path used to look up the accelerator. [allow-none]
 *
 * @param accelGroup
 *  a GtkAccelGroup. [allow-none]
 *
 * @see setAccelPathWithAccelPath:andGroup:
 */
-(void)setAccelPathWithAccelPath:(NSString *)accelPath andGroup:(GtkAccelGroup *)accelGroup;

/**
 * Lists the closures used by widget for accelerator group connections with 
 * gtk_accel_group_connect_by_path() or gtk_accel_group_connect(). The closures 
 * can be used to monitor accelerator changes on widget, by connecting to the 
 * GtkAccelGroup::accel-changed signal of the GtkAccelGroup of a closure which 
 * can be found out with gtk_accel_group_from_accel_closure().
 *
 * @returns a newly allocated GList of closures. 
 *  [transfer container][element-type GClosure]
 */
-(GList *)listAccelClosures;

/**
 * Determines whether an accelerator that activates the signal identified by 
 * signalId can currently be activated. This is done by emitting the 
 * "can-activate-accel" signal on widget; if the signal isn't overridden by a 
 * handler or in a derived widget, then the default check is that the widget 
 * must be sensitive, and the widget and all its ancestors mapped.
 * 
 * @param signalId
 *  the ID of a signal installed on widget
 *
 * @returns YES if the accelerator can be activated
 */
-(BOOL)canActivateAccel:(NSNumber *)signalId;

/**
 * Rarely-used function. This function is used to emit the event signals on a 
 * widget (those signals should never be emitted without using this function to 
 * do so). If you want to synthesize an event though, don't use this function; 
 * instead, use mainDoEvent: so the event will behave as if it were in 
 * the event queue. Don't synthesize expose events; instead, use 
 * gdk_window_invalidate_rect() to invalidate a region of the window.
 *
 * @param event 
 *  a GdkEvent
 *
 * @returns return from the event signal emission (YES if the event was handled)
 *
 * @see mainDoEvent:
 */
-(BOOL)event:(GdkEvent *)event;

/**
 * For widgets that can be "activated" (buttons, menu items, etc.) this function 
 * activates them. Activation is what happens when you press Enter on a widget 
 * during key navigation. If widget isn't activatable, the function returns NO.
 *
 * @returns YES if the widget was activatable
 */
-(BOOL)activate;

/**
 * Moves a widget from one GtkContainer to another, handling reference count 
 * issues to avoid destroying the widget.
 *
 * @param newParent
 *  a CGTKContainer to move the widget into
 */
-(void)reparent:(CGTKWidget *)newParent;

/**
 * Computes the intersection of a widget's area and area, storing the 
 * intersection in intersection, and returns YES if there was an intersection. 
 * intersection may be NULL if you're only interested in whether there was an 
 * intersection.
 *
 * @param area
 *  a rectangle
 *
 * @param intersection
 *  rectangle to store intersection of widget and area
 *
 * @returns YES if there was an intersection
 */
-(BOOL)intersectWithArea:(const GdkRectangle *)area andIntersection:(GdkRectangle *)intersection;

/**
 * Determines if the widget is the focus widget within its toplevel. (This does 
 * not mean that the HAS_FOCUS flag is necessarily set; HAS_FOCUS will only be 
 * set if the toplevel widget additionally has the global input focus.)
 *
 * @returns YES if the widget is the focus widget
 */
-(BOOL)isFocus;

/**
 * Causes widget to have the keyboard focus for the GtkWindow it's inside. 
 * widget must be a focusable widget, such as a GtkEntry; something like 
 * GtkFrame won't work.
 *
 * More precisely, it must have the GTK_CAN_FOCUS flag set. Use setCanFocus: to 
 * modify that flag.
 *
 * The widget also needs to be realized and mapped. This is indicated by the 
 * related signals. Grabbing the focus immediately after creating the widget 
 * will likely fail and cause critical warnings.
 *
 * @see setCanFocus:
 */
-(void)grabFocus;

/**
 * Causes widget to become the default widget. widget must have the 
 * GTK_CAN_DEFAULT flag set; typically you have to set this flag yourself by 
 * calling setCanDefault: (widget, TRUE). The default widget is activated when 
 * the user presses Enter in a window. Default widgets must be activatable, that 
 * is, activate should affect them.
 *
 * @see setCanDefault:
 *
 * @see activate
 */
-(void)grabDefault;

/**
 * Widgets can be named, which allows you to refer to them from a gtkrc file. 
 * You can apply a style to widgets with a particular name in the gtkrc file. 
 * See the documentation for gtkrc files (on the same page as the docs for 
 * GtkRcStyle).
 *
 * Note that widget names are separated by periods in paths (see 
 * pathWithPathLength:andPath:andPathReversed:), so names with embedded periods 
 * may cause confusion.
 *
 * @param name
 *  name for the widget
 *
 * @see pathWithPathLength:andPath:andPathReversed:
 */
-(void)setName:(NSString *)name;

/**
 * Retrieves the name of a widget. See gsetName: for the significance of widget 
 * names.
 *
 * @returns name of the widget. This string is owned by GTK+ and should not be 
 *  modified or freed
 *
 * @see setName:
 */
-(NSString *)getName;

/**
 * This function is for use in widget implementations. Sets the state of a 
 * widget (insensitive, prelighted, etc.) Usually you should set the state using 
 * wrapper functions such as setSensitive:.
 *
 * @param state
 *  a new state for the widget
 *
 * @see setSensitive:
 */
-(void)setState:(GtkStateType)state;

/**
 * Sets the sensitivity of a widget. A widget is sensitive if the user can 
 * interact with it. Insensitive widgets are "grayed out" and the user can't 
 * interact with them. Insensitive widgets are known as "inactive", "disabled", 
 * or "ghosted" in some other toolkits.
 *
 * @param sensitive
 *  YES to make the widget sensitive
 */
-(void)setSensitive:(BOOL)sensitive;

/**
 * This function is useful only when implementing subclasses of GtkContainer. 
 * Sets the container as the parent of widget, and takes care of some details 
 * such as updating the state and style of the child to reflect its new 
 * location. The opposite function is unparent.
 *
 * @param parent
 *  parent container
 *
 * @see unparent
 */
-(void)setParent:(CGTKWidget *)parent;

/**
 * Sets a non default parent window for widget.
 *
 * @param parentWindow
 *  the new parent window
 */
-(void)setParentWindow:(GdkWindow *)parentWindow;

/**
 * Gets widget's parent window. 
 *
 * @returns the parent window of widget. [transfer none]
 */
-(GdkWindow *)getParentWindow;

/**
 * Sets the event mask (see GdkEventMask) for a widget. The event mask 
 * determines which events a widget will receive. Keep in mind that different 
 * widgets have different default event masks, and by changing the event mask 
 * you may disrupt a widget's functionality, so be careful. This function must 
 * be called while a widget is unrealized. Consider addEvents: for widgets that 
 * are already realized, or if you want to preserve the existing event mask. 
 * This function can't be used with GTK_NO_WINDOW widgets; to get events on 
 * those widgets, place them inside a GtkEventBox and receive events on the 
 * event box.
 *
 * @param events
 *  event mask
 *
 * @see addEvents:
 */
-(void)setEvents:(NSNumber *)events;

/**
 * Adds the events in the bitfield events to the event mask for widget. 
 See setEvents: for details.
 *
 * @param events
 *  an event mask, see GdkEventMask
 *
 * @see setEvents:
 */
-(void)addEvents:(NSNumber *)events;

/**
 * Sets the extension events mask to mode. See GdkExtensionMode and 
 * gdk_input_set_extension_events().
 *
 * @param mode
 *  a bitfield of extension events to receive
 */
-(void)setExtensionEvents:(GdkExtensionMode) mode;

/**
 * Retrieves the extension events the widget will receive; see 
 * gdk_input_set_extension_events().
 *
 * @returns extension events for widget
 */
-(GdkExtensionMode)getExtensionEvents;

/**
 * This function returns the topmost widget in the container hierarchy widget is 
 * a part of. If widget has no parent widgets, it will be returned as the 
 * topmost widget. No reference will be added to the returned widget; it should 
 * not be unreferenced.
 *
 * Note the difference in behavior vs. getAncestor:; getAncestor:GTK_TYPE_WINDOW
 * would return NULL if widget wasn't inside a toplevel window, and if the 
 * window was inside a GtkWindow-derived widget which was in turn inside the 
 * toplevel GtkWindow. While the second case may seem unlikely, it actually 
 * happens when a GtkPlug is embedded inside a GtkSocket within the same 
 * application.
 *
 * To reliably find the toplevel GtkWindow, use getToplevel and check if the 
 * TOPLEVEL flags is set on the result.
 *
 * @returns the topmost ancestor of widget, or widget itself if there's no 
 * ancestor. [transfer none]
 *
 * @see getAncestor:
 *
 * @see getToplevel
 */
-(CGTKWidget *)getToplevel;

/**
 * Gets the first ancestor of widget with type widget_type. For example, 
 * getAncestor:GTK_TYPE_BOX gets the first GtkBox that's an ancestor of widget. 
 * No reference will be added to the returned widget; it should not be 
 * unreferenced. See note about checking for a toplevel GtkWindow in the docs 
 * for getToplevel:.
 *
 * Note that unlike isAncestor:, getAncestor: considers widget to be an ancestor 
 * of itself.
 *
 * @param widgetType
 *  ancestor type
 *
 * @returns the ancestor widget, or nil if not found. [transfer none]
 *
 * @see getToplevel
 *
 * @see isAncestor:
 */
-(CGTKWidget *)getAncestor:(GType)widgetType;

/**
 * Gets the colormap that will be used to render widget. No reference will be 
 * added to the returned colormap; it should not be unreferenced.
 *
 * @returns the colormap used by widget. [transfer none]
 */
-(GdkColormap *)getColormap;

/**
 * Sets the colormap for the widget to the given value. Widget must not have 
 * been previously realized. This probably should only be used from an init() 
 * function (i.e. from the constructor for the widget).
 *
 * @param colormap
 *  a colormap
 */
-(void)setColormap:(GdkColormap *)colormap;

/**
 * Gets the visual that will be used to render widget. 
 *
 * @returns the visual for widget. [transfer none]
 */
-(GdkVisual *)getVisual;

/**
 * Returns the event mask for the widget (a bitfield containing flags from the 
 * GdkEventMask enumeration). These are the events that the widget will receive.
 *
 * @returns event mask for widget
 */
-(NSNumber *)getEvents;

/**
 * Obtains the location of the mouse pointer in widget coordinates. Widget 
 * coordinates are a bit odd; for historical reasons, they are defined as 
 * widget->window coordinates for widgets that are not GTK_NO_WINDOW widgets, 
 * and are relative to widget->allocation.x, widget->allocation.y for widgets 
 * that are GTK_NO_WINDOW widgets.
 *
 * @param x
 *  return location for the X coordinate, or NULL. [out][allow-none]
 *
 * @param y
 *  return location for the Y coordinate, or NULL. [out][allow-none]
 */
-(void)getPointerWithX:(NSNumber **)x andY:(NSNumber **)y;

/**
 * Determines whether widget is somewhere inside ancestor, possibly with 
 * intermediate containers.
 *
 * @param ancestor
 *  another CGTKWidget
 *
 * @returns YES if ancestor contains widget as a child, grandchild, great 
 * grandchild, etc.
 */
-(BOOL)isAncestor:(CGTKWidget *)ancestor;

/**
 * Translate coordinates relative to srcWidget's allocation to coordinates 
 * relative to destWidget's allocations. In order to perform this operation, 
 * both widgets must be realized, and must share a common toplevel.
 *
 * @param srcWidget
 *  a CGTKWidget
 *
 * @param destWidget
 *  a CGTKWidget
 *
 * @param srcX
 *  X position relative to srcWidget
 *
 * @param srcY
 *  Y position relative to srcWidget
 *
 * @param destX
 *  location to store X position relative to destWidget. [out]
 *
 * @param destY
 *  location to store Y position relative to destWidget. [out]
 */
+(BOOL)translateCoordinatesWithSrc:(CGTKWidget *)srcWidget andDest:(CGTKWidget *)destWidget andSrcX:(NSNumber *)srcX andSrcY:(NSNumber *)srcY andDestX:(NSNumber **)destX andDestY:(NSNumber **)destY;

/**
 * Utility function; intended to be connected to the "delete-event" signal on a 
 * GtkWindow. The function calls hide on its argument, then returns YES. If 
 * connected to ::delete-event, the result is that clicking the close button for 
 * a window (on the window frame, top right corner usually) will hide but not 
 * destroy the window. By default, GTK+ destroys windows when ::delete-event is 
 * received.
 *
 * @returns YES
 *
 * @see hide
 */
-(BOOL)hideOnDelete;

/**
 * Sets the GtkStyle for a widget (widget->style). You probably don't want to 
 * use this function; it interacts badly with themes, because themes work by 
 * replacing the GtkStyle. Instead, use modifyStyleWithStyle:.
 *
 * @param style
 *  a GtkStyle, or NULL to remove the effect of a previous setStyle: and go back 
 * to the default style. [allow-none]
 *
 * @see modifyStyleWithStyle:
 *
 * @see setStyle:
 */
-(void)setStyle:(GtkStyle *)style;

/**
 * Ensures that widget has a style (widget->style). Not a very useful function; 
 * most of the time, if you want the style, the widget is realized, and realized 
 * widgets are guaranteed to have a style already.
 */
-(void)ensureStyle;

/**
 * Simply an accessor function that returns widget->style.
 *
 * @returns the widget's GtkStyle. [transfer none]
 */
-(GtkStyle *)getStyle;

/**
 * Reset the styles of widget and all descendents, so when they are looked up 
 * again, they get the correct values for the currently loaded RC file settings.
 *
 * This function is not useful for applications. 
 */
-(void)resetRcStyles;

/**
 * Pushes cmap onto a global stack of colormaps; the topmost colormap on the 
 * stack will be used to create all widgets. Remove cmap with popColormap. 
 * There's little reason to use this function.
 *
 * @param cmap
 *  a GdkColormap
 *
 * @see popColormap
 */
+(void)pushColormap:(GdkColormap *)cmap;

/**
 * Removes a colormap pushed with pushColormap:.
 *
 * @see pushColormap:
 */
+(void)popColormap;

/**
 * Sets the default colormap to use when creating widgets. pushColormap: is a 
 * better function to use if you only want to affect a few widgets, rather than 
 * all widgets.
 *
 * @param colormap
 *  a GdkColormap
 *
 * @see pushColormap
 */
+(void)setDefaultColormap:(GdkColormap *)colormap;

/**
 * Returns the default style used by all widgets initially.
 *
 * @returns the default style. This GtkStyle object is owned by GTK+ and should 
 * not be modified or freed. [transfer none]
 */
+(GtkStyle *)getDefaultStyle;

/**
 * Obtains the default colormap used to create widgets. 
 *
 * @returns default widget colormap. [transfer none]
 */
+(GdkColormap *)getDefaultColormap;

/**
 * Obtains the visual of the default colormap. Not really useful; used to be 
 * useful before gdk_colormap_get_visual() existed.
 *
 * @returns visual of the default colormap. [transfer none]
 */
+(GdkVisual *)getDefaultVisual;

/**
 * Sets the reading direction on a particular widget. This direction controls 
 * the primary direction for widgets containing text, and also the direction in 
 * which the children of a container are packed. The ability to set the 
 * direction is present in order so that correct localization into languages 
 * with right-to-left reading directions can be done. Generally, applications 
 * will let the default reading direction present, except for containers where 
 * the containers are arranged in an order that is explicitely visual rather 
 * than logical (such as buttons for text justification).
 *
 * If the direction is set to GTK_TEXT_DIR_NONE, then the value set by 
 * setDefaultDirection: will be used.
 *
 * @param dir
 *  the new direction
 *
 * @see setDefaultDirection:
 */
-(void)setDirection:(GtkTextDirection)dir;

/**
 * Gets the reading direction for a particular widget. See setDirection:. 
 *
 * @returns the reading direction for the widget.
 *
 * @see setDirection:
 */
-(GtkTextDirection)getDirection;

/**
 * Sets the default reading direction for widgets where the direction has not 
 * been explicitly set by setDirection:.
 *
 * @param dir
 *  the new default direction. This cannot be GTK_TEXT_DIR_NONE.
 *
 * @see setDirection:
 */
+(void)setDefaultDirection:(GtkTextDirection)dir;

/**
 * Obtains the current default reading direction. See setDefaultDirection:. 
 *
 * @returns the current default direction
 *
 * @see setDefaultDirection:
 */
+(GtkTextDirection)getDefaultDirection;

/**
 * Sets a shape for this widget's GDK window. This allows for transparent 
 * windows etc., see gdk_window_shape_combine_mask() for more information.
 *
 * @param shapeMask
 *  shape to be added, or NULL to remove an existing shape. [allow-none]
 *
 * @param offsetX
 *  X position of shape mask with respect to window
 *
 * @param offsetY
 *  Y position of shape mask with respect to window
 */
-(void)shapeCombineMaskWithShapeMask:(GdkBitmap *)shapeMask andOffsetX:(NSNumber *)offsetX andOffsetY:(NSNumber *)offsetY;

/**
 * Sets an input shape for this widget's GDK window. This allows for windows 
 * which react to mouse click in a nonrectangular region, see 
 * gdk_window_input_shape_combine_mask() for more information.
 *
 * @param shapeMask
 *  shape to be added, or NULL to remove an existing shape. [allow-none]
 *
 * @param offsetX
 *  X position of shape mask with respect to window
 *
 * @param offsetY
 *  Y position of shape mask with respect to window
 */
-(void)inputShapeCombineMaskWithShapeMask:(GdkBitmap *)shapeMask andOffsetX:(NSNumber *)offsetX andOffsetY:(NSNumber *)offsetY;

/**
 * Obtains the full path to widget. The path is simply the name of a widget and 
 * all its parents in the container hierarchy, separated by periods. The name of 
 * a widget comes from getName. Paths are used to apply styles to a widget in 
 * gtkrc configuration files. Widget names are the type of the widget by default 
 * (e.g. "GtkButton") or can be set to an application-specific value with 
 * setName:. By setting the name of a widget, you allow users or theme authors 
 * to apply styles to that specific widget in their gtkrc file. path_reversed_p 
 * fills in the path in reverse order, i.e. starting with widget's name instead 
 * of starting with the name of widget's outermost ancestor.
 *
 * @param pathLength
 *  location to store length of the path, or nil. [out][allow-none]
 *
 * @param path
 *  location to store allocated path string, or nil. [out][allow-none]
 *
 * @param pathReversed
 *  location to store allocated reverse path string, or nil. [out][allow-none]
 *
 * @see getName
 *
 * @see setName:
 */
-(void)pathWithPathLength:(NSNumber **)pathLength andPath:(NSString **)path andPathReversed:(NSString **)pathReversed;

/**
 * Same as pathWithPathLength:andPath:andPathReversed:, but always uses the name 
 * of a widget's type, never uses a custom name set with setName:.
  *
 * @param pathLength
 *  location to store length of the path, or nil. [out][allow-none]
 *
 * @param path
 *  location to store allocated path string, or nil. [out][allow-none]
 *
 * @param pathReversed
 *  location to store allocated reverse path string, or nil. [out][allow-none]
 *
 * @see pathWithPathLength:andPath:andPathReversed:
 *
 * @see setName:
 */
-(void)classPathWithPathLength:(NSNumber **)pathLength andPath:(NSString **)path andPathReversed:(NSString **)pathReversed;

/**
 * Obtains the composite name of a widget. 
 *
 * @returns the composite name of widget, or nil if widget is not a composite 
 * child. The string should be freed when it is no longer needed.
 */
-(NSString *)getCompositeName;

/**
 * Modifies style values on the widget. Modifications made using this technique 
 * take precedence over style values set via an RC file, however, they will be 
 * overriden if a style is explicitely set on the widget using setStyle:. The 
 * GtkRcStyle structure is designed so each field can either be set or unset, so 
 * it is possible, using this function, to modify some style values and leave 
 * the others unchanged.
 *
 * Note that modifications made with this function are not cumulative with 
 * previous calls to modifyStyleWithStyle: or with such functions as 
 * modifyFgWithState:andColor:. If you wish to retain previous values, you must 
 * first call getModifierStyle, make your modifications to the returned style, 
 * then call modifyStyleWithStyle: with that style. On the other hand, if 
 * you first call modifyStyleWithStyle:, subsequent calls to such functions 
 * modifyFgWithState:andColor: will have a cumulative effect with the initial 
 * modifications.
 *
 * @param style
 *  the GtkRcStyle holding the style modifications
 *
 * @see setStyle:
 *
 * @see modifyStyleWithStyle:
 *
 * @see modifyFgWithState:andColor:
 *
 * @see getModifierStyle
 */
-(void)modifyStyleWithStyle:(GtkRcStyle *)style;

/**
 * Returns the current modifier style for the widget. (As set by 
 * modifyStyleWithStyle:.) If no style has previously set, a new GtkRcStyle will 
 * be created with all values unset, and set as the modifier style for the 
 * widget. If you make changes to this rc style, you must call 
 * modifyStyleWithStyle:, passing in the returned rc style, to make sure that 
 * your changes take effect.
 *
 * Caution: passing the style back to modifyStyleWithStyle: will normally end up 
 * destroying it, because modifyStyleWithStyle: copies the passed-in style and 
 * sets the copy as the new modifier style, thus dropping any reference to the 
 * old modifier style. Add a reference to the modifier style if you want to keep 
 * it alive.
 *
 * @returns the modifier style for the widget. This rc style is owned by the 
 * widget. If you want to keep a pointer to value this around, you must add a 
 * refcount using g_object_ref(). [transfer none]
 *
 * @see modifyStyleWithStyle
 */
-(GtkRcStyle *)getModifierStyle;

/**
 * Sets the foreground color for a widget in a particular state. All other style 
 * values are left untouched. See also getModifierStyle.
 *
 * @param state
 *  the state for which to set the foreground color
 *
 * @param color
 *  the color to assign (does not need to be allocated), or NULL to undo the 
 *  effect of previous calls to of modifyFgWithState:andColor:. [allow-none]
 *
 * @see getModifierStyle
 */
-(void)modifyFgWithState:(GtkStateType)state andColor:(const GdkColor *)color;

/**
 * Sets the background color for a widget in a particular state. All other style 
 * values are left untouched. See also modifyStyleWithStyle:.
 *
 * Note that "no window" widgets (which have the GTK_NO_WINDOW flag set) draw on 
 * their parent container's window and thus may not draw any background 
 * themselves. This is the case for e.g. GtkLabel. To modify the background of 
 * such widgets, you have to set the background color on their parent; if you
 * want to set the background of a rectangular area around a label, try placing 
 * the label in a GtkEventBox widget and setting the background color on that.
 *
 * @param state
 *  the state for which to set the background color
 *
 * @param color
 *  the color to assign (does not need to be allocated), or NULL to undo the 
 *  effect of previous calls to of modifyBgWithState:andColor:. [allow-none]
 *
 * @see modifyStyleWithStyle:
 */
-(void)modifyBgWithState:(GtkStateType)state andColor:(const GdkColor *)color;

/**
 * Sets the text color for a widget in a particular state. All other style 
 * values are left untouched. The text color is the foreground color used along 
 * with the base color (see modifyBaseWithState:andColor:) for widgets such as 
 * GtkEntry and GtkTextView. See also modifyStyleWithStyle:.
 *
 * @param state
 *  the state for which to set the text color
 *
 * @param color
 *  the color to assign (does not need to be allocated), or NULL to undo the 
 *  effect of previous calls to of modifyTextWithState:withColor:. [allow-none]
 *
 * @see modifyBaseWithState:andColor:
 *
 * @see modifyStyleWithStyle:
 */
-(void)modifyTextWithState:(GtkStateType)state andColor:(const GdkColor *)color;

/**
 * Sets the base color for a widget in a particular state. All other style 
 * values are left untouched. The base color is the background color used along 
 * with the text color (see modifyTextWithState:andColor:) for widgets such as 
 * GtkEntry and GtkTextView. See also modifyStyleWithStyle:.
 *
 * Note that "no window" widgets (which have the GTK_NO_WINDOW flag set) draw on 
 * their parent container's window and thus may not draw any background 
 * themselves. This is the case for e.g. GtkLabel. To modify the background of 
 * such widgets, you have to set the base color on their parent; if you want to 
 * set the background of a rectangular area around a label, try placing the 
 * label in a GtkEventBox widget and setting the base color on that.
 *
 * @param state
 *  the state for which to set the base color
 *
 * @param color
 *  the color to assign (does not need to be allocated), or NULL to undo the 
 * effect of previous calls to of modifyBaseWithState:andColor:. [allow-none]
 *
 * @see modifyTextWithState:andColor:
 *
 * @see modifyStyleWithStyle:
 *
 * @see modifyBaseWithState:andColor:
 */
-(void)modifyBaseWithState:(GtkStateType)state andColor:(const GdkColor *)color;

/**
 * Sets the font to use for a widget. All other style values are left untouched. 
 * See also modifyStyleWithStyle:.
 *
 * @param fontDesc
 *  the font description to use, or NULL to undo the effect of previous calls to 
 *  modifyFontWithFontDescription:. [allow-none]
 */
-(void)modifyFontWithFontDescription:(PangoFontDescription *)fontDesc;

/**
 * Sets the cursor color to use in a widget, overriding the "cursor-color" and 
 * "secondary-cursor-color" style properties. All other style values are left 
 * untouched. See also modifyStyleWithStyle:.
 *
 * @param primary
 *  the color to use for primary cursor (does not need to be allocated), or NULL 
 *  to undo the effect of previous calls to of 
 *  modifyCursorWithPrimary:andSecondary:.
 *
 * @param secondary
 *  the color to use for secondary cursor (does not need to be allocated), or 
 *  NULL to undo the effect of previous calls to of 
 *  modifyCursorWithPrimary:andSecondary:.
 *
 * @see modifyStyleWithStyle:
 */
-(void)modifyCursorWithPrimary:(const GdkColor *)primary andSecondary:(const GdkColor *)secondary;

/**
 * Creates a new PangoContext with the appropriate font map, font description, 
 * and base direction for drawing text for this widget. See also 
 * getPangoContext.
 *
 * @returns the new PangoContext. [transfer full]
 *
 * @see getPangoContext
 */
-(PangoContext *)createPangoContext;

/**
 * Gets a PangoContext with the appropriate font map, font description, and base 
 * direction for this widget. Unlike the context returned by createPangoContext, 
 * this context is owned by the widget (it can be used until the screen for the 
 * widget changes or the widget is removed from its toplevel), and will be 
 * updated to match any changes to the widget's attributes.
 *
 * If you create and keep a PangoLayout using this context, you must deal with 
 * changes to the context by calling pango_layout_context_changed() on the 
 * layout in response to the "style-set" and "direction-changed" signals for the 
 * widget.
 *
 * @returns the PangoContext for the widget. [transfer none]
 */
-(PangoContext *)getPangoContext;

/**
 * Creates a new PangoLayout with the appropriate font map, font description, 
 * and base direction for drawing text for this widget.
 *
 * If you keep a PangoLayout created in this way around, in order to notify the 
 * layout of changes to the base direction or font of this widget, you must call 
 * pango_layout_context_changed() in response to the "style-set" and 
 * "direction-changed" signals for the widget.
 *
 * @param text
 *  text to set on the layout (can be nil)
 *
 * @returns the new PangoLayout. [transfer full]
 */
-(PangoLayout *)createPangoLayout:(NSString *)text;

/**
 * A convenience function that uses the theme engine and RC file settings for 
 * widget to look up stock_id and render it to a pixbuf. stock_id should be a 
 * stock icon ID such as GTK_STOCK_OPEN or GTK_STOCK_OK. size should be a size 
 * such as GTK_ICON_SIZE_MENU. detail should be a string that identifies the 
 * widget or code doing the rendering, so that theme engines can special-case 
 * rendering for that widget or code.
 *
 * The pixels in the returned GdkPixbuf are shared with the rest of the 
 * application and should not be modified. The pixbuf should be freed after use 
 * with g_object_unref().
 *
 * @param stockId
 *  a stock ID
 *
 * @param size
 *  (type int) a stock size. A size of (GtkIconSize)-1 means render at the size 
 *  of the source and don't scale (if there are multiple source sizes, GTK+ 
 *  picks one of the available sizes).
 *
 * @param detail
 *  render detail to pass to theme engine. [allow-none]
 *
 * @returns a new pixbuf, or NULL if the stock ID wasn't known. [transfer full]
 */
-(GdkPixbuf *)renderIconWithStockId:(NSString *)stockId andSize:(GtkIconSize)size andDetail:(NSString *)detail;

/**
 * Cancels the effect of a previous call to pushCompositeChild.
 *
 * @see pushCompositeChild
 */
+(void)popCompositeChild;

/**
 * Makes all newly-created widgets as composite children until the corresponding 
 * popCompositeChild call.
 *
 * A composite child is a child that's an implementation detail of the container 
 * it's inside and should not be visible to people using the container. 
 * Composite children aren't treated differently by GTK (but see
 * foreachWithCallback:andCallbackData: vs. 
 * forallWithCallback:andCallbackData:), but e.g. GUI builders might want to 
 * treat them in a different way.
 *
 * @see popCompositeChild
 *
 * @see foreachWithCallback:andCallbackData:
 *
 * @see forallWithCallback:andCallbackData:
 */
+(void)pushCompositeChild;

/**
 * Invalidates the rectangular area of widget defined by x, y, width and height 
 * by calling gdk_window_invalidate_rect() on the widget's window and all its 
 * child windows. Once the main loop becomes idle (after the current batch of 
 * events has been processed, roughly), the window will receive expose events 
 * for the union of all regions that have been invalidated.
 *
 * Normally you would only use this function in widget implementations. You 
 * might also use it, or gdk_window_invalidate_rect() directly, to schedule a 
 * redraw of a GtkDrawingArea or some portion thereof.
 *
 * Frequently you can just call gdk_window_invalidate_rect() or 
 * gdk_window_invalidate_region() instead of this function. Those functions will 
 * invalidate only a single window, instead of the widget and all its children.
 *
 * The advantage of adding to the invalidated region compared to simply drawing 
 * immediately is efficiency; using an invalid region ensures that you only have 
 * to redraw one time.
 *
 * @param x
 *  x coordinate of upper-left corner of rectangle to redraw
 *
 * @param y
 *  y coordinate of upper-left corner of rectangle to redraw
 *
 * @param width
 *  width of region to draw
 *
 * @param height
 *  height of region to draw
 */
-(void)queueDrawAreaWithX:(NSNumber *)x andY:(NSNumber *)y andWidth:(NSNumber *)width andHeight:(NSNumber *)height;

/**
 * Sets whether the application intends to draw on the widget in an 
 * "expose-event" handler.
 *
 * This is a hint to the widget and does not affect the behavior of the GTK+ 
 * core; many widgets ignore this flag entirely. For widgets that do pay 
 * attention to the flag, such as GtkEventBox and GtkWindow, the effect is to 
 * suppress default themed drawing of the widget's background. (Children of the 
 * widget will still be drawn.) The application is then entirely responsible for 
 * drawing the widget background.
 *
 * Note that the background is still drawn when the widget is mapped. If this is 
 * not suitable (e.g. because you want to make a transparent window using an 
 * RGBA visual), you can work around this by doing:
 *
 * @param appPaintable
 *  YES if the application will paint on the widget
 */
-(void)setAppPaintable:(BOOL)appPaintable;

/**
 * Widgets are double buffered by default; you can use this function to turn off 
 * the buffering. "Double buffered" simply means that 
 * gdk_window_begin_paint_region() and gdk_window_end_paint() are called 
 * automatically around expose events sent to the widget. 
 * gdk_window_begin_paint() diverts all drawing to a widget's window to an 
 * offscreen buffer, and gdk_window_end_paint() draws the buffer to the screen. 
 * The result is that users see the window update in one smooth step, and don't 
 * see individual graphics primitives being rendered.
 *
 * In very simple terms, double buffered widgets don't flicker, so you would 
 * only use this function to turn off double buffering if you had special needs 
 * and really knew what you were doing.
 *
 * Note: if you turn off double-buffering, you have to handle expose events, 
 * since even the clearing to the background color or pixmap will not happen 
 * automatically (as it is done in gdk_window_begin_paint()).
 *
 * @param doubleBuffered
 *  YES to double-buffer a widget
 */
-(void)setDoubleBuffered:(BOOL)doubleBuffered;

/**
 * Sets whether the entire widget is queued for drawing when its size allocation 
 * changes. By default, this setting is TRUE and the entire widget is redrawn on 
 * every size change. If your widget leaves the upper left unchanged when made 
 * bigger, turning this setting off will improve performance.
 *
 * Note that for NO_WINDOW widgets setting this flag to NO turns off all 
 * allocation on resizing: the widget will not even redraw if its position 
 * changes; this is to allow containers that don't draw anything to avoid excess 
 * invalidations. If you set this flag on a NO_WINDOW widget that does draw on 
 * widget->window, you are responsible for invalidating both the old and new 
 * allocation of the widget when the widget is moved and responsible for 
 * invalidating regions newly when the widget increases size.
 *
 * @param redrawOnAllocate
 *  if YES, the entire widget will be redrawn when it is allocated to a new 
 *  size. Otherwise, only the new portion of the widget will be redrawn.
 */
-(void)setRedrawOnAllocate:(BOOL)redrawOnAllocate;

/**
 * Sets a widgets composite name. The widget must be a composite child of its 
 * parent; see pushCompositeChild.
 *
 * @param name
 *  the name to set
 *
 * @see pushCompositeChild
 */
-(void)setCompositeName:(NSString *)name;

/**
 * For widgets that support scrolling, sets the scroll adjustments and returns 
 * YES. For widgets that don't support scrolling, does nothing and returns NO. 
 * Widgets that don't support scrolling can be scrolled by placing them in a 
 * GtkViewport, which does support scrolling.
 *
 * @param hadjustment
 *  an adjustment for horizontal scrolling, or nil. [allow-none]
 *
 * @param vadjustment
 *  an adjustment for vertical scrolling, or nil. [allow-none]
 *
 * @returns YES if the widget supports scrolling
 */
-(BOOL)setScrollAdjustmentsWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment;

/**
 * Emits the "mnemonic-activate" signal.
 *
 * The default handler for this signal activates the widget if groupCycling is 
 * NO, and just grabs the focus if groupCycling is YES.
 *
 * @param groupCycling
 *  YES if there are other widgets with the same mnemonic
 *
 * @returns YES if signal has been handled
 */
-(BOOL)mnemonicActivate:(BOOL)groupCycling;

/**
 * Installs a style property on a widget class. The parser for the style 
 * property is determined by the value type of pspec.
 *
 * @param klass
 *  a GtkWidgetClass
 *
 * @param pspec
 *  the GParamSpec for the property
 */
+(void)classInstallStylePropertyWithClass:(GtkWidgetClass *)klass andParamSpec:(GParamSpec *)pspec;

/**
 * Installs a style property on a widget class. 
 *
 * @param klass
 *  a GtkWidgetClass
 *
 * @param pspec
 *  the GParamSpec for the property
 *
 * @param parser
 *  the parser for the style property
 */
+(void)classInstallStylePropertyParserWithClass:(GtkWidgetClass*)klass andParamSpec:(GParamSpec *)pspec andParser:(GtkRcPropertyParser)parser;

/**
 * Finds a style property of a widget class by name. 
 *
 * @param klass
 *  a GtkWidgetClass
 *
 * @param propertyName
 *  the name of the style property to find
 *
 * @returns the GParamSpec of the style property or NULL if class has no style 
 *  property with that name. [transfer none]
 */
+(GParamSpec *)classFindStylePropertyWithClass:(GtkWidgetClass *)klass andPropertyName:(NSString *)propertyName;

/**
 * Returns all style properties of a widget class. 
 *
 * @param klass
 *  a GtkWidgetClass
 *
 * @param nProperties
 *  location to return the number of style properties found
 *
 * @returns an newly allocated array of GParamSpec*. The array must be freed 
 *  with g_free(). [array length=n_properties][transfer container]
 */
+(GParamSpec **)classListStylePropertiesWithClass:(GtkWidgetClass *)klass andNumberOfProperties:(NSNumber **)nProperties;

/**
 * Computes the intersection of a widget's area and region, returning the 
 * intersection. The result may be empty, use gdk_region_empty() to check.
 *
 * @param region
 *  a GdkRegion, in the same coordinate system as widget->allocation. That is, 
 *  relative to widget->window for NO_WINDOW widgets; relative to the parent 
 *  window of widget->window for widgets with their own window.
 *
 * @returns A newly allocated region holding the intersection of widget and 
 *  region. The coordinates of the return value are relative to widget->window 
 *  for NO_WINDOW widgets, and relative to the parent window of widget->window 
 *  for widgets with their own window.
 */
-(GdkRegion *)regionIntersect:(const GdkRegion *)region;

/**
 * Very rarely-used function. This function is used to emit an expose event 
 * signals on a widget. This function is not normally used directly. The only 
 * time it is used is when propagating an expose event to a child NO_WINDOW 
 * widget, and that is normally done using propagateExposeWithChild:andEvent:.
 *
 * If you want to force an area of a window to be redrawn, use 
 * gdk_window_invalidate_rect() or gdk_window_invalidate_region(). To cause the 
 * redraw to be done immediately, follow that call with a call to 
 * gdk_window_process_updates().
 *
 * @param event
 *  a expose GdkEvent
 *
 * @returns return from the event signal emission (TRUE if the event was 
 *  handled)
 *
 * @see propagateExposeWithChild:andEvent:
 */
-(NSNumber *)sendExpose:(GdkEvent *)event;

/**
 * Sends the focus change event to widget
 *
 * This function is not meant to be used by applications. The only time it 
 * should be used is when it is necessary for a GtkWidget to assign focus to a 
 * widget that is semantically owned by the first widget even though it's not a 
 * direct child - for instance, a search entry in a floating window similar to 
 * the quick search in GtkTreeView.
 *
 * @param event
 *  a GdkEvent of type GDK_FOCUS_CHANGE
 *
 * @returns the return value from the event signal emission: TRUE if the event 
 *  was handled, and FALSE otherwise
 */
-(BOOL)sendFocusChange:(GdkEvent *)event;

/**
 * Gets the value of a style property of widget.
 *
 * @param propertyName
 *  the name of a style property
 *
 * @param value
 *  location to return the property value
 */
-(void)styleGetPropertyWithName:(NSString *)propertyName andValue:(GValue *)value;

/**
 * Non-vararg variant of gtk_widget_style_get(). Used primarily by language 
 * bindings.
 * 
 * @param propertyName
 *  the name of the first property to get
 *
 * @param varArgs
 *  a va_list of pairs of property names and locations to return the property 
 *  values, starting with the location for first_property_name.
 */
-(void)styleGetValistWithPropertyName:(NSString *)propertyName andVaList:(va_list)varArgs;

/**
 * This function attaches the widget's GtkStyle to the widget's GdkWindow.
 */
-(void)styleAttach;

/**
 * Returns the accessible object that describes the widget to an assistive 
 * technology.
 *
 * If no accessibility library is loaded (i.e. no ATK implementation library is 
 * loaded via GTK_MODULES or via another application library, such as libgnome), 
 * then this AtkObject instance may be a no-op. Likewise, if no class-specific 
 * AtkObject implementation is available for the widget instance in question, it 
 * will inherit an AtkObject implementation from the first ancestor class for 
 * which such an implementation is defined.
 *
 * The documentation of the ATK library contains more information about 
 * accessible objects and their uses.
 *
 * @returns the AtkObject associated with widget. [transfer none]
 */
-(AtkObject *)getAccessible;

/**
 * This function is used by custom widget implementations; if you're writing an 
 * app, you'd use gtk_widget_grab_focus() to move the focus to a particular 
 * widget, and gtk_container_set_focus_chain() to change the focus tab order. So 
 * you may want to investigate those functions instead.
 *
 * childFocus: is called by containers as the user moves around the window using 
 * keyboard shortcuts. direction indicates what kind of motion is taking place 
 * (up, down, left, right, tab forward, tab backward). childFocus: emits the 
 * "focus" signal; widgets override the default handler for this signal in order 
 * to implement appropriate focus behavior.
 *
 * The default ::focus handler for a widget should return YES if moving in 
 * direction left the focus on a focusable location inside that widget, and NO 
 * if moving in direction moved the focus outside the widget. If returning YES, 
 * widgets normally call grabFocus to place the focus accordingly; if returning 
 * NO, they don't modify the current focus location.
 *
 * This function replaces gtk_container_focus() from GTK+ 1.2. It was necessary 
 * to check that the child was visible, sensitive, and focusable before calling 
 * gtk_container_focus(). childFocus: returns NO if the widget is not currently 
 * in a focusable state, so there's no need for those checks.
 *
 * @param direction
 *  direction of focus movement
 *
 * @param direction
 *  direction of focus movement
 *
 * @returns YES if focus ended up inside widget
 *
 * @see grabFocus
 *
 * @see childFocus:
 */
-(BOOL)childFocus:(GtkDirectionType)direction;

/**
 * Emits a "child-notify" signal for the child property child_property on 
 * widget.
 *
 * This is the analogue of g_object_notify() for child properties.
 *
 * @param childProperty
 *  the name of a child property installed on the class of widget
 s parent
 */
-(void)childNotify:(NSString *)childProperty;

/**
 * Stops emission of "child-notify" signals on widget. The signals are queued 
 * until thawChildNotify is called on widget.
 *
 * This is the analogue of g_object_freeze_notify() for child properties. 
 *
 * @see thawChildNotify
 */
-(void)freezeChildNotify;

/**
 * Gets the value set with setChildVisible:. If you feel a need to use this 
 * function, your code probably needs reorganization.
 *
 * This function is only useful for container implementations and never should 
 * be called by an application.
 *
 * @returns YES if the widget is mapped with the parent
 *
 * @see setChildVisible:
 */
-(BOOL)getChildVisible;

/**
 * Returns the parent container of widget.
 *
 * @returns the parent container of widget, or nil. [transfer none]
 */
-(CGTKWidget *)getParent;

/**
 * Gets the settings object holding the settings (global property settings, RC 
 * file information, etc) used for this widget.
 *
 * Note that this function can only be called when the GtkWidget is attached to 
 * a toplevel, since the settings object is specific to a particular GdkScreen.
 *
 * @returns the relevant GtkSettings object. [transfer none]
 */
-(GtkSettings *)getSettings;

/**
 * Returns the clipboard object for the given selection to be used with widget. 
 * widget must have a GdkDisplay associated with it, so must be attached to a 
 * toplevel window.
 *
 * @param selection
 *  a GdkAtom which identifies the clipboard to use. GDK_SELECTION_CLIPBOARD 
 *  gives the default clipboard. Another common value is GDK_SELECTION_PRIMARY, 
 *  which gives the primary X selection.
 *
 * @returns the appropriate clipboard object. If no clipboard already exists, a 
 *  new one will be created. Once a clipboard object has been created, it is 
 *  persistent for all time. [transfer none]
 */
-(GtkClipboard *)getClipboard:(GdkAtom)selection;

/**
 * Get the GdkDisplay for the toplevel window associated with this widget. This 
 * function can only be called after the widget has been added to a widget 
 * hierarchy with a GtkWindow at the top.
 *
 * In general, you should only create display specific resources when a widget 
 * has been realized, and you should free those resources when the widget is 
 * unrealized.
 *
 * @returns the GdkDisplay for the toplevel for this widget. [transfer none]
 */
-(GdkDisplay *)getDisplay;

/**
 * Get the root window where this widget is located. This function can only be 
 * called after the widget has been added to a widget hierarchy with GtkWindow 
 * at the top.
 *
 * The root window is useful for such purposes as creating a popup GdkWindow 
 * associated with the window. In general, you should only create display 
 * specific resources when a widget has been realized, and you should free those 
 * resources when the widget is unrealized.
 *
 * @returns the GdkWindow root window for the toplevel for this widget. 
 *  [transfer none]
 */
-(GdkWindow *)getRootWindow;

/**
 * Get the GdkScreen from the toplevel window associated with this widget. This 
 * function can only be called after the widget has been added to a widget 
 * hierarchy with a GtkWindow at the top.
 *
 * In general, you should only create screen specific resources when a widget 
 * has been realized, and you should free those resources when the widget is 
 * unrealized.
 *
 * @returns the GdkScreen for the toplevel for this widget. [transfer none]
 */
-(GdkScreen *)getScreen;

/**
 * Checks whether there is a GdkScreen is associated with this widget. All 
 * toplevel widgets have an associated screen, and all widgets added into a 
 * hierarchy with a toplevel window at the top.
 *
 * @returns YES if there is a GdkScreen associated with the widget
 */
-(BOOL)hasScreen;

/**
 * Gets the size request that was explicitly set for the widget using 
 * setSizeRequestWithWidth:andHeight:. A value of -1 stored in width or height 
 * indicates that that dimension has not been set explicitly and the natural 
 * requisition of the widget will be used intead. See 
 * setSizeRequestWithWidth:andHeight:. To get the size a widget will actually 
 * use, call sizeRequest: instead of this function.
 *
 * @param width
 *  return location for width, or nil. [out][allow-none]
 *
 * @param height
 *  return location for height, or NULL. [out][allow-none]
 *
 * @see setSizeRequestWithWidth:andHeight:
 *
 * @see sizeRequest:
 */
-(void)getSizeRequestWithWidth:(NSNumber **)width andHeight:(NSNumber **)height;

/**
 * Sets whether widget should be mapped along with its when its parent is mapped 
 * and widget has been shown with show.
 *
 * The child visibility can be set for widget before it is added to a container 
 * with setParent:, to avoid mapping children unnecessary before immediately 
 * unmapping them. However it will be reset to its default state of YES when the 
 * widget is removed from a container.
 *
 * Note that changing the child visibility of a widget does not queue a resize 
 * on the widget. Most of the time, the size of a widget is computed from all 
 * visible children, whether or not they are mapped. If this is not the case, 
 * the container can queue a resize itself.
 *
 * This function is only useful for container implementations and never should be called by an application. 
 *
 * @param isVisible
 *  if YES, widget should be mapped along with its parent.
 *
 * @see show
 */
-(void)setChildVisible:(BOOL)isVisible;

/**
 * Sets the minimum size of a widget; that is, the widget's size request will be 
 * width by height. You can use this function to force a widget to be either 
 * larger or smaller than it normally would be.
 *
 * In most cases, setDefaultSizeWithWidth:andHeight: is a better choice for 
 * toplevel windows than this function; setting the default size will still 
 * allow users to shrink the window. Setting the size request will force them to 
 * leave the window at least as large as the size request. When dealing with 
 * window sizes, setGeometryHintsWithGeometryWidget:andGeometry:andGeomMask: can 
 * be a useful function as well.
 *
 * Note the inherent danger of setting any fixed size - themes, translations 
 * into other languages, different fonts, and user action can all change the 
 * appropriate size for a given widget. So, it's basically impossible to 
 * hardcode a size that will always be correct.
 *
 * The size request of a widget is the smallest size a widget can accept while 
 * still functioning well and drawing itself correctly. However in some strange 
 * cases a widget may be allocated less than its requested size, and in many 
 * cases a widget may be allocated more space than it requested.
 *
 * If the size request in a given direction is -1 (unset), then the "natural" 
 * size request of the widget will be used instead.
 *
 * Widgets can't actually be allocated a size less than 1 by 1, but you can pass 
 * 0,0 to this function to mean "as small as possible."
 *
 * @param width
 *  width widget should request, or -1 to unset
 *
 * @param height
 *  height widget should request, or -1 to unset
 *
 * @see setDefaultSizeWithWidth:andHeight:
 *
 * @see setGeometryHintsWithGeometryWidget:andGeometry:andGeomMask:
 */
-(void)setSizeRequestWithWidth:(NSNumber *)width andHeight:(NSNumber *)height;

/**
 * Reverts the effect of a previous call to freezeChildNotify. This causes all 
 * queued "child-notify" signals on widget to be emitted.
 *
 * @see freezeChildNotify
 */
-(void)thawChildNotify;

/**
 * Sets the "no-show-all" property, which determines whether calls to 
 * showAll and gtk_widget_hide_all() will affect this widget.
 *
 * This is mostly for use in constructing widget hierarchies with externally 
 * controlled visibility, see GtkUIManager.
 *
 * @param noShowAll
 *  the new value for the "no-show-all" property
 *
 * @see showAll
 */
-(void)setNoShowAll:(BOOL)noShowAll;

/**
 * Returns the current value of the GtkWidget:no-show-all property, which 
 * determines whether calls to showAll and gtk_widget_hide_all() will affect 
 * this widget.
 *
 * @return the current value of the "no-show-all" property.
 *
 * @see showAll
 */
-(BOOL)getNoShowAll;

/**
 * Returns a newly allocated list of the widgets, normally labels, for which 
 * this widget is a the target of a mnemonic (see for example, 
 * setMnemonicWidget:).
 *
 * The widgets in the list are not individually referenced. If you want to 
 * iterate through the list and perform actions involving callbacks that might 
 * destroy the widgets, you must call g_list_foreach (result, 
 * (GFunc)g_object_ref, NULL) first, and then unref all the widgets afterwards.
 *
 * @returns the list of mnemonic labels; free this list with g_list_free() when 
 * you are done with it. [element-type GtkWidget][transfer container]
 *
 * @see setMnemonicWidget:
 */
-(GList *)listMnemonicLabels;

/**
 * Adds a widget to the list of mnemonic labels for this widget. (See 
 * listMnemonicLabels). Note the list of mnemonic labels for the widget is 
 * cleared when the widget is destroyed, so the caller must make sure to update 
 * its internal state at this point as well, by using a connection to the 
 * "destroy" signal or a weak notifier.
 *
 * @param label
 *  a CGTKWidget that acts as a mnemonic label for widget
 *
 * @see listMnemonicLabels
 */
-(void)addMnemonicLabel:(CGTKWidget *)label;

/**
 * Removes a widget from the list of mnemonic labels for this widget. (See 
 * listMnemonicLabels). The widget must have previously been added to the list 
 * with addMnemonicLabel:.
 *
 * @param label
 *  a CGTKWidget that was previously set as a mnemnic label for widget with 
 *  addMnemonicLabel:.
 *
 * @see listMnemonicLabels
 *
 * @see addMnemonicLabel:
 */
-(void)removeMnemonicLabel:(CGTKWidget *)label;

/**
 * Whether widget can rely on having its alpha channel drawn correctly. On X11 
 * this function returns whether a compositing manager is running for widget's 
 * screen.
 *
 * Please note that the semantics of this call will change in the future if used 
 * on a widget that has a composited window in its hierarchy (as set by 
 * gdk_window_set_composited()).
 *
 * @returns YES if the widget can rely on its alpha channel being drawn 
 * correctly.
 */
-(BOOL)isComposited;

/**
 * Notifies the user about an input-related error on this widget. If the 
 * "gtk-error-bell" setting is TRUE, it calls gdk_window_beep(), otherwise it 
 * does nothing.
 *
 * Note that the effect of gdk_window_beep() can be configured in many ways, 
 * depending on the windowing backend and the desktop environment or window 
 * manager that is used.
 */
-(void)errorBell;

/**
 * This function should be called whenever keyboard navigation within a single 
 * widget hits a boundary. The function emits the "keynav-failed" signal on the 
 * widget and its return value should be interpreted in a way similar to the 
 * return value of childFocus::
 *
 * When YES is returned, stay in the widget, the failed keyboard navigation is 
 * Ok and/or there is nowhere we can/should move the focus to.
 *
 * When NO is returned, the caller should continue with keyboard navigation 
 * outside the widget, e.g. by calling childFocus: on the widget's toplevel.
 *
 * The default ::keynav-failed handler returns TRUE for GTK_DIR_TAB_FORWARD and 
 * GTK_DIR_TAB_BACKWARD. For the other values of GtkDirectionType, it looks at 
 * the "gtk-keynav-cursor-only" setting and returns NO if the setting is YES. 
 * This way the entire user interface becomes cursor-navigatable on input 
 * devices such as mobile phones which only have cursor keys but no tab key.
 *
 * Whenever the default handler returns TRUE, it also calls errorBell to notify 
 * the user of the failed keyboard navigation.
 *
 * A use case for providing an own implementation of ::keynav-failed (either by 
 * connecting to it or by overriding it) would be a row of GtkEntry widgets 
 * where the user should be able to navigate the entire row with the cursor 
 * keys, as e.g. known from user interfaces that require entering license keys.
 *
 * @param direction
 *  direction of focus movement
 *
 * @returns YES if stopping keyboard navigation is fine, NO if the emitting 
 * widget should try to handle the keyboard navigation attempt in its parent 
 * container(s).
 *
 * @see childFocus:
 */
-(BOOL)keynavFailed:(GtkDirectionType)direction;

/**
 * Gets the contents of the tooltip for widget.
 *
 * @returns the tooltip text, or nil.
 */
-(NSString *)getTooltipMarkup;

/**
 * Sets markup as the contents of the tooltip, which is marked up with the Pango 
 * text markup language.
 *
 * This function will take care of setting GtkWidget:has-tooltip to YES and of 
 * the default handler for the GtkWidget::query-tooltip signal.
 *
 * See also the GtkWidget:tooltip-markup property and gtk_tooltip_set_markup().
 *
 * @param markup
 *  the contents of the tooltip for widget, or NULL. [allow-none]
 */
-(void)setTooltipMarkup:(NSString *)markup;

/**
 * Gets the contents of the tooltip for widget.
 *
 * @returns the tooltip text, or NULL.
 */
-(NSString *)getTooltipText;

/**
 * Sets text as the contents of the tooltip. This function will take care of 
 * setting GtkWidget:has-tooltip to TRUE and of the default handler for the 
 * GtkWidget::query-tooltip signal.
 *
 * See also the GtkWidget:tooltip-text property and gtk_tooltip_set_text(). 
 *
 * @param text
 *  the contents of the tooltip for widget
 */
-(void)setTooltipText:(NSString *)text;

/**
 * Returns the current value of the has-tooltip property. See 
 * GtkWidget:has-tooltip for more information.
 *
 * @returns current value of has-tooltip on widget
 */
-(BOOL)getHasTooltip;

/**
 * Sets the has-tooltip property on widget to has_tooltip. See 
 * GtkWidget:has-tooltip for more information.
 *
 * @param hasTooltip
 *  whether or not widget has a tooltip
 */
-(void)setHasTooltip:(BOOL)hasTooltip;

/**
 * Triggers a tooltip query on the display where the toplevel of widget is 
 * located. See gtk_tooltip_trigger_tooltip_query() for more information.
 */
-(void)triggerTooltipQuery;

/**
 * Create a GdkPixmap of the contents of the widget and its children.
 *
 * Works even if the widget is obscured. The depth and visual of the resulting 
 * pixmap is dependent on the widget being snapshot and likely differs from 
 * those of a target widget displaying the pixmap. The function 
 * gdk_pixbuf_get_from_drawable() can be used to convert the pixmap to a visual 
 * independant representation.
 *
 * The snapshot area used by this function is the widget's allocation plus any 
 * extra space occupied by additional windows belonging to this widget (such as 
 * the arrows of a spin button). Thus, the resulting snapshot pixmap is possibly 
 * larger than the allocation.
 *
 * If clip_rect is non-NULL, the resulting pixmap is shrunken to match the 
 * specified clip_rect. The (x,y) coordinates of clip_rect are interpreted 
 * widget relative. If width or height of clip_rect are 0 or negative, the width 
 * or height of the resulting pixmap will be shrunken by the respective amount. 
 * For instance a clip_rect { +5, +5, -10, -10 } will chop off 5 pixels at each 
 * side of the snapshot pixmap. If non-NULL, clip_rect will contain the exact 
 * widget-relative snapshot coordinates upon return. A clip_rect of 
 * { -1, -1, 0, 0 } can be used to preserve the auto-grown snapshot area and use 
 * clipRect as a pure output parameter.
 *
 * The returned pixmap can be NULL, if the resulting clip_area was empty. 
 *
 * @param clipRect
 *  a GdkRectangle or NULL. [allow-none]
 *
 * @returns GdkPixmap snapshot of the widget
 */
-(GdkPixmap *)getSnapshot:(GdkRectangle *)clipRect;

/**
 * Returns the widget's window if it is realized, NULL otherwise 
 *
 * @returns widget's window. [transfer none]
 */
-(GdkWindow *)getWindow;

/**
 * Retrieves the widget's allocation. 
 *
 * @param allocation
 *  a pointer to a GtkAllocation to copy to. [out]
 */
-(void)getAllocation:(GtkAllocation *)allocation;

/**
 * Sets the widget's allocation. This should not be used directly, but from 
 * within a widget's size_allocate method.
 *
 * @param allocation
 *  a pointer to a GtkAllocation to copy from
 */
-(void)setAllocation:(const GtkAllocation *)allocation;

/**
 * Determines whether the application intends to draw on the widget in an 
 * "expose-event" handler.
 *
 * See setAppPaintable: 
 *
 * @returns YES if the widget is app paintable
 *
 * @see setAppPaintable:
 */
-(BOOL)getAppPaintable;

/**
 * Determines whether widget can be a default widget. See setCanDefault:.
 *
 * @returns YES if widget can be a default widget, NO otherwise
 *
 * @see setCanDefault:
 */
-(BOOL)getCanDefault;

/**
 * Specifies whether widget can be a default widget. See grabDefault for details 
 * about the meaning of "default".
 *
 * @param canDefault
 *  whether or not widget can be a default widget.
 *
 * @see grabDefault
 */
-(void)setCanDefault:(BOOL)canDefault;

/**
 * Determines whether widget can own the input focus. See setCanFocus:. 
 *
 * @returns YES if widget can own the input focus, NO otherwise
 *
 * @see setCanFocus:
 */
-(BOOL)getCanFocus;

/**
 * Specifies whether widget can own the input focus. See grabFocus for actually 
 * setting the input focus on a widget.
 *
 * @param canFocus
 *  whether or not widget can own the input focus.
 *
 * @see grabFocus
 */
-(void)setCanFocus:(BOOL)canFocus;

/**
 * Determines whether the widget is double buffered.
 *
 * See setDoubleBuffered: 
 *
 * @returns YES if the widget is double buffered
 *
 * @see setDoubleBuffered:
 */
-(BOOL)getDoubleBuffered;

/**
 * Determines whether widget has a GdkWindow of its own. See setHasWindow:.
 *
 * @returns YES if widget has a window, NO otherwise
 *
 * @see setHasWindow:
 */
-(BOOL)getHasWindow;

/**
 * Specifies whether widget has a GdkWindow of its own. Note that all realized 
 * widgets have a non-NULL "window" pointer (getWindow never returns a NULL 
 * window when a widget is realized), but for many of them it's actually the 
 * GdkWindow of one of its parent widgets. Widgets that do not create a window 
 * for themselves in GtkWidget::realize() must announce this by calling this 
 * function with hasWindow = NO.
 *
 * This function should only be called by widget implementations, and they 
 * should call it in their init() function.
 *
 * @param hasWindow
 *  whether or not widget has a window.
 *
 * @see getWindow
 */
-(void)setHasWindow:(BOOL)hasWindow;

/**
 * Returns the widget's sensitivity (in the sense of returning the value that 
 * has been set using setSensitive:).
 *
 * The effective sensitivity of a widget is however determined by both its own 
 * and its parent widget's sensitivity. See isSensitive.
 *
 * @returns YES if the widget is sensitive
 *
 * @see setSensitive:
 *
 * @see isSensitive
 */
-(BOOL)getSensitive;

/**
 * Returns the widget's effective sensitivity, which means it is sensitive 
 * itself and also its parent widget is sensntive
 *
 * @returns YES if the widget is effectively sensitive
 */
-(BOOL)isSensitive;

/**
 * Returns the widget's state. See setState:. 
 *
 * @returns the state of widget.
 *
 * @see setState:
 */
-(GtkStateType)getState;

/**
 * Determines whether the widget is visible. Note that this doesn't take into 
 * account whether the widget's parent is also visible or the widget is obscured 
 * in any way.
 *
 * See setVisible:. 
 *
 * @returns YES if the widget is visible
 *
 * @see setVisible:
 */
-(BOOL)getVisible;

/**
 * Sets the visibility state of widget. Note that setting this to YES doesn't 
 * mean the widget is actually viewable, see getVisible.
 *
 * This function simply calls show or hide but is nicer to use when the 
 * visibility of the widget depends on some condition.
 *
 * @param visible
 *  whether the widget should be shown or not
 *
 * @see getVisible
 *
 * @see show
 *
 * @see hide
 */
-(void)setVisible:(BOOL)visible;

/**
 * Determines whether widget is the current default widget within its toplevel. 
 * See setCanDefault:.
 *
 * @returns YES if widget is the current default widget within its toplevel, NO 
 *  otherwise
 *
 * @see setCanDefault:
 */
-(BOOL)hasDefault;

/**
 * Determines if the widget has the global input focus. See isFocus for the 
 * difference between having the global input focus, and only having the focus 
 * within a toplevel.
 *
 * @returns YES if the widget has the global input focus
 */
-(BOOL)hasFocus;

/**
 * Determines whether the widget is currently grabbing events, so it is the only 
 * widget receiving input events (keyboard and mouse).
 *
 * See also grabAdd. 
 *
 * @returns YES if the widget is in the grab_widgets stack
 *
 * @see grabAdd
 */
-(BOOL)hasGrab;

/**
 * Determines if the widget style has been looked up through the rc mechanism.
 *
 * @returns YES if the widget has been looked up through the rc mechanism, NO 
 *  otherwise.
 */
-(BOOL)hasRcStyle;

/**
 * Determines whether widget can be drawn to. A widget can be drawn to if it is 
 * mapped and visible.
 *
 * @returns YES if widget is drawable, NO otherwise
 */
-(BOOL)isDrawable;

/**
 * Determines whether widget is a toplevel widget. Currently only GtkWindow and 
 * GtkInvisible are toplevel widgets. Toplevel widgets have no parent widget.
 *
 * @returns YES if widget is a toplevel, NO otherwise
 */
-(BOOL)isTopLevel;

/**
 * Sets a widget's window. This function should only be used in a widget's 
 * GtkWidget::realize() implementation. The window passed is usually either new 
 * window created with gdk_window_new(), or the window of its parent widget as 
 * returned by getParentWindow.
 *
 * Widgets must indicate whether they will create their own GdkWindow by calling 
 * setHasWindow:. This is usually done in the widget's init() function.
 *
 * @param window
 *  a GdkWindow
 *
 * @see getParentWindow
 */
-(void)setWindow:(GdkWindow *)window;

/**
 * Specifies whether widget will be treated as the default widget within its 
 * toplevel when it has the focus, even if another widget is the default.
 *
 * See grabDefault for details about the meaning of "default". 
 *
 * @param receivesDefault
 *  whether or not widget can be a default widget.
 *
 * @see grabDefault
 */
-(void)setReceivesDefault:(BOOL)receivesDefault;

/**
 * Determines whether widget is alyways treated as default widget withing its 
 * toplevel when it has the focus, even if another widget is the default.
 *
 * See setReceivesDefault:. 
 *
 * @returns YES if widget acts as default widget when focussed, NO otherwise
 *
 * @see setReceivesDefault:
 */
-(BOOL)getReceivesDefault;

/**
 * Marks the widget as being realized.
 *
 * This function should only ever be called in a derived widget's "realize" or 
 * "unrealize" implementation.
 *
 * @param realized
 *  YES to mark the widget as realized
 */
-(void)setRealized:(BOOL)realized;
 
/**
 * Determines whether widget is realized. 
 *
 * @returns YES if widget is realized, NO otherwise
 */
-(BOOL)getRealized;
 
/**
 * Marks the widget as being realized.
 *
 * This function should only ever be called in a derived widget's "map" or 
 * "unmap" implementation.
 *
 * @param mapped
 *  YES to mark the widget as mapped
 */
-(void)setMapped:(BOOL)mapped;

/**
 * Whether the widget is mapped.
 *
 * @returns YES if the widget is mapped, NO otherwise.
 */
-(BOOL)getMapped;

/**
 * Retrieves the widget's requisition.
 *
 * This function should only be used by widget implementations in order to 
 * figure whether the widget's requisition has actually changed after some 
 * internal state change (so that they can call queueResize instead of 
 * queueDraw).
 *
 * Normally, sizeRequest: should be used. 
 *
 * @param requisition
 * a pointer to a GtkRequisition to copy to. [out]
 *
 * @see queueResize
 *
 * @see queueDraw
 *
 * @see sizeRequest:
 */
-(void)getRequisition:(GtkRequisition *)requisition;

/**
 * Copies a GtkRequisition.
 *
 * @param requisition
 *  a GtkRequisition
 *
 * @returns a copy of requisition
 */
+(GtkRequisition *)requisitionCopy:(const GtkRequisition *)requisition;

/**
 * Frees a GtkRequisition. 
 *
 * @param requisition
 *  a GtkRequisition
 */
+(void)requisitionFree:(GtkRequisition *)requisition;

/**
 * Makes widget the current grabbed widget. This means that interaction with 
 * other widgets in the same application is blocked and mouse as well as 
 * keyboard events are delivered to this widget.
 *
 * If widget is not sensitive, it is not set as the current grabbed widget and 
 * this function does nothing.
 */
-(void)grabAdd;

/**
 * Queries the current grab of the default window group. 
 *
 * @returns The widget which currently has the grab or NULL if no grab is 
 * active. [transfer none]
 */
+(CGTKWidget *)grabGetCurrent;

/**
 * Removes the grab from the given widget. You have to pair calls to grabAdd and 
 * grabRemove.
 *
 * If widget does not have the grab, this function does nothing. 
 *
 * @see grabAdd
 */
-(void)grabRemove;

/**
 * If event is NULL or the event was not associated with any widget, returns 
 * nil, otherwise returns the widget that received the event originally.
 *
 * @param event
 *  a GdkEvent
 *
 * @returns the widget that originally received event, or NULL. [transfer none]
 */
+(CGTKWidget *)getEventWidget:(GdkEvent *)event;

/**
 * Sends an event to a widget, propagating the event to parent widgets if the 
 * event remains unhandled. Events received by GTK+ from GDK normally begin in 
 * mainDoEvent:. Depending on the type of event, existence of modal dialogs, 
 * grabs, etc., the event may be propagated; if so, this function is used. 
 * propagateEvent: calls event: on each widget it decides to send the event to. 
 * So event: is the lowest-level function; it simply emits the "event" and 
 * possibly an event-specific signal on a widget. propagateEvent: is a bit 
 * higher-level, and mainDoEvent: is the highest level.
 *
 * All that said, you most likely don't want to use any of these functions; 
 * synthesizing events is rarely needed. Consider asking on the mailing list for 
 * better ways to achieve your goals. For example, use 
 * gdk_window_invalidate_rect() or queueDraw instead of making up expose events.
 *
 * @param event
 *  an event
 *
 * @see mainDoEvent:
 *
 * @see propagateEvent:
 *
 * @see event:
 *
 * @see queueDraw
 */
-(void)propagateEvent:(GdkEvent *)event;

@end
