/*
 * CGTKEntry.h
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
#import "CGTKWidget.h"

@interface CGTKEntry : CGTKWidget
{
	
}

/**
 * Returns internal GtkEntry
 */
-(GtkEntry *)ENTRY;

/**
 * Forwards message to:
 * GtkWidget* gtk_entry_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_entry_new_with_buffer (GtkEntryBuffer* buffer)
 */
-(id)initWithBuffer:(GtkEntryBuffer *)buffer;

/**
 * Forwards message to:
 * GtkEntryBuffer* gtk_entry_get_buffer (GtkEntry* entry)
 */
-(GtkEntryBuffer *)getBuffer;

/**
 * Forwards message to:
 * void gtk_entry_set_buffer (GtkEntry* entry, GtkEntryBuffer* buffer)
 */
-(void)setBuffer:(GtkEntryBuffer *)buffer;

/**
 * Forwards message to:
 * GdkWindow* gtk_entry_get_text_window (GtkEntry* entry)
 */
-(GdkWindow *)getTextWindow;

/**
 * Forwards message to:
 * void gtk_entry_set_visibility (GtkEntry* entry, gboolean visible)
 */
-(void)setVisibility:(BOOL)visible;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_visibility (GtkEntry* entry)
 */
-(BOOL)getVisibility;

/**
 * Forwards message to:
 * void gtk_entry_set_invisible_char (GtkEntry* entry, gunichar ch)
 */
-(void)setInvisibleChar:(NSString *)ch;

/**
 * Forwards message to:
 * gunichar gtk_entry_get_invisible_char (GtkEntry* entry)
 */
-(NSString *)getInvisibleChar;

/**
 * Forwards message to:
 * void gtk_entry_unset_invisible_char (GtkEntry* entry)
 */
-(void)unsetInvisibleChar;

/**
 * Forwards message to:
 * void gtk_entry_set_has_frame (GtkEntry* entry, gboolean setting)
 */
-(void)setHasFrame:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_has_frame (GtkEntry* entry)
 */
-(BOOL)getHasFrame;

/**
 * Forwards message to:
 * void gtk_entry_set_inner_border (GtkEntry* entry, const GtkBorder* border)
 */
-(const GtkBorder *)getInnerBorder;

/**
 * Forwards message to:
 * const GtkBorder * gtk_entry_get_inner_border (GtkEntry *entry);
 */
-(void)setInnerBorder:(const GtkBorder *)border;

/**
 * Forwards message to:
 * void gtk_entry_set_overwrite_mode (GtkEntry* entry, gboolean overwrite)
 */
-(void)setOverwriteMode:(BOOL)overwrite;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_overwrite_mode (GtkEntry* entry)
 */
-(BOOL)getOverwriteMode;

/**
 * Forwards message to:
 * void gtk_entry_set_max_length (GtkEntry* entry, gint max)
 */
-(void)setMaxLength:(NSNumber *)max;

/**
 * Forwards message to:
 * gint gtk_entry_get_max_length (GtkEntry* entry)
 */
-(NSNumber *)getMaxLength;

/**
 * Forwards message to:
 * guint16 gtk_entry_get_text_length (GtkEntry* entry)
 */
-(NSNumber *)getTextLength;

/**
 * Forwards message to:
 * void gtk_entry_set_activates_default (GtkEntry* entry, gboolean setting)
 */
-(void)setActivatesDefault:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_activates_default (GtkEntry* entry)
 */
-(BOOL)getActivatesDefault;

/**
 * Forwards message to:
 * void gtk_entry_set_width_chars (GtkEntry* entry, gint n_chars)
 */
-(void)setWidthChars:(NSNumber *)nChars;

/**
 * Forwards message to:
 * gint gtk_entry_get_width_chars (GtkEntry* entry)
 */
-(NSNumber *)getWidthChars;

/**
 * Forwards message to:
 * const gchar * gtk_entry_get_text (GtkEntry *entry);
 */
