/*
 * CGTKWidget.m
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

#import "CGTKWidget.h"

@implementation CGTKWidget

+(id)widgetWithGtkWidget:(GtkWidget *)widget
{
    return [[[CGTKWidget alloc] initWithGtkWidget:widget] autorelease];
}

-(id)init
{
    self = [super init];

    if(self)
    {
        // Do nothing
    }

    return self;
}

-(id)initWithGtkWidget:(GtkWidget *)widget
{
    self = [super init];

    if(self)
    {
        [self setWidget:widget];
    }

    return self;
}

-(id)initWithWidget:(CGTKWidget *)widget
{
    self = [super init];
    
    if(self)
    {
        [self setWidget:[widget WIDGET]];
    }
    
    return self;
}

//-(id)initWithGType:(Gtype)type andProperties:(NSArray *) properties;

-(GtkWidget *)WIDGET
{
    return GTK_WIDGET(__gtkObject);
}

-(void)setWidget:(GtkWidget *)widget
{
    [self setGtkObject:GTK_OBJECT(widget)];
}

-(void)checkWidgetWithMsg:(NSString *)msg
{
    if([self WIDGET] == NULL)
    {
        @throw [NSException exceptionWithName:NSInvalidArgumentException reason:[NSString stringWithFormat:@"Widget must be set before calling (%s). [Called from %@].", __PRETTY_FUNCTION__, msg] userInfo:nil];
    }
}

-(void)destroy
{
    gtk_widget_destroy([self WIDGET]);
}

-(void)unparent
{
	gtk_widget_unparent([self WIDGET]);
}

-(void)show
{
    gtk_widget_show([self WIDGET]);
}

-(void)showNow
{
    gtk_widget_show_now([self WIDGET]);
}

-(void)hide
{
    gtk_widget_hide([self WIDGET]);
}

-(void)showAll
{
    gtk_widget_show_all([self WIDGET]);
}

-(void)map
{
        gtk_widget_map([self WIDGET]);
}
-(void)unmap
{
    gtk_widget_unmap([self WIDGET]);
}

-(void)realize
{
    gtk_widget_realize([self WIDGET]);
}

-(void)unrealize
{
    gtk_widget_unrealize([self WIDGET]);
}

-(void)queueDraw
{
    gtk_widget_queue_draw([self WIDGET]);
}

-(void)queueResize
{
    gtk_widget_queue_resize([self WIDGET]);    
}

-(void)queueResizeNoRedraw
{
    gtk_widget_queue_resize_no_redraw([self WIDGET]);
}

-(void)sizeRequest:(GtkRequisition *)requisition
{
	gtk_widget_size_request([self WIDGET], requisition);
}

-(void)getChildRequisition:(GtkRequisition *)requisition
{
	gtk_widget_get_child_requisition([self WIDGET], requisition);
}

-(void)sizeAllocate:(GtkAllocation *)allocation
{
	gtk_widget_size_allocate([self WIDGET], allocation);
}

-(void)addAcceleratorWithSignal:(NSString *)accelSignal andAccelGroup:(GtkAccelGroup *)accelGroup andAccelKey:(NSNumber *)accelKey andAccelMods:(GdkModifierType)accelMods andAccelFlags:(GtkAccelFlags)accelFlags
{
	gtk_widget_add_accelerator([self WIDGET], [accelSignal UTF8String], accelGroup, [accelKey unsignedIntValue], accelMods, accelFlags);
}

-(BOOL)removeAcceleratorWithGroup:(GtkAccelGroup *)accelGroup andKey:(NSNumber *)accelKey andAccelMods:(GdkModifierType)accelMods
{
	return [CGTK getBOOL:gtk_widget_remove_accelerator([self WIDGET], accelGroup, [accelKey unsignedIntValue], accelMods)];
}

-(void)setAccelPathWithAccelPath:(NSString *)accelPath andGroup:(GtkAccelGroup *)accelGroup
{
	gtk_widget_set_accel_path([self WIDGET], [accelPath UTF8String], accelGroup);
}

-(GList *)listAccelClosures
{
	return gtk_widget_list_accel_closures([self WIDGET]);
}

-(BOOL)canActivateAccel:(NSNumber *)signalId
{
	return [CGTK getBOOL:gtk_widget_can_activate_accel([self WIDGET], [signalId unsignedIntValue])];
}

-(BOOL)event:(GdkEvent *)event
{
	return [CGTK getBOOL:gtk_widget_event([self WIDGET], event)];
}

-(BOOL)activate
{
	return [CGTK getBOOL:gtk_widget_activate([self WIDGET])];
}

-(void)reparent:(CGTKWidget *)newParent
{
	gtk_widget_reparent([self WIDGET], [newParent WIDGET]);
}

-(BOOL)intersectWithArea:(const GdkRectangle *)area andIntersection:(GdkRectangle *)intersection
{
	return [CGTK getBOOL:gtk_widget_intersect([self WIDGET], area, intersection)];
}

-(BOOL)isFocus
{
	return [CGTK getBOOL:gtk_widget_is_focus([self WIDGET])];
}

-(void)grabFocus
{
	gtk_widget_grab_focus([self WIDGET]);
}

-(void)grabDefault
{
	gtk_widget_grab_default([self WIDGET]);
}

-(void)setName:(NSString *)name
{
	gtk_widget_set_name([self WIDGET], [name UTF8String]);
}

-(NSString *)getName
{
	return [NSString stringWithUTF8String:gtk_widget_get_name([self WIDGET])];
}

-(void)setState:(GtkStateType)state
{
	gtk_widget_set_state([self WIDGET], state);
}

-(void)setSensitive:(BOOL)sensitive
{
	gtk_widget_set_sensitive([self WIDGET], [CGTK getGboolean:sensitive]);
}

-(void)setParent:(CGTKWidget *)parent
{
	gtk_widget_set_parent([self WIDGET], [parent WIDGET]);
}

-(void)setParentWindow:(GdkWindow *)parentWindow
{
	gtk_widget_set_parent_window([self WIDGET], parentWindow);
}

-(GdkWindow *)getParentWindow
{
	return gtk_widget_get_parent_window([self WIDGET]);
}

-(void)setEvents:(NSNumber *)events
{
	gtk_widget_set_events([self WIDGET], [events intValue]);
}

-(void)addEvents:(NSNumber *)events
{
	gtk_widget_add_events([self WIDGET], [events intValue]);
}

-(void)setExtensionEvents:(GdkExtensionMode)mode
{
	gtk_widget_set_extension_events([self WIDGET], mode);
}

-(GdkExtensionMode)getExtensionEvents
{
	return gtk_widget_get_extension_events([self WIDGET]);
}

-(CGTKWidget *)getToplevel
{
	return [CGTKWidget widgetWithGtkWidget:gtk_widget_get_toplevel([self WIDGET])];
}

-(CGTKWidget *)getAncestor:(GType)widgetType
{
	return [CGTKWidget widgetWithGtkWidget:gtk_widget_get_ancestor([self WIDGET], widgetType)];
}

-(GdkColormap *)getColormap
{
	return gtk_widget_get_colormap([self WIDGET]);
}

-(void)setColormap:(GdkColormap *)colormap
{
	gtk_widget_set_colormap([self WIDGET], colormap);
}

-(GdkVisual *)getVisual
{
	return gtk_widget_get_visual([self WIDGET]);
}

-(NSNumber *)getEvents
{
	return [NSNumber numberWithInt:gtk_widget_get_events([self WIDGET])];
}

-(void)getPointerWithX:(NSNumber **)x andY:(NSNumber **)y
{
	gint gX;
	gint gY;
	
	gtk_widget_get_pointer([self WIDGET], &gX, &gY);
	
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
}

-(BOOL)isAncestor:(CGTKWidget *)ancestor
{
	return [CGTK getBOOL:gtk_widget_is_ancestor([self WIDGET], [ancestor WIDGET])];
}

+(BOOL)translateCoordinatesWithSrc:(CGTKWidget *)srcWidget andDest:(CGTKWidget *)destWidget andSrcX:(NSNumber *)srcX andSrcY:(NSNumber *)srcY andDestX:(NSNumber **)destX andDestY:(NSNumber **)destY
{
	gint dest_x;
	gint dest_y;
	
	BOOL result = [CGTK getBOOL:gtk_widget_translate_coordinates([srcWidget WIDGET], [destWidget WIDGET], [srcX intValue], [srcY intValue], &dest_x, &dest_y)];
	
	*destX = [NSNumber numberWithInt:dest_x];
	*destY = [NSNumber numberWithInt:dest_y];
	
	return result;
}

-(BOOL)hideOnDelete
{
	return [CGTK getBOOL:gtk_widget_hide_on_delete([self WIDGET])];
}

-(void)setStyle:(GtkStyle *)style
{
	gtk_widget_set_style([self WIDGET], style);
}

-(void)ensureStyle
{
	gtk_widget_ensure_style([self WIDGET]);
}

-(GtkStyle *)getStyle
{
	return gtk_widget_get_style([self WIDGET]);
}

-(void)resetRcStyles
{
	gtk_widget_reset_rc_styles([self WIDGET]);
}

+(void)pushColormap:(GdkColormap *)cmap
{
	gtk_widget_push_colormap(cmap);
}

+(void)popColormap
{
	gtk_widget_pop_colormap();
}

+(void)setDefaultColormap:(GdkColormap *)colormap
{
	gtk_widget_set_default_colormap(colormap);
}

+(GtkStyle *)getDefaultStyle
{
	return gtk_widget_get_default_style();
}

+(GdkColormap *)getDefaultColormap
{
	return gtk_widget_get_default_colormap();
}

+(GdkVisual *)getDefaultVisual
{
	return gtk_widget_get_default_visual();
}

-(void)setDirection:(GtkTextDirection)dir
{
	gtk_widget_set_direction([self WIDGET], dir);
}

-(GtkTextDirection)getDirection
{
	return gtk_widget_get_direction([self WIDGET]);
}

+(void)setDefaultDirection:(GtkTextDirection)dir
{
	gtk_widget_set_default_direction(dir);
}

+(GtkTextDirection)getDefaultDirection
{
	return gtk_widget_get_default_direction();
}

-(void)shapeCombineMaskWithShapeMask:(GdkBitmap *)shapeMask andOffsetX:(NSNumber *)offsetX andOffsetY:(NSNumber *)offsetY
{
	gtk_widget_shape_combine_mask([self WIDGET], shapeMask, [offsetX intValue], [offsetY intValue]);
}

-(void)inputShapeCombineMaskWithShapeMask:(GdkBitmap *)shapeMask andOffsetX:(NSNumber *)offsetX andOffsetY:(NSNumber *)offsetY
{
	gtk_widget_input_shape_combine_mask([self WIDGET], shapeMask, [offsetX intValue], [offsetY intValue]);
}

-(void)pathWithPathLength:(NSNumber **)pathLength andPath:(NSString **)path andPathReversed:(NSString **)pathReversed
{
	guint gPathLength;
	gchar *gPath;
	gchar *gPathReversed;
	
	gtk_widget_path([self WIDGET], &gPathLength, &gPath, &gPathReversed);
	
	*pathLength = [NSNumber numberWithUnsignedInt:gPathLength];
	*path = [NSString stringWithUTF8String:gPath];
	*pathReversed = [NSString stringWithUTF8String:gPathReversed];
}

-(void)classPathWithPathLength:(NSNumber **)pathLength andPath:(NSString **)path andPathReversed:(NSString **)pathReversed
{
	guint gPathLength;
	gchar *gPath;
	gchar *gPathReversed;
	
	gtk_widget_class_path([self WIDGET], &gPathLength, &gPath, &gPathReversed);
	
	*pathLength = [NSNumber numberWithUnsignedInt:gPathLength];
	*path = [NSString stringWithUTF8String:gPath];
	*pathReversed = [NSString stringWithUTF8String:gPathReversed];
}

-(NSString *)getCompositeName
{
	return [NSString stringWithUTF8String:gtk_widget_get_composite_name([self WIDGET])];
}

-(void)modifyStyleWithStyle:(GtkRcStyle *)style
{
	gtk_widget_modify_style([self WIDGET], style);
}

-(GtkRcStyle *)getModifierStyle
{
	return gtk_widget_get_modifier_style([self WIDGET]);
}

-(void)modifyFgWithState:(GtkStateType)state andColor:(const GdkColor *)color
{
	gtk_widget_modify_fg([self WIDGET], state, color);
}

-(void)modifyBgWithState:(GtkStateType)state andColor:(const GdkColor *)color;
{
	gtk_widget_modify_bg([self WIDGET], state, color);
}

-(void)modifyTextWithState:(GtkStateType)state andColor:(const GdkColor *)color;
{
	gtk_widget_modify_text([self WIDGET], state, color);
}

-(void)modifyBaseWithState:(GtkStateType)state andColor:(const GdkColor *)color;
{
	gtk_widget_modify_base([self WIDGET], state, color);
}

-(void)modifyFontWithFontDescription:(PangoFontDescription *)fontDesc
{
	gtk_widget_modify_font([self WIDGET], fontDesc);
}

-(void)modifyCursorWithPrimary:(const GdkColor *)primary andSecondary:(const GdkColor *)secondary
{
	gtk_widget_modify_cursor([self WIDGET], primary, secondary);
}

-(PangoContext *)createPangoContext
{
	return gtk_widget_create_pango_context([self WIDGET]);
}

-(PangoContext *)getPangoContext
{
	return gtk_widget_get_pango_context([self WIDGET]);
}

-(PangoLayout *)createPangoLayout:(NSString *)text
{
	const gchar *gText;
	
	if(text == nil)
	{
		gText = NULL;
	}
	else
	{
		gText = [text UTF8String];
	}
	
	return gtk_widget_create_pango_layout([self WIDGET], gText);
}

-(GdkPixbuf *)renderIconWithStockId:(NSString *)stockId andSize:(GtkIconSize)size andDetail:(NSString *)detail
{
	return gtk_widget_render_icon([self WIDGET], [stockId UTF8String], size, [detail UTF8String]);
}

+(void)popCompositeChild
{
	gtk_widget_pop_composite_child();
}

+(void)pushCompositeChild
{
	gtk_widget_push_composite_child();
}

-(void)queueDrawAreaWithX:(NSNumber *)x andY:(NSNumber *)y andWidth:(NSNumber *)width andHeight:(NSNumber *)height
{
	gtk_widget_queue_draw_area([self WIDGET], [x intValue], [y intValue], [width intValue], [height intValue]);
}

-(void)setAppPaintable:(BOOL)appPaintable
{
	gtk_widget_set_app_paintable([self WIDGET], [CGTK getGboolean:appPaintable]);
}

-(void)setDoubleBuffered:(BOOL)doubleBuffered
{
	gtk_widget_set_double_buffered([self WIDGET], [CGTK getGboolean:doubleBuffered]);
}

-(void)setRedrawOnAllocate:(BOOL)redrawOnAllocate
{
	gtk_widget_set_redraw_on_allocate([self WIDGET], [CGTK getGboolean:redrawOnAllocate]);
}

-(void)setCompositeName:(NSString *)name
{
	gtk_widget_set_composite_name([self WIDGET], [name UTF8String]);
}

-(BOOL)setScrollAdjustmentsWithHadjustment:(GtkAdjustment *)hadjustment andVadjustment:(GtkAdjustment *)vadjustment
{
	return [CGTK getBOOL:gtk_widget_set_scroll_adjustments([self WIDGET], hadjustment, vadjustment)];
}

-(BOOL)mnemonicActivate:(BOOL)groupCycling
{
	return [CGTK getBOOL:gtk_widget_mnemonic_activate([self WIDGET], [CGTK getGboolean:groupCycling])];
}

+(void)classInstallStylePropertyWithClass:(GtkWidgetClass *)klass andParamSpec:(GParamSpec *)pspec
{
	gtk_widget_class_install_style_property(klass, pspec);
}

+(void)classInstallStylePropertyParserWithClass:(GtkWidgetClass*)klass andParamSpec:(GParamSpec *)pspec andParser:(GtkRcPropertyParser)parser
{
	gtk_widget_class_install_style_property_parser(klass, pspec, parser);
}

+(GParamSpec *)classFindStylePropertyWithClass:(GtkWidgetClass *)klass andPropertyName:(NSString *)propertyName
{
	return gtk_widget_class_find_style_property(klass, [propertyName UTF8String]);
}

+(GParamSpec **)classListStylePropertiesWithClass:(GtkWidgetClass *)klass andNumberOfProperties:(NSNumber **)nProperties
{
	guint n_properties;
	
	GParamSpec** result = gtk_widget_class_list_style_properties(klass, &n_properties);
	
	*nProperties = [NSNumber numberWithUnsignedInt:n_properties];
	
	return result;
}

-(GdkRegion *)regionIntersect:(const GdkRegion *)region
{
	return gtk_widget_region_intersect([self WIDGET], region);
}

-(NSNumber *)sendExpose:(GdkEvent *)event
{
	return [NSNumber numberWithInt:gtk_widget_send_expose([self WIDGET], event)];
}

-(BOOL)sendFocusChange:(GdkEvent *)event
{
	return [CGTK getBOOL:gtk_widget_send_focus_change([self WIDGET], event)];
}

-(void)styleGetPropertyWithName:(NSString *)propertyName andValue:(GValue *)value
{
	gtk_widget_style_get_property([self WIDGET], [propertyName UTF8String], value);
}

-(void)styleGetValistWithPropertyName:(NSString *)propertyName andVaList:(va_list)varArgs
{
	gtk_widget_style_get_valist([self WIDGET], [propertyName UTF8String], varArgs);
}

-(void)styleAttach
{
	gtk_widget_style_attach([self WIDGET]);
}

-(AtkObject *)getAccessible
{
	return gtk_widget_get_accessible([self WIDGET]);
}

-(BOOL)childFocus:(GtkDirectionType)direction
{
	return [CGTK getBOOL:gtk_widget_child_focus([self WIDGET], direction)];
}

-(void)childNotify:(NSString *)childProperty
{
	gtk_widget_child_notify([self WIDGET], [childProperty UTF8String]);
}

-(void)freezeChildNotify
{
	gtk_widget_freeze_child_notify([self WIDGET]);
}

-(BOOL)getChildVisible
{
	return [CGTK getBOOL:gtk_widget_get_child_visible([self WIDGET])];
}

-(CGTKWidget *)getParent
{
	return [CGTKWidget widgetWithGtkWidget:gtk_widget_get_parent([self WIDGET])];
}

-(GtkSettings *)getSettings
{
	return gtk_widget_get_settings([self WIDGET]);
}

-(GtkClipboard *)getClipboard:(GdkAtom)selection
{
	return gtk_widget_get_clipboard([self WIDGET], selection);
}

-(GdkDisplay *)getDisplay
{
	return gtk_widget_get_display([self WIDGET]);
}

-(GdkWindow *)getRootWindow
{
	return gtk_widget_get_root_window([self WIDGET]);
}

-(GdkScreen *)getScreen
{
	return gtk_widget_get_screen([self WIDGET]);
}

-(BOOL)hasScreen
{
	return [CGTK getBOOL:gtk_widget_has_screen([self WIDGET])];
}

-(void)getSizeRequestWithWidth:(NSNumber **)width andHeight:(NSNumber **)height
{
	gint gwidth;
	gint gheight;
	
	gtk_widget_get_size_request([self WIDGET], &gwidth, &gheight);
	
	*width = [NSNumber numberWithInt:gwidth];
	*height = [NSNumber numberWithInt:gheight];
}

-(void)setChildVisible:(BOOL)isVisible
{
	gtk_widget_set_child_visible([self WIDGET], [CGTK getGboolean:isVisible]);
}

-(void)setSizeRequestWithWidth:(NSNumber *)width andHeight:(NSNumber *)height
{
	gtk_widget_set_size_request([self WIDGET], [width intValue], [height intValue]);
}

-(void)thawChildNotify
{
	gtk_widget_thaw_child_notify([self WIDGET]);
}

-(void)setNoShowAll:(BOOL)noShowAll
{
	gtk_widget_set_no_show_all([self WIDGET], [CGTK getGboolean:noShowAll]);
}

-(BOOL)getNoShowAll
{
	return [CGTK getBOOL:gtk_widget_get_no_show_all([self WIDGET])];
}

-(GList *)listMnemonicLabels
{
	return gtk_widget_list_mnemonic_labels([self WIDGET]);
}

-(void)addMnemonicLabel:(CGTKWidget *)label
{
	gtk_widget_add_mnemonic_label([self WIDGET], [label WIDGET]);
}

-(void)removeMnemonicLabel:(CGTKWidget *)label
{
	gtk_widget_remove_mnemonic_label([self WIDGET], [label WIDGET]);
}

-(BOOL)isComposited
{
	return [CGTK getBOOL:gtk_widget_is_composited([self WIDGET])];
}

-(void)errorBell
{
	gtk_widget_error_bell([self WIDGET]);
}

-(BOOL)keynavFailed:(GtkDirectionType)direction
{
	return [CGTK getBOOL:gtk_widget_keynav_failed([self WIDGET], direction)];
}

-(NSString *)getTooltipMarkup
{
	return [NSString stringWithUTF8String:gtk_widget_get_tooltip_markup([self WIDGET])];
}

-(void)setTooltipMarkup:(NSString *)markup
{
	gtk_widget_set_tooltip_markup([self WIDGET], [markup UTF8String]);
}

-(NSString *)getTooltipText
{
	return [NSString stringWithUTF8String:gtk_widget_get_tooltip_text([self WIDGET])];
}

-(void)setTooltipText:(NSString *)text
{
	gtk_widget_set_tooltip_text([self WIDGET], [text UTF8String]);
}

-(BOOL)getHasTooltip
{
	return [CGTK getBOOL:gtk_widget_get_has_tooltip([self WIDGET])];
}

-(void)setHasTooltip:(BOOL)hasTooltip
{
	gtk_widget_set_has_tooltip([self WIDGET], [CGTK getGboolean:hasTooltip]);
}

-(void)triggerTooltipQuery
{
	gtk_widget_trigger_tooltip_query([self WIDGET]);
}

-(GdkPixmap *)getSnapshot:(GdkRectangle *)clipRect
{
	return gtk_widget_get_snapshot([self WIDGET], clipRect);
}

-(GdkWindow *)getWindow
{
	return gtk_widget_get_window([self WIDGET]);
}

-(void)getAllocation:(GtkAllocation *)allocation
{
	gtk_widget_get_allocation([self WIDGET], allocation);
}

-(void)setAllocation:(const GtkAllocation *)allocation
{
	gtk_widget_set_allocation([self WIDGET], allocation);
}

-(BOOL)getAppPaintable
{
	return [CGTK getBOOL:gtk_widget_get_app_paintable([self WIDGET])];
}

-(BOOL)getCanDefault
{
	return [CGTK getBOOL:gtk_widget_get_can_default([self WIDGET])];
}


-(void)setCanDefault:(BOOL)canDefault
{
	gtk_widget_set_can_default([self WIDGET], [CGTK getGboolean:canDefault]);
}

-(BOOL)getCanFocus
{
	return [CGTK getBOOL:gtk_widget_get_can_focus([self WIDGET])];
}

-(void)setCanFocus:(BOOL)canFocus
{
	gtk_widget_set_can_focus([self WIDGET], [CGTK getGboolean:canFocus]);
}

-(BOOL)getDoubleBuffered
{
	return [CGTK getBOOL:gtk_widget_get_double_buffered([self WIDGET])];
}

-(BOOL)getHasWindow
{
	return [CGTK getBOOL:gtk_widget_get_has_window([self WIDGET])];
}

-(void)setHasWindow:(BOOL)hasWindow
{
	gtk_widget_set_has_window([self WIDGET], [CGTK getGboolean:hasWindow]);
}

-(BOOL)getSensitive
{
	return [CGTK getBOOL:gtk_widget_get_sensitive([self WIDGET])];
}

-(BOOL)isSensitive
{
	return [CGTK getBOOL:gtk_widget_is_sensitive([self WIDGET])];
}

-(GtkStateType)getState
{
	return gtk_widget_get_state([self WIDGET]);
}

-(BOOL)getVisible
{
	return [CGTK getBOOL:gtk_widget_get_visible([self WIDGET])];
}

-(void)setVisible:(BOOL)visible
{
	gtk_widget_set_visible([self WIDGET], [CGTK getGboolean:visible]);
}

-(BOOL)hasDefault
{
	return [CGTK getBOOL:gtk_widget_has_default([self WIDGET])];
}

-(BOOL)hasFocus
{
	return [CGTK getBOOL:gtk_widget_has_focus([self WIDGET])];
}

-(BOOL)hasGrab
{
	return [CGTK getBOOL:gtk_widget_has_grab([self WIDGET])];
}

-(BOOL)hasRcStyle
{
	return [CGTK getBOOL:gtk_widget_has_rc_style([self WIDGET])];
}

-(BOOL)isDrawable
{
	return [CGTK getBOOL:gtk_widget_is_drawable([self WIDGET])];
}

-(BOOL)isTopLevel
{
	return [CGTK getBOOL:gtk_widget_is_toplevel([self WIDGET])];
}

-(void)setWindow:(GdkWindow *)window
{
	gtk_widget_set_window([self WIDGET], window);
}

-(void)setReceivesDefault:(BOOL)receivesDefault
{
	gtk_widget_set_receives_default([self WIDGET], [CGTK getGboolean:receivesDefault]);
}

-(BOOL)getReceivesDefault
{
	return [CGTK getBOOL:gtk_widget_get_receives_default([self WIDGET])];
}

-(void)setRealized:(BOOL)realized
{
	gtk_widget_set_realized([self WIDGET], [CGTK getGboolean:realized]);
}

-(BOOL)getRealized
{
	return [CGTK getBOOL:gtk_widget_get_realized([self WIDGET])];
}

-(void)setMapped:(BOOL)mapped
{
	gtk_widget_set_mapped([self WIDGET], [CGTK getGboolean:mapped]);
}

-(BOOL)getMapped
{
	return [CGTK getBOOL:gtk_widget_get_mapped([self WIDGET])];
}

-(void)getRequisition:(GtkRequisition *)requisition
{
	gtk_widget_get_requisition([self WIDGET], requisition);
}

+(GtkRequisition *)requisitionCopy:(const GtkRequisition *)requisition
{
	return gtk_requisition_copy(requisition);
}

+(void)requisitionFree:(GtkRequisition *)requisition
{
	gtk_requisition_free(requisition);
}

-(void)grabAdd
{
	gtk_grab_add([self WIDGET]);
}

+(CGTKWidget *)grabGetCurrent
{
	return [CGTKWidget widgetWithGtkWidget:gtk_grab_get_current()];
}

-(void)grabRemove
{
	gtk_grab_remove([self WIDGET]);
}

+(CGTKWidget *)getEventWidget:(GdkEvent *)event
{
	return [CGTKWidget widgetWithGtkWidget:gtk_get_event_widget(event)];
}

-(void)propagateEvent:(GdkEvent *)event
{
	gtk_propagate_event([self WIDGET], event);
}

@end
