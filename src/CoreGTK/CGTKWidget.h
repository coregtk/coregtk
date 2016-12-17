/*
 * CGTKWidget.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBase.h"

@interface CGTKWidget : CGTKBase
{

}

/**
 * Functions
 */
+(GtkTextDirection)getDefaultDirection;
+(GtkStyle*)getDefaultStyle;
+(void)popCompositeChild;
+(void)pushCompositeChild;
+(void)setDefaultDirection:(GtkTextDirection) dir;

/**
 * Methods
 */

-(GtkWidget*)WIDGET;

/**
 * -(BOOL*)activate;
 *
 * @returns BOOL
 */
-(BOOL)activate;

/**
 * -(void*)addAcceleratorWithAccelSignal:(NSString*) accelSignal andAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods andAccelFlags:(GtkAccelFlags) accelFlags;
 *
 * @param accelSignal
 * @param accelGroup
 * @param accelKey
 * @param accelMods
 * @param accelFlags
 */
-(void)addAcceleratorWithAccelSignal:(NSString*) accelSignal andAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods andAccelFlags:(GtkAccelFlags) accelFlags;

/**
 * -(void*)addDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;
 *
 * @param device
 * @param events
 */
-(void)addDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;

/**
 * -(void*)addEvents:(gint) events;
 *
 * @param events
 */
-(void)addEvents:(gint) events;

/**
 * -(void*)addMnemonicLabel:(CGTKWidget*) label;
 *
 * @param label
 */
-(void)addMnemonicLabel:(CGTKWidget*) label;

/**
 * -(guint*)addTickCallbackWithCallback:(GtkTickCallback) callback andUserData:(gpointer) userData andNotify:(GDestroyNotify) notify;
 *
 * @param callback
 * @param userData
 * @param notify
 * @returns guint
 */
-(guint)addTickCallbackWithCallback:(GtkTickCallback) callback andUserData:(gpointer) userData andNotify:(GDestroyNotify) notify;

/**
 * -(BOOL*)canActivateAccel:(guint) signalId;
 *
 * @param signalId
 * @returns BOOL
 */
-(BOOL)canActivateAccel:(guint) signalId;

/**
 * -(BOOL*)childFocus:(GtkDirectionType) direction;
 *
 * @param direction
 * @returns BOOL
 */
-(BOOL)childFocus:(GtkDirectionType) direction;

/**
 * -(void*)childNotify:(NSString*) childProperty;
 *
 * @param childProperty
 */
-(void)childNotify:(NSString*) childProperty;

/**
 * -(void*)classPathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;
 *
 * @param pathLength
 * @param path
 * @param pathReversed
 */
-(void)classPathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;

/**
 * -(BOOL*)computeExpand:(GtkOrientation) orientation;
 *
 * @param orientation
 * @returns BOOL
 */
-(BOOL)computeExpand:(GtkOrientation) orientation;

/**
 * -(PangoContext**)createPangoContext;
 *
 * @returns PangoContext*
 */
-(PangoContext*)createPangoContext;

/**
 * -(PangoLayout**)createPangoLayout:(NSString*) text;
 *
 * @param text
 * @returns PangoLayout*
 */
-(PangoLayout*)createPangoLayout:(NSString*) text;

/**
 * -(void*)destroy;
 *
 */
-(void)destroy;

/**
 * -(void*)destroyed:(GtkWidget**) widgetPointer;
 *
 * @param widgetPointer
 */
-(void)destroyed:(GtkWidget**) widgetPointer;

/**
 * -(BOOL*)deviceIsShadowed:(GdkDevice*) device;
 *
 * @param device
 * @returns BOOL
 */
-(BOOL)deviceIsShadowed:(GdkDevice*) device;

/**
 * -(GdkDragContext**)gtkDragBeginWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event;
 *
 * @param targets
 * @param actions
 * @param button
 * @param event
 * @returns GdkDragContext*
 */
-(GdkDragContext*)gtkDragBeginWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event;

/**
 * -(GdkDragContext**)gtkDragBeginWithCoordinatesWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event andX:(gint) x andY:(gint) y;
 *
 * @param targets
 * @param actions
 * @param button
 * @param event
 * @param x
 * @param y
 * @returns GdkDragContext*
 */
-(GdkDragContext*)gtkDragBeginWithCoordinatesWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event andX:(gint) x andY:(gint) y;

/**
 * -(BOOL*)gtkDragCheckThresholdWithStartX:(gint) startX andStartY:(gint) startY andCurrentX:(gint) currentX andCurrentY:(gint) currentY;
 *
 * @param startX
 * @param startY
 * @param currentX
 * @param currentY
 * @returns BOOL
 */
-(BOOL)gtkDragCheckThresholdWithStartX:(gint) startX andStartY:(gint) startY andCurrentX:(gint) currentX andCurrentY:(gint) currentY;

/**
 * -(void*)gtkDragDestAddImageTargets;
 *
 */
-(void)gtkDragDestAddImageTargets;

/**
 * -(void*)gtkDragDestAddTextTargets;
 *
 */
-(void)gtkDragDestAddTextTargets;

/**
 * -(void*)gtkDragDestAddUriTargets;
 *
 */
-(void)gtkDragDestAddUriTargets;

/**
 * -(GdkAtom*)gtkDragDestFindTargetWithContext:(GdkDragContext*) context andTargetList:(GtkTargetList*) targetList;
 *
 * @param context
 * @param targetList
 * @returns GdkAtom
 */