-(NSString *)getText;

/**
 * Forwards message to:
 * void gtk_entry_set_text (GtkEntry* entry, const gchar* text)
 */
-(void)setText:(NSString *)text;

/**
 * Forwards message to:
 * PangoLayout* gtk_entry_get_layout (GtkEntry* entry)
 */
-(PangoLayout *)getLayout;

/**
 * Forwards message to:
 * void gtk_entry_get_layout_offsets (GtkEntry* entry, gint* x, gint* y)
 */
-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y;

/**
 * Forwards message to:
 * void gtk_entry_set_alignment (GtkEntry* entry, gfloat xalign)
 */
-(void)setAlignment:(NSNumber *)xalign;

/**
 * Forwards message to:
 * gfloat gtk_entry_get_alignment (GtkEntry* entry)
 */
-(NSNumber *)getAlignment;

/**
 * Forwards message to:
 * void gtk_entry_set_completion (GtkEntry* entry, GtkEntryCompletion* completion)
 */
-(void)setCompletion:(GtkEntryCompletion *)completion;

/**
 * Forwards message to:
 * GtkEntryCompletion* gtk_entry_get_completion (GtkEntry* entry)
 */
-(GtkEntryCompletion *)getCompletion;

/**
 * Forwards message to:
 * gint gtk_entry_layout_index_to_text_index (GtkEntry* entry, gint layout_index)
 */
-(NSNumber *)layoutIndexToTextIndex:(NSNumber *)layoutIndex;

/**
 * Forwards message to:
 * gint gtk_entry_text_index_to_layout_index (GtkEntry* entry, gint text_index)
 */
-(NSNumber *)textIndexToLayoutIndex:(NSNumber *)textIndex;

/**
 * Forwards message to:
 * void gtk_entry_set_cursor_hadjustment (GtkEntry* entry, GtkAdjustment* adjustment)
 */
-(void)setCursorHadjustment:(GtkAdjustment *)adjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_entry_get_cursor_hadjustment (GtkEntry* entry)
 */
-(GtkAdjustment *)getCursorHadjustment;

/**
 * Forwards message to:
 * void gtk_entry_set_progress_fraction (GtkEntry* entry, gdouble fraction)
 */
-(void)setProgressFraction:(NSNumber *)fraction;

/**
 * Forwards message to:
 * gdouble gtk_entry_get_progress_fraction (GtkEntry* entry)
 */
-(NSNumber *)getProgressFraction;

/**
 * Forwards message to:
 * void gtk_entry_set_progress_pulse_step (GtkEntry* entry, gdouble fraction)
 */
-(void)setProgressPulseStep:(NSNumber *)fraction;

/**
 * Forwards message to:
 * gdouble gtk_entry_get_progress_pulse_step (GtkEntry* entry)
 */
-(NSNumber *)getProgressPulseStep;

/**
 * Forwards message to:
 * void gtk_entry_progress_pulse (GtkEntry* entry)
 */
-(void)progressPulse;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_from_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos, GdkPixbuf* pixbuf)
 */
-(void)setIconFromPixbufWithIconPos:(GtkEntryIconPosition)iconPos andPixbuf:(GdkPixbuf *)pixbuf;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_from_stock (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* stock_id)
 */
-(void)setIconFromStockWithIconPos:(GtkEntryIconPosition)iconPos andStockId:(NSString *)stockId;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_from_icon_name (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* icon_name)
 */
-(void)setIconFromIconNameWithIconPos:(GtkEntryIconPosition)iconPos andIconName:(NSString *)iconName;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_from_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos, GIcon* icon)
 */
-(void)setIconFromGiconWithIconPos:(GtkEntryIconPosition)iconPos andIcon:(GIcon *)icon;

