/*
 * CGTKTextView.h
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
#import "CGTKContainer.h"

@interface CGTKTextView : CGTKContainer
{
	
}

/**
 * Returns internal GtkTextView
 */
-(GtkTextView *)TEXT_VIEW;

/**
 * Forwards message to:
 * GtkWidget* gtk_text_view_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * GtkWidget* gtk_text_view_new_with_buffer (GtkTextBuffer* buffer)
 */
-(id)initWithBuffer:(GtkTextBuffer *)buffer;

/**
 * Forwards message to:
 * void gtk_text_view_set_buffer (GtkTextView* text_view, GtkTextBuffer* buffer)
 */
-(void)setBuffer:(GtkTextBuffer *)buffer;

/**
 * Forwards message to:
 * GtkTextBuffer* gtk_text_view_get_buffer (GtkTextView* text_view)
 */
-(GtkTextBuffer *)getBuffer;

/**
 * Forwards message to:
 * gboolean gtk_text_view_scroll_to_iter (GtkTextView* text_view, GtkTextIter* iter, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign)
 */
-(BOOL)scrollToIterWithIter:(GtkTextIter *)iter andWithinMargin:(NSNumber *)withinMargin andUseAlign:(BOOL)useAlign andXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign;

/**
 * Forwards message to:
 * void gtk_text_view_scroll_to_mark (GtkTextView* text_view, GtkTextMark* mark, gdouble within_margin, gboolean use_align, gdouble xalign, gdouble yalign)
 */
-(void)scrollToMarkWithMark:(GtkTextMark *)mark andWithinMargin:(NSNumber *)withinMargin andUseAlign:(BOOL)useAlign andXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign;

/**
 * Forwards message to:
 * void gtk_text_view_scroll_mark_onscreen (GtkTextView* text_view, GtkTextMark* mark)
 */
-(void)scrollMarkOnscreen:(GtkTextMark *)mark;

/**
 * Forwards message to:
 * gboolean gtk_text_view_move_mark_onscreen (GtkTextView* text_view, GtkTextMark* mark)
 */
-(BOOL)moveMarkOnscreen:(GtkTextMark *)mark;

/**
 * Forwards message to:
 * gboolean gtk_text_view_place_cursor_onscreen (GtkTextView* text_view)
 */
-(BOOL)placeCursorOnscreen;

/**
 * Forwards message to:
 * void gtk_text_view_get_visible_rect (GtkTextView* text_view, GdkRectangle* visible_rect)
 */
-(void)getVisibleRect:(GdkRectangle *)visibleRect;

/**
 * Forwards message to:
 * void gtk_text_view_set_cursor_visible (GtkTextView* text_view, gboolean setting)
 */
-(void)setCursorVisible:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_text_view_get_cursor_visible (GtkTextView* text_view)
 */
-(BOOL)getCursorVisible;

/**
 * Forwards message to:
 * void gtk_text_view_get_iter_location (GtkTextView* text_view, const GtkTextIter* iter, GdkRectangle* location)
 */
-(void)getIterLocationWithIter:(const GtkTextIter *)iter andLocation:(GdkRectangle *)location;

/**
 * Forwards message to:
 * void gtk_text_view_get_iter_at_location (GtkTextView* text_view, GtkTextIter* iter, gint x, gint y)
 */
-(void)getIterAtLocationWithIter:(GtkTextIter *)iter andX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_text_view_get_iter_at_position (GtkTextView* text_view, GtkTextIter* iter, gint* trailing, gint x, gint y)
 */
-(void)getIterAtPositionWithIter:(GtkTextIter *)iter andTrailing:(NSNumber **)trailing andX:(NSNumber *)x andY:(NSNumber *)y;

/**
 * Forwards message to:
 * void gtk_text_view_get_line_yrange (GtkTextView* text_view, const GtkTextIter* iter, gint* y, gint* height)
 */
-(void)getLineYrangeWithIter:(const GtkTextIter *)iter andY:(NSNumber **)y andHeight:(NSNumber **)height;

/**
 * Forwards message to:
 * void gtk_text_view_get_line_at_y (GtkTextView* text_view, GtkTextIter* target_iter, gint y, gint* line_top)
 */
-(void)getLineAtYWithTargetIter:(GtkTextIter *)targetIter andY:(NSNumber *)y andLineTop:(NSNumber **)lineTop;

/**
 * Forwards message to:
 * void gtk_text_view_buffer_to_window_coords (GtkTextView* text_view, GtkTextWindowType win, gint buffer_x, gint buffer_y, gint* window_x, gint* window_y)
 */
-(void)bufferToWindowCoordsWithWin:(GtkTextWindowType)win andBufferX:(NSNumber *)bufferX andBufferY:(NSNumber *)bufferY andWindowX:(NSNumber **)windowX andWindowY:(NSNumber **)windowY;