-(GdkAtom)gtkDragDestFindTargetWithContext:(GdkDragContext*) context andTargetList:(GtkTargetList*) targetList;

/**
 * -(GtkTargetList**)gtkDragDestGetTargetList;
 *
 * @returns GtkTargetList*
 */
-(GtkTargetList*)gtkDragDestGetTargetList;

/**
 * -(BOOL*)gtkDragDestGetTrackMotion;
 *
 * @returns BOOL
 */
-(BOOL)gtkDragDestGetTrackMotion;

/**
 * -(void*)gtkDragDestSetWithFlags:(GtkDestDefaults) flags andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
 *
 * @param flags
 * @param targets
 * @param ntargets
 * @param actions
 */
-(void)gtkDragDestSetWithFlags:(GtkDestDefaults) flags andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;

/**
 * -(void*)gtkDragDestSetProxyWithProxyWindow:(GdkWindow*) proxyWindow andProtocol:(GdkDragProtocol) protocol andUseCoordinates:(BOOL) useCoordinates;
 *
 * @param proxyWindow
 * @param protocol
 * @param useCoordinates
 */
-(void)gtkDragDestSetProxyWithProxyWindow:(GdkWindow*) proxyWindow andProtocol:(GdkDragProtocol) protocol andUseCoordinates:(BOOL) useCoordinates;

/**
 * -(void*)gtkDragDestSetTargetList:(GtkTargetList*) targetList;
 *
 * @param targetList
 */
-(void)gtkDragDestSetTargetList:(GtkTargetList*) targetList;

/**
 * -(void*)gtkDragDestSetTrackMotion:(BOOL) trackMotion;
 *
 * @param trackMotion
 */
-(void)gtkDragDestSetTrackMotion:(BOOL) trackMotion;

/**
 * -(void*)gtkDragDestUnset;
 *
 */
-(void)gtkDragDestUnset;

/**
 * -(void*)gtkDragGetDataWithContext:(GdkDragContext*) context andTarget:(GdkAtom) target andTime:(guint32) time;
 *
 * @param context
 * @param target
 * @param time
 */
-(void)gtkDragGetDataWithContext:(GdkDragContext*) context andTarget:(GdkAtom) target andTime:(guint32) time;

/**
 * -(void*)gtkDragHighlight;
 *
 */
-(void)gtkDragHighlight;

/**
 * -(void*)gtkDragSourceAddImageTargets;
 *
 */
-(void)gtkDragSourceAddImageTargets;

/**
 * -(void*)gtkDragSourceAddTextTargets;
 *
 */
-(void)gtkDragSourceAddTextTargets;

/**
 * -(void*)gtkDragSourceAddUriTargets;
 *
 */
-(void)gtkDragSourceAddUriTargets;

/**
 * -(GtkTargetList**)gtkDragSourceGetTargetList;
 *
 * @returns GtkTargetList*
 */
-(GtkTargetList*)gtkDragSourceGetTargetList;

/**
 * -(void*)gtkDragSourceSetWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
 *
 * @param startButtonMask
 * @param targets
 * @param ntargets
 * @param actions
 */
-(void)gtkDragSourceSetWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;

/**
 * -(void*)gtkDragSourceSetIconGicon:(GIcon*) icon;
 *
 * @param icon
 */
-(void)gtkDragSourceSetIconGicon:(GIcon*) icon;

/**
 * -(void*)gtkDragSourceSetIconName:(NSString*) iconName;
 *
 * @param iconName
 */
-(void)gtkDragSourceSetIconName:(NSString*) iconName;

/**
 * -(void*)gtkDragSourceSetIconPixbuf:(GdkPixbuf*) pixbuf;
 *
 * @param pixbuf
 */
-(void)gtkDragSourceSetIconPixbuf:(GdkPixbuf*) pixbuf;

/**
 * -(void*)gtkDragSourceSetIconStock:(NSString*) stockId;
 *
 * @param stockId
 */
-(void)gtkDragSourceSetIconStock:(NSString*) stockId;

/**
 * -(void*)gtkDragSourceSetTargetList:(GtkTargetList*) targetList;
 *
 * @param targetList
 */
-(void)gtkDragSourceSetTargetList:(GtkTargetList*) targetList;

/**
 * -(void*)gtkDragSourceUnset;
 *
 */
-(void)gtkDragSourceUnset;

/**
 * -(void*)gtkDragUnhighlight;
 *
 */
-(void)gtkDragUnhighlight;

/**
 * -(void*)draw:(cairo_t*) cr;
 *
 * @param cr
 */
-(void)draw:(cairo_t*) cr;

/**
 * -(void*)ensureStyle;
 *
 */
-(void)ensureStyle;

/**
 * -(void*)errorBell;
 *
 */
-(void)errorBell;

/**
 * -(BOOL*)event:(GdkEvent*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)event:(GdkEvent*) event;

/**
 * -(void*)freezeChildNotify;
 *
 */
-(void)freezeChildNotify;

/**
 * -(AtkObject**)getAccessible;
 *
 * @returns AtkObject*
 */
-(AtkObject*)getAccessible;

/**
 * -(GActionGroup**)getActionGroup:(NSString*) prefix;
 *
 * @param prefix
 * @returns GActionGroup*
 */
-(GActionGroup*)getActionGroup:(NSString*) prefix;

/**
 * -(int*)getAllocatedBaseline;
 *
 * @returns int
 */
-(int)getAllocatedBaseline;

/**
 * -(int*)getAllocatedHeight;
 *
 * @returns int
 */
-(int)getAllocatedHeight;

