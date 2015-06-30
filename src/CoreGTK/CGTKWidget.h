/*
 * CGTKWidget.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
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
-(BOOL)activate;
-(void)addAcceleratorWithAccelSignal:(NSString*) accelSignal andAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods andAccelFlags:(GtkAccelFlags) accelFlags;
-(void)addDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;
-(void)addEvents:(gint) events;
-(void)addMnemonicLabel:(CGTKWidget*) label;
-(guint)addTickCallbackWithCallback:(GtkTickCallback) callback andUserData:(gpointer) userData andNotify:(GDestroyNotify) notify;
-(BOOL)canActivateAccel:(guint) signalId;
-(BOOL)childFocus:(GtkDirectionType) direction;
-(void)childNotify:(NSString*) childProperty;
-(void)classPathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;
-(BOOL)computeExpand:(GtkOrientation) orientation;
-(PangoContext*)createPangoContext;
-(PangoLayout*)createPangoLayout:(NSString*) text;
-(void)destroy;
-(void)destroyed:(GtkWidget**) widgetPointer;
-(BOOL)deviceIsShadowed:(GdkDevice*) device;
-(GdkDragContext*)gtkDragBeginWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event;
-(GdkDragContext*)gtkDragBeginWithCoordinatesWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event andX:(gint) x andY:(gint) y;
-(BOOL)gtkDragCheckThresholdWithStartX:(gint) startX andStartY:(gint) startY andCurrentX:(gint) currentX andCurrentY:(gint) currentY;
-(void)gtkDragDestAddImageTargets;
-(void)gtkDragDestAddTextTargets;
-(void)gtkDragDestAddUriTargets;
-(GdkAtom)gtkDragDestFindTargetWithContext:(GdkDragContext*) context andTargetList:(GtkTargetList*) targetList;
-(GtkTargetList*)gtkDragDestGetTargetList;
-(BOOL)gtkDragDestGetTrackMotion;
-(void)gtkDragDestSetWithFlags:(GtkDestDefaults) flags andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(void)gtkDragDestSetProxyWithProxyWindow:(GdkWindow*) proxyWindow andProtocol:(GdkDragProtocol) protocol andUseCoordinates:(BOOL) useCoordinates;
-(void)gtkDragDestSetTargetList:(GtkTargetList*) targetList;
-(void)gtkDragDestSetTrackMotion:(BOOL) trackMotion;
-(void)gtkDragDestUnset;
-(void)gtkDragGetDataWithContext:(GdkDragContext*) context andTarget:(GdkAtom) target andTime:(guint32) time;
-(void)gtkDragHighlight;
-(void)gtkDragSourceAddImageTargets;
-(void)gtkDragSourceAddTextTargets;
-(void)gtkDragSourceAddUriTargets;
-(GtkTargetList*)gtkDragSourceGetTargetList;
-(void)gtkDragSourceSetWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions;
-(void)gtkDragSourceSetIconGicon:(GIcon*) icon;
-(void)gtkDragSourceSetIconName:(NSString*) iconName;
-(void)gtkDragSourceSetIconPixbuf:(GdkPixbuf*) pixbuf;
-(void)gtkDragSourceSetIconStock:(NSString*) stockId;
-(void)gtkDragSourceSetTargetList:(GtkTargetList*) targetList;
-(void)gtkDragSourceUnset;
-(void)gtkDragUnhighlight;
-(void)draw:(cairo_t*) cr;
-(void)ensureStyle;
-(void)errorBell;
-(BOOL)event:(GdkEvent*) event;
-(void)freezeChildNotify;
-(AtkObject*)getAccessible;
-(int)getAllocatedBaseline;
-(int)getAllocatedHeight;
-(int)getAllocatedWidth;
-(void)getAllocation:(GtkAllocation*) allocation;
-(CGTKWidget*)getAncestor:(GType) widgetType;
-(BOOL)getAppPaintable;
-(BOOL)getCanDefault;
-(BOOL)getCanFocus;
-(void)getChildRequisition:(GtkRequisition*) requisition;
-(BOOL)getChildVisible;
-(GtkClipboard*)getClipboard:(GdkAtom) selection;
-(NSString*)getCompositeName;
-(BOOL)getDeviceEnabled:(GdkDevice*) device;
-(GdkEventMask)getDeviceEvents:(GdkDevice*) device;
-(GtkTextDirection)getDirection;
-(GdkDisplay*)getDisplay;
-(BOOL)getDoubleBuffered;
-(gint)getEvents;
-(GdkFrameClock*)getFrameClock;
-(GtkAlign)getHalign;
-(BOOL)getHasTooltip;
-(BOOL)getHasWindow;
-(BOOL)getHexpand;
-(BOOL)getHexpandSet;
-(BOOL)getMapped;
-(gint)getMarginBottom;
-(gint)getMarginLeft;
-(gint)getMarginRight;
-(gint)getMarginTop;
-(GdkModifierType)getModifierMask:(GdkModifierIntent) intent;
-(GtkRcStyle*)getModifierStyle;
-(NSString*)getName;
-(BOOL)getNoShowAll;
-(double)getOpacity;
-(PangoContext*)getPangoContext;
-(CGTKWidget*)getParent;
-(GdkWindow*)getParentWindow;
-(GtkWidgetPath*)getPath;
-(void)getPointerWithX:(gint*) x andY:(gint*) y;
-(void)getPreferredHeightWithMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;
-(void)getPreferredHeightAndBaselineForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight andMinimumBaseline:(gint*) minimumBaseline andNaturalBaseline:(gint*) naturalBaseline;
-(void)getPreferredHeightForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight;
-(void)getPreferredSizeWithMinimumSize:(GtkRequisition*) minimumSize andNaturalSize:(GtkRequisition*) naturalSize;
-(void)getPreferredWidthWithMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;
-(void)getPreferredWidthForHeightWithHeight:(gint) height andMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth;
-(BOOL)getRealized;
-(BOOL)getReceivesDefault;
-(GtkSizeRequestMode)getRequestMode;
-(void)getRequisition:(GtkRequisition*) requisition;
-(GdkWindow*)getRootWindow;
-(gint)getScaleFactor;
-(GdkScreen*)getScreen;
-(BOOL)getSensitive;
-(GtkSettings*)getSettings;
-(void)getSizeRequestWithWidth:(gint*) width andHeight:(gint*) height;
-(GtkStateType)getState;
-(GtkStateFlags)getStateFlags;
-(GtkStyle*)getStyle;
-(GtkStyleContext*)getStyleContext;
-(BOOL)getSupportMultidevice;
-(GObject*)getTemplateChildWithWidgetType:(GType) widgetType andName:(NSString*) name;
-(NSString*)getTooltipMarkup;
-(NSString*)getTooltipText;
-(GtkWindow*)getTooltipWindow;
-(CGTKWidget*)getToplevel;
-(GtkAlign)getValign;
-(GtkAlign)getValignWithBaseline;
-(BOOL)getVexpand;
-(BOOL)getVexpandSet;
-(BOOL)getVisible;
-(GdkVisual*)getVisual;
-(GdkWindow*)getWindow;
-(void)gtkGrabAdd;
-(void)grabDefault;
-(void)grabFocus;
-(void)gtkGrabRemove;
-(BOOL)hasDefault;
-(BOOL)hasFocus;
-(BOOL)hasGrab;
-(BOOL)hasRcStyle;
-(BOOL)hasScreen;
-(BOOL)hasVisibleFocus;
-(void)hide;
-(BOOL)hideOnDelete;
-(BOOL)inDestruction;
-(void)initTemplate;
-(void)inputShapeCombineRegion:(cairo_region_t*) region;
-(void)insertActionGroupWithName:(NSString*) name andGroup:(GActionGroup*) group;
-(BOOL)intersectWithArea:(const GdkRectangle*) area andIntersection:(GdkRectangle*) intersection;
-(BOOL)isAncestor:(CGTKWidget*) ancestor;
-(BOOL)isComposited;
-(BOOL)isDrawable;
-(BOOL)isFocus;
-(BOOL)isSensitive;
-(BOOL)isToplevel;
-(BOOL)isVisible;
-(BOOL)keynavFailed:(GtkDirectionType) direction;
-(GList*)listAccelClosures;
-(GList*)listMnemonicLabels;
-(void)map;
-(BOOL)mnemonicActivate:(BOOL) groupCycling;
-(void)modifyBaseWithState:(GtkStateType) state andColor:(const GdkColor*) color;
-(void)modifyBgWithState:(GtkStateType) state andColor:(const GdkColor*) color;
-(void)modifyCursorWithPrimary:(const GdkColor*) primary andSecondary:(const GdkColor*) secondary;
-(void)modifyFgWithState:(GtkStateType) state andColor:(const GdkColor*) color;
-(void)modifyFont:(PangoFontDescription*) fontDesc;
-(void)modifyStyle:(GtkRcStyle*) style;
-(void)modifyTextWithState:(GtkStateType) state andColor:(const GdkColor*) color;
-(void)overrideBackgroundColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;
-(void)overrideColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color;
-(void)overrideCursorWithCursor:(const GdkRGBA*) cursor andSecondaryCursor:(const GdkRGBA*) secondaryCursor;
-(void)overrideFont:(const PangoFontDescription*) fontDesc;
-(void)overrideSymbolicColorWithName:(NSString*) name andColor:(const GdkRGBA*) color;
-(void)pathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed;
-(void)queueComputeExpand;
-(void)queueDraw;
-(void)queueDrawAreaWithX:(gint) x andY:(gint) y andWidth:(gint) width andHeight:(gint) height;
-(void)queueDrawRegion:(const cairo_region_t*) region;
-(void)queueResize;
-(void)queueResizeNoRedraw;
-(void)realize;
-(cairo_region_t*)regionIntersect:(const cairo_region_t*) region;
-(void)registerWindow:(GdkWindow*) window;
-(BOOL)removeAcceleratorWithAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods;
-(void)removeMnemonicLabel:(CGTKWidget*) label;
-(void)removeTickCallback:(guint) id;
-(GdkPixbuf*)renderIconWithStockId:(NSString*) stockId andSize:(GtkIconSize) size andDetail:(NSString*) detail;
-(GdkPixbuf*)renderIconPixbufWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
-(void)reparent:(CGTKWidget*) newParent;
-(void)resetRcStyles;
-(void)resetStyle;
-(gint)sendExpose:(GdkEvent*) event;
-(BOOL)sendFocusChange:(GdkEvent*) event;
-(void)setAccelPathWithAccelPath:(NSString*) accelPath andAccelGroup:(GtkAccelGroup*) accelGroup;
-(void)setAllocation:(const GtkAllocation*) allocation;
-(void)setAppPaintable:(BOOL) appPaintable;
-(void)setCanDefault:(BOOL) canDefault;
-(void)setCanFocus:(BOOL) canFocus;
-(void)setChildVisible:(BOOL) isVisible;
-(void)setCompositeName:(NSString*) name;
-(void)setDeviceEnabledWithDevice:(GdkDevice*) device andEnabled:(BOOL) enabled;
-(void)setDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events;
-(void)setDirection:(GtkTextDirection) dir;
-(void)setDoubleBuffered:(BOOL) doubleBuffered;
-(void)setEvents:(gint) events;
-(void)setHalign:(GtkAlign) align;
-(void)setHasTooltip:(BOOL) hasTooltip;
-(void)setHasWindow:(BOOL) hasWindow;
-(void)setHexpand:(BOOL) expand;
-(void)setHexpandSet:(BOOL) set;
-(void)setMapped:(BOOL) mapped;
-(void)setMarginBottom:(gint) margin;
-(void)setMarginLeft:(gint) margin;
-(void)setMarginRight:(gint) margin;
-(void)setMarginTop:(gint) margin;
-(void)setName:(NSString*) name;
-(void)setNoShowAll:(BOOL) noShowAll;
-(void)setOpacity:(double) opacity;
-(void)setParent:(CGTKWidget*) parent;
-(void)setParentWindow:(GdkWindow*) parentWindow;
-(void)setRealized:(BOOL) realized;
-(void)setReceivesDefault:(BOOL) receivesDefault;
-(void)setRedrawOnAllocate:(BOOL) redrawOnAllocate;
-(void)setSensitive:(BOOL) sensitive;
-(void)setSizeRequestWithWidth:(gint) width andHeight:(gint) height;
-(void)setState:(GtkStateType) state;
-(void)setStateFlagsWithFlags:(GtkStateFlags) flags andClear:(BOOL) clear;
-(void)setStyle:(GtkStyle*) style;
-(void)setSupportMultidevice:(BOOL) supportMultidevice;
-(void)setTooltipMarkup:(NSString*) markup;
-(void)setTooltipText:(NSString*) text;
-(void)setTooltipWindow:(GtkWindow*) customWindow;
-(void)setValign:(GtkAlign) align;
-(void)setVexpand:(BOOL) expand;
-(void)setVexpandSet:(BOOL) set;
-(void)setVisible:(BOOL) visible;
-(void)setVisual:(GdkVisual*) visual;
-(void)setWindow:(GdkWindow*) window;
-(void)shapeCombineRegion:(cairo_region_t*) region;
-(void)show;
-(void)showAll;
-(void)showNow;
-(void)sizeAllocate:(GtkAllocation*) allocation;
-(void)sizeAllocateWithBaselineWithAllocation:(GtkAllocation*) allocation andBaseline:(gint) baseline;
-(void)sizeRequest:(GtkRequisition*) requisition;
-(void)styleAttach;
-(void)styleGetPropertyWithPropertyName:(NSString*) propertyName andValue:(GValue*) value;
-(void)styleGetValistWithFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs;
-(void)thawChildNotify;
-(BOOL)translateCoordinatesWithDestWidget:(CGTKWidget*) destWidget andSrcX:(gint) srcX andSrcY:(gint) srcY andDestX:(gint*) destX andDestY:(gint*) destY;
-(void)triggerTooltipQuery;
-(void)unmap;
-(void)unparent;
-(void)unrealize;
-(void)unregisterWindow:(GdkWindow*) window;
-(void)unsetStateFlags:(GtkStateFlags) flags;

@end