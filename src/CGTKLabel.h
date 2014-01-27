/*
 * CGTKLabel.h
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
#import "CGTKMisc.h"

@interface CGTKLabel : CGTKMisc
{
	
}

/**
 * Returns internal GtkLabel
 */
-(GtkLabel *)LABEL;

/**
 * Forwards message to:
 * GtkWidget* gtk_label_new (const gchar* str)
 */
-(id)init:(NSString *)str;

/**
 * Forwards message to:
 * GtkWidget* gtk_label_new_with_mnemonic (const gchar* str)
 */
-(id)initWithMnemonic:(NSString *)str;

/**
 * Forwards message to:
 * const gchar* gtk_label_get_text (GtkLabel* label)
 */
-(NSString *)getText;

/**
 * Forwards message to:
 * void gtk_label_set_text (GtkLabel* label, const gchar* str)
 */
-(void)setText:(NSString *)str;

/**
 * Forwards message to:
 * void gtk_label_set_attributes (GtkLabel* label, PangoAttrList* attrs)
 */
-(void)setAttributes:(PangoAttrList *)attrs;

/**
 * Forwards message to:
 * PangoAttrList* gtk_label_get_attributes (GtkLabel* label)
 */
-(PangoAttrList *)getAttributes;

/**
 * Forwards message to:
 * void gtk_label_set_label (GtkLabel* label, const gchar* str)
 */
-(void)setLabel:(NSString *)str;

/**
 * Forwards message to:
 * void gtk_label_set_markup (GtkLabel* label, const gchar* str)
 */
-(void)setMarkup:(NSString *)str;

/**
 * Forwards message to:
 * void gtk_label_set_use_markup (GtkLabel* label, gboolean setting)
 */
-(void)setUseMarkup:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_label_get_use_markup (GtkLabel* label)
 */
-(BOOL)getUseMarkup;

/**
 * Forwards message to:
 * void gtk_label_set_use_underline (GtkLabel* label, gboolean setting)
 */
-(void)setUseUnderline:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_label_get_use_underline (GtkLabel* label)
 */
-(BOOL)getUseUnderline;

/**
 * Forwards message to:
 * void gtk_label_set_markup_with_mnemonic (GtkLabel* label, const gchar* str)
 */
-(void)setMarkupWithMnemonic:(NSString *)str;

/**
 * Forwards message to:
 * guint gtk_label_get_mnemonic_keyval (GtkLabel* label)
 */
-(NSNumber *)getMnemonicKeyval;

/**
 * Forwards message to:
 * void gtk_label_set_mnemonic_widget (GtkLabel* label, GtkWidget* widget)
 */
-(void)setMnemonicWidget:(CGTKWidget *)widget;

/**
 * Forwards message to:
 * GtkWidget* gtk_label_get_mnemonic_widget (GtkLabel* label)
 */
-(CGTKWidget *)getMnemonicWidget;

/**
 * Forwards message to:
 * void gtk_label_set_text_with_mnemonic (GtkLabel* label, const gchar* str)
 */
-(void)setTextWithMnemonic:(NSString *)str;

/**
 * Forwards message to:
 * void gtk_label_set_justify (GtkLabel* label, GtkJustification jtype)
 */
-(void)setJustify:(GtkJustification)jtype;

/**
 * Forwards message to:
 * GtkJustification gtk_label_get_justify (GtkLabel* label)
 */
-(GtkJustification)getJustify;

/**
 * Forwards message to:
 * void gtk_label_set_ellipsize (GtkLabel* label, PangoEllipsizeMode mode)
 */
-(void)setEllipsize:(PangoEllipsizeMode)mode;

/**
 * Forwards message to:
 * PangoEllipsizeMode gtk_label_get_ellipsize (GtkLabel* label)
 */
-(PangoEllipsizeMode)getEllipsize;

/**
 * Forwards message to:
 * void gtk_label_set_width_chars (GtkLabel* label, gint n_chars)
 */
