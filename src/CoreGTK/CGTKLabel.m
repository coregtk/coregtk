/*
 * CGTKLabel.m
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
#import "CoreGTK/CGTKLabel.h"

@implementation CGTKLabel

-(id)init:(NSString*) str
{
	self = [super initWithGObject:(GObject *)gtk_label_new([str UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithMnemonic:(NSString*) str
{
	self = [super initWithGObject:(GObject *)gtk_label_new_with_mnemonic([str UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLabel*)LABEL
{
	return GTK_LABEL([self GOBJECT]);
}

-(gdouble)getAngle
{
	return gtk_label_get_angle(GTK_LABEL([self GOBJECT]));
}

-(PangoAttrList*)getAttributes
{
	return gtk_label_get_attributes(GTK_LABEL([self GOBJECT]));
}

-(NSString*)getCurrentUri
{
	return [NSString stringWithUTF8String:gtk_label_get_current_uri(GTK_LABEL([self GOBJECT]))];
}

-(PangoEllipsizeMode)getEllipsize
{
	return gtk_label_get_ellipsize(GTK_LABEL([self GOBJECT]));
}

-(GtkJustification)getJustify
{
	return gtk_label_get_justify(GTK_LABEL([self GOBJECT]));
}

-(NSString*)getLabel
{
	return [NSString stringWithUTF8String:gtk_label_get_label(GTK_LABEL([self GOBJECT]))];
}

-(PangoLayout*)getLayout
{
	return gtk_label_get_layout(GTK_LABEL([self GOBJECT]));
}

-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y
{
	gtk_label_get_layout_offsets(GTK_LABEL([self GOBJECT]), x, y);
}

-(BOOL)getLineWrap
{
	return (gtk_label_get_line_wrap(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(PangoWrapMode)getLineWrapMode
{
	return gtk_label_get_line_wrap_mode(GTK_LABEL([self GOBJECT]));
}

-(gint)getLines
{
	return gtk_label_get_lines(GTK_LABEL([self GOBJECT]));
}

-(gint)getMaxWidthChars
{
	return gtk_label_get_max_width_chars(GTK_LABEL([self GOBJECT]));
}

-(guint)getMnemonicKeyval
{
	return gtk_label_get_mnemonic_keyval(GTK_LABEL([self GOBJECT]));
}

-(CGTKWidget*)getMnemonicWidget
{
	return [[CGTKWidget alloc] initWithGObject:(GObject *)gtk_label_get_mnemonic_widget(GTK_LABEL([self GOBJECT]))];
}

-(BOOL)getSelectable
{
	return (gtk_label_get_selectable(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(BOOL)getSelectionBoundsWithStart:(gint*) start andEnd:(gint*) end
{
	return (gtk_label_get_selection_bounds(GTK_LABEL([self GOBJECT]), start, end) ? YES : NO);
}

-(BOOL)getSingleLineMode
{
	return (gtk_label_get_single_line_mode(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(NSString*)getText
{
	return [NSString stringWithUTF8String:gtk_label_get_text(GTK_LABEL([self GOBJECT]))];
}

-(BOOL)getTrackVisitedLinks
{
	return (gtk_label_get_track_visited_links(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(BOOL)getUseMarkup
{
	return (gtk_label_get_use_markup(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(BOOL)getUseUnderline
{
	return (gtk_label_get_use_underline(GTK_LABEL([self GOBJECT])) ? YES : NO);
}

-(gint)getWidthChars
{
	return gtk_label_get_width_chars(GTK_LABEL([self GOBJECT]));
}

-(gfloat)getXalign
{
	return gtk_label_get_xalign(GTK_LABEL([self GOBJECT]));
}

-(gfloat)getYalign
{
	return gtk_label_get_yalign(GTK_LABEL([self GOBJECT]));
}

-(void)selectRegionWithStartOffset:(gint) startOffset andEndOffset:(gint) endOffset
{
	gtk_label_select_region(GTK_LABEL([self GOBJECT]), startOffset, endOffset);
}

-(void)setAngle:(gdouble) angle
{
	gtk_label_set_angle(GTK_LABEL([self GOBJECT]), angle);
}

-(void)setAttributes:(PangoAttrList*) attrs
{
	gtk_label_set_attributes(GTK_LABEL([self GOBJECT]), attrs);
}

-(void)setEllipsize:(PangoEllipsizeMode) mode
{
	gtk_label_set_ellipsize(GTK_LABEL([self GOBJECT]), mode);
}

-(void)setJustify:(GtkJustification) jtype
{
	gtk_label_set_justify(GTK_LABEL([self GOBJECT]), jtype);
}

-(void)setLabel:(NSString*) str
{
	gtk_label_set_label(GTK_LABEL([self GOBJECT]), [str UTF8String]);
}

-(void)setLineWrap:(BOOL) wrap
{
	gtk_label_set_line_wrap(GTK_LABEL([self GOBJECT]), (wrap ? TRUE : FALSE));
}

-(void)setLineWrapMode:(PangoWrapMode) wrapMode
{
	gtk_label_set_line_wrap_mode(GTK_LABEL([self GOBJECT]), wrapMode);
}

-(void)setLines:(gint) lines
{
	gtk_label_set_lines(GTK_LABEL([self GOBJECT]), lines);
}

-(void)setMarkup:(NSString*) str
{
	gtk_label_set_markup(GTK_LABEL([self GOBJECT]), [str UTF8String]);
}

-(void)setMarkupWithMnemonic:(NSString*) str
{
	gtk_label_set_markup_with_mnemonic(GTK_LABEL([self GOBJECT]), [str UTF8String]);
}

-(void)setMaxWidthChars:(gint) nchars
{
	gtk_label_set_max_width_chars(GTK_LABEL([self GOBJECT]), nchars);
}

-(void)setMnemonicWidget:(CGTKWidget*) widget
{
	gtk_label_set_mnemonic_widget(GTK_LABEL([self GOBJECT]), [widget WIDGET]);
}

-(void)setPattern:(NSString*) pattern
{
	gtk_label_set_pattern(GTK_LABEL([self GOBJECT]), [pattern UTF8String]);
}

-(void)setSelectable:(BOOL) setting
{
	gtk_label_set_selectable(GTK_LABEL([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setSingleLineMode:(BOOL) singleLineMode
{
	gtk_label_set_single_line_mode(GTK_LABEL([self GOBJECT]), (singleLineMode ? TRUE : FALSE));
}

-(void)setText:(NSString*) str
{
	gtk_label_set_text(GTK_LABEL([self GOBJECT]), [str UTF8String]);
}

-(void)setTextWithMnemonic:(NSString*) str
{
	gtk_label_set_text_with_mnemonic(GTK_LABEL([self GOBJECT]), [str UTF8String]);
}

-(void)setTrackVisitedLinks:(BOOL) trackLinks
{
	gtk_label_set_track_visited_links(GTK_LABEL([self GOBJECT]), (trackLinks ? TRUE : FALSE));
}

-(void)setUseMarkup:(BOOL) setting
{
	gtk_label_set_use_markup(GTK_LABEL([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setUseUnderline:(BOOL) setting
{
	gtk_label_set_use_underline(GTK_LABEL([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setWidthChars:(gint) nchars
{
	gtk_label_set_width_chars(GTK_LABEL([self GOBJECT]), nchars);
}

-(void)setXalign:(gfloat) xalign
{
	gtk_label_set_xalign(GTK_LABEL([self GOBJECT]), xalign);
}

-(void)setYalign:(gfloat) yalign
{
	gtk_label_set_yalign(GTK_LABEL([self GOBJECT]), yalign);
}


@end