/**
 * -(int*)getAllocatedWidth;
 *
 * @returns int
 */
-(int)getAllocatedWidth;

/**
 * -(void*)getAllocation:(GtkAllocation*) allocation;
 *
 * @param allocation
 */
-(void)getAllocation:(GtkAllocation*) allocation;

/**
 * -(CGTKWidget**)getAncestor:(GType) widgetType;
 *
 * @param widgetType
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getAncestor:(GType) widgetType;

/**
 * -(BOOL*)getAppPaintable;
 *
 * @returns BOOL
 */
-(BOOL)getAppPaintable;

/**
 * -(BOOL*)getCanDefault;
 *
 * @returns BOOL
 */
-(BOOL)getCanDefault;

/**
 * -(BOOL*)getCanFocus;
 *
 * @returns BOOL
 */
-(BOOL)getCanFocus;

/**
 * -(void*)getChildRequisition:(GtkRequisition*) requisition;
 *
 * @param requisition
 */
-(void)getChildRequisition:(GtkRequisition*) requisition;

/**
 * -(BOOL*)getChildVisible;
 *
 * @returns BOOL
 */
-(BOOL)getChildVisible;

/**
 * -(void*)getClip:(GtkAllocation*) clip;
 *
 * @param clip
 */
-(void)getClip:(GtkAllocation*) clip;

/**
 * -(GtkClipboard**)getClipboard:(GdkAtom) selection;
 *
 * @param selection
 * @returns GtkClipboard*
 */
-(GtkClipboard*)getClipboard:(GdkAtom) selection;

/**
 * -(NSString**)getCompositeName;
 *
 * @returns NSString*
 */
-(NSString*)getCompositeName;

/**
 * -(BOOL*)getDeviceEnabled:(GdkDevice*) device;
 *
 * @param device
 * @returns BOOL
 */
-(BOOL)getDeviceEnabled:(GdkDevice*) device;

/**
 * -(GdkEventMask*)getDeviceEvents:(GdkDevice*) device;
 *
 * @param device
 * @returns GdkEventMask
 */
-(GdkEventMask)getDeviceEvents:(GdkDevice*) device;

/**
 * -(GtkTextDirection*)getDirection;
 *
 * @returns GtkTextDirection
 */
-(GtkTextDirection)getDirection;

/**
 * -(GdkDisplay**)getDisplay;
 *
 * @returns GdkDisplay*
 */
-(GdkDisplay*)getDisplay;

/**
 * -(BOOL*)getDoubleBuffered;
 *
 * @returns BOOL
 */
-(BOOL)getDoubleBuffered;

/**
 * -(gint*)getEvents;
 *
 * @returns gint
 */
-(gint)getEvents;

/**
 * -(PangoFontMap**)getFontMap;
 *
 * @returns PangoFontMap*
 */
-(PangoFontMap*)getFontMap;

/**
 * -(const cairo_font_options_t**)getFontOptions;
 *
 * @returns const cairo_font_options_t*
 */
-(const cairo_font_options_t*)getFontOptions;

/**
 * -(GdkFrameClock**)getFrameClock;
 *
 * @returns GdkFrameClock*
 */
-(GdkFrameClock*)getFrameClock;

/**
 * -(GtkAlign*)getHalign;
 *
 * @returns GtkAlign
 */
-(GtkAlign)getHalign;

/**
 * -(BOOL*)getHasTooltip;
 *
 * @returns BOOL
 */
-(BOOL)getHasTooltip;

/**
 * -(BOOL*)getHasWindow;
 *
 * @returns BOOL
 */
-(BOOL)getHasWindow;

/**
 * -(BOOL*)getHexpand;
 *
 * @returns BOOL
 */
-(BOOL)getHexpand;

/**
 * -(BOOL*)getHexpandSet;
 *
 * @returns BOOL
 */
-(BOOL)getHexpandSet;

/**
 * -(BOOL*)getMapped;
 *
 * @returns BOOL
 */
-(BOOL)getMapped;

/**
 * -(gint*)getMarginBottom;
 *
 * @returns gint
 */
-(gint)getMarginBottom;

/**
 * -(gint*)getMarginEnd;
 *
 * @returns gint
 */
-(gint)getMarginEnd;

/**
 * -(gint*)getMarginLeft;
 *
 * @returns gint
 */
-(gint)getMarginLeft;

/**
 * -(gint*)getMarginRight;
 *
 * @returns gint
 */
-(gint)getMarginRight;

/**
 * -(gint*)getMarginStart;
 *
 * @returns gint
 */
-(gint)getMarginStart;

/**
 * -(gint*)getMarginTop;
 *
 * @returns gint
 */
-(gint)getMarginTop;

/**
 * -(GdkModifierType*)getModifierMask:(GdkModifierIntent) intent;
 *
 * @param intent
 * @returns GdkModifierType
 */
-(GdkModifierType)getModifierMask:(GdkModifierIntent) intent;

/**
 * -(GtkRcStyle**)getModifierStyle;
 *
 * @returns GtkRcStyle*
 */
-(GtkRcStyle*)getModifierStyle;

/**
 * -(NSString**)getName;
 *
 * @returns NSString*
 */
-(NSString*)getName;

/**
 * -(BOOL*)getNoShowAll;
 *
 * @returns BOOL
 */
-(BOOL)getNoShowAll;

/**
 * -(double*)getOpacity;
 *
 * @returns double
 */
-(double)getOpacity;

/**
 * -(PangoContext**)getPangoContext;
 *
 * @returns PangoContext*
 */