/**
 * Forwards message to:
 * void gtk_text_view_window_to_buffer_coords (GtkTextView* text_view, GtkTextWindowType win, gint window_x, gint window_y, gint* buffer_x, gint* buffer_y)
 */
-(void)windowToBufferCoordsWithWin:(GtkTextWindowType)win andWindowX:(NSNumber *)windowX andWindowY:(NSNumber *)windowY andBufferX:(NSNumber **)bufferX andBufferY:(NSNumber **)bufferY;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_text_view_get_hadjustment (GtkTextView* text_view)
 */
-(GtkAdjustment *)getHadjustment;

/**
 * Forwards message to:
 * GtkAdjustment* gtk_text_view_get_vadjustment (GtkTextView* text_view)
 */
-(GtkAdjustment *)getVadjustment;

/**
 * Forwards message to:
 * GdkWindow* gtk_text_view_get_window (GtkTextView* text_view, GtkTextWindowType win)
 */
-(GdkWindow *)getWindow:(GtkTextWindowType)win;

/**
 * Forwards message to:
 * GtkTextWindowType gtk_text_view_get_window_type (GtkTextView* text_view, GdkWindow* window)
 */
-(GtkTextWindowType)getWindowType:(GdkWindow *)window;

/**
 * Forwards message to:
 * void gtk_text_view_set_border_window_size (GtkTextView* text_view, GtkTextWindowType type, gint size)
 */
-(void)setBorderWindowSizeWithType:(GtkTextWindowType)type andSize:(NSNumber *)size;

/**
 * Forwards message to:
 * gint gtk_text_view_get_border_window_size (GtkTextView* text_view, GtkTextWindowType type)
 */
-(NSNumber *)getBorderWindowSize:(GtkTextWindowType)type;

/**
 * Forwards message to:
 * gboolean gtk_text_view_forward_display_line (GtkTextView* text_view, GtkTextIter* iter)
 */
-(BOOL)forwardDisplayLine:(GtkTextIter *)iter;

/**
 * Forwards message to:
 * gboolean gtk_text_view_backward_display_line (GtkTextView* text_view, GtkTextIter* iter)
 */
-(BOOL)backwardDisplayLine:(GtkTextIter *)iter;

/**
 * Forwards message to:
 * gboolean gtk_text_view_forward_display_line_end (GtkTextView* text_view, GtkTextIter* iter)
 */
-(BOOL)forwardDisplayLineEnd:(GtkTextIter *)iter;

/**
 * Forwards message to:
 * gboolean gtk_text_view_backward_display_line_start (GtkTextView* text_view, GtkTextIter* iter)
 */
-(BOOL)backwardDisplayLineStart:(GtkTextIter *)iter;

/**
 * Forwards message to:
 * gboolean gtk_text_view_starts_display_line (GtkTextView* text_view, const GtkTextIter* iter)
 */
-(BOOL)startsDisplayLine:(const GtkTextIter *)iter;

/**
 * Forwards message to:
 * gboolean gtk_text_view_move_visually (GtkTextView* text_view, GtkTextIter* iter, gint count)
 */
-(BOOL)moveVisuallyWithIter:(GtkTextIter *)iter andCount:(NSNumber *)count;

/**
 * Forwards message to:
 * gboolean gtk_text_view_im_context_filter_keypress (GtkTextView* text_view, GdkEventKey* event)
 */
-(BOOL)imContextFilterKeypress:(GdkEventKey *)event;

/**
 * Forwards message to:
 * void gtk_text_view_reset_im_context (GtkTextView* text_view)
 */
-(void)resetImContext;

/**
 * Forwards message to:
 * void gtk_text_view_add_child_at_anchor (GtkTextView* text_view, GtkWidget* child, GtkTextChildAnchor* anchor)
 */
-(void)addChildAtAnchorWithChild:(CGTKWidget *)child andAnchor:(GtkTextChildAnchor *)anchor;

/**
 * Forwards message to:
 * void gtk_text_view_add_child_in_window (GtkTextView* text_view, GtkWidget* child, GtkTextWindowType which_window,
 */
-(void)addChildInWindowWithChild:(CGTKWidget *)child andWhichWindow:(GtkTextWindowType)whichWindow andXpos:(NSNumber *)xpos andYpos:(NSNumber *)ypos;

/**
 * Forwards message to:
 * void gtk_text_view_move_child (GtkTextView* text_view, GtkWidget* child, 
 */
-(void)moveChildWithChild:(CGTKWidget *)child andXpos:(NSNumber *)xpos andYpos:(NSNumber *)ypos;

