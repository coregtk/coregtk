
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMisc.h"

@interface CGTKLabel : CGTKMisc
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) str;
-(id)initWithMnemonic:(NSString*) str;

/**
 * Methods
 */
-(GtkLabel*)LABEL;
-(gdouble)getAngle;
-(PangoAttrList*)getAttributes;
-(NSString*)getCurrentUri;
-(PangoEllipsizeMode)getEllipsize;
-(GtkJustification)getJustify;
-(NSString*)getLabel;
-(PangoLayout*)getLayout;
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
-(BOOL)getLineWrap;
-(PangoWrapMode)getLineWrapMode;
-(gint)getLines;
-(gint)getMaxWidthChars;
-(guint)getMnemonicKeyval;
-(CGTKWidget*)getMnemonicWidget;
-(BOOL)getSelectable;
-(BOOL)getSelectionBoundsWithStart:(gint*) start andEnd:(gint*) end;
-(BOOL)getSingleLineMode;
-(NSString*)getText;
-(BOOL)getTrackVisitedLinks;
-(BOOL)getUseMarkup;
-(BOOL)getUseUnderline;
-(gint)getWidthChars;
-(void)selectRegionWithStartOffset:(gint) startOffset andEndOffset:(gint) endOffset;
-(void)setAngle:(gdouble) angle;
-(void)setAttributes:(PangoAttrList*) attrs;
-(void)setEllipsize:(PangoEllipsizeMode) mode;
-(void)setJustify:(GtkJustification) jtype;
-(void)setLabel:(NSString*) str;
-(void)setLineWrap:(BOOL) wrap;
-(void)setLineWrapMode:(PangoWrapMode) wrapMode;
-(void)setLines:(gint) lines;
-(void)setMarkup:(NSString*) str;
-(void)setMarkupWithMnemonic:(NSString*) str;
-(void)setMaxWidthChars:(gint) nchars;
-(void)setMnemonicWidget:(CGTKWidget*) widget;
-(void)setPattern:(NSString*) pattern;
-(void)setSelectable:(BOOL) setting;
-(void)setSingleLineMode:(BOOL) singleLineMode;
-(void)setText:(NSString*) str;
-(void)setTextWithMnemonic:(NSString*) str;
-(void)setTrackVisitedLinks:(BOOL) trackLinks;
-(void)setUseMarkup:(BOOL) setting;
-(void)setUseUnderline:(BOOL) setting;
-(void)setWidthChars:(gint) nchars;

@end