-(void)setWidthChars:(NSNumber *)nChars;

/**
 * Forwards message to:
 * gint gtk_label_get_width_chars (GtkLabel* label)
 */
-(NSNumber *)getWidthChars;

/**
 * Forwards message to:
 * void gtk_label_set_max_width_chars (GtkLabel* label, gint n_chars)
 */
-(void)setMaxWidthChars:(NSNumber *)nChars;

/**
 * Forwards message to:
 * gint gtk_label_get_max_width_chars (GtkLabel* label)
 */
-(NSNumber *)getMaxWidthChars;

/**
 * Forwards message to:
 * void gtk_label_set_pattern (GtkLabel* label, const gchar* pattern)
 */
-(void)setPattern:(NSString *)pattern;

/**
 * Forwards message to:
 * void gtk_label_set_line_wrap (GtkLabel* label, gboolean wrap)
 */
-(void)setLineWrap:(BOOL)wrap;

/**
 * Forwards message to:
 * gboolean gtk_label_get_line_wrap (GtkLabel* label)
 */
-(BOOL)getLineWrap;

/**
 * Forwards message to:
 * void gtk_label_set_line_wrap_mode (GtkLabel* label, PangoWrapMode wrap_mode)
 */
-(void)setLineWrapMode:(PangoWrapMode)wrapMode;

/**
 * Forwards message to:
 * PangoWrapMode gtk_label_get_line_wrap_mode (GtkLabel* label)
 */
-(PangoWrapMode)getLineWrapMode;

/**
 * Forwards message to:
 * void gtk_label_set_selectable (GtkLabel* label, gboolean setting)
 */
-(void)setSelectable:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_label_get_selectable (GtkLabel* label)
 */
-(BOOL)getSelectable;

/**
 * Forwards message to:
 * void gtk_label_set_angle (GtkLabel* label, gdouble angle)
 */
-(void)setAngle:(NSNumber *)angle;

/**
 * Forwards message to:
 * gdouble gtk_label_get_angle (GtkLabel* label)
 */
-(NSNumber *)getAngle;

/**
 * Forwards message to:
 * void gtk_label_select_region (GtkLabel* label, gint start_offset, gint end_offset)
 */
-(void)selectRegionWithStartOffset:(NSNumber *)startOffset andEndOffset:(NSNumber *)endOffset;

/**
 * Forwards message to:
 * gboolean gtk_label_get_selection_bounds (GtkLabel* label, gint* start, gint* end)
 */
-(BOOL)getSelectionBoundsWithStart:(NSNumber **)start andEnd:(NSNumber **)end;

/**
 * Forwards message to:
 * PangoLayout* gtk_label_get_layout (GtkLabel* label)
 */
-(PangoLayout *)getLayout;

/**
 * Forwards message to:
 * void gtk_label_get_layout_offsets (GtkLabel* label, gint* x, gint* y)
 */
-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y;

/**
 * Forwards message to:
 * void gtk_label_set_single_line_mode (GtkLabel* label, gboolean single_line_mode)
 */
-(void)setSingleLineMode:(BOOL)singleLineMode;

/**
 * Forwards message to:
 * gboolean gtk_label_get_single_line_mode (GtkLabel* label)
 */
-(BOOL)getSingleLineMode;

/**
 * Forwards message to:
 * void gtk_label_set_track_visited_links (GtkLabel* label, gboolean track_links)
 */
-(void)setTrackVisitedLinks:(BOOL)trackLinks;

/**
 * Forwards message to:
 * gboolean gtk_label_get_track_visited_links (GtkLabel* label)
 */
-(BOOL)getTrackVisitedLinks;

/**
 * Forwards message to:
 * const gchar* gtk_label_get_label (GtkLabel* label)
 */
-(NSString *)getLabel;

/**
 * Forwards message to:
 * const gchar * gtk_label_get_current_uri (GtkLabel *label);
 */
-(NSString *)getCurrentUri;

@end
