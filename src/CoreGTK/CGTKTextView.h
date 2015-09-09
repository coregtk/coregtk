/*
 * CGTKTextView.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKTextView : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithBuffer:(GtkTextBuffer*) buffer;

/**
 * Methods
 */

-(GtkTextView*)TEXTVIEW;

/**
 * -(void*)addChildAtAnchorWithChild:(CGTKWidget*) child andAnchor:(GtkTextChildAnchor*) anchor;
 *
 * @param child
 * @param anchor
 */
-(void)addChildAtAnchorWithChild:(CGTKWidget*) child andAnchor:(GtkTextChildAnchor*) anchor;

/**
 * -(void*)addChildInWindowWithChild:(CGTKWidget*) child andWhichWindow:(GtkTextWindowType) whichWindow andXpos:(gint) xpos andYpos:(gint) ypos;
 *
 * @param child
 * @param whichWindow
 * @param xpos
 * @param ypos
 */
-(void)addChildInWindowWithChild:(CGTKWidget*) child andWhichWindow:(GtkTextWindowType) whichWindow andXpos:(gint) xpos andYpos:(gint) ypos;

/**
 * -(BOOL*)backwardDisplayLine:(GtkTextIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)backwardDisplayLine:(GtkTextIter*) iter;

/**
 * -(BOOL*)backwardDisplayLineStart:(GtkTextIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)backwardDisplayLineStart:(GtkTextIter*) iter;

/**
 * -(void*)bufferToWindowCoordsWithWin:(GtkTextWindowType) win andBufferX:(gint) bufferX andBufferY:(gint) bufferY andWindowX:(gint*) windowX andWindowY:(gint*) windowY;
 *
 * @param win
 * @param bufferX
 * @param bufferY
 * @param windowX
 * @param windowY
 */
-(void)bufferToWindowCoordsWithWin:(GtkTextWindowType) win andBufferX:(gint) bufferX andBufferY:(gint) bufferY andWindowX:(gint*) windowX andWindowY:(gint*) windowY;

/**
 * -(BOOL*)forwardDisplayLine:(GtkTextIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)forwardDisplayLine:(GtkTextIter*) iter;

/**
 * -(BOOL*)forwardDisplayLineEnd:(GtkTextIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)forwardDisplayLineEnd:(GtkTextIter*) iter;

/**
 * -(BOOL*)getAcceptsTab;
 *
 * @returns BOOL
 */
-(BOOL)getAcceptsTab;

/**
 * -(gint*)getBorderWindowSize:(GtkTextWindowType) type;
 *
 * @param type
 * @returns gint
 */
-(gint)getBorderWindowSize:(GtkTextWindowType) type;

/**
 * -(GtkTextBuffer**)getBuffer;
 *
 * @returns GtkTextBuffer*
 */
-(GtkTextBuffer*)getBuffer;

/**
 * -(void*)getCursorLocationsWithIter:(const GtkTextIter*) iter andStrong:(GdkRectangle*) strong andWeak:(GdkRectangle*) weak;
 *
 * @param iter
 * @param strong
 * @param weak
 */
-(void)getCursorLocationsWithIter:(const GtkTextIter*) iter andStrong:(GdkRectangle*) strong andWeak:(GdkRectangle*) weak;

/**
 * -(BOOL*)getCursorVisible;
 *
 * @returns BOOL
 */
-(BOOL)getCursorVisible;

/**
 * -(GtkTextAttributes**)getDefaultAttributes;
 *
 * @returns GtkTextAttributes*
 */
-(GtkTextAttributes*)getDefaultAttributes;

/**
 * -(BOOL*)getEditable;
 *
 * @returns BOOL
 */
-(BOOL)getEditable;

/**
 * -(GtkAdjustment**)getHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getHadjustment;

/**
 * -(gint*)getIndent;
 *
 * @returns gint
 */
-(gint)getIndent;

/**
 * -(GtkInputHints*)getInputHints;
 *
 * @returns GtkInputHints
 */
-(GtkInputHints)getInputHints;

/**
 * -(GtkInputPurpose*)getInputPurpose;
 *
 * @returns GtkInputPurpose
 */
-(GtkInputPurpose)getInputPurpose;

/**
 * -(void*)getIterAtLocationWithIter:(GtkTextIter*) iter andX:(gint) x andY:(gint) y;
 *
 * @param iter
 * @param x
 * @param y
 */
-(void)getIterAtLocationWithIter:(GtkTextIter*) iter andX:(gint) x andY:(gint) y;

/**
 * -(void*)getIterAtPositionWithIter:(GtkTextIter*) iter andTrailing:(gint*) trailing andX:(gint) x andY:(gint) y;
 *
 * @param iter
 * @param trailing
 * @param x
 * @param y
 */
