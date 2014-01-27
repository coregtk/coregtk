/*
 * CGTKTextView.m
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

#import "CGTKTextView.h"

@implementation CGTKTextView

-(GtkTextView *)TEXT_VIEW
{
	return GTK_TEXT_VIEW([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_text_view_new ()];

	if(self)
	{

	}

	return self;
}

-(id)initWithBuffer:(GtkTextBuffer *)buffer
{
	self = [super initWithGtkWidget:gtk_text_view_new_with_buffer (buffer)];

	if(self)
	{

	}

	return self;
}

-(void)setBuffer:(GtkTextBuffer *)buffer
{
	gtk_text_view_set_buffer ([self TEXT_VIEW], buffer);
}

-(GtkTextBuffer *)getBuffer
{
	return gtk_text_view_get_buffer ([self TEXT_VIEW]);
}

-(BOOL)scrollToIterWithIter:(GtkTextIter *)iter andWithinMargin:(NSNumber *)withinMargin andUseAlign:(BOOL)useAlign andXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign
{
	return [CGTK getBOOL:gtk_text_view_scroll_to_iter ([self TEXT_VIEW], iter, [withinMargin doubleValue], [CGTK getGboolean:useAlign], [xalign doubleValue], [yalign doubleValue])];
}

-(void)scrollToMarkWithMark:(GtkTextMark *)mark andWithinMargin:(NSNumber *)withinMargin andUseAlign:(BOOL)useAlign andXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign
{
	gtk_text_view_scroll_to_mark ([self TEXT_VIEW], mark, [withinMargin doubleValue], [CGTK getGboolean:useAlign], [xalign doubleValue], [yalign doubleValue]);
}

-(void)scrollMarkOnscreen:(GtkTextMark *)mark
{
	gtk_text_view_scroll_mark_onscreen ([self TEXT_VIEW], mark);
}

-(BOOL)moveMarkOnscreen:(GtkTextMark *)mark
{
	return [CGTK getBOOL:gtk_text_view_move_mark_onscreen ([self TEXT_VIEW], mark)];
}

-(BOOL)placeCursorOnscreen
{
	return [CGTK getBOOL:gtk_text_view_place_cursor_onscreen ([self TEXT_VIEW])];
}

-(void)getVisibleRect:(GdkRectangle *)visibleRect
{
	gtk_text_view_get_visible_rect ([self TEXT_VIEW], visibleRect);
}

-(void)setCursorVisible:(BOOL)setting
{
	gtk_text_view_set_cursor_visible ([self TEXT_VIEW], [CGTK getGboolean:setting]);
}

-(BOOL)getCursorVisible
{
	return [CGTK getBOOL:gtk_text_view_get_cursor_visible ([self TEXT_VIEW])];
}

-(void)getIterLocationWithIter:(const GtkTextIter *)iter andLocation:(GdkRectangle *)location
{
	gtk_text_view_get_iter_location ([self TEXT_VIEW], iter, location);
}

-(void)getIterAtLocationWithIter:(GtkTextIter *)iter andX:(NSNumber *)x andY:(NSNumber *)y
{
	gtk_text_view_get_iter_at_location ([self TEXT_VIEW], iter, [x intValue], [y intValue]);
}

-(void)getIterAtPositionWithIter:(GtkTextIter *)iter andTrailing:(NSNumber **)trailing andX:(NSNumber *)x andY:(NSNumber *)y
{
	gint gTrailing;
	
	gtk_text_view_get_iter_at_position ([self TEXT_VIEW], iter, &gTrailing, [x intValue], [y intValue]);
	
	*trailing = [NSNumber numberWithInt:gTrailing];
}

-(void)getLineYrangeWithIter:(const GtkTextIter *)iter andY:(NSNumber **)y andHeight:(NSNumber **)height
{
	gint gY;
	gint gHeight;
	
	gtk_text_view_get_line_yrange ([self TEXT_VIEW], iter, &gY, &gHeight);
	
	*y = [NSNumber numberWithInt:gY];
	*height = [NSNumber numberWithInt:gHeight];
}

-(void)getLineAtYWithTargetIter:(GtkTextIter *)targetIter andY:(NSNumber *)y andLineTop:(NSNumber **)lineTop
{
	gint gLineTop;
	
	gtk_text_view_get_line_at_y ([self TEXT_VIEW], targetIter, [y intValue], &gLineTop);
	
	*lineTop = [NSNumber numberWithInt:gLineTop];
}

-(void)bufferToWindowCoordsWithWin:(GtkTextWindowType)win andBufferX:(NSNumber *)bufferX andBufferY:(NSNumber *)bufferY andWindowX:(NSNumber **)windowX andWindowY:(NSNumber **)windowY
{
	gint gWindowX;
	gint gWindowY;

	gtk_text_view_buffer_to_window_coords ([self TEXT_VIEW], win, [bufferX intValue], [bufferY intValue], &gWindowX, &gWindowY);
	
	*windowX = [NSNumber numberWithInt:gWindowX];
	*windowY = [NSNumber numberWithInt:gWindowY];
}

-(void)windowToBufferCoordsWithWin:(GtkTextWindowType)win andWindowX:(NSNumber *)windowX andWindowY:(NSNumber *)windowY andBufferX:(NSNumber **)bufferX andBufferY:(NSNumber **)bufferY
{
	gint gBufferX;
	gint gBufferY;

	gtk_text_view_window_to_buffer_coords ([self TEXT_VIEW], win, [windowX intValue], [windowY intValue], &gBufferX, &gBufferY);
	
	*bufferX = [NSNumber numberWithInt:gBufferX];
	*bufferY = [NSNumber numberWithInt:gBufferY];
}

-(GtkAdjustment *)getHadjustment
{
	return gtk_text_view_get_hadjustment ([self TEXT_VIEW]);
}

-(GtkAdjustment *)getVadjustment
{
	return gtk_text_view_get_vadjustment ([self TEXT_VIEW]);
}

-(GdkWindow *)getWindow:(GtkTextWindowType)win
{
	return gtk_text_view_get_window ([self TEXT_VIEW], win);
}

-(GtkTextWindowType)getWindowType:(GdkWindow *)window
{
	return gtk_text_view_get_window_type ([self TEXT_VIEW], window);
}

-(void)setBorderWindowSizeWithType:(GtkTextWindowType)type andSize:(NSNumber *)size
{
	gtk_text_view_set_border_window_size ([self TEXT_VIEW], type, [size intValue]);
}

-(NSNumber *)getBorderWindowSize:(GtkTextWindowType)type
{
	return [NSNumber numberWithInt:gtk_text_view_get_border_window_size ([self TEXT_VIEW], type)];
}

-(BOOL)forwardDisplayLine:(GtkTextIter *)iter
{
	return [CGTK getBOOL:gtk_text_view_forward_display_line ([self TEXT_VIEW], iter)];
}

-(BOOL)backwardDisplayLine:(GtkTextIter *)iter
{
	return [CGTK getBOOL:gtk_text_view_backward_display_line ([self TEXT_VIEW], iter)];
}

-(BOOL)forwardDisplayLineEnd:(GtkTextIter *)iter
{
	return [CGTK getBOOL:gtk_text_view_forward_display_line_end ([self TEXT_VIEW], iter)];
}

-(BOOL)backwardDisplayLineStart:(GtkTextIter *)iter
{
	return [CGTK getBOOL:gtk_text_view_backward_display_line_start ([self TEXT_VIEW], iter)];
}

-(BOOL)startsDisplayLine:(const GtkTextIter *)iter
{
	return [CGTK getBOOL:gtk_text_view_starts_display_line ([self TEXT_VIEW], iter)];
}

-(BOOL)moveVisuallyWithIter:(GtkTextIter *)iter andCount:(NSNumber *)count
{
	return [CGTK getBOOL:gtk_text_view_move_visually ([self TEXT_VIEW], iter, [count intValue])];
}

-(BOOL)imContextFilterKeypress:(GdkEventKey *)event
{
	return [CGTK getBOOL:gtk_text_view_im_context_filter_keypress ([self TEXT_VIEW], event)];
}

-(void)resetImContext
{
	gtk_text_view_reset_im_context ([self TEXT_VIEW]);
}

-(void)addChildAtAnchorWithChild:(CGTKWidget *)child andAnchor:(GtkTextChildAnchor *)anchor
{
	gtk_text_view_add_child_at_anchor ([self TEXT_VIEW], [child WIDGET], anchor);
}

-(void)addChildInWindowWithChild:(CGTKWidget *)child andWhichWindow:(GtkTextWindowType)whichWindow andXpos:(NSNumber *)xpos andYpos:(NSNumber *)ypos
{
	gtk_text_view_add_child_in_window ([self TEXT_VIEW], [child WIDGET], whichWindow, [xpos intValue], [ypos intValue]);
}

-(void)moveChildWithChild:(CGTKWidget *)child andXpos:(NSNumber *)xpos andYpos:(NSNumber *)ypos
{
	gtk_text_view_move_child ([self TEXT_VIEW], [child WIDGET], [xpos intValue], [ypos intValue]);
}

-(void)setWrapMode:(GtkWrapMode)wrapMode
{
	gtk_text_view_set_wrap_mode ([self TEXT_VIEW], wrapMode);
}

-(GtkWrapMode)getWrapMode
{
	return gtk_text_view_get_wrap_mode ([self TEXT_VIEW]);
}

-(void)setEditable:(BOOL)setting
{
	gtk_text_view_set_editable ([self TEXT_VIEW], [CGTK getGboolean:setting]);
}

-(BOOL)getEditable
{
	return [CGTK getBOOL:gtk_text_view_get_editable ([self TEXT_VIEW])];
}

-(void)setOverwrite:(BOOL)overwrite
{
	gtk_text_view_set_overwrite ([self TEXT_VIEW], [CGTK getGboolean:overwrite]);
}

-(BOOL)getOverwrite
{
	return [CGTK getBOOL:gtk_text_view_get_overwrite ([self TEXT_VIEW])];
}

-(void)setAcceptsTab:(BOOL)acceptsTab
{
	gtk_text_view_set_accepts_tab ([self TEXT_VIEW], [CGTK getGboolean:acceptsTab]);
}

-(BOOL)getAcceptsTab
{
	return [CGTK getBOOL:gtk_text_view_get_accepts_tab ([self TEXT_VIEW])];
}

-(void)setPixelsAboveLines:(NSNumber *)pixelsAboveLines
{
	gtk_text_view_set_pixels_above_lines ([self TEXT_VIEW], [pixelsAboveLines intValue]);
}

-(NSNumber *)getPixelsAboveLines
{
	return [NSNumber numberWithInt:gtk_text_view_get_pixels_above_lines ([self TEXT_VIEW])];
}

-(void)setPixelsBelowLines:(NSNumber *)pixelsBelowLines
{
	gtk_text_view_set_pixels_below_lines ([self TEXT_VIEW], [pixelsBelowLines intValue]);
}

-(NSNumber *)getPixelsBelowLines
{
	return [NSNumber numberWithInt:gtk_text_view_get_pixels_below_lines ([self TEXT_VIEW])];
}

-(void)setPixelsInsideWrap:(NSNumber *)pixelsInsideWrap
{
	gtk_text_view_set_pixels_inside_wrap ([self TEXT_VIEW], [pixelsInsideWrap intValue]);
}

-(NSNumber *)getPixelsInsideWrap
{
	return [NSNumber numberWithInt:gtk_text_view_get_pixels_inside_wrap ([self TEXT_VIEW])];
}

-(void)setJustification:(GtkJustification)justification
{
	gtk_text_view_set_justification ([self TEXT_VIEW], justification);
}

-(GtkJustification)getJustification
{
	return gtk_text_view_get_justification ([self TEXT_VIEW]);
}

-(void)setLeftMargin:(NSNumber *)leftMargin
{
	gtk_text_view_set_left_margin ([self TEXT_VIEW], [leftMargin intValue]);
}

-(NSNumber *)getLeftMargin
{
	return [NSNumber numberWithInt:gtk_text_view_get_left_margin ([self TEXT_VIEW])];
}

-(void)setRightMargin:(NSNumber *)rightMargin
{
	gtk_text_view_set_right_margin ([self TEXT_VIEW], [rightMargin intValue]);
}

-(NSNumber *)getRightMargin
{
	return [NSNumber numberWithInt:gtk_text_view_get_right_margin ([self TEXT_VIEW])];
}

-(void)setIndent:(NSNumber *)indent
{
	gtk_text_view_set_indent ([self TEXT_VIEW], [indent intValue]);
}

-(NSNumber *)getIndent
{
	return [NSNumber numberWithInt:gtk_text_view_get_indent ([self TEXT_VIEW])];
}

-(void)setTabs:(PangoTabArray *)tabs
{
	gtk_text_view_set_tabs ([self TEXT_VIEW], tabs);
}

-(PangoTabArray *)getTabs
{
	return gtk_text_view_get_tabs ([self TEXT_VIEW]);
}

-(GtkTextAttributes *)getDefaultAttributes
{
	return gtk_text_view_get_default_attributes ([self TEXT_VIEW]);
}

@end
