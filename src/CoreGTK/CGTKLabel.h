/*
 * CGTKLabel.h
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