/**
 * Forwards message to:
 * GtkImageType gtk_entry_get_icon_storage_type (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(GtkImageType)getIconStorageType:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * GdkPixbuf* gtk_entry_get_icon_pixbuf (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(GdkPixbuf *)getIconPixbuf:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * const gchar * gtk_entry_get_icon_stock (GtkEntry *entry, GtkEntryIconPosition icon_pos);
 */
-(NSString *)getIconStock:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * const gchar * gtk_entry_get_icon_name (GtkEntry *entry, GtkEntryIconPosition icon_pos);
 */
-(NSString *)getIconName:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * GIcon* gtk_entry_get_icon_gicon (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(GIcon *)getIconGicon:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean activatable)
 */
-(void)setIconActivatableWithIconPos:(GtkEntryIconPosition)iconPos andActivatable:(BOOL)activatable;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_icon_activatable (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(BOOL)getIconActivatable:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos, gboolean sensitive)
 */
-(void)setIconSensitiveWithIconPos:(GtkEntryIconPosition)iconPos andSensitive:(BOOL)sensitive;

/**
 * Forwards message to:
 * gboolean gtk_entry_get_icon_sensitive (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(BOOL)getIconSensitive:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * gint gtk_entry_get_icon_at_pos (GtkEntry* entry, gint x, gint y)
 */
-(NSNumber *)getIconAtPosWithX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip)
 */
-(void)setIconTooltipTextWithIconPos:(GtkEntryIconPosition)iconPos andTooltip:(NSString *)tooltip;

/**
 * Forwards message to:
 * gchar* gtk_entry_get_icon_tooltip_text (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(NSString *)getIconTooltipText:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos, const gchar* tooltip)
 */
-(void)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition)iconPos andTooltip:(NSString *)tooltip;

/**
 * Forwards message to:
 * gchar* gtk_entry_get_icon_tooltip_markup (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(NSString *)getIconTooltipMarkup:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * void gtk_entry_set_icon_drag_source (GtkEntry* entry, GtkEntryIconPosition icon_pos, GtkTargetList* target_list, GdkDragAction actions)
 */
-(void)setIconDragSourceWithIconPos:(GtkEntryIconPosition)iconPos andTargetList:(GtkTargetList *)targetList andActions:(GdkDragAction)actions;

/**
 * Forwards message to:
 * gint gtk_entry_get_current_icon_drag_source (GtkEntry* entry)
 */
-(NSNumber *)getCurrentIconDragSource;

/**
 * Forwards message to:
 * GdkWindow* gtk_entry_get_icon_window (GtkEntry* entry, GtkEntryIconPosition icon_pos)
 */
-(GdkWindow *)getIconWindow:(GtkEntryIconPosition)iconPos;

/**
 * Forwards message to:
 * gboolean gtk_entry_im_context_filter_keypress (GtkEntry* entry, GdkEventKey* event)
 */
-(BOOL)imContextFilterKeypress:(GdkEventKey *)event;

/**
 * Forwards message to:
 * void gtk_entry_reset_im_context (GtkEntry* entry)
 */
-(void)resetImContext;

/**
 * Forwards message to:
 * void gtk_entry_append_text (GtkEntry* entry, const gchar* text)
 */
-(void)appendText:(NSString *)text;

/**
 * Forwards message to:
 * void gtk_entry_prepend_text (GtkEntry* entry, const gchar* text)
 */
-(void)prependText:(NSString *)text;

/**
 * Forwards message to:
 * void gtk_entry_set_position (GtkEntry* entry, gint position)
 */
-(void)setPosition:(NSNumber *)position;

/**
 * Forwards message to:
 * void gtk_entry_select_region (GtkEntry* entry, gint start, gint end)
 */
-(void)selectRegionWithStart:(NSNumber *)start andEnd:(NSNumber *)end;

/**
 * Forwards message to:
 * void gtk_entry_set_editable (GtkEntry* entry, gboolean editable)
 */
-(void)setEditable:(BOOL)editable;

@end
