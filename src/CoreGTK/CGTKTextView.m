/*
 * CGTKTextView.m
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
#import "CoreGTK/CGTKTextView.h"

@implementation CGTKTextView

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_text_view_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithBuffer:(GtkTextBuffer*) buffer
{
	self = [super initWithGObject:(GObject *)gtk_text_view_new_with_buffer(buffer)];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkTextView*)TEXTVIEW
{
	return GTK_TEXT_VIEW([self GOBJECT]);
}

-(void)addChildAtAnchorWithChild:(CGTKWidget*) child andAnchor:(GtkTextChildAnchor*) anchor
{
	gtk_text_view_add_child_at_anchor(GTK_TEXT_VIEW([self GOBJECT]), [child WIDGET], anchor);
}

-(void)addChildInWindowWithChild:(CGTKWidget*) child andWhichWindow:(GtkTextWindowType) whichWindow andXpos:(gint) xpos andYpos:(gint) ypos
{
	gtk_text_view_add_child_in_window(GTK_TEXT_VIEW([self GOBJECT]), [child WIDGET], whichWindow, xpos, ypos);
}

-(BOOL)backwardDisplayLine:(GtkTextIter*) iter
{
	return (gtk_text_view_backward_display_line(GTK_TEXT_VIEW([self GOBJECT]), iter) ? YES : NO);
}

-(BOOL)backwardDisplayLineStart:(GtkTextIter*) iter
{
	return (gtk_text_view_backward_display_line_start(GTK_TEXT_VIEW([self GOBJECT]), iter) ? YES : NO);
}

-(void)bufferToWindowCoordsWithWin:(GtkTextWindowType) win andBufferX:(gint) bufferX andBufferY:(gint) bufferY andWindowX:(gint*) windowX andWindowY:(gint*) windowY
{
	gtk_text_view_buffer_to_window_coords(GTK_TEXT_VIEW([self GOBJECT]), win, bufferX, bufferY, windowX, windowY);
}

-(BOOL)forwardDisplayLine:(GtkTextIter*) iter
{
	return (gtk_text_view_forward_display_line(GTK_TEXT_VIEW([self GOBJECT]), iter) ? YES : NO);
}

-(BOOL)forwardDisplayLineEnd:(GtkTextIter*) iter
{
	return (gtk_text_view_forward_display_line_end(GTK_TEXT_VIEW([self GOBJECT]), iter) ? YES : NO);
}

-(BOOL)getAcceptsTab
{
	return (gtk_text_view_get_accepts_tab(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getBorderWindowSize:(GtkTextWindowType) type
{
	return gtk_text_view_get_border_window_size(GTK_TEXT_VIEW([self GOBJECT]), type);
}

-(gint)getBottomMargin
{
	return gtk_text_view_get_bottom_margin(GTK_TEXT_VIEW([self GOBJECT]));
}

-(GtkTextBuffer*)getBuffer
{
	return gtk_text_view_get_buffer(GTK_TEXT_VIEW([self GOBJECT]));
}

-(void)getCursorLocationsWithIter:(const GtkTextIter*) iter andStrong:(GdkRectangle*) strong andWeak:(GdkRectangle*) weak
{
	gtk_text_view_get_cursor_locations(GTK_TEXT_VIEW([self GOBJECT]), iter, strong, weak);
}

-(BOOL)getCursorVisible
{
	return (gtk_text_view_get_cursor_visible(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkTextAttributes*)getDefaultAttributes
{
	return gtk_text_view_get_default_attributes(GTK_TEXT_VIEW([self GOBJECT]));
}

-(BOOL)getEditable
{
	return (gtk_text_view_get_editable(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(GtkAdjustment*)getHadjustment
{
	return gtk_text_view_get_hadjustment(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getIndent
{
	return gtk_text_view_get_indent(GTK_TEXT_VIEW([self GOBJECT]));
}

-(GtkInputHints)getInputHints
{
	return gtk_text_view_get_input_hints(GTK_TEXT_VIEW([self GOBJECT]));
}

-(GtkInputPurpose)getInputPurpose
{
	return gtk_text_view_get_input_purpose(GTK_TEXT_VIEW([self GOBJECT]));
}

-(BOOL)getIterAtLocationWithIter:(GtkTextIter*) iter andX:(gint) x andY:(gint) y
{
	return (gtk_text_view_get_iter_at_location(GTK_TEXT_VIEW([self GOBJECT]), iter, x, y) ? YES : NO);
}

-(BOOL)getIterAtPositionWithIter:(GtkTextIter*) iter andTrailing:(gint*) trailing andX:(gint) x andY:(gint) y
{
	return (gtk_text_view_get_iter_at_position(GTK_TEXT_VIEW([self GOBJECT]), iter, trailing, x, y) ? YES : NO);
}

-(void)getIterLocationWithIter:(const GtkTextIter*) iter andLocation:(GdkRectangle*) location
{
	gtk_text_view_get_iter_location(GTK_TEXT_VIEW([self GOBJECT]), iter, location);
}

-(GtkJustification)getJustification
{
	return gtk_text_view_get_justification(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getLeftMargin
{
	return gtk_text_view_get_left_margin(GTK_TEXT_VIEW([self GOBJECT]));
}

-(void)getLineAtYWithTargetIter:(GtkTextIter*) targetIter andY:(gint) y andLineTop:(gint*) lineTop
{
	gtk_text_view_get_line_at_y(GTK_TEXT_VIEW([self GOBJECT]), targetIter, y, lineTop);
}

-(void)getLineYrangeWithIter:(const GtkTextIter*) iter andY:(gint*) y andHeight:(gint*) height
{
	gtk_text_view_get_line_yrange(GTK_TEXT_VIEW([self GOBJECT]), iter, y, height);
}

-(BOOL)getMonospace
{
	return (gtk_text_view_get_monospace(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(BOOL)getOverwrite
{
	return (gtk_text_view_get_overwrite(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(gint)getPixelsAboveLines
{
	return gtk_text_view_get_pixels_above_lines(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getPixelsBelowLines
{
	return gtk_text_view_get_pixels_below_lines(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getPixelsInsideWrap
{
	return gtk_text_view_get_pixels_inside_wrap(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getRightMargin
{
	return gtk_text_view_get_right_margin(GTK_TEXT_VIEW([self GOBJECT]));
}

-(PangoTabArray*)getTabs
{
	return gtk_text_view_get_tabs(GTK_TEXT_VIEW([self GOBJECT]));
}

-(gint)getTopMargin
{
	return gtk_text_view_get_top_margin(GTK_TEXT_VIEW([self GOBJECT]));
}

-(GtkAdjustment*)getVadjustment
{
	return gtk_text_view_get_vadjustment(GTK_TEXT_VIEW([self GOBJECT]));
}

-(void)getVisibleRect:(GdkRectangle*) visibleRect
{
	gtk_text_view_get_visible_rect(GTK_TEXT_VIEW([self GOBJECT]), visibleRect);
}

-(GdkWindow*)getWindow:(GtkTextWindowType) win
{
	return gtk_text_view_get_window(GTK_TEXT_VIEW([self GOBJECT]), win);
}

-(GtkTextWindowType)getWindowType:(GdkWindow*) window
{
	return gtk_text_view_get_window_type(GTK_TEXT_VIEW([self GOBJECT]), window);
}

-(GtkWrapMode)getWrapMode
{
	return gtk_text_view_get_wrap_mode(GTK_TEXT_VIEW([self GOBJECT]));
}

-(BOOL)imContextFilterKeypress:(GdkEventKey*) event
{
	return (gtk_text_view_im_context_filter_keypress(GTK_TEXT_VIEW([self GOBJECT]), event) ? YES : NO);
}

-(void)moveChildWithChild:(CGTKWidget*) child andXpos:(gint) xpos andYpos:(gint) ypos
{
	gtk_text_view_move_child(GTK_TEXT_VIEW([self GOBJECT]), [child WIDGET], xpos, ypos);
}

-(BOOL)moveMarkOnscreen:(GtkTextMark*) mark
{
	return (gtk_text_view_move_mark_onscreen(GTK_TEXT_VIEW([self GOBJECT]), mark) ? YES : NO);
}

-(BOOL)moveVisuallyWithIter:(GtkTextIter*) iter andCount:(gint) count
{
	return (gtk_text_view_move_visually(GTK_TEXT_VIEW([self GOBJECT]), iter, count) ? YES : NO);
}

-(BOOL)placeCursorOnscreen
{
	return (gtk_text_view_place_cursor_onscreen(GTK_TEXT_VIEW([self GOBJECT])) ? YES : NO);
}

-(void)resetCursorBlink
{
	gtk_text_view_reset_cursor_blink(GTK_TEXT_VIEW([self GOBJECT]));
}

-(void)resetImContext
{
	gtk_text_view_reset_im_context(GTK_TEXT_VIEW([self GOBJECT]));
}

-(void)scrollMarkOnscreen:(GtkTextMark*) mark
{
	gtk_text_view_scroll_mark_onscreen(GTK_TEXT_VIEW([self GOBJECT]), mark);
}

-(BOOL)scrollToIterWithIter:(GtkTextIter*) iter andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign
{
	return (gtk_text_view_scroll_to_iter(GTK_TEXT_VIEW([self GOBJECT]), iter, withinMargin, (useAlign ? TRUE : FALSE), xalign, yalign) ? YES : NO);
}

-(void)scrollToMarkWithMark:(GtkTextMark*) mark andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign
{
	gtk_text_view_scroll_to_mark(GTK_TEXT_VIEW([self GOBJECT]), mark, withinMargin, (useAlign ? TRUE : FALSE), xalign, yalign);
}

-(void)setAcceptsTab:(BOOL) acceptsTab
{
	gtk_text_view_set_accepts_tab(GTK_TEXT_VIEW([self GOBJECT]), (acceptsTab ? TRUE : FALSE));
}

-(void)setBorderWindowSizeWithType:(GtkTextWindowType) type andSize:(gint) size
{
	gtk_text_view_set_border_window_size(GTK_TEXT_VIEW([self GOBJECT]), type, size);
}

-(void)setBottomMargin:(gint) bottomMargin
{
	gtk_text_view_set_bottom_margin(GTK_TEXT_VIEW([self GOBJECT]), bottomMargin);
}

-(void)setBuffer:(GtkTextBuffer*) buffer
{
	gtk_text_view_set_buffer(GTK_TEXT_VIEW([self GOBJECT]), buffer);
}

-(void)setCursorVisible:(BOOL) setting
{
	gtk_text_view_set_cursor_visible(GTK_TEXT_VIEW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setEditable:(BOOL) setting
{
	gtk_text_view_set_editable(GTK_TEXT_VIEW([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setIndent:(gint) indent
{
	gtk_text_view_set_indent(GTK_TEXT_VIEW([self GOBJECT]), indent);
}

-(void)setInputHints:(GtkInputHints) hints
{
	gtk_text_view_set_input_hints(GTK_TEXT_VIEW([self GOBJECT]), hints);
}

-(void)setInputPurpose:(GtkInputPurpose) purpose
{
	gtk_text_view_set_input_purpose(GTK_TEXT_VIEW([self GOBJECT]), purpose);
}

-(void)setJustification:(GtkJustification) justification
{
	gtk_text_view_set_justification(GTK_TEXT_VIEW([self GOBJECT]), justification);
}

-(void)setLeftMargin:(gint) leftMargin
{
	gtk_text_view_set_left_margin(GTK_TEXT_VIEW([self GOBJECT]), leftMargin);
}

-(void)setMonospace:(BOOL) monospace
{
	gtk_text_view_set_monospace(GTK_TEXT_VIEW([self GOBJECT]), (monospace ? TRUE : FALSE));
}

-(void)setOverwrite:(BOOL) overwrite
{
	gtk_text_view_set_overwrite(GTK_TEXT_VIEW([self GOBJECT]), (overwrite ? TRUE : FALSE));
}

-(void)setPixelsAboveLines:(gint) pixelsAboveLines
{
	gtk_text_view_set_pixels_above_lines(GTK_TEXT_VIEW([self GOBJECT]), pixelsAboveLines);
}

-(void)setPixelsBelowLines:(gint) pixelsBelowLines
{
	gtk_text_view_set_pixels_below_lines(GTK_TEXT_VIEW([self GOBJECT]), pixelsBelowLines);
}

-(void)setPixelsInsideWrap:(gint) pixelsInsideWrap
{
	gtk_text_view_set_pixels_inside_wrap(GTK_TEXT_VIEW([self GOBJECT]), pixelsInsideWrap);
}

-(void)setRightMargin:(gint) rightMargin
{
	gtk_text_view_set_right_margin(GTK_TEXT_VIEW([self GOBJECT]), rightMargin);
}

-(void)setTabs:(PangoTabArray*) tabs
{
	gtk_text_view_set_tabs(GTK_TEXT_VIEW([self GOBJECT]), tabs);
}

-(void)setTopMargin:(gint) topMargin
{
	gtk_text_view_set_top_margin(GTK_TEXT_VIEW([self GOBJECT]), topMargin);
}

-(void)setWrapMode:(GtkWrapMode) wrapMode
{
	gtk_text_view_set_wrap_mode(GTK_TEXT_VIEW([self GOBJECT]), wrapMode);
}

-(BOOL)startsDisplayLine:(const GtkTextIter*) iter
{
	return (gtk_text_view_starts_display_line(GTK_TEXT_VIEW([self GOBJECT]), iter) ? YES : NO);
}

-(void)windowToBufferCoordsWithWin:(GtkTextWindowType) win andWindowX:(gint) windowX andWindowY:(gint) windowY andBufferX:(gint*) bufferX andBufferY:(gint*) bufferY
{
	gtk_text_view_window_to_buffer_coords(GTK_TEXT_VIEW([self GOBJECT]), win, windowX, windowY, bufferX, bufferY);
}


@end