-(PangoContext*)getPangoContext;

/**
 * -(CGTKWidget**)getParent;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getParent;

/**
 * -(GdkWindow**)getParentWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getParentWindow;

/**
 * -(GtkWidgetPath**)getPath;
 *
 * @returns GtkWidgetPath*
 */
-(GtkWidgetPath*)getPath;

/**
 * -(void*)getPointerWithX:(gint*) x andY:(gint*) y;
 *
 * @param x
 * @param y
 */
-(void)getPointerWithX:(gint*) x andY:(gint*) y;

/**
 * -(void*)getPreferredHeightWithMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;
 *
 * @param minimumHeight
 * @param naturalHeight
 */
-(void)getPreferredHeightWithMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;

/**
 * -(void*)getPreferredHeightAndBaselineForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight andMinimumBaseline:(gint*) minimumBaseline andNaturalBaseline:(gint*) naturalBaseline;
 *
 * @param width
 * @param minimumHeight
 * @param naturalHeight
 * @param minimumBaseline
 * @param naturalBaseline
 */
-(void)getPreferredHeightAndBaselineForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight andMinimumBaseline:(gint*) minimumBaseline andNaturalBaseline:(gint*) naturalBaseline;

/**
 * -(void*)getPreferredHeightForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;
 *
 * @param width
 * @param minimumHeight
 * @param naturalHeight
 */
-(void)getPreferredHeightForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;

/**
 * -(void*)getPreferredSizeWithMinimumSize:(GtkRequisition*) minimumSize andNaturalSize:(GtkRequisition*) naturalSize;
 *
 * @param minimumSize
 * @param naturalSize
 */
-(void)getPreferredSizeWithMinimumSize:(GtkRequisition*) minimumSize andNaturalSize:(GtkRequisition*) naturalSize;

/**
 * -(void*)getPreferredWidthWithMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;
 *
 * @param minimumWidth
 * @param naturalWidth
 */
-(void)getPreferredWidthWithMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;

/**
 * -(void*)getPreferredWidthForHeightWithHeight:(gint) height andMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;
 *
 * @param height
 * @param minimumWidth
 * @param naturalWidth
 */
-(void)getPreferredWidthForHeightWithHeight:(gint) height andMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;

/**
 * -(BOOL*)getRealized;
 *
 * @returns BOOL
 */
-(BOOL)getRealized;

/**
 * -(BOOL*)getReceivesDefault;
 *
 * @returns BOOL
 */
-(BOOL)getReceivesDefault;

/**
 * -(GtkSizeRequestMode*)getRequestMode;
 *
 * @returns GtkSizeRequestMode
 */
-(GtkSizeRequestMode)getRequestMode;

/**
 * -(void*)getRequisition:(GtkRequisition*) requisition;
 *
 * @param requisition
 */
-(void)getRequisition:(GtkRequisition*) requisition;

/**
 * -(GdkWindow**)getRootWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getRootWindow;

/**
 * -(gint*)getScaleFactor;
 *
 * @returns gint
 */
-(gint)getScaleFactor;

/**
 * -(GdkScreen**)getScreen;
 *
 * @returns GdkScreen*
 */
-(GdkScreen*)getScreen;

/**
 * -(BOOL*)getSensitive;
 *
 * @returns BOOL
 */
-(BOOL)getSensitive;

/**
 * -(GtkSettings**)getSettings;
 *
 * @returns GtkSettings*
 */
-(GtkSettings*)getSettings;

/**
 * -(void*)getSizeRequestWithWidth:(gint*) width andHeight:(gint*) height;
 *
 * @param width
 * @param height
 */
-(void)getSizeRequestWithWidth:(gint*) width andHeight:(gint*) height;

/**
 * -(GtkStateType*)getState;
 *
 * @returns GtkStateType
 */
-(GtkStateType)getState;

/**
 * -(GtkStateFlags*)getStateFlags;
 *
 * @returns GtkStateFlags
 */
-(GtkStateFlags)getStateFlags;

/**
 * -(GtkStyle**)getStyle;
 *
 * @returns GtkStyle*
 */
-(GtkStyle*)getStyle;

/**
 * -(GtkStyleContext**)getStyleContext;
 *
 * @returns GtkStyleContext*
 */
-(GtkStyleContext*)getStyleContext;

/**
 * -(BOOL*)getSupportMultidevice;
 *
 * @returns BOOL
 */
-(BOOL)getSupportMultidevice;

/**
 * -(GObject**)getTemplateChildWithWidgetType:(GType) widgetType andName:(NSString*) name;
 *
 * @param widgetType
 * @param name
 * @returns GObject*
 */
-(GObject*)getTemplateChildWithWidgetType:(GType) widgetType andName:(NSString*) name;

/**
 * -(NSString**)getTooltipMarkup;
 *
 * @returns NSString*
 */
-(NSString*)getTooltipMarkup;

/**
 * -(NSString**)getTooltipText;
 *
 * @returns NSString*
 */
-(NSString*)getTooltipText;

/**
 * -(GtkWindow**)getTooltipWindow;
 *
 * @returns GtkWindow*
 */
-(GtkWindow*)getTooltipWindow;

/**
 * -(CGTKWidget**)getToplevel;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getToplevel;

/**
 * -(GtkAlign*)getValign;
 *
 * @returns GtkAlign
 */
-(GtkAlign)getValign;

/**
 * -(GtkAlign*)getValignWithBaseline;
 *
 * @returns GtkAlign
 */
-(GtkAlign)getValignWithBaseline;

