
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
-(void)addChildAtAnchorWithChild:(CGTKWidget*) child andAnchor:(GtkTextChildAnchor*) anchor;
-(void)addChildInWindowWithChild:(CGTKWidget*) child andWhichWindow:(GtkTextWindowType) whichWindow andXpos:(gint) xpos andYpos:(gint) ypos;
-(BOOL)backwardDisplayLine:(GtkTextIter*) iter;
-(BOOL)backwardDisplayLineStart:(GtkTextIter*) iter;
-(void)bufferToWindowCoordsWithWin:(GtkTextWindowType) win andBufferX:(gint) bufferX andBufferY:(gint) bufferY andWindowX:(gint*) windowX andWindowY:(gint*) windowY;
-(BOOL)forwardDisplayLine:(GtkTextIter*) iter;
-(BOOL)forwardDisplayLineEnd:(GtkTextIter*) iter;
-(BOOL)getAcceptsTab;
-(gint)getBorderWindowSize:(GtkTextWindowType) type;
-(GtkTextBuffer*)getBuffer;
-(void)getCursorLocationsWithIter:(const GtkTextIter*) iter andStrong:(GdkRectangle*) strong andWeak:(GdkRectangle*) weak;
-(BOOL)getCursorVisible;
-(GtkTextAttributes*)getDefaultAttributes;
-(BOOL)getEditable;
-(GtkAdjustment*)getHadjustment;
-(gint)getIndent;
-(GtkInputHints)getInputHints;
-(GtkInputPurpose)getInputPurpose;
-(void)getIterAtLocationWithIter:(GtkTextIter*) iter andX:(gint) x andY:(gint) y;
-(void)getIterAtPositionWithIter:(GtkTextIter*) iter andTrailing:(gint*) trailing andX:(gint) x andY:(gint) y;
-(void)getIterLocationWithIter:(const GtkTextIter*) iter andLocation:(GdkRectangle*) location;
-(GtkJustification)getJustification;
-(gint)getLeftMargin;
-(void)getLineAtYWithTargetIter:(GtkTextIter*) targetIter andY:(gint) y andLineTop:(gint*) lineTop;
-(void)getLineYrangeWithIter:(const GtkTextIter*) iter andY:(gint*) y andHeight:(gint*) height;
-(BOOL)getOverwrite;
-(gint)getPixelsAboveLines;
-(gint)getPixelsBelowLines;
-(gint)getPixelsInsideWrap;
-(gint)getRightMargin;
-(PangoTabArray*)getTabs;
-(GtkAdjustment*)getVadjustment;
-(void)getVisibleRect:(GdkRectangle*) visibleRect;
-(GdkWindow*)getWindow:(GtkTextWindowType) win;
-(GtkTextWindowType)getWindowType:(GdkWindow*) window;
-(GtkWrapMode)getWrapMode;
-(BOOL)imContextFilterKeypress:(GdkEventKey*) event;
-(void)moveChildWithChild:(CGTKWidget*) child andXpos:(gint) xpos andYpos:(gint) ypos;
-(BOOL)moveMarkOnscreen:(GtkTextMark*) mark;
-(BOOL)moveVisuallyWithIter:(GtkTextIter*) iter andCount:(gint) count;
-(BOOL)placeCursorOnscreen;
-(void)resetImContext;
-(void)scrollMarkOnscreen:(GtkTextMark*) mark;
-(BOOL)scrollToIterWithIter:(GtkTextIter*) iter andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;
-(void)scrollToMarkWithMark:(GtkTextMark*) mark andWithinMargin:(gdouble) withinMargin andUseAlign:(BOOL) useAlign andXalign:(gdouble) xalign andYalign:(gdouble) yalign;
-(void)setAcceptsTab:(BOOL) acceptsTab;
-(void)setBorderWindowSizeWithType:(GtkTextWindowType) type andSize:(gint) size;
-(void)setBuffer:(GtkTextBuffer*) buffer;
-(void)setCursorVisible:(BOOL) setting;
-(void)setEditable:(BOOL) setting;
-(void)setIndent:(gint) indent;
-(void)setInputHints:(GtkInputHints) hints;
-(void)setInputPurpose:(GtkInputPurpose) purpose;
-(void)setJustification:(GtkJustification) justification;
-(void)setLeftMargin:(gint) leftMargin;
-(void)setOverwrite:(BOOL) overwrite;
-(void)setPixelsAboveLines:(gint) pixelsAboveLines;
-(void)setPixelsBelowLines:(gint) pixelsBelowLines;
-(void)setPixelsInsideWrap:(gint) pixelsInsideWrap;
-(void)setRightMargin:(gint) rightMargin;
-(void)setTabs:(PangoTabArray*) tabs;
-(void)setWrapMode:(GtkWrapMode) wrapMode;
-(BOOL)startsDisplayLine:(const GtkTextIter*) iter;
-(void)windowToBufferCoordsWithWin:(GtkTextWindowType) win andWindowX:(gint) windowX andWindowY:(gint) windowY andBufferX:(gint*) bufferX andBufferY:(gint*) bufferY;

@end