/*
 * CGTKLabel.m
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

#import "CGTKLabel.h"

@implementation CGTKLabel

-(GtkLabel *)LABEL
{
	return GTK_LABEL([self WIDGET]);
}

-(id)init:(NSString *)str
{
	self = [super initWithGtkWidget:gtk_label_new ([str UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(id)initWithMnemonic:(NSString *)str
{
	self = [super initWithGtkWidget:gtk_label_new_with_mnemonic ([str UTF8String]) andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(NSString *)getText
{
	return [NSString stringWithUTF8String:gtk_label_get_text([self LABEL])];
}

-(void)setText:(NSString *)str
{
	gtk_label_set_text ([self LABEL], [str UTF8String]);
}

-(void)setAttributes:(PangoAttrList *)attrs
{
	gtk_label_set_attributes ([self LABEL], attrs);
}

-(PangoAttrList *)getAttributes
{
	return gtk_label_get_attributes ([self LABEL]);
}

-(void)setLabel:(NSString *)str
{
	gtk_label_set_label ([self LABEL], [str UTF8String]);
}

-(void)setMarkup:(NSString *)str
{
	gtk_label_set_markup ([self LABEL], [str UTF8String]);
}

-(void)setUseMarkup:(BOOL)setting
{
	gtk_label_set_use_markup ([self LABEL], [CGTK getGboolean:setting]);
}

-(BOOL)getUseMarkup
{
	return [CGTK getBOOL:gtk_label_get_use_markup ([self LABEL])];
}

-(void)setUseUnderline:(BOOL)setting
{
	gtk_label_set_use_underline ([self LABEL], [CGTK getGboolean:setting]);
}

-(BOOL)getUseUnderline
{
	return [CGTK getBOOL:gtk_label_get_use_underline ([self LABEL])];
}

-(void)setMarkupWithMnemonic:(NSString *)str
{
	gtk_label_set_markup_with_mnemonic ([self LABEL], [str UTF8String]);
}

-(NSNumber *)getMnemonicKeyval
{
	return [NSNumber numberWithUnsignedInt:gtk_label_get_mnemonic_keyval ([self LABEL])];
}

-(void)setMnemonicWidget:(CGTKWidget *)widget
{
	gtk_label_set_mnemonic_widget ([self LABEL], [widget WIDGET]);
}

-(CGTKWidget *)getMnemonicWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_label_get_mnemonic_widget ([self LABEL])];
}

-(void)setTextWithMnemonic:(NSString *)str
{
	gtk_label_set_text_with_mnemonic ([self LABEL], [str UTF8String]);
}

-(void)setJustify:(GtkJustification)jtype
{
	gtk_label_set_justify ([self LABEL], jtype);
}

-(GtkJustification)getJustify
{
	return gtk_label_get_justify ([self LABEL]);
}

-(void)setEllipsize:(PangoEllipsizeMode)mode
{
	gtk_label_set_ellipsize ([self LABEL], mode);
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_label_get_ellipsize ([self LABEL]);
}

-(void)setWidthChars:(NSNumber *)nChars
{
	gtk_label_set_width_chars ([self LABEL], [nChars intValue]);
}

-(NSNumber *)getWidthChars
{
	return [NSNumber numberWithInt:gtk_label_get_width_chars ([self LABEL])];
}

-(void)setMaxWidthChars:(NSNumber *)nChars
{
	gtk_label_set_max_width_chars ([self LABEL], [nChars intValue]);
}

-(NSNumber *)getMaxWidthChars
{
	return [NSNumber numberWithInt:gtk_label_get_max_width_chars ([self LABEL])];
}

-(void)setPattern:(NSString *)pattern
{
	gtk_label_set_pattern ([self LABEL], [pattern UTF8String]);
}

-(void)setLineWrap:(BOOL)wrap
{
	gtk_label_set_line_wrap ([self LABEL], [CGTK getGboolean:wrap]);
}

-(BOOL)getLineWrap
{
	return [CGTK getBOOL:gtk_label_get_line_wrap ([self LABEL])];
}

-(void)setLineWrapMode:(PangoWrapMode)wrapMode
{
	gtk_label_set_line_wrap_mode ([self LABEL], wrapMode);
}

-(PangoWrapMode)getLineWrapMode
{
	return gtk_label_get_line_wrap_mode ([self LABEL]);
}

-(void)setSelectable:(BOOL)setting
{
	gtk_label_set_selectable ([self LABEL], [CGTK getGboolean:setting]);
}

-(BOOL)getSelectable
{
	return [CGTK getBOOL:gtk_label_get_selectable ([self LABEL])];
}

-(void)setAngle:(NSNumber *)angle
{
	gtk_label_set_angle ([self LABEL], [angle doubleValue]);
}

-(NSNumber *)getAngle
{
	return [NSNumber numberWithDouble:gtk_label_get_angle ([self LABEL])];
}

-(void)selectRegionWithStartOffset:(NSNumber *)startOffset andEndOffset:(NSNumber *)endOffset
{
	gtk_label_select_region ([self LABEL], [startOffset intValue], [endOffset intValue]);
}

-(BOOL)getSelectionBoundsWithStart:(NSNumber **)start andEnd:(NSNumber **)end
{
	BOOL result;
	gint gStart;
	gint gEnd;
	
	result = [CGTK getBOOL:gtk_label_get_selection_bounds ([self LABEL], &gStart, &gEnd)];
	
	*start = [NSNumber numberWithInt:gStart];
	*end = [NSNumber numberWithInt:gEnd];
	
	return result;
}

-(PangoLayout *)getLayout
{
	return gtk_label_get_layout ([self LABEL]);
}

-(void)getLayoutOffsetsWithX:(NSNumber **)x andY:(NSNumber **)y
{
	gint gX;
	gint gY;
	
	gtk_label_get_layout_offsets ([self LABEL], &gX, &gY);
	
	*x = [NSNumber numberWithInt:gX];
	*y = [NSNumber numberWithInt:gY];
}

-(void)setSingleLineMode:(BOOL)singleLineMode
{
	gtk_label_set_single_line_mode ([self LABEL], [CGTK getGboolean:singleLineMode]);
}

-(BOOL)getSingleLineMode
{
	return [CGTK getBOOL:gtk_label_get_single_line_mode ([self LABEL])];
}

-(void)setTrackVisitedLinks:(BOOL)trackLinks
{
	gtk_label_set_track_visited_links ([self LABEL], [CGTK getGboolean:trackLinks]);
}

-(BOOL)getTrackVisitedLinks
{
	return [CGTK getBOOL:gtk_label_get_track_visited_links ([self LABEL])];
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String: gtk_label_get_label([self LABEL])];
}

-(NSString *)getCurrentUri
{
	return [NSString stringWithUTF8String:gtk_label_get_current_uri([self LABEL])];
}

@end