/**
 * -(BOOL*)getVexpand;
 *
 * @returns BOOL
 */
-(BOOL)getVexpand;

/**
 * -(BOOL*)getVexpandSet;
 *
 * @returns BOOL
 */
-(BOOL)getVexpandSet;

/**
 * -(BOOL*)getVisible;
 *
 * @returns BOOL
 */
-(BOOL)getVisible;

/**
 * -(GdkVisual**)getVisual;
 *
 * @returns GdkVisual*
 */
-(GdkVisual*)getVisual;

/**
 * -(GdkWindow**)getWindow;
 *
 * @returns GdkWindow*
 */
-(GdkWindow*)getWindow;

/**
 * -(void*)gtkGrabAdd;
 *
 */
-(void)gtkGrabAdd;

/**
 * -(void*)grabDefault;
 *
 */
-(void)grabDefault;

/**
 * -(void*)grabFocus;
 *
 */
-(void)grabFocus;

/**
 * -(void*)gtkGrabRemove;
 *
 */
-(void)gtkGrabRemove;

/**
 * -(BOOL*)hasDefault;
 *
 * @returns BOOL
 */
-(BOOL)hasDefault;

/**
 * -(BOOL*)hasFocus;
 *
 * @returns BOOL
 */
-(BOOL)hasFocus;

/**
 * -(BOOL*)hasGrab;
 *
 * @returns BOOL
 */
-(BOOL)hasGrab;

/**
 * -(BOOL*)hasRcStyle;
 *
 * @returns BOOL
 */
-(BOOL)hasRcStyle;

/**
 * -(BOOL*)hasScreen;
 *
 * @returns BOOL
 */
-(BOOL)hasScreen;

/**
 * -(BOOL*)hasVisibleFocus;
 *
 * @returns BOOL
 */
-(BOOL)hasVisibleFocus;

/**
 * -(void*)hide;
 *
 */
-(void)hide;

/**
 * -(BOOL*)hideOnDelete;
 *
 * @returns BOOL
 */
-(BOOL)hideOnDelete;

/**
 * -(BOOL*)inDestruction;
 *
 * @returns BOOL
 */
-(BOOL)inDestruction;

/**
 * -(void*)initTemplate;
 *
 */
-(void)initTemplate;

/**
 * -(void*)inputShapeCombineRegion:(cairo_region_t*) region;
 *
 * @param region
 */
-(void)inputShapeCombineRegion:(cairo_region_t*) region;

/**
 * -(void*)insertActionGroupWithName:(NSString*) name andGroup:(GActionGroup*) group;
 *
 * @param name
 * @param group
 */
-(void)insertActionGroupWithName:(NSString*) name andGroup:(GActionGroup*) group;

/**
 * -(BOOL*)intersectWithArea:(const GdkRectangle*) area andIntersection:(GdkRectangle*) intersection;
 *
 * @param area
 * @param intersection
 * @returns BOOL
 */
-(BOOL)intersectWithArea:(const GdkRectangle*) area andIntersection:(GdkRectangle*) intersection;

/**
 * -(BOOL*)isAncestor:(CGTKWidget*) ancestor;
 *
 * @param ancestor
 * @returns BOOL
 */
-(BOOL)isAncestor:(CGTKWidget*) ancestor;

/**
 * -(BOOL*)isComposited;
 *
 * @returns BOOL
 */
-(BOOL)isComposited;

/**
 * -(BOOL*)isDrawable;
 *
 * @returns BOOL
 */
-(BOOL)isDrawable;

/**
 * -(BOOL*)isFocus;
 *
 * @returns BOOL
 */
-(BOOL)isFocus;

/**
 * -(BOOL*)isSensitive;
 *
 * @returns BOOL
 */
-(BOOL)isSensitive;

/**
 * -(BOOL*)isToplevel;
 *
 * @returns BOOL
 */
-(BOOL)isToplevel;

/**
 * -(BOOL*)isVisible;
 *
 * @returns BOOL
 */
-(BOOL)isVisible;

/**
 * -(BOOL*)keynavFailed:(GtkDirectionType) direction;
 *
 * @param direction
 * @returns BOOL
 */
-(BOOL)keynavFailed:(GtkDirectionType) direction;

/**
 * -(GList**)listAccelClosures;
 *
 * @returns GList*
 */
-(GList*)listAccelClosures;

/**
 * -(const gchar***)listActionPrefixes;
 *
 * @returns const gchar**
 */
-(const gchar**)listActionPrefixes;

/**
 * -(GList**)listMnemonicLabels;
 *
 * @returns GList*
 */
-(GList*)listMnemonicLabels;

/**
 * -(void*)map;
 *
 */
-(void)map;

/**
 * -(BOOL*)mnemonicActivate:(BOOL) groupCycling;
 *
 * @param groupCycling
 * @returns BOOL
 */
-(BOOL)mnemonicActivate:(BOOL) groupCycling;

/**
 * -(void*)modifyBaseWithState:(GtkStateType) state andColor:(const GdkColor*) color;
 *
 * @param state
 * @param color
 */
-(void)modifyBaseWithState:(GtkStateType) state andColor:(const GdkColor*) color;

/**
 * -(void*)modifyBgWithState:(GtkStateType) state andColor:(const GdkColor*) color;
 *
 * @param state
 * @param color
 */
-(void)modifyBgWithState:(GtkStateType) state andColor:(const GdkColor*) color;

/**
 * -(void*)modifyCursorWithPrimary:(const GdkColor*) primary andSecondary:(const GdkColor*) secondary;
 *
 * @param primary
 * @param secondary
 */