-(void)getIterAtPositionWithIter:(GtkTextIter*) iter andTrailing:(gint*) trailing andX:(gint) x andY:(gint) y;

/**
 * -(void*)getIterLocationWithIter:(const GtkTextIter*) iter andLocation:(GdkRectangle*) location;
 *
 * @param iter
 * @param location
 */
-(void)getIterLocationWithIter:(const GtkTextIter*) iter andLocation:(GdkRectangle*) location;

/**
 * -(GtkJustification*)getJustification;
 *
 * @returns GtkJustification
 */
-(GtkJustification)getJustification;

/**
 * -(gint*)getLeftMargin;
 *
 * @returns gint
 */
-(gint)getLeftMargin;

/**
 * -(void*)getLineAtYWithTargetIter:(GtkTextIter*) targetIter andY:(gint) y andLineTop:(gint*) lineTop;
 *
 * @param targetIter
 * @param y
 * @param lineTop
 */
-(void)getLineAtYWithTargetIter:(GtkTextIter*) targetIter andY:(gint) y andLineTop:(gint*) lineTop;

/**
 * -(void*)getLineYrangeWithIter:(const GtkTextIter*) iter andY:(gint*) y andHeight:(gint*) height;
 *
 * @param iter
 * @param y
 * @param height
 */
-(void)getLineYrangeWithIter:(const GtkTextIter*) iter andY:(gint*) y andHeight:(gint*) height;

/**
 * -(BOOL*)getOverwrite;
 *
 * @returns BOOL
 */
-(BOOL)getOverwrite;

/**
 * -(gint*)getPixelsAboveLines;
 *
 * @returns gint
 */
-(gint)getPixelsAboveLines;

/**
 * -(gint*)getPixelsBelowLines;
 *
 * @returns gint
 */
-(gint)getPixelsBelowLines;

/**
 * -(gint*)getPixelsInsideWrap;
 *
 * @returns gint
 */
-(gint)getPixelsInsideWrap;

/**
 * -(gint*)getRightMargin;
 *
 * @returns gint
 */
-(gint)getRightMargin;

/**
 * -(PangoTabArray**)getTabs;
 *
 * @returns PangoTabArray*
 */
-(PangoTabArray*)getTabs;

/**
 * -(GtkAdjustment**)getVadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getVadjustment;

/**
 * -(void*)getVisibleRect:(GdkRectangle*) visibleRect;
 *
 * @param visibleRect
 */
-(void)getVisibleRect:(GdkRectangle*) visibleRect;

/**
 * -(GdkWindow**)getWindow:(GtkTextWindowType) win;
 *
 * @param win
 * @returns GdkWindow*
 */
-(GdkWindow*)getWindow:(GtkTextWindowType) win;

/**
 * -(GtkTextWindowType*)getWindowType:(GdkWindow*) window;
 *
 * @param window
 * @returns GtkTextWindowType
 */
-(GtkTextWindowType)getWindowType:(GdkWindow*) window;

/**
 * -(GtkWrapMode*)getWrapMode;
 *
 * @returns GtkWrapMode
 */
-(GtkWrapMode)getWrapMode;

/**
 * -(BOOL*)imContextFilterKeypress:(GdkEventKey*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)imContextFilterKeypress:(GdkEventKey*) event;

/**
 * -(void*)moveChildWithChild:(CGTKWidget*) child andXpos:(gint) xpos andYpos:(gint) ypos;
 *
 * @param child
 * @param xpos
 * @param ypos
 */
-(void)moveChildWithChild:(CGTKWidget*) child andXpos:(gint) xpos andYpos:(gint) ypos;

/**
 * -(BOOL*)moveMarkOnscreen:(GtkTextMark*) mark;
 *
 * @param mark
 * @returns BOOL
 */
-(BOOL)moveMarkOnscreen:(GtkTextMark*) mark;

/**
 * -(BOOL*)moveVisuallyWithIter:(GtkTextIter*) iter andCount:(gint) count;
 *
 * @param iter
 * @param count
 * @returns BOOL
 */
-(BOOL)moveVisuallyWithIter:(GtkTextIter*) iter andCount:(gint) count;

/**
 * -(BOOL*)placeCursorOnscreen;
 *
 * @returns BOOL
 */
-(BOOL)placeCursorOnscreen;

/**
 * -(void*)resetImContext;
 *
 */
-(void)resetImContext;

/**
 * -(void*)scrollMarkOnscreen:(GtkTextMark*) mark;
 *
 * @param mark
 */
