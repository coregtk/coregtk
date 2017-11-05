/*
 * CGTKEntry.m
 * This file is part of CoreGTK
 *
 * Copyright (C) 2017 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2017. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKEntry.h"

@implementation CGTKEntry

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_entry_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithBuffer:(GtkEntryBuffer*) buffer
{
	self = [super initWithGObject:(GObject *)gtk_entry_new_with_buffer(buffer)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkEntry*)ENTRY
{
	return GTK_ENTRY([self GOBJECT]);
}

-(BOOL)getActivatesDefault
{
	return (gtk_entry_get_activates_default(GTK_ENTRY([self GOBJECT])) ? YES : NO);
}

-(gfloat)getAlignment
{
	return gtk_entry_get_alignment(GTK_ENTRY([self GOBJECT]));
}

-(PangoAttrList*)getAttributes
{
	return gtk_entry_get_attributes(GTK_ENTRY([self GOBJECT]));
}

-(GtkEntryBuffer*)getBuffer
{
	return gtk_entry_get_buffer(GTK_ENTRY([self GOBJECT]));
}

-(GtkEntryCompletion*)getCompletion
{
	return gtk_entry_get_completion(GTK_ENTRY([self GOBJECT]));
}

-(gint)getCurrentIconDragSource
{
	return gtk_entry_get_current_icon_drag_source(GTK_ENTRY([self GOBJECT]));
}

-(GtkAdjustment*)getCursorHadjustment
{
	return gtk_entry_get_cursor_hadjustment(GTK_ENTRY([self GOBJECT]));
}

-(BOOL)getHasFrame
{
	return (gtk_entry_get_has_frame(GTK_ENTRY([self GOBJECT])) ? YES : NO);
}

-(BOOL)getIconActivatable:(GtkEntryIconPosition) iconPos
{
	return (gtk_entry_get_icon_activatable(GTK_ENTRY([self GOBJECT]), iconPos) ? YES : NO);
}

-(void)getIconAreaWithIconPos:(GtkEntryIconPosition) iconPos andIconArea:(GdkRectangle*) iconArea
{
	gtk_entry_get_icon_area(GTK_ENTRY([self GOBJECT]), iconPos, iconArea);
}

-(gint)getIconAtPosWithX:(gint) x andY:(gint) y
{
	return gtk_entry_get_icon_at_pos(GTK_ENTRY([self GOBJECT]), x, y);
}

-(GIcon*)getIconGicon:(GtkEntryIconPosition) iconPos
{
	return gtk_entry_get_icon_gicon(GTK_ENTRY([self GOBJECT]), iconPos);
}

-(NSString*)getIconName:(GtkEntryIconPosition) iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_name(GTK_ENTRY([self GOBJECT]), iconPos)];
}

-(GdkPixbuf*)getIconPixbuf:(GtkEntryIconPosition) iconPos
{
	return gtk_entry_get_icon_pixbuf(GTK_ENTRY([self GOBJECT]), iconPos);
}

-(BOOL)getIconSensitive:(GtkEntryIconPosition) iconPos
{
	return (gtk_entry_get_icon_sensitive(GTK_ENTRY([self GOBJECT]), iconPos) ? YES : NO);
}

-(NSString*)getIconStock:(GtkEntryIconPosition) iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_stock(GTK_ENTRY([self GOBJECT]), iconPos)];
}

-(GtkImageType)getIconStorageType:(GtkEntryIconPosition) iconPos
{
	return gtk_entry_get_icon_storage_type(GTK_ENTRY([self GOBJECT]), iconPos);
}

-(NSString*)getIconTooltipMarkup:(GtkEntryIconPosition) iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_tooltip_markup(GTK_ENTRY([self GOBJECT]), iconPos)];
}

-(NSString*)getIconTooltipText:(GtkEntryIconPosition) iconPos
{
	return [NSString stringWithUTF8String:gtk_entry_get_icon_tooltip_text(GTK_ENTRY([self GOBJECT]), iconPos)];
}

-(const GtkBorder*)getInnerBorder
{
	return gtk_entry_get_inner_border(GTK_ENTRY([self GOBJECT]));
}

-(GtkInputHints)getInputHints
{
	return gtk_entry_get_input_hints(GTK_ENTRY([self GOBJECT]));
}

-(GtkInputPurpose)getInputPurpose
{
	return gtk_entry_get_input_purpose(GTK_ENTRY([self GOBJECT]));
}

-(gunichar)getInvisibleChar
{
	return gtk_entry_get_invisible_char(GTK_ENTRY([self GOBJECT]));
}

-(PangoLayout*)getLayout
{
	return gtk_entry_get_layout(GTK_ENTRY([self GOBJECT]));
}

-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y
{
	gtk_entry_get_layout_offsets(GTK_ENTRY([self GOBJECT]), x, y);
}

-(gint)getMaxLength
{
	return gtk_entry_get_max_length(GTK_ENTRY([self GOBJECT]));
}

-(gint)getMaxWidthChars
{
	return gtk_entry_get_max_width_chars(GTK_ENTRY([self GOBJECT]));
}

-(BOOL)getOverwriteMode
{
	return (gtk_entry_get_overwrite_mode(GTK_ENTRY([self GOBJECT])) ? YES : NO);
}

-(NSString*)getPlaceholderText
{
	return [NSString stringWithUTF8String:gtk_entry_get_placeholder_text(GTK_ENTRY([self GOBJECT]))];
}

-(gdouble)getProgressFraction
{
	return gtk_entry_get_progress_fraction(GTK_ENTRY([self GOBJECT]));
}

-(gdouble)getProgressPulseStep
{
	return gtk_entry_get_progress_pulse_step(GTK_ENTRY([self GOBJECT]));
}

-(PangoTabArray*)getTabs
{
	return gtk_entry_get_tabs(GTK_ENTRY([self GOBJECT]));
}

-(NSString*)getText
{
	return [NSString stringWithUTF8String:gtk_entry_get_text(GTK_ENTRY([self GOBJECT]))];
}

-(void)getTextArea:(GdkRectangle*) textArea
{
	gtk_entry_get_text_area(GTK_ENTRY([self GOBJECT]), textArea);
}

-(guint16)getTextLength
{
	return gtk_entry_get_text_length(GTK_ENTRY([self GOBJECT]));
}

-(BOOL)getVisibility
{
	return (gtk_entry_get_visibility(GTK_ENTRY([self GOBJECT])) ? YES : NO);
}

-(gint)getWidthChars
{
	return gtk_entry_get_width_chars(GTK_ENTRY([self GOBJECT]));
}

-(void)grabFocusWithoutSelecting
{
	gtk_entry_grab_focus_without_selecting(GTK_ENTRY([self GOBJECT]));
}

-(BOOL)imContextFilterKeypress:(GdkEventKey*) event
{
	return (gtk_entry_im_context_filter_keypress(GTK_ENTRY([self GOBJECT]), event) ? YES : NO);
}

-(gint)layoutIndexToTextIndex:(gint) layoutIndex
{
	return gtk_entry_layout_index_to_text_index(GTK_ENTRY([self GOBJECT]), layoutIndex);
}

-(void)progressPulse
{
	gtk_entry_progress_pulse(GTK_ENTRY([self GOBJECT]));
}

-(void)resetImContext
{
	gtk_entry_reset_im_context(GTK_ENTRY([self GOBJECT]));
}

-(void)setActivatesDefault:(BOOL) setting
{
	gtk_entry_set_activates_default(GTK_ENTRY([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setAlignment:(gfloat) xalign
{
	gtk_entry_set_alignment(GTK_ENTRY([self GOBJECT]), xalign);
}

-(void)setAttributes:(PangoAttrList*) attrs
{
	gtk_entry_set_attributes(GTK_ENTRY([self GOBJECT]), attrs);
}

-(void)setBuffer:(GtkEntryBuffer*) buffer
{
	gtk_entry_set_buffer(GTK_ENTRY([self GOBJECT]), buffer);
}

-(void)setCompletion:(GtkEntryCompletion*) completion
{
	gtk_entry_set_completion(GTK_ENTRY([self GOBJECT]), completion);
}

-(void)setCursorHadjustment:(GtkAdjustment*) adjustment
{
	gtk_entry_set_cursor_hadjustment(GTK_ENTRY([self GOBJECT]), adjustment);
}

-(void)setHasFrame:(BOOL) setting
{
	gtk_entry_set_has_frame(GTK_ENTRY([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setIconActivatableWithIconPos:(GtkEntryIconPosition) iconPos andActivatable:(BOOL) activatable
{
	gtk_entry_set_icon_activatable(GTK_ENTRY([self GOBJECT]), iconPos, (activatable ? TRUE : FALSE));
}

-(void)setIconDragSourceWithIconPos:(GtkEntryIconPosition) iconPos andTargetList:(GtkTargetList*) targetList andActions:(GdkDragAction) actions
{
	gtk_entry_set_icon_drag_source(GTK_ENTRY([self GOBJECT]), iconPos, targetList, actions);
}

-(void)setIconFromGiconWithIconPos:(GtkEntryIconPosition) iconPos andIcon:(GIcon*) icon
{
	gtk_entry_set_icon_from_gicon(GTK_ENTRY([self GOBJECT]), iconPos, icon);
}

-(void)setIconFromIconNameWithIconPos:(GtkEntryIconPosition) iconPos andIconName:(NSString*) iconName
{
	gtk_entry_set_icon_from_icon_name(GTK_ENTRY([self GOBJECT]), iconPos, [iconName UTF8String]);
}

-(void)setIconFromPixbufWithIconPos:(GtkEntryIconPosition) iconPos andPixbuf:(GdkPixbuf*) pixbuf
{
	gtk_entry_set_icon_from_pixbuf(GTK_ENTRY([self GOBJECT]), iconPos, pixbuf);
}

-(void)setIconFromStockWithIconPos:(GtkEntryIconPosition) iconPos andStockId:(NSString*) stockId
{
	gtk_entry_set_icon_from_stock(GTK_ENTRY([self GOBJECT]), iconPos, [stockId UTF8String]);
}

-(void)setIconSensitiveWithIconPos:(GtkEntryIconPosition) iconPos andSensitive:(BOOL) sensitive
{
	gtk_entry_set_icon_sensitive(GTK_ENTRY([self GOBJECT]), iconPos, (sensitive ? TRUE : FALSE));
}

-(void)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip
{
	gtk_entry_set_icon_tooltip_markup(GTK_ENTRY([self GOBJECT]), iconPos, [tooltip UTF8String]);
}

-(void)setIconTooltipTextWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip
{
	gtk_entry_set_icon_tooltip_text(GTK_ENTRY([self GOBJECT]), iconPos, [tooltip UTF8String]);
}

-(void)setInnerBorder:(const GtkBorder*) border
{
	gtk_entry_set_inner_border(GTK_ENTRY([self GOBJECT]), border);
}

-(void)setInputHints:(GtkInputHints) hints
{
	gtk_entry_set_input_hints(GTK_ENTRY([self GOBJECT]), hints);
}

-(void)setInputPurpose:(GtkInputPurpose) purpose
{
	gtk_entry_set_input_purpose(GTK_ENTRY([self GOBJECT]), purpose);
}

-(void)setInvisibleChar:(gunichar) ch
{
	gtk_entry_set_invisible_char(GTK_ENTRY([self GOBJECT]), ch);
}

-(void)setMaxLength:(gint) max
{
	gtk_entry_set_max_length(GTK_ENTRY([self GOBJECT]), max);
}

-(void)setMaxWidthChars:(gint) nchars
{
	gtk_entry_set_max_width_chars(GTK_ENTRY([self GOBJECT]), nchars);
}

-(void)setOverwriteMode:(BOOL) overwrite
{
	gtk_entry_set_overwrite_mode(GTK_ENTRY([self GOBJECT]), (overwrite ? TRUE : FALSE));
}

-(void)setPlaceholderText:(NSString*) text
{
	gtk_entry_set_placeholder_text(GTK_ENTRY([self GOBJECT]), [text UTF8String]);
}

-(void)setProgressFraction:(gdouble) fraction
{
	gtk_entry_set_progress_fraction(GTK_ENTRY([self GOBJECT]), fraction);
}

-(void)setProgressPulseStep:(gdouble) fraction
{
	gtk_entry_set_progress_pulse_step(GTK_ENTRY([self GOBJECT]), fraction);
}

-(void)setTabs:(PangoTabArray*) tabs
{
	gtk_entry_set_tabs(GTK_ENTRY([self GOBJECT]), tabs);
}

-(void)setText:(NSString*) text
{
	gtk_entry_set_text(GTK_ENTRY([self GOBJECT]), [text UTF8String]);
}

-(void)setVisibility:(BOOL) visible
{
	gtk_entry_set_visibility(GTK_ENTRY([self GOBJECT]), (visible ? TRUE : FALSE));
}

-(void)setWidthChars:(gint) nchars
{
	gtk_entry_set_width_chars(GTK_ENTRY([self GOBJECT]), nchars);
}

-(gint)textIndexToLayoutIndex:(gint) textIndex
{
	return gtk_entry_text_index_to_layout_index(GTK_ENTRY([self GOBJECT]), textIndex);
}

-(void)unsetInvisibleChar
{
	gtk_entry_unset_invisible_char(GTK_ENTRY([self GOBJECT]));
}


@end