-(void)modifyCursorWithPrimary:(const GdkColor*) primary andSecondary:(const GdkColor*) secondary;

/**
 * -(void*)modifyFgWithState:(GtkStateType) state andColor:(const GdkColor*) color;
 *
 * @param state
 * @param color
 */
-(void)modifyFgWithState:(GtkStateType) state andColor:(const GdkColor*) color;

/**
 * -(void*)modifyFont:(PangoFontDescription*) fontDesc;
 *
 * @param fontDesc
 */
-(void)modifyFont:(PangoFontDescription*) fontDesc;

/**
 * -(void*)modifyStyle:(GtkRcStyle*) style;
 *
 * @param style
 */
-(void)modifyStyle:(GtkRcStyle*) style;

/**
 * -(void*)modifyTextWithState:(GtkStateType) state andColor:(const GdkColor*) color;
 *
 * @param state
 * @param color
 */
-(void)modifyTextWithState:(GtkStateType) state andColor:(const GdkColor*) color;

/**
 * -(void*)overrideBackgroundColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;
 *
 * @param state
 * @param color
 */
-(void)overrideBackgroundColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;

/**
 * -(void*)overrideColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;
 *
 * @param state
 * @param color
 */
-(void)overrideColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;

/**
 * -(void*)overrideCursorWithCursor:(const GdkRGBA*) cursor andSecondaryCursor:(const GdkRGBA*) secondaryCursor;
 *
 * @param cursor
 * @param secondaryCursor
 */
-(void)overrideCursorWithCursor:(const GdkRGBA*) cursor andSecondaryCursor:(const GdkRGBA*) secondaryCursor;

/**
 * -(void*)overrideFont:(const PangoFontDescription*) fontDesc;
 *
 * @param fontDesc
 */
-(void)overrideFont:(const PangoFontDescription*) fontDesc;

/**
 * -(void*)overrideSymbolicColorWithName:(NSString*) name andColor:(const GdkRGBA*) color;
 *
 * @param name
 * @param color
 */
-(void)overrideSymbolicColorWithName:(NSString*) name andColor:(const GdkRGBA*) color;

/**
 * -(void*)pathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;
 *
 * @param pathLength
 * @param path
 * @param pathReversed
 */
-(void)pathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;

/**
 * -(void*)queueComputeExpand;
 *
 */
-(void)queueComputeExpand;

/**
 * -(void*)queueDraw;
 *
 */
-(void)queueDraw;

/**
 * -(void*)queueDrawAreaWithX:(gint) x andY:(gint) y andWidth:(gint) width andHeight:(gint) height;
 *
 * @param x
 * @param y
 * @param width
 * @param height
 */
-(void)queueDrawAreaWithX:(gint) x andY:(gint) y andWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)queueDrawRegion:(const cairo_region_t*) region;
 *
 * @param region
 */
-(void)queueDrawRegion:(const cairo_region_t*) region;

/**
 * -(void*)queueResize;
 *
 */
-(void)queueResize;

/**
 * -(void*)queueResizeNoRedraw;
 *
 */
-(void)queueResizeNoRedraw;

/**
 * -(void*)realize;
 *
 */
-(void)realize;

/**
 * -(cairo_region_t**)regionIntersect:(const cairo_region_t*) region;
 *
 * @param region
 * @returns cairo_region_t*
 */
-(cairo_region_t*)regionIntersect:(const cairo_region_t*) region;

/**
 * -(void*)registerWindow:(GdkWindow*) window;
 *
 * @param window
 */
-(void)registerWindow:(GdkWindow*) window;

/**
 * -(BOOL*)removeAcceleratorWithAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods;
 *
 * @param accelGroup
 * @param accelKey
 * @param accelMods
 * @returns BOOL
 */
-(BOOL)removeAcceleratorWithAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods;

/**
 * -(void*)removeMnemonicLabel:(CGTKWidget*) label;
 *
 * @param label
 */
-(void)removeMnemonicLabel:(CGTKWidget*) label;

/**
 * -(void*)removeTickCallback:(guint) id;
 *
 * @param id
 */
-(void)removeTickCallback:(guint) id;

/**
 * -(GdkPixbuf**)renderIconWithStockId:(NSString*) stockId andSize:(GtkIconSize) size andDetail:(NSString*) detail;
 *
 * @param stockId
 * @param size
 * @param detail
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)renderIconWithStockId:(NSString*) stockId andSize:(GtkIconSize) size andDetail:(NSString*) detail;

/**
 * -(GdkPixbuf**)renderIconPixbufWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
 *
 * @param stockId
 * @param size
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)renderIconPixbufWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;

/**
 * -(void*)reparent:(CGTKWidget*) newParent;
 *
 * @param newParent
 */
-(void)reparent:(CGTKWidget*) newParent;

/**
 * -(void*)resetRcStyles;
 *
 */
-(void)resetRcStyles;

/**
 * -(void*)resetStyle;
 *
 */
-(void)resetStyle;

/**
 * -(gint*)sendExpose:(GdkEvent*) event;
 *
 * @param event
 * @returns gint
 */
-(gint)sendExpose:(GdkEvent*) event;

/**
 * -(BOOL*)sendFocusChange:(GdkEvent*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)sendFocusChange:(GdkEvent*) event;

/**
 * -(void*)setAccelPathWithAccelPath:(NSString*) accelPath andAccelGroup:(GtkAccelGroup*) accelGroup;
 *
 * @param accelPath
 * @param accelGroup
 */