/**
 * Forwards message to:
 * void gtk_text_view_set_wrap_mode (GtkTextView* text_view, GtkWrapMode wrap_mode)
 */
-(void)setWrapMode:(GtkWrapMode)wrapMode;

/**
 * Forwards message to:
 * GtkWrapMode gtk_text_view_get_wrap_mode (GtkTextView* text_view)
 */
-(GtkWrapMode)getWrapMode;

/**
 * Forwards message to:
 * void gtk_text_view_set_editable (GtkTextView* text_view, gboolean setting)
 */
-(void)setEditable:(BOOL)setting;

/**
 * Forwards message to:
 * gboolean gtk_text_view_get_editable (GtkTextView* text_view)
 */
-(BOOL)getEditable;

/**
 * Forwards message to:
 * void gtk_text_view_set_overwrite (GtkTextView* text_view, gboolean overwrite)
 */
-(void)setOverwrite:(BOOL)overwrite;

/**
 * Forwards message to:
 * gboolean gtk_text_view_get_overwrite (GtkTextView* text_view)
 */
-(BOOL)getOverwrite;

/**
 * Forwards message to:
 * void gtk_text_view_set_accepts_tab (GtkTextView* text_view, gboolean accepts_tab)
 */
-(void)setAcceptsTab:(BOOL)acceptsTab;

/**
 * Forwards message to:
 * gboolean gtk_text_view_get_accepts_tab (GtkTextView* text_view)
 */
-(BOOL)getAcceptsTab;

/**
 * Forwards message to:
 * void gtk_text_view_set_pixels_above_lines (GtkTextView* text_view, gint pixels_above_lines)
 */
-(void)setPixelsAboveLines:(NSNumber *)pixelsAboveLines;

/**
 * Forwards message to:
 * gint gtk_text_view_get_pixels_above_lines (GtkTextView* text_view)
 */
-(NSNumber *)getPixelsAboveLines;

/**
 * Forwards message to:
 * void gtk_text_view_set_pixels_below_lines (GtkTextView* text_view, gint pixels_below_lines)
 */
-(void)setPixelsBelowLines:(NSNumber *)pixelsBelowLines;

/**
 * Forwards message to:
 * gint gtk_text_view_get_pixels_below_lines (GtkTextView* text_view)
 */
-(NSNumber *)getPixelsBelowLines;

/**
 * Forwards message to:
 * void gtk_text_view_set_pixels_inside_wrap (GtkTextView* text_view, gint pixels_inside_wrap)
 */
-(void)setPixelsInsideWrap:(NSNumber *)pixelsInsideWrap;

/**
 * Forwards message to:
 * gint gtk_text_view_get_pixels_inside_wrap (GtkTextView* text_view)
 */
-(NSNumber *)getPixelsInsideWrap;

/**
 * Forwards message to:
 * void gtk_text_view_set_justification (GtkTextView* text_view, GtkJustification justification)
 */
-(void)setJustification:(GtkJustification)justification;

/**
 * Forwards message to:
 * GtkJustification gtk_text_view_get_justification (GtkTextView* text_view)
 */
-(GtkJustification)getJustification;

/**
 * Forwards message to:
 * void gtk_text_view_set_left_margin (GtkTextView* text_view, gint left_margin)
 */
-(void)setLeftMargin:(NSNumber *)leftMargin;

/**
 * Forwards message to:
 * gint gtk_text_view_get_left_margin (GtkTextView* text_view)
 */
-(NSNumber *)getLeftMargin;

/**
 * Forwards message to:
 * void gtk_text_view_set_right_margin (GtkTextView* text_view, gint right_margin)
 */
-(void)setRightMargin:(NSNumber *)rightMargin;

/**
 * Forwards message to:
 * gint gtk_text_view_get_right_margin (GtkTextView* text_view)
 */
-(NSNumber *)getRightMargin;

/**
 * Forwards message to:
 * void gtk_text_view_set_indent (GtkTextView* text_view, gint indent)
 */
-(void)setIndent:(NSNumber *)indent;

/**
 * Forwards message to:
 * gint gtk_text_view_get_indent (GtkTextView* text_view)
 */
-(NSNumber *)getIndent;

/**
 * Forwards message to:
 * void gtk_text_view_set_tabs (GtkTextView* text_view, PangoTabArray* tabs)
 */
-(void)setTabs:(PangoTabArray *)tabs;

/**
 * Forwards message to:
 * PangoTabArray* gtk_text_view_get_tabs (GtkTextView* text_view)
 */
-(PangoTabArray *)getTabs;

/**
 * Forwards message to:
 * GtkTextAttributes* gtk_text_view_get_default_attributes (GtkTextView* text_view)
 */
-(GtkTextAttributes *)getDefaultAttributes;

@end
