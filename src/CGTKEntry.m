/*
 * CGTKEntry.m
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

#import "CGTKEntry.h"

@implementation CGTKEntry

-(GtkEntry *)ENTRY
{
	return GTK_ENTRY([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_entry_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithBuffer:(GtkEntryBuffer *)buffer
{
	self = [super initWithGtkWidget:gtk_entry_new_with_buffer (buffer) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(GtkEntryBuffer *)getBuffer
{
	return gtk_entry_get_buffer ([self ENTRY]);
}

-(void)setBuffer:(GtkEntryBuffer *)buffer
{
	gtk_entry_set_buffer ([self ENTRY], buffer);
}

-(GdkWindow *)getTextWindow
{
	return gtk_entry_get_text_window ([self ENTRY]);
}

-(void)setVisibility:(BOOL)visible
{
	gtk_entry_set_visibility ([self ENTRY], [CGTK getGboolean:visible]);
}

-(BOOL)getVisibility
{
	return [CGTK getBOOL:gtk_entry_get_visibility ([self ENTRY])];
}

-(void)setInvisibleChar:(NSString *)ch
{
	gunichar* uchar;
	uchar = g_utf8_to_ucs4_fast([ch UTF8String], -1, NULL);
	gtk_entry_set_invisible_char ([self ENTRY], *uchar);
	g_free(uchar);
}

-(NSString *)getInvisibleChar
{
	gunichar uchar;
	uchar = gtk_entry_get_invisible_char ([self ENTRY]);
	return [NSString stringWithUTF8String:g_ucs4_to_utf8(&uchar, -1, NULL, NULL, NULL)];
}

-(void)unsetInvisibleChar
{
	gtk_entry_unset_invisible_char ([self ENTRY]);
}

-(void)setHasFrame:(BOOL)setting
{
	gtk_entry_set_has_frame ([self ENTRY], [CGTK getGboolean:setting]);
}

-(BOOL)getHasFrame
{
	return [CGTK getBOOL:gtk_entry_get_has_frame ([self ENTRY])];
}

-(const GtkBorder *)getInnerBorder
{
	return gtk_entry_get_inner_border([self ENTRY]);
}

-(void)setInnerBorder:(const GtkBorder *)border
{
	gtk_entry_set_inner_border ([self ENTRY], border);
}

-(void)setOverwriteMode:(BOOL)overwrite
{
	gtk_entry_set_overwrite_mode ([self ENTRY], [CGTK getGboolean:overwrite]);
}

-(BOOL)getOverwriteMode
{
	return [CGTK getBOOL:gtk_entry_get_overwrite_mode ([self ENTRY])];
}

-(void)setMaxLength:(NSNumber *)max
{
	gtk_entry_set_max_length ([self ENTRY], [max intValue]);
}

-(NSNumber *)getMaxLength
{
	return [NSNumber numberWithInt:gtk_entry_get_max_length ([self ENTRY])];
}

-(NSNumber *)getTextLength
{
	return [NSNumber numberWithUnsignedInt:gtk_entry_get_text_length ([self ENTRY])];
}

-(void)setActivatesDefault:(BOOL)setting
{
	gtk_entry_set_activates_default ([self ENTRY], [CGTK getGboolean:setting]);
}

-(BOOL)getActivatesDefault
{
	return [CGTK getBOOL:gtk_entry_get_activates_default ([self ENTRY])];
}

-(void)setWidthChars:(NSNumber *)nChars
{
	gtk_entry_set_width_chars ([self ENTRY], [nChars intValue]);
}

-(NSNumber *)getWidthChars
{
	return [NSNumber numberWithInt:gtk_entry_get_width_chars ([self ENTRY])];
}

-(NSString *)getText
{
	return [NSString stringWithUTF8String:gtk_entry_get_text ([self ENTRY])];
}

-(void)setText:(NSString *)text
{
	gtk_entry_set_text ([self ENTRY], [text UTF8String]);
}

-(PangoLayout *)getLayout
{
	return gtk_entry_get_layout ([self ENTRY]);
}

-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y
{
	gint gX;
	gint gY;
	
	gtk_entry_get_layout_offsets ([self ENTRY], &gX, &gY);
	
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
}

-(void)setAlignment:(NSNumber *)xalign
{
	gtk_entry_set_alignment ([self ENTRY], [xalign floatValue]);
}

-(NSNumber *)getAlignment
{
	return [NSNumber numberWithFloat:gtk_entry_get_alignment ([self ENTRY])];
}

-(void)setCompletion:(GtkEntryCompletion *)completion
{
	gtk_entry_set_completion ([self ENTRY], completion);
}

-(GtkEntryCompletion *)getCompletion
{
	return gtk_entry_get_completion ([self ENTRY]);
}

-(NSNumber *)layoutIndexToTextIndex:(NSNumber *)layoutIndex
{
	return [NSNumber numberWithInt:gtk_entry_layout_index_to_text_index ([self ENTRY], [layoutIndex intValue])];
}

-(NSNumber *)textIndexToLayoutIndex:(NSNumber *)textIndex
{
	return [NSNumber numberWithInt:gtk_entry_text_index_to_layout_index ([self ENTRY], [textIndex intValue])];
}

-(void)setCursorHadjustment:(GtkAdjustment *)adjustment
{
	gtk_entry_set_cursor_hadjustment ([self ENTRY], adjustment);
}

-(GtkAdjustment *)getCursorHadjustment
{
	return gtk_entry_get_cursor_hadjustment ([self ENTRY]);
}

-(void)setProgressFraction:(NSNumber *)fraction
{
	gtk_entry_set_progress_fraction ([self ENTRY], [fraction doubleValue]);
}

-(NSNumber *)getProgressFraction
{
	return [NSNumber numberWithDouble:gtk_entry_get_progress_fraction ([self ENTRY])];
}

-(void)setProgressPulseStep:(NSNumber *)fraction
{
	gtk_entry_set_progress_pulse_step ([self ENTRY], [fraction doubleValue]);
}

-(NSNumber *)getProgressPulseStep
{
	return [NSNumber numberWithDouble:gtk_entry_get_progress_pulse_step ([self ENTRY])];
}

-(void)progressPulse
{
	gtk_entry_progress_pulse ([self ENTRY]);
}

-(void)setIconFromPixbufWithIconPos:(GtkEntryIconPosition)iconPos andPixbuf:(GdkPixbuf *)pixbuf
{
	gtk_entry_set_icon_from_pixbuf ([self ENTRY], iconPos, pixbuf);
}

-(void)setIconFromStockWithIconPos:(GtkEntryIconPosition)iconPos andStockId:(NSString *)stockId
{
	gtk_entry_set_icon_from_stock ([self ENTRY], iconPos, [stockId UTF8String]);
}

-(void)setIconFromIconNameWithIconPos:(GtkEntryIconPosition)iconPos andIconName:(NSString *)iconName
{
	gtk_entry_set_icon_from_icon_name ([self ENTRY], iconPos, [iconName UTF8String]);
}

-(void)setIconFromGiconWithIconPos:(GtkEntryIconPosition)iconPos andIcon:(GIcon *)icon
{
	gtk_entry_set_icon_from_gicon ([self ENTRY], iconPos, icon);
}

-(GtkImageType)getIconStorageType:(GtkEntryIconPosition)iconPos
{
	return gtk_entry_get_icon_storage_type ([self ENTRY], iconPos);
}

-(GdkPixbuf *)getIconPixbuf:(GtkEntryIconPosition)iconPos
{
	return gtk_entry_get_icon_pixbuf ([self ENTRY], iconPos);
}

-(NSString *)getIconStock:(GtkEntryIconPosition)iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_stock([self ENTRY], iconPos)];
}

-(NSString *)getIconName:(GtkEntryIconPosition)iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_name([self ENTRY], iconPos)];
}

-(GIcon *)getIconGicon:(GtkEntryIconPosition)iconPos
{
	return gtk_entry_get_icon_gicon ([self ENTRY], iconPos);
}

-(void)setIconActivatableWithIconPos:(GtkEntryIconPosition)iconPos andActivatable:(BOOL)activatable
{
	gtk_entry_set_icon_activatable ([self ENTRY], iconPos, [CGTK getGboolean:activatable]);
}

-(BOOL)getIconActivatable:(GtkEntryIconPosition)iconPos
{
	return [CGTK getBOOL:gtk_entry_get_icon_activatable ([self ENTRY], iconPos)];
}

-(void)setIconSensitiveWithIconPos:(GtkEntryIconPosition)iconPos andSensitive:(BOOL)sensitive
{
	gtk_entry_set_icon_sensitive ([self ENTRY], iconPos, [CGTK getGboolean:sensitive]);
}

-(BOOL)getIconSensitive:(GtkEntryIconPosition)iconPos
{
	return [CGTK getBOOL:gtk_entry_get_icon_sensitive ([self ENTRY], iconPos)];
}

-(NSNumber *)getIconAtPosWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return [NSNumber numberWithInt:gtk_entry_get_icon_at_pos ([self ENTRY], [x intValue], [y intValue])];
}

-(void)setIconTooltipTextWithIconPos:(GtkEntryIconPosition)iconPos andTooltip:(NSString *)tooltip
{
	gtk_entry_set_icon_tooltip_text ([self ENTRY], iconPos, [tooltip UTF8String]);
}

-(NSString *)getIconTooltipText:(GtkEntryIconPosition)iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_tooltip_text ([self ENTRY], iconPos)];
}

-(void)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition)iconPos andTooltip:(NSString *)tooltip
{
	gtk_entry_set_icon_tooltip_markup ([self ENTRY], iconPos, [tooltip UTF8String]);
}

-(NSString *)getIconTooltipMarkup:(GtkEntryIconPosition)iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_tooltip_markup ([self ENTRY], iconPos)];
}

-(void)setIconDragSourceWithIconPos:(GtkEntryIconPosition)iconPos andTargetList:(GtkTargetList *)targetList andActions:(GdkDragAction)actions
{
	gtk_entry_set_icon_drag_source ([self ENTRY], iconPos, targetList, actions);
}

-(NSNumber *)getCurrentIconDragSource
{
	return [NSNumber numberWithInt:gtk_entry_get_current_icon_drag_source ([self ENTRY])];
}

-(GdkWindow *)getIconWindow:(GtkEntryIconPosition)iconPos
{
	return gtk_entry_get_icon_window ([self ENTRY], iconPos);
}

-(BOOL)imContextFilterKeypress:(GdkEventKey *)event
{
	return [CGTK getBOOL:gtk_entry_im_context_filter_keypress ([self ENTRY], event)];
}

-(void)resetImContext
{
	gtk_entry_reset_im_context ([self ENTRY]);
}

-(void)appendText:(NSString *)text
{
	void gtk_entry_append_text (GtkEntry* entry, const gchar* text);
}

-(void)prependText:(NSString *)text
{
	void gtk_entry_prepend_text (GtkEntry* entry, const gchar* text);
}

-(void)setPosition:(NSNumber *)position
{
	void gtk_entry_set_position (GtkEntry* entry, gint position);
}

-(void)selectRegionWithStart:(NSNumber *)start andEnd:(NSNumber *)end
{
	void gtk_entry_select_region (GtkEntry* entry, gint start, gint end);
}

-(void)setEditable:(BOOL)editable
{
	void gtk_entry_set_editable (GtkEntry* entry, gboolean editable);
}

@end