-(void)setAccelPathWithAccelPath:(NSString*) accelPath andAccelGroup:(GtkAccelGroup*) accelGroup;

/**
 * -(void*)setAllocation:(const GtkAllocation*) allocation;
 *
 * @param allocation
 */
-(void)setAllocation:(const GtkAllocation*) allocation;

/**
 * -(void*)setAppPaintable:(BOOL) appPaintable;
 *
 * @param appPaintable
 */
-(void)setAppPaintable:(BOOL) appPaintable;

/**
 * -(void*)setCanDefault:(BOOL) canDefault;
 *
 * @param canDefault
 */
-(void)setCanDefault:(BOOL) canDefault;

/**
 * -(void*)setCanFocus:(BOOL) canFocus;
 *
 * @param canFocus
 */
-(void)setCanFocus:(BOOL) canFocus;

/**
 * -(void*)setChildVisible:(BOOL) isVisible;
 *
 * @param isVisible
 */
-(void)setChildVisible:(BOOL) isVisible;

/**
 * -(void*)setClip:(const GtkAllocation*) clip;
 *
 * @param clip
 */
-(void)setClip:(const GtkAllocation*) clip;

/**
 * -(void*)setCompositeName:(NSString*) name;
 *
 * @param name
 */
-(void)setCompositeName:(NSString*) name;

/**
 * -(void*)setDeviceEnabledWithDevice:(GdkDevice*) device andEnabled:(BOOL) enabled;
 *
 * @param device
 * @param enabled
 */
-(void)setDeviceEnabledWithDevice:(GdkDevice*) device andEnabled:(BOOL) enabled;

/**
 * -(void*)setDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;
 *
 * @param device
 * @param events
 */
-(void)setDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;

/**
 * -(void*)setDirection:(GtkTextDirection) dir;
 *
 * @param dir
 */
-(void)setDirection:(GtkTextDirection) dir;

/**
 * -(void*)setDoubleBuffered:(BOOL) doubleBuffered;
 *
 * @param doubleBuffered
 */
-(void)setDoubleBuffered:(BOOL) doubleBuffered;

/**
 * -(void*)setEvents:(gint) events;
 *
 * @param events
 */
-(void)setEvents:(gint) events;

/**
 * -(void*)setFontMap:(PangoFontMap*) fontMap;
 *
 * @param fontMap
 */
-(void)setFontMap:(PangoFontMap*) fontMap;

/**
 * -(void*)setFontOptions:(const cairo_font_options_t*) options;
 *
 * @param options
 */
-(void)setFontOptions:(const cairo_font_options_t*) options;

/**
 * -(void*)setHalign:(GtkAlign) align;
 *
 * @param align
 */
-(void)setHalign:(GtkAlign) align;

/**
 * -(void*)setHasTooltip:(BOOL) hasTooltip;
 *
 * @param hasTooltip
 */
-(void)setHasTooltip:(BOOL) hasTooltip;

/**
 * -(void*)setHasWindow:(BOOL) hasWindow;
 *
 * @param hasWindow
 */
-(void)setHasWindow:(BOOL) hasWindow;

/**
 * -(void*)setHexpand:(BOOL) expand;
 *
 * @param expand
 */
-(void)setHexpand:(BOOL) expand;

/**
 * -(void*)setHexpandSet:(BOOL) set;
 *
 * @param set
 */
-(void)setHexpandSet:(BOOL) set;

/**
 * -(void*)setMapped:(BOOL) mapped;
 *
 * @param mapped
 */
-(void)setMapped:(BOOL) mapped;

/**
 * -(void*)setMarginBottom:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginBottom:(gint) margin;

/**
 * -(void*)setMarginEnd:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginEnd:(gint) margin;

/**
 * -(void*)setMarginLeft:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginLeft:(gint) margin;

/**
 * -(void*)setMarginRight:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginRight:(gint) margin;

/**
 * -(void*)setMarginStart:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginStart:(gint) margin;

/**
 * -(void*)setMarginTop:(gint) margin;
 *
 * @param margin
 */
-(void)setMarginTop:(gint) margin;

/**
 * -(void*)setName:(NSString*) name;
 *
 * @param name
 */
-(void)setName:(NSString*) name;

/**
 * -(void*)setNoShowAll:(BOOL) noShowAll;
 *
 * @param noShowAll
 */
-(void)setNoShowAll:(BOOL) noShowAll;

/**
 * -(void*)setOpacity:(double) opacity;
 *
 * @param opacity
 */
-(void)setOpacity:(double) opacity;

/**
 * -(void*)setParent:(CGTKWidget*) parent;
 *
 * @param parent
 */
-(void)setParent:(CGTKWidget*) parent;

/**
 * -(void*)setParentWindow:(GdkWindow*) parentWindow;
 *
 * @param parentWindow
 */
-(void)setParentWindow:(GdkWindow*) parentWindow;

/**
 * -(void*)setRealized:(BOOL) realized;
 *
 * @param realized
 */
-(void)setRealized:(BOOL) realized;

/**
 * -(void*)setReceivesDefault:(BOOL) receivesDefault;
 *
 * @param receivesDefault
 */
-(void)setReceivesDefault:(BOOL) receivesDefault;

/**
 * -(void*)setRedrawOnAllocate:(BOOL) redrawOnAllocate;
 *
 * @param redrawOnAllocate
 */
-(void)setRedrawOnAllocate:(BOOL) redrawOnAllocate;

/**
 * -(void*)setSensitive:(BOOL) sensitive;
 *
 * @param sensitive
 */
