
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWidget.h"

@implementation CGTKWidget

+(GtkTextDirection)getDefaultDirection
{
	return gtk_widget_get_default_direction();
}

+(GtkStyle*)getDefaultStyle
{
	return gtk_widget_get_default_style();
}

+(void)popCompositeChild
{
	gtk_widget_pop_composite_child();
}

+(void)pushCompositeChild
{
	gtk_widget_push_composite_child();
}

+(void)setDefaultDirection:(GtkTextDirection) dir
{
	gtk_widget_set_default_direction(dir);
}

-(GtkWidget*)WIDGET
{
	return GTK_WIDGET([self GOBJECT]);
}

-(BOOL)activate
{
	return (gtk_widget_activate(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)addAcceleratorWithAccelSignal:(NSString*) accelSignal andAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods andAccelFlags:(GtkAccelFlags) accelFlags
{
	gtk_widget_add_accelerator(GTK_WIDGET([self GOBJECT]), [accelSignal UTF8String], accelGroup, accelKey, accelMods, accelFlags);
}

-(void)addDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events
{
	gtk_widget_add_device_events(GTK_WIDGET([self GOBJECT]), device, events);
}

-(void)addEvents:(gint) events
{
	gtk_widget_add_events(GTK_WIDGET([self GOBJECT]), events);
}

-(void)addMnemonicLabel:(CGTKWidget*) label
{
	gtk_widget_add_mnemonic_label(GTK_WIDGET([self GOBJECT]), [label WIDGET]);
}

-(guint)addTickCallbackWithCallback:(GtkTickCallback) callback andUserData:(gpointer) userData andNotify:(GDestroyNotify) notify
{
	return gtk_widget_add_tick_callback(GTK_WIDGET([self GOBJECT]), callback, userData, notify);
}

-(BOOL)canActivateAccel:(guint) signalId
{
	return (gtk_widget_can_activate_accel(GTK_WIDGET([self GOBJECT]), signalId) ? YES : NO);
}

-(BOOL)childFocus:(GtkDirectionType) direction
{
	return (gtk_widget_child_focus(GTK_WIDGET([self GOBJECT]), direction) ? YES : NO);
}

-(void)childNotify:(NSString*) childProperty
{
	gtk_widget_child_notify(GTK_WIDGET([self GOBJECT]), [childProperty UTF8String]);
}

-(void)classPathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed
{
	gtk_widget_class_path(GTK_WIDGET([self GOBJECT]), pathLength, path, pathReversed);
}

-(BOOL)computeExpand:(GtkOrientation) orientation
{
	return (gtk_widget_compute_expand(GTK_WIDGET([self GOBJECT]), orientation) ? YES : NO);
}

-(PangoContext*)createPangoContext
{
	return gtk_widget_create_pango_context(GTK_WIDGET([self GOBJECT]));
}

-(PangoLayout*)createPangoLayout:(NSString*) text
{
	return gtk_widget_create_pango_layout(GTK_WIDGET([self GOBJECT]), [text UTF8String]);
}

-(void)destroy
{
	gtk_widget_destroy(GTK_WIDGET([self GOBJECT]));
}

-(void)destroyed:(GtkWidget**) widgetPointer
{
	gtk_widget_destroyed(GTK_WIDGET([self GOBJECT]), widgetPointer);
}

-(BOOL)deviceIsShadowed:(GdkDevice*) device
{
	return (gtk_widget_device_is_shadowed(GTK_WIDGET([self GOBJECT]), device) ? YES : NO);
}

-(GdkDragContext*)gtkDragBeginWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event
{
	return gtk_drag_begin(GTK_WIDGET([self GOBJECT]), targets, actions, button, event);
}

-(GdkDragContext*)gtkDragBeginWithCoordinatesWithTargets:(GtkTargetList*) targets andActions:(GdkDragAction) actions andButton:(gint) button andEvent:(GdkEvent*) event andX:(gint) x andY:(gint) y
{
	return gtk_drag_begin_with_coordinates(GTK_WIDGET([self GOBJECT]), targets, actions, button, event, x, y);
}

-(BOOL)gtkDragCheckThresholdWithStartX:(gint) startX andStartY:(gint) startY andCurrentX:(gint) currentX andCurrentY:(gint) currentY
{
	return (gtk_drag_check_threshold(GTK_WIDGET([self GOBJECT]), startX, startY, currentX, currentY) ? YES : NO);
}

-(void)gtkDragDestAddImageTargets
{
	gtk_drag_dest_add_image_targets(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragDestAddTextTargets
{
	gtk_drag_dest_add_text_targets(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragDestAddUriTargets
{
	gtk_drag_dest_add_uri_targets(GTK_WIDGET([self GOBJECT]));
}

-(GdkAtom)gtkDragDestFindTargetWithContext:(GdkDragContext*) context andTargetList:(GtkTargetList*) targetList
{
	return gtk_drag_dest_find_target(GTK_WIDGET([self GOBJECT]), context, targetList);
}

-(GtkTargetList*)gtkDragDestGetTargetList
{
	return gtk_drag_dest_get_target_list(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)gtkDragDestGetTrackMotion
{
	return (gtk_drag_dest_get_track_motion(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)gtkDragDestSetWithFlags:(GtkDestDefaults) flags andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_drag_dest_set(GTK_WIDGET([self GOBJECT]), flags, targets, ntargets, actions);
}

-(void)gtkDragDestSetProxyWithProxyWindow:(GdkWindow*) proxyWindow andProtocol:(GdkDragProtocol) protocol andUseCoordinates:(BOOL) useCoordinates
{
	gtk_drag_dest_set_proxy(GTK_WIDGET([self GOBJECT]), proxyWindow, protocol, (useCoordinates ? TRUE : FALSE));
}

-(void)gtkDragDestSetTargetList:(GtkTargetList*) targetList
{
	gtk_drag_dest_set_target_list(GTK_WIDGET([self GOBJECT]), targetList);
}

-(void)gtkDragDestSetTrackMotion:(BOOL) trackMotion
{
	gtk_drag_dest_set_track_motion(GTK_WIDGET([self GOBJECT]), (trackMotion ? TRUE : FALSE));
}

-(void)gtkDragDestUnset
{
	gtk_drag_dest_unset(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragGetDataWithContext:(GdkDragContext*) context andTarget:(GdkAtom) target andTime:(guint32) time
{
	gtk_drag_get_data(GTK_WIDGET([self GOBJECT]), context, target, time);
}

-(void)gtkDragHighlight
{
	gtk_drag_highlight(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragSourceAddImageTargets
{
	gtk_drag_source_add_image_targets(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragSourceAddTextTargets
{
	gtk_drag_source_add_text_targets(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragSourceAddUriTargets
{
	gtk_drag_source_add_uri_targets(GTK_WIDGET([self GOBJECT]));
}

-(GtkTargetList*)gtkDragSourceGetTargetList
{
	return gtk_drag_source_get_target_list(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragSourceSetWithStartButtonMask:(GdkModifierType) startButtonMask andTargets:(GtkTargetEntry*) targets andNtargets:(gint) ntargets andActions:(GdkDragAction) actions
{
	gtk_drag_source_set(GTK_WIDGET([self GOBJECT]), startButtonMask, targets, ntargets, actions);
}

-(void)gtkDragSourceSetIconGicon:(GIcon*) icon
{
	gtk_drag_source_set_icon_gicon(GTK_WIDGET([self GOBJECT]), icon);
}

-(void)gtkDragSourceSetIconName:(NSString*) iconName
{
	gtk_drag_source_set_icon_name(GTK_WIDGET([self GOBJECT]), [iconName UTF8String]);
}

-(void)gtkDragSourceSetIconPixbuf:(GdkPixbuf*) pixbuf
{
	gtk_drag_source_set_icon_pixbuf(GTK_WIDGET([self GOBJECT]), pixbuf);
}

-(void)gtkDragSourceSetIconStock:(NSString*) stockId
{
	gtk_drag_source_set_icon_stock(GTK_WIDGET([self GOBJECT]), [stockId UTF8String]);
}

-(void)gtkDragSourceSetTargetList:(GtkTargetList*) targetList
{
	gtk_drag_source_set_target_list(GTK_WIDGET([self GOBJECT]), targetList);
}

-(void)gtkDragSourceUnset
{
	gtk_drag_source_unset(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkDragUnhighlight
{
	gtk_drag_unhighlight(GTK_WIDGET([self GOBJECT]));
}

-(void)draw:(cairo_t*) cr
{
	gtk_widget_draw(GTK_WIDGET([self GOBJECT]), cr);
}

-(void)ensureStyle
{
	gtk_widget_ensure_style(GTK_WIDGET([self GOBJECT]));
}

-(void)errorBell
{
	gtk_widget_error_bell(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)event:(GdkEvent*) event
{
	return (gtk_widget_event(GTK_WIDGET([self GOBJECT]), event) ? YES : NO);
}

-(void)freezeChildNotify
{
	gtk_widget_freeze_child_notify(GTK_WIDGET([self GOBJECT]));
}

-(AtkObject*)getAccessible
{
	return gtk_widget_get_accessible(GTK_WIDGET([self GOBJECT]));
}

-(int)getAllocatedBaseline
{
	return gtk_widget_get_allocated_baseline(GTK_WIDGET([self GOBJECT]));
}

-(int)getAllocatedHeight
{
	return gtk_widget_get_allocated_height(GTK_WIDGET([self GOBJECT]));
}

-(int)getAllocatedWidth
{
	return gtk_widget_get_allocated_width(GTK_WIDGET([self GOBJECT]));
}

-(void)getAllocation:(GtkAllocation*) allocation
{
	gtk_widget_get_allocation(GTK_WIDGET([self GOBJECT]), allocation);
}

-(CGTKWidget*)getAncestor:(GType) widgetType
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_widget_get_ancestor(GTK_WIDGET([self GOBJECT]), widgetType)];
}

-(BOOL)getAppPaintable
{
	return (gtk_widget_get_app_paintable(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getCanDefault
{
	return (gtk_widget_get_can_default(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getCanFocus
{
	return (gtk_widget_get_can_focus(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)getChildRequisition:(GtkRequisition*) requisition
{
	gtk_widget_get_child_requisition(GTK_WIDGET([self GOBJECT]), requisition);
}

-(BOOL)getChildVisible
{
	return (gtk_widget_get_child_visible(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(GtkClipboard*)getClipboard:(GdkAtom) selection
{
	return gtk_widget_get_clipboard(GTK_WIDGET([self GOBJECT]), selection);
}

-(NSString*)getCompositeName
{
	return [NSString stringWithUTF8String:gtk_widget_get_composite_name(GTK_WIDGET([self GOBJECT]))];
}

-(BOOL)getDeviceEnabled:(GdkDevice*) device
{
	return (gtk_widget_get_device_enabled(GTK_WIDGET([self GOBJECT]), device) ? YES : NO);
}

-(GdkEventMask)getDeviceEvents:(GdkDevice*) device
{
	return gtk_widget_get_device_events(GTK_WIDGET([self GOBJECT]), device);
}

-(GtkTextDirection)getDirection
{
	return gtk_widget_get_direction(GTK_WIDGET([self GOBJECT]));
}

-(GdkDisplay*)getDisplay
{
	return gtk_widget_get_display(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)getDoubleBuffered
{
	return (gtk_widget_get_double_buffered(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(gint)getEvents
{
	return gtk_widget_get_events(GTK_WIDGET([self GOBJECT]));
}

-(GdkFrameClock*)getFrameClock
{
	return gtk_widget_get_frame_clock(GTK_WIDGET([self GOBJECT]));
}

-(GtkAlign)getHalign
{
	return gtk_widget_get_halign(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)getHasTooltip
{
	return (gtk_widget_get_has_tooltip(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHasWindow
{
	return (gtk_widget_get_has_window(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHexpand
{
	return (gtk_widget_get_hexpand(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getHexpandSet
{
	return (gtk_widget_get_hexpand_set(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getMapped
{
	return (gtk_widget_get_mapped(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(gint)getMarginBottom
{
	return gtk_widget_get_margin_bottom(GTK_WIDGET([self GOBJECT]));
}

-(gint)getMarginLeft
{
	return gtk_widget_get_margin_left(GTK_WIDGET([self GOBJECT]));
}

-(gint)getMarginRight
{
	return gtk_widget_get_margin_right(GTK_WIDGET([self GOBJECT]));
}

-(gint)getMarginTop
{
	return gtk_widget_get_margin_top(GTK_WIDGET([self GOBJECT]));
}

-(GdkModifierType)getModifierMask:(GdkModifierIntent) intent
{
	return gtk_widget_get_modifier_mask(GTK_WIDGET([self GOBJECT]), intent);
}

-(GtkRcStyle*)getModifierStyle
{
	return gtk_widget_get_modifier_style(GTK_WIDGET([self GOBJECT]));
}

-(NSString*)getName
{
	return [NSString stringWithUTF8String:gtk_widget_get_name(GTK_WIDGET([self GOBJECT]))];
}

-(BOOL)getNoShowAll
{
	return (gtk_widget_get_no_show_all(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(double)getOpacity
{
	return gtk_widget_get_opacity(GTK_WIDGET([self GOBJECT]));
}

-(PangoContext*)getPangoContext
{
	return gtk_widget_get_pango_context(GTK_WIDGET([self GOBJECT]));
}

-(CGTKWidget*)getParent
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_widget_get_parent(GTK_WIDGET([self GOBJECT]))];
}

-(GdkWindow*)getParentWindow
{
	return gtk_widget_get_parent_window(GTK_WIDGET([self GOBJECT]));
}

-(GtkWidgetPath*)getPath
{
	return gtk_widget_get_path(GTK_WIDGET([self GOBJECT]));
}

-(void)getPointerWithX:(gint*) x andY:(gint*) y
{
	gtk_widget_get_pointer(GTK_WIDGET([self GOBJECT]), x, y);
}

-(void)getPreferredHeightWithMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight
{
	gtk_widget_get_preferred_height(GTK_WIDGET([self GOBJECT]), minimumHeight, naturalHeight);
}

-(void)getPreferredHeightAndBaselineForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight andMinimumBaseline:(gint*) minimumBaseline andNaturalBaseline:(gint*) naturalBaseline
{
	gtk_widget_get_preferred_height_and_baseline_for_width(GTK_WIDGET([self GOBJECT]), width, minimumHeight, naturalHeight, minimumBaseline, naturalBaseline);
}

-(void)getPreferredHeightForWidthWithWidth:(gint) width andMinimumHeight:(gint*) minimumHeight andNaturalHeight:(gint*) naturalHeight
{
	gtk_widget_get_preferred_height_for_width(GTK_WIDGET([self GOBJECT]), width, minimumHeight, naturalHeight);
}

-(void)getPreferredSizeWithMinimumSize:(GtkRequisition*) minimumSize andNaturalSize:(GtkRequisition*) naturalSize
{
	gtk_widget_get_preferred_size(GTK_WIDGET([self GOBJECT]), minimumSize, naturalSize);
}

-(void)getPreferredWidthWithMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth
{
	gtk_widget_get_preferred_width(GTK_WIDGET([self GOBJECT]), minimumWidth, naturalWidth);
}

-(void)getPreferredWidthForHeightWithHeight:(gint) height andMinimumWidth:(gint*) minimumWidth andNaturalWidth:(gint*) naturalWidth
{
	gtk_widget_get_preferred_width_for_height(GTK_WIDGET([self GOBJECT]), height, minimumWidth, naturalWidth);
}

-(BOOL)getRealized
{
	return (gtk_widget_get_realized(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getReceivesDefault
{
	return (gtk_widget_get_receives_default(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(GtkSizeRequestMode)getRequestMode
{
	return gtk_widget_get_request_mode(GTK_WIDGET([self GOBJECT]));
}

-(void)getRequisition:(GtkRequisition*) requisition
{
	gtk_widget_get_requisition(GTK_WIDGET([self GOBJECT]), requisition);
}

-(GdkWindow*)getRootWindow
{
	return gtk_widget_get_root_window(GTK_WIDGET([self GOBJECT]));
}

-(gint)getScaleFactor
{
	return gtk_widget_get_scale_factor(GTK_WIDGET([self GOBJECT]));
}

-(GdkScreen*)getScreen
{
	return gtk_widget_get_screen(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)getSensitive
{
	return (gtk_widget_get_sensitive(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(GtkSettings*)getSettings
{
	return gtk_widget_get_settings(GTK_WIDGET([self GOBJECT]));
}

-(void)getSizeRequestWithWidth:(gint*) width andHeight:(gint*) height
{
	gtk_widget_get_size_request(GTK_WIDGET([self GOBJECT]), width, height);
}

-(GtkStateType)getState
{
	return gtk_widget_get_state(GTK_WIDGET([self GOBJECT]));
}

-(GtkStateFlags)getStateFlags
{
	return gtk_widget_get_state_flags(GTK_WIDGET([self GOBJECT]));
}

-(GtkStyle*)getStyle
{
	return gtk_widget_get_style(GTK_WIDGET([self GOBJECT]));
}

-(GtkStyleContext*)getStyleContext
{
	return gtk_widget_get_style_context(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)getSupportMultidevice
{
	return (gtk_widget_get_support_multidevice(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(GObject*)getTemplateChildWithWidgetType:(GType) widgetType andName:(NSString*) name
{
	return gtk_widget_get_template_child(GTK_WIDGET([self GOBJECT]), widgetType, [name UTF8String]);
}

-(NSString*)getTooltipMarkup
{
	return [NSString stringWithUTF8String:gtk_widget_get_tooltip_markup(GTK_WIDGET([self GOBJECT]))];
}

-(NSString*)getTooltipText
{
	return [NSString stringWithUTF8String:gtk_widget_get_tooltip_text(GTK_WIDGET([self GOBJECT]))];
}

-(GtkWindow*)getTooltipWindow
{
	return gtk_widget_get_tooltip_window(GTK_WIDGET([self GOBJECT]));
}

-(CGTKWidget*)getToplevel
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_widget_get_toplevel(GTK_WIDGET([self GOBJECT]))];
}

-(GtkAlign)getValign
{
	return gtk_widget_get_valign(GTK_WIDGET([self GOBJECT]));
}

-(GtkAlign)getValignWithBaseline
{
	return gtk_widget_get_valign_with_baseline(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)getVexpand
{
	return (gtk_widget_get_vexpand(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getVexpandSet
{
	return (gtk_widget_get_vexpand_set(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getVisible
{
	return (gtk_widget_get_visible(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(GdkVisual*)getVisual
{
	return gtk_widget_get_visual(GTK_WIDGET([self GOBJECT]));
}

-(GdkWindow*)getWindow
{
	return gtk_widget_get_window(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkGrabAdd
{
	gtk_grab_add(GTK_WIDGET([self GOBJECT]));
}

-(void)grabDefault
{
	gtk_widget_grab_default(GTK_WIDGET([self GOBJECT]));
}

-(void)grabFocus
{
	gtk_widget_grab_focus(GTK_WIDGET([self GOBJECT]));
}

-(void)gtkGrabRemove
{
	gtk_grab_remove(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)hasDefault
{
	return (gtk_widget_has_default(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasFocus
{
	return (gtk_widget_has_focus(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasGrab
{
	return (gtk_widget_has_grab(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasRcStyle
{
	return (gtk_widget_has_rc_style(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasScreen
{
	return (gtk_widget_has_screen(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)hasVisibleFocus
{
	return (gtk_widget_has_visible_focus(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)hide
{
	gtk_widget_hide(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)hideOnDelete
{
	return (gtk_widget_hide_on_delete(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)inDestruction
{
	return (gtk_widget_in_destruction(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)initTemplate
{
	gtk_widget_init_template(GTK_WIDGET([self GOBJECT]));
}

-(void)inputShapeCombineRegion:(cairo_region_t*) region
{
	gtk_widget_input_shape_combine_region(GTK_WIDGET([self GOBJECT]), region);
}

-(void)insertActionGroupWithName:(NSString*) name andGroup:(GActionGroup*) group
{
	gtk_widget_insert_action_group(GTK_WIDGET([self GOBJECT]), [name UTF8String], group);
}

-(BOOL)intersectWithArea:(const GdkRectangle*) area andIntersection:(GdkRectangle*) intersection
{
	return (gtk_widget_intersect(GTK_WIDGET([self GOBJECT]), area, intersection) ? YES : NO);
}

-(BOOL)isAncestor:(CGTKWidget*) ancestor
{
	return (gtk_widget_is_ancestor(GTK_WIDGET([self GOBJECT]), [ancestor WIDGET]) ? YES : NO);
}

-(BOOL)isComposited
{
	return (gtk_widget_is_composited(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)isDrawable
{
	return (gtk_widget_is_drawable(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)isFocus
{
	return (gtk_widget_is_focus(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)isSensitive
{
	return (gtk_widget_is_sensitive(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)isToplevel
{
	return (gtk_widget_is_toplevel(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)isVisible
{
	return (gtk_widget_is_visible(GTK_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)keynavFailed:(GtkDirectionType) direction
{
	return (gtk_widget_keynav_failed(GTK_WIDGET([self GOBJECT]), direction) ? YES : NO);
}

-(GList*)listAccelClosures
{
	return gtk_widget_list_accel_closures(GTK_WIDGET([self GOBJECT]));
}

-(GList*)listMnemonicLabels
{
	return gtk_widget_list_mnemonic_labels(GTK_WIDGET([self GOBJECT]));
}

-(void)map
{
	gtk_widget_map(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)mnemonicActivate:(BOOL) groupCycling
{
	return (gtk_widget_mnemonic_activate(GTK_WIDGET([self GOBJECT]), (groupCycling ? TRUE : FALSE)) ? YES : NO);
}

-(void)modifyBaseWithState:(GtkStateType) state andColor:(const GdkColor*) color
{
	gtk_widget_modify_base(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)modifyBgWithState:(GtkStateType) state andColor:(const GdkColor*) color
{
	gtk_widget_modify_bg(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)modifyCursorWithPrimary:(const GdkColor*) primary andSecondary:(const GdkColor*) secondary
{
	gtk_widget_modify_cursor(GTK_WIDGET([self GOBJECT]), primary, secondary);
}

-(void)modifyFgWithState:(GtkStateType) state andColor:(const GdkColor*) color
{
	gtk_widget_modify_fg(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)modifyFont:(PangoFontDescription*) fontDesc
{
	gtk_widget_modify_font(GTK_WIDGET([self GOBJECT]), fontDesc);
}

-(void)modifyStyle:(GtkRcStyle*) style
{
	gtk_widget_modify_style(GTK_WIDGET([self GOBJECT]), style);
}

-(void)modifyTextWithState:(GtkStateType) state andColor:(const GdkColor*) color
{
	gtk_widget_modify_text(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)overrideBackgroundColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color
{
	gtk_widget_override_background_color(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)overrideColorWithState:(GtkStateFlags) state andColor:(const GdkRGBA*) color
{
	gtk_widget_override_color(GTK_WIDGET([self GOBJECT]), state, color);
}

-(void)overrideCursorWithCursor:(const GdkRGBA*) cursor andSecondaryCursor:(const GdkRGBA*) secondaryCursor
{
	gtk_widget_override_cursor(GTK_WIDGET([self GOBJECT]), cursor, secondaryCursor);
}

-(void)overrideFont:(const PangoFontDescription*) fontDesc
{
	gtk_widget_override_font(GTK_WIDGET([self GOBJECT]), fontDesc);
}

-(void)overrideSymbolicColorWithName:(NSString*) name andColor:(const GdkRGBA*) color
{
	gtk_widget_override_symbolic_color(GTK_WIDGET([self GOBJECT]), [name UTF8String], color);
}

-(void)pathWithPathLength:(guint*) pathLength andPath:(gchar**) path andPathReversed:(gchar**) pathReversed
{
	gtk_widget_path(GTK_WIDGET([self GOBJECT]), pathLength, path, pathReversed);
}

-(void)queueComputeExpand
{
	gtk_widget_queue_compute_expand(GTK_WIDGET([self GOBJECT]));
}

-(void)queueDraw
{
	gtk_widget_queue_draw(GTK_WIDGET([self GOBJECT]));
}

-(void)queueDrawAreaWithX:(gint) x andY:(gint) y andWidth:(gint) width andHeight:(gint) height
{
	gtk_widget_queue_draw_area(GTK_WIDGET([self GOBJECT]), x, y, width, height);
}

-(void)queueDrawRegion:(const cairo_region_t*) region
{
	gtk_widget_queue_draw_region(GTK_WIDGET([self GOBJECT]), region);
}

-(void)queueResize
{
	gtk_widget_queue_resize(GTK_WIDGET([self GOBJECT]));
}

-(void)queueResizeNoRedraw
{
	gtk_widget_queue_resize_no_redraw(GTK_WIDGET([self GOBJECT]));
}

-(void)realize
{
	gtk_widget_realize(GTK_WIDGET([self GOBJECT]));
}

-(cairo_region_t*)regionIntersect:(const cairo_region_t*) region
{
	return gtk_widget_region_intersect(GTK_WIDGET([self GOBJECT]), region);
}

-(void)registerWindow:(GdkWindow*) window
{
	gtk_widget_register_window(GTK_WIDGET([self GOBJECT]), window);
}

-(BOOL)removeAcceleratorWithAccelGroup:(GtkAccelGroup*) accelGroup andAccelKey:(guint) accelKey andAccelMods:(GdkModifierType) accelMods
{
	return (gtk_widget_remove_accelerator(GTK_WIDGET([self GOBJECT]), accelGroup, accelKey, accelMods) ? YES : NO);
}

-(void)removeMnemonicLabel:(CGTKWidget*) label
{
	gtk_widget_remove_mnemonic_label(GTK_WIDGET([self GOBJECT]), [label WIDGET]);
}

-(void)removeTickCallback:(guint) id
{
	gtk_widget_remove_tick_callback(GTK_WIDGET([self GOBJECT]), id);
}

-(GdkPixbuf*)renderIconWithStockId:(NSString*) stockId andSize:(GtkIconSize) size andDetail:(NSString*) detail
{
	return gtk_widget_render_icon(GTK_WIDGET([self GOBJECT]), [stockId UTF8String], size, [detail UTF8String]);
}

-(GdkPixbuf*)renderIconPixbufWithStockId:(NSString*) stockId andSize:(GtkIconSize) size
{
	return gtk_widget_render_icon_pixbuf(GTK_WIDGET([self GOBJECT]), [stockId UTF8String], size);
}

-(void)reparent:(CGTKWidget*) newParent
{
	gtk_widget_reparent(GTK_WIDGET([self GOBJECT]), [newParent WIDGET]);
}

-(void)resetRcStyles
{
	gtk_widget_reset_rc_styles(GTK_WIDGET([self GOBJECT]));
}

-(void)resetStyle
{
	gtk_widget_reset_style(GTK_WIDGET([self GOBJECT]));
}

-(gint)sendExpose:(GdkEvent*) event
{
	return gtk_widget_send_expose(GTK_WIDGET([self GOBJECT]), event);
}

-(BOOL)sendFocusChange:(GdkEvent*) event
{
	return (gtk_widget_send_focus_change(GTK_WIDGET([self GOBJECT]), event) ? YES : NO);
}

-(void)setAccelPathWithAccelPath:(NSString*) accelPath andAccelGroup:(GtkAccelGroup*) accelGroup
{
	gtk_widget_set_accel_path(GTK_WIDGET([self GOBJECT]), [accelPath UTF8String], accelGroup);
}

-(void)setAllocation:(const GtkAllocation*) allocation
{
	gtk_widget_set_allocation(GTK_WIDGET([self GOBJECT]), allocation);
}

-(void)setAppPaintable:(BOOL) appPaintable
{
	gtk_widget_set_app_paintable(GTK_WIDGET([self GOBJECT]), (appPaintable ? TRUE : FALSE));
}

-(void)setCanDefault:(BOOL) canDefault
{
	gtk_widget_set_can_default(GTK_WIDGET([self GOBJECT]), (canDefault ? TRUE : FALSE));
}

-(void)setCanFocus:(BOOL) canFocus
{
	gtk_widget_set_can_focus(GTK_WIDGET([self GOBJECT]), (canFocus ? TRUE : FALSE));
}

-(void)setChildVisible:(BOOL) isVisible
{
	gtk_widget_set_child_visible(GTK_WIDGET([self GOBJECT]), (isVisible ? TRUE : FALSE));
}

-(void)setCompositeName:(NSString*) name
{
	gtk_widget_set_composite_name(GTK_WIDGET([self GOBJECT]), [name UTF8String]);
}

-(void)setDeviceEnabledWithDevice:(GdkDevice*) device andEnabled:(BOOL) enabled
{
	gtk_widget_set_device_enabled(GTK_WIDGET([self GOBJECT]), device, (enabled ? TRUE : FALSE));
}

-(void)setDeviceEventsWithDevice:(GdkDevice*) device andEvents:(GdkEventMask) events
{
	gtk_widget_set_device_events(GTK_WIDGET([self GOBJECT]), device, events);
}

-(void)setDirection:(GtkTextDirection) dir
{
	gtk_widget_set_direction(GTK_WIDGET([self GOBJECT]), dir);
}

-(void)setDoubleBuffered:(BOOL) doubleBuffered
{
	gtk_widget_set_double_buffered(GTK_WIDGET([self GOBJECT]), (doubleBuffered ? TRUE : FALSE));
}

-(void)setEvents:(gint) events
{
	gtk_widget_set_events(GTK_WIDGET([self GOBJECT]), events);
}

-(void)setHalign:(GtkAlign) align
{
	gtk_widget_set_halign(GTK_WIDGET([self GOBJECT]), align);
}

-(void)setHasTooltip:(BOOL) hasTooltip
{
	gtk_widget_set_has_tooltip(GTK_WIDGET([self GOBJECT]), (hasTooltip ? TRUE : FALSE));
}

-(void)setHasWindow:(BOOL) hasWindow
{
	gtk_widget_set_has_window(GTK_WIDGET([self GOBJECT]), (hasWindow ? TRUE : FALSE));
}

-(void)setHexpand:(BOOL) expand
{
	gtk_widget_set_hexpand(GTK_WIDGET([self GOBJECT]), (expand ? TRUE : FALSE));
}

-(void)setHexpandSet:(BOOL) set
{
	gtk_widget_set_hexpand_set(GTK_WIDGET([self GOBJECT]), (set ? TRUE : FALSE));
}

-(void)setMapped:(BOOL) mapped
{
	gtk_widget_set_mapped(GTK_WIDGET([self GOBJECT]), (mapped ? TRUE : FALSE));
}

-(void)setMarginBottom:(gint) margin
{
	gtk_widget_set_margin_bottom(GTK_WIDGET([self GOBJECT]), margin);
}

-(void)setMarginLeft:(gint) margin
{
	gtk_widget_set_margin_left(GTK_WIDGET([self GOBJECT]), margin);
}

-(void)setMarginRight:(gint) margin
{
	gtk_widget_set_margin_right(GTK_WIDGET([self GOBJECT]), margin);
}

-(void)setMarginTop:(gint) margin
{
	gtk_widget_set_margin_top(GTK_WIDGET([self GOBJECT]), margin);
}

-(void)setName:(NSString*) name
{
	gtk_widget_set_name(GTK_WIDGET([self GOBJECT]), [name UTF8String]);
}

-(void)setNoShowAll:(BOOL) noShowAll
{
	gtk_widget_set_no_show_all(GTK_WIDGET([self GOBJECT]), (noShowAll ? TRUE : FALSE));
}

-(void)setOpacity:(double) opacity
{
	gtk_widget_set_opacity(GTK_WIDGET([self GOBJECT]), opacity);
}

-(void)setParent:(CGTKWidget*) parent
{
	gtk_widget_set_parent(GTK_WIDGET([self GOBJECT]), [parent WIDGET]);
}

-(void)setParentWindow:(GdkWindow*) parentWindow
{
	gtk_widget_set_parent_window(GTK_WIDGET([self GOBJECT]), parentWindow);
}

-(void)setRealized:(BOOL) realized
{
	gtk_widget_set_realized(GTK_WIDGET([self GOBJECT]), (realized ? TRUE : FALSE));
}

-(void)setReceivesDefault:(BOOL) receivesDefault
{
	gtk_widget_set_receives_default(GTK_WIDGET([self GOBJECT]), (receivesDefault ? TRUE : FALSE));
}

-(void)setRedrawOnAllocate:(BOOL) redrawOnAllocate
{
	gtk_widget_set_redraw_on_allocate(GTK_WIDGET([self GOBJECT]), (redrawOnAllocate ? TRUE : FALSE));
}

-(void)setSensitive:(BOOL) sensitive
{
	gtk_widget_set_sensitive(GTK_WIDGET([self GOBJECT]), (sensitive ? TRUE : FALSE));
}

-(void)setSizeRequestWithWidth:(gint) width andHeight:(gint) height
{
	gtk_widget_set_size_request(GTK_WIDGET([self GOBJECT]), width, height);
}

-(void)setState:(GtkStateType) state
{
	gtk_widget_set_state(GTK_WIDGET([self GOBJECT]), state);
}

-(void)setStateFlagsWithFlags:(GtkStateFlags) flags andClear:(BOOL) clear
{
	gtk_widget_set_state_flags(GTK_WIDGET([self GOBJECT]), flags, (clear ? TRUE : FALSE));
}

-(void)setStyle:(GtkStyle*) style
{
	gtk_widget_set_style(GTK_WIDGET([self GOBJECT]), style);
}

-(void)setSupportMultidevice:(BOOL) supportMultidevice
{
	gtk_widget_set_support_multidevice(GTK_WIDGET([self GOBJECT]), (supportMultidevice ? TRUE : FALSE));
}

-(void)setTooltipMarkup:(NSString*) markup
{
	gtk_widget_set_tooltip_markup(GTK_WIDGET([self GOBJECT]), [markup UTF8String]);
}

-(void)setTooltipText:(NSString*) text
{
	gtk_widget_set_tooltip_text(GTK_WIDGET([self GOBJECT]), [text UTF8String]);
}

-(void)setTooltipWindow:(GtkWindow*) customWindow
{
	gtk_widget_set_tooltip_window(GTK_WIDGET([self GOBJECT]), customWindow);
}

-(void)setValign:(GtkAlign) align
{
	gtk_widget_set_valign(GTK_WIDGET([self GOBJECT]), align);
}

-(void)setVexpand:(BOOL) expand
{
	gtk_widget_set_vexpand(GTK_WIDGET([self GOBJECT]), (expand ? TRUE : FALSE));
}

-(void)setVexpandSet:(BOOL) set
{
	gtk_widget_set_vexpand_set(GTK_WIDGET([self GOBJECT]), (set ? TRUE : FALSE));
}

-(void)setVisible:(BOOL) visible
{
	gtk_widget_set_visible(GTK_WIDGET([self GOBJECT]), (visible ? TRUE : FALSE));
}

-(void)setVisual:(GdkVisual*) visual
{
	gtk_widget_set_visual(GTK_WIDGET([self GOBJECT]), visual);
}

-(void)setWindow:(GdkWindow*) window
{
	gtk_widget_set_window(GTK_WIDGET([self GOBJECT]), window);
}

-(void)shapeCombineRegion:(cairo_region_t*) region
{
	gtk_widget_shape_combine_region(GTK_WIDGET([self GOBJECT]), region);
}

-(void)show
{
	gtk_widget_show(GTK_WIDGET([self GOBJECT]));
}

-(void)showAll
{
	gtk_widget_show_all(GTK_WIDGET([self GOBJECT]));
}

-(void)showNow
{
	gtk_widget_show_now(GTK_WIDGET([self GOBJECT]));
}

-(void)sizeAllocate:(GtkAllocation*) allocation
{
	gtk_widget_size_allocate(GTK_WIDGET([self GOBJECT]), allocation);
}

-(void)sizeAllocateWithBaselineWithAllocation:(GtkAllocation*) allocation andBaseline:(gint) baseline
{
	gtk_widget_size_allocate_with_baseline(GTK_WIDGET([self GOBJECT]), allocation, baseline);
}

-(void)sizeRequest:(GtkRequisition*) requisition
{
	gtk_widget_size_request(GTK_WIDGET([self GOBJECT]), requisition);
}

-(void)styleAttach
{
	gtk_widget_style_attach(GTK_WIDGET([self GOBJECT]));
}

-(void)styleGetPropertyWithPropertyName:(NSString*) propertyName andValue:(GValue*) value
{
	gtk_widget_style_get_property(GTK_WIDGET([self GOBJECT]), [propertyName UTF8String], value);
}

-(void)styleGetValistWithFirstPropertyName:(NSString*) firstPropertyName andVarArgs:(va_list) varArgs
{
	gtk_widget_style_get_valist(GTK_WIDGET([self GOBJECT]), [firstPropertyName UTF8String], varArgs);
}

-(void)thawChildNotify
{
	gtk_widget_thaw_child_notify(GTK_WIDGET([self GOBJECT]));
}

-(BOOL)translateCoordinatesWithDestWidget:(CGTKWidget*) destWidget andSrcX:(gint) srcX andSrcY:(gint) srcY andDestX:(gint*) destX andDestY:(gint*) destY
{
	return (gtk_widget_translate_coordinates(GTK_WIDGET([self GOBJECT]), [destWidget WIDGET], srcX, srcY, destX, destY) ? YES : NO);
}

-(void)triggerTooltipQuery
{
	gtk_widget_trigger_tooltip_query(GTK_WIDGET([self GOBJECT]));
}

-(void)unmap
{
	gtk_widget_unmap(GTK_WIDGET([self GOBJECT]));
}

-(void)unparent
{
	gtk_widget_unparent(GTK_WIDGET([self GOBJECT]));
}

-(void)unrealize
{
	gtk_widget_unrealize(GTK_WIDGET([self GOBJECT]));
}

-(void)unregisterWindow:(GdkWindow*) window
{
	gtk_widget_unregister_window(GTK_WIDGET([self GOBJECT]), window);
}

-(void)unsetStateFlags:(GtkStateFlags) flags
{
	gtk_widget_unset_state_flags(GTK_WIDGET([self GOBJECT]), flags);
}


@end