-(void)scrollMarkOnscreen:(GtkTextMark*) mark;

/**
 * -(BOOL*)scrollToIterWithIter:(GtkTextIter*) iter andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;
 *
 * @param iter
 * @param withinMargin
 * @param useAlign
 * @param xalign
 * @param yalign
 * @returns BOOL
 */
-(BOOL)scrollToIterWithIter:(GtkTextIter*) iter andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;

/**
 * -(void*)scrollToMarkWithMark:(GtkTextMark*) mark andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;
 *
 * @param mark
 * @param withinMargin
 * @param useAlign
 * @param xalign
 * @param yalign
 */
-(void)scrollToMarkWithMark:(GtkTextMark*) mark andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;

/**
 * -(void*)setAcceptsTab:(BOOL) acceptsTab;
 *
 * @param acceptsTab
 */
-(void)setAcceptsTab:(BOOL) acceptsTab;

/**
 * -(void*)setBorderWindowSizeWithType:(GtkTextWindowType) type andSize:(gint) size;
 *
 * @param type
 * @param size
 */
-(void)setBorderWindowSizeWithType:(GtkTextWindowType) type andSize:(gint) size;

/**
 * -(void*)setBuffer:(GtkTextBuffer*) buffer;
 *
 * @param buffer
 */
-(void)setBuffer:(GtkTextBuffer*) buffer;

/**
 * -(void*)setCursorVisible:(BOOL) setting;
 *
 * @param setting
 */
-(void)setCursorVisible:(BOOL) setting;

/**
 * -(void*)setEditable:(BOOL) setting;
 *
 * @param setting
 */
-(void)setEditable:(BOOL) setting;

/**
 * -(void*)setIndent:(gint) indent;
 *
 * @param indent
 */
-(void)setIndent:(gint) indent;

/**
 * -(void*)setInputHints:(GtkInputHints) hints;
 *
 * @param hints
 */
-(void)setInputHints:(GtkInputHints) hints;

/**
 * -(void*)setInputPurpose:(GtkInputPurpose) purpose;
 *
 * @param purpose
 */
-(void)setInputPurpose:(GtkInputPurpose) purpose;

/**
 * -(void*)setJustification:(GtkJustification) justification;
 *
 * @param justification
 */
-(void)setJustification:(GtkJustification) justification;

/**
 * -(void*)setLeftMargin:(gint) leftMargin;
 *
 * @param leftMargin
 */
-(void)setLeftMargin:(gint) leftMargin;

/**
 * -(void*)setOverwrite:(BOOL) overwrite;
 *
 * @param overwrite
 */
-(void)setOverwrite:(BOOL) overwrite;

/**
 * -(void*)setPixelsAboveLines:(gint) pixelsAboveLines;
 *
 * @param pixelsAboveLines
 */
-(void)setPixelsAboveLines:(gint) pixelsAboveLines;

/**
 * -(void*)setPixelsBelowLines:(gint) pixelsBelowLines;
 *
 * @param pixelsBelowLines
 */
-(void)setPixelsBelowLines:(gint) pixelsBelowLines;

/**
 * -(void*)setPixelsInsideWrap:(gint) pixelsInsideWrap;
 *
 * @param pixelsInsideWrap
 */
-(void)setPixelsInsideWrap:(gint) pixelsInsideWrap;

/**
 * -(void*)setRightMargin:(gint) rightMargin;
 *
 * @param rightMargin
 */
-(void)setRightMargin:(gint) rightMargin;

/**
 * -(void*)setTabs:(PangoTabArray*) tabs;
 *
 * @param tabs
 */
-(void)setTabs:(PangoTabArray*) tabs;

/**
 * -(void*)setWrapMode:(GtkWrapMode) wrapMode;
 *
 * @param wrapMode
 */
-(void)setWrapMode:(GtkWrapMode) wrapMode;

/**
 * -(BOOL*)startsDisplayLine:(const GtkTextIter*) iter;
 *
 * @param iter
 * @returns BOOL
 */
-(BOOL)startsDisplayLine:(const GtkTextIter*) iter;

/**
 * -(void*)windowToBufferCoordsWithWin:(GtkTextWindowType) win andWindowX:(gint) windowX andWindowY:(gint) windowY andBufferX:(gint*) bufferX andBufferY:(gint*) bufferY;
 *
 * @param win
 * @param windowX
 * @param windowY
 * @param bufferX
 * @param bufferY
 */
-(void)windowToBufferCoordsWithWin:(GtkTextWindowType) win andWindowX:(gint) windowX andWindowY:(gint) windowY andBufferX:(gint*) bufferX andBufferY:(gint*) bufferY;

@end