-(void)setSensitive:(BOOL) sensitive;

/**
 * -(void*)setSizeRequestWithWidth:(gint) width andHeight:(gint) height;
 *
 * @param width
 * @param height
 */
-(void)setSizeRequestWithWidth:(gint) width andHeight:(gint) height;

/**
 * -(void*)setState:(GtkStateType) state;
 *
 * @param state
 */
-(void)setState:(GtkStateType) state;

/**
 * -(void*)setStateFlagsWithFlags:(GtkStateFlags) flags andClear:(BOOL) clear;
 *
 * @param flags
 * @param clear
 */
-(void)setStateFlagsWithFlags:(GtkStateFlags) flags andClear:(BOOL) clear;

/**
 * -(void*)setStyle:(GtkStyle*) style;
 *
 * @param style
 */
-(void)setStyle:(GtkStyle*) style;

/**
 * -(void*)setSupportMultidevice:(BOOL) supportMultidevice;
 *
 * @param supportMultidevice
 */
-(void)setSupportMultidevice:(BOOL) supportMultidevice;

/**
 * -(void*)setTooltipMarkup:(NSString*) markup;
 *
 * @param markup
 */
-(void)setTooltipMarkup:(NSString*) markup;

/**
 * -(void*)setTooltipText:(NSString*) text;
 *
 * @param text
 */
-(void)setTooltipText:(NSString*) text;

/**
 * -(void*)setTooltipWindow:(GtkWindow*) customWindow;
 *
 * @param customWindow
 */
-(void)setTooltipWindow:(GtkWindow*) customWindow;

/**
 * -(void*)setValign:(GtkAlign) align;
 *
 * @param align
 */
-(void)setValign:(GtkAlign) align;

/**
 * -(void*)setVexpand:(BOOL) expand;
 *
 * @param expand
 */
-(void)setVexpand:(BOOL) expand;

/**
 * -(void*)setVexpandSet:(BOOL) set;
 *
 * @param set
 */
-(void)setVexpandSet:(BOOL) set;

/**
 * -(void*)setVisible:(BOOL) visible;
 *
 * @param visible
 */
-(void)setVisible:(BOOL) visible;

/**
 * -(void*)setVisual:(GdkVisual*) visual;
 *
 * @param visual
 */
-(void)setVisual:(GdkVisual*) visual;

/**
 * -(void*)setWindow:(GdkWindow*) window;
 *
 * @param window
 */
-(void)setWindow:(GdkWindow*) window;

/**
 * -(void*)shapeCombineRegion:(cairo_region_t*) region;
 *
 * @param region
 */
-(void)shapeCombineRegion:(cairo_region_t*) region;

/**
 * -(void*)show;
 *
 */
-(void)show;

/**
 * -(void*)showAll;
 *
 */
-(void)showAll;

/**
 * -(void*)showNow;
 *
 */
-(void)showNow;

/**
 * -(void*)sizeAllocate:(GtkAllocation*) allocation;
 *
 * @param allocation
 */
-(void)sizeAllocate:(GtkAllocation*) allocation;

/**
 * -(void*)sizeAllocateWithBaselineWithAllocation:(GtkAllocation*) allocation andBaseline:(gint) baseline;
 *
 * @param allocation
 * @param baseline
 */
-(void)sizeAllocateWithBaselineWithAllocation:(GtkAllocation*) allocation andBaseline:(gint) baseline;

/**
 * -(void*)sizeRequest:(GtkRequisition*) requisition;
 *
 * @param requisition
 */
-(void)sizeRequest:(GtkRequisition*) requisition;

/**
 * -(void*)styleAttach;
 *
 */
-(void)styleAttach;

/**
 * -(void*)styleGetPropertyWithPropertyName:(NSString*) propertyName andValue:(GValue*) value;
 *
 * @param propertyName
 * @param value
 */
-(void)styleGetPropertyWithPropertyName:(NSString*) propertyName andValue:(GValue*) value;

/**
 * -(void*)styleGetValistWithFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
 *
 * @param firstPropertyName
 * @param varArgs
 */
-(void)styleGetValistWithFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;

/**
 * -(void*)thawChildNotify;
 *
 */
-(void)thawChildNotify;

/**
 * -(BOOL*)translateCoordinatesWithDestWidget:(CGTKWidget*) destWidget andSrcX:(gint) srcX andSrcY:(gint) srcY andDestX:(gint*) destX andDestY:(gint*) destY;
 *
 * @param destWidget
 * @param srcX
 * @param srcY
 * @param destX
 * @param destY
 * @returns BOOL
 */
-(BOOL)translateCoordinatesWithDestWidget:(CGTKWidget*) destWidget andSrcX:(gint) srcX andSrcY:(gint) srcY andDestX:(gint*) destX andDestY:(gint*) destY;

/**
 * -(void*)triggerTooltipQuery;
 *
 */
-(void)triggerTooltipQuery;

/**
 * -(void*)unmap;
 *
 */
-(void)unmap;

/**
 * -(void*)unparent;
 *
 */
-(void)unparent;

/**
 * -(void*)unrealize;
 *
 */
-(void)unrealize;

/**
 * -(void*)unregisterWindow:(GdkWindow*) window;
 *
 * @param window
 */
-(void)unregisterWindow:(GdkWindow*) window;

/**
 * -(void*)unsetStateFlags:(GtkStateFlags) flags;
 *
 * @param flags
 */
-(void)unsetStateFlags:(GtkStateFlags) flags;

@end
