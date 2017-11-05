/*
 * CGTKLabel.h
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

/**
 * -(gdouble*)getAngle;
 *
 * @returns gdouble
 */
-(gdouble)getAngle;

/**
 * -(PangoAttrList**)getAttributes;
 *
 * @returns PangoAttrList*
 */
-(PangoAttrList*)getAttributes;

/**
 * -(NSString**)getCurrentUri;
 *
 * @returns NSString*
 */
-(NSString*)getCurrentUri;

/**
 * -(PangoEllipsizeMode*)getEllipsize;
 *
 * @returns PangoEllipsizeMode
 */
-(PangoEllipsizeMode)getEllipsize;

/**
 * -(GtkJustification*)getJustify;
 *
 * @returns GtkJustification
 */
-(GtkJustification)getJustify;

/**
 * -(NSString**)getLabel;
 *
 * @returns NSString*
 */
-(NSString*)getLabel;

/**
 * -(PangoLayout**)getLayout;
 *
 * @returns PangoLayout*
 */
-(PangoLayout*)getLayout;

/**
 * -(void*)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
 *
 * @param x
 * @param y
 */
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;

/**
 * -(BOOL*)getLineWrap;
 *
 * @returns BOOL
 */
-(BOOL)getLineWrap;

/**
 * -(PangoWrapMode*)getLineWrapMode;
 *
 * @returns PangoWrapMode
 */
-(PangoWrapMode)getLineWrapMode;

/**
 * -(gint*)getLines;
 *
 * @returns gint
 */
-(gint)getLines;

/**
 * -(gint*)getMaxWidthChars;
 *
 * @returns gint
 */
-(gint)getMaxWidthChars;

/**
 * -(guint*)getMnemonicKeyval;
 *
 * @returns guint
 */
-(guint)getMnemonicKeyval;

/**
 * -(CGTKWidget**)getMnemonicWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getMnemonicWidget;

/**
 * -(BOOL*)getSelectable;
 *
 * @returns BOOL
 */
-(BOOL)getSelectable;

/**
 * -(BOOL*)getSelectionBoundsWithStart:(gint*) start andEnd:(gint*) end;
 *
 * @param start
 * @param end
 * @returns BOOL
 */
-(BOOL)getSelectionBoundsWithStart:(gint*) start andEnd:(gint*) end;

/**
 * -(BOOL*)getSingleLineMode;
 *
 * @returns BOOL
 */
-(BOOL)getSingleLineMode;

/**
 * -(NSString**)getText;
 *
 * @returns NSString*
 */
-(NSString*)getText;

/**
 * -(BOOL*)getTrackVisitedLinks;
 *
 * @returns BOOL
 */
-(BOOL)getTrackVisitedLinks;

/**
 * -(BOOL*)getUseMarkup;
 *
 * @returns BOOL
 */
-(BOOL)getUseMarkup;

/**
 * -(BOOL*)getUseUnderline;
 *
 * @returns BOOL
 */
-(BOOL)getUseUnderline;

/**
 * -(gint*)getWidthChars;
 *
 * @returns gint
 */
-(gint)getWidthChars;

/**
 * -(gfloat*)getXalign;
 *
 * @returns gfloat
 */
-(gfloat)getXalign;

/**
 * -(gfloat*)getYalign;
 *
 * @returns gfloat
 */
-(gfloat)getYalign;

/**
 * -(void*)selectRegionWithStartOffset:(gint) startOffset andEndOffset:(gint) endOffset;
 *
 * @param startOffset
 * @param endOffset
 */
-(void)selectRegionWithStartOffset:(gint) startOffset andEndOffset:(gint) endOffset;

/**
 * -(void*)setAngle:(gdouble) angle;
 *
 * @param angle
 */
-(void)setAngle:(gdouble) angle;

/**
 * -(void*)setAttributes:(PangoAttrList*) attrs;
 *
 * @param attrs
 */
-(void)setAttributes:(PangoAttrList*) attrs;

/**
 * -(void*)setEllipsize:(PangoEllipsizeMode) mode;
 *
 * @param mode
 */
-(void)setEllipsize:(PangoEllipsizeMode) mode;

/**
 * -(void*)setJustify:(GtkJustification) jtype;
 *
 * @param jtype
 */
-(void)setJustify:(GtkJustification) jtype;

/**
 * -(void*)setLabel:(NSString*) str;
 *
 * @param str
 */
-(void)setLabel:(NSString*) str;

/**
 * -(void*)setLineWrap:(BOOL) wrap;
 *
 * @param wrap
 */
-(void)setLineWrap:(BOOL) wrap;

/**
 * -(void*)setLineWrapMode:(PangoWrapMode) wrapMode;
 *
 * @param wrapMode
 */
-(void)setLineWrapMode:(PangoWrapMode) wrapMode;

/**
 * -(void*)setLines:(gint) lines;
 *
 * @param lines
 */
-(void)setLines:(gint) lines;

/**
 * -(void*)setMarkup:(NSString*) str;
 *
 * @param str
 */
-(void)setMarkup:(NSString*) str;

/**
 * -(void*)setMarkupWithMnemonic:(NSString*) str;
 *
 * @param str
 */
-(void)setMarkupWithMnemonic:(NSString*) str;

/**
 * -(void*)setMaxWidthChars:(gint) nchars;
 *
 * @param nchars
 */
-(void)setMaxWidthChars:(gint) nchars;

/**
 * -(void*)setMnemonicWidget:(CGTKWidget*) widget;
 *
 * @param widget
 */
-(void)setMnemonicWidget:(CGTKWidget*) widget;

/**
 * -(void*)setPattern:(NSString*) pattern;
 *
 * @param pattern
 */
-(void)setPattern:(NSString*) pattern;

/**
 * -(void*)setSelectable:(BOOL) setting;
 *
 * @param setting
 */
-(void)setSelectable:(BOOL) setting;

/**
 * -(void*)setSingleLineMode:(BOOL) singleLineMode;
 *
 * @param singleLineMode
 */
-(void)setSingleLineMode:(BOOL) singleLineMode;

/**
 * -(void*)setText:(NSString*) str;
 *
 * @param str
 */
-(void)setText:(NSString*) str;

/**
 * -(void*)setTextWithMnemonic:(NSString*) str;
 *
 * @param str
 */
-(void)setTextWithMnemonic:(NSString*) str;

/**
 * -(void*)setTrackVisitedLinks:(BOOL) trackLinks;
 *
 * @param trackLinks
 */
-(void)setTrackVisitedLinks:(BOOL) trackLinks;

/**
 * -(void*)setUseMarkup:(BOOL) setting;
 *
 * @param setting
 */
-(void)setUseMarkup:(BOOL) setting;

/**
 * -(void*)setUseUnderline:(BOOL) setting;
 *
 * @param setting
 */
-(void)setUseUnderline:(BOOL) setting;

/**
 * -(void*)setWidthChars:(gint) nchars;
 *
 * @param nchars
 */
-(void)setWidthChars:(gint) nchars;

/**
 * -(void*)setXalign:(gfloat) xalign;
 *
 * @param xalign
 */
-(void)setXalign:(gfloat) xalign;

/**
 * -(void*)setYalign:(gfloat) yalign;
 *
 * @param yalign
 */
-(void)setYalign:(gfloat) yalign;

@end