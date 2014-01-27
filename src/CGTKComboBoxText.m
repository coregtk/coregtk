/*
 * CGTKComboBoxText.m
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

#import "CGTKComboBoxText.h"

@implementation CGTKComboBoxText

-(GtkComboBoxText *)COMBO_BOX_TEXT
{
	return GTK_COMBO_BOX_TEXT([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_combo_box_text_new ()];

	if(self)
	{

	}

	return self;
}

-(id)initWithEntry
{
	self = [super initWithGtkWidget:gtk_combo_box_text_new_with_entry ()];

	if(self)
	{

	}

	return self;
}

-(void)appendText:(NSString *)text
{
	gtk_combo_box_text_append_text ([self COMBO_BOX_TEXT], [text UTF8String]);
}

-(void)insertTextWithPosition:(NSNumber *)position andText:(NSString *)text
{
	gtk_combo_box_text_insert_text ([self COMBO_BOX_TEXT], [position intValue], [text UTF8String]);
}

-(void)prependText:(NSString *)text
{
	gtk_combo_box_text_prepend_text ([self COMBO_BOX_TEXT], [text UTF8String]);
}

-(void)remove:(NSNumber *)position
{
	gtk_combo_box_text_remove ([self COMBO_BOX_TEXT], [position intValue]);
}

-(NSString *)getActiveText
{
	return [NSString stringWithUTF8String:gtk_combo_box_text_get_active_text ([self COMBO_BOX_TEXT])];
}

@end
