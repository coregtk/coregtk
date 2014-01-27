/*
 * CGTKComboBox.m
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

#import "CGTKComboBox.h"

@implementation CGTKComboBox

-(GtkComboBox *)COMBO_BOX
{
	return GTK_COMBO_BOX([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_combo_box_new ()];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithEntry
{
	self = [super initWithGtkWidget:gtk_combo_box_new_with_entry ()];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithModel:(GtkTreeModel *)model
{
	self = [super initWithGtkWidget:gtk_combo_box_new_with_model (model)];
	
	if(self)
	{
	
	}
	
	return self;
}

-(id)initWithModelAndEntry:(GtkTreeModel *)model
{
	self = [super initWithGtkWidget:gtk_combo_box_new_with_model_and_entry (model)];
	
	if(self)
	{
	
	}
	
	return self;
}

-(NSNumber *)getWrapWidth
{
	return [NSNumber numberWithInt:gtk_combo_box_get_wrap_width ([self COMBO_BOX])];
}

-(void)setWrapWidth:(NSNumber *)width
{
	gtk_combo_box_set_wrap_width ([self COMBO_BOX], [width intValue]);
}

-(NSNumber *)getRowSpanColumn
{
	return [NSNumber numberWithInt:gtk_combo_box_get_row_span_column ([self COMBO_BOX])];
}

-(void)setRowSpanColumn:(NSNumber *)rowSpan
{
	gtk_combo_box_set_row_span_column ([self COMBO_BOX], [rowSpan intValue]);
}

-(NSNumber *)getColumnSpanColumn
{
	return [NSNumber numberWithInt:gtk_combo_box_get_column_span_column ([self COMBO_BOX])];
}

-(void)setColumnSpanColumn:(NSNumber *)columnSpan
{
	gtk_combo_box_set_column_span_column ([self COMBO_BOX], [columnSpan intValue]);
}

-(BOOL)getAddTearoffs
{
	return [CGTK getBOOL:gtk_combo_box_get_add_tearoffs ([self COMBO_BOX])];
}

-(void)setAddTearoffs:(BOOL)addTearoffs
{
	gtk_combo_box_set_add_tearoffs ([self COMBO_BOX], [CGTK getGboolean:addTearoffs]);
}

-(void)setTitle:(NSString *)title
{
	gtk_combo_box_set_title ([self COMBO_BOX], [title UTF8String]);
}

-(NSString *)getTitle
{
	return [NSString stringWithUTF8String:gtk_combo_box_get_title ([self COMBO_BOX])];
}

-(BOOL)getFocusOnClick
{
	return [CGTK getBOOL:gtk_combo_box_get_focus_on_click ([self COMBO_BOX])];
}

-(void)setFocusOnClick:(BOOL)focusOnClick
{
	gtk_combo_box_set_focus_on_click ([self COMBO_BOX], [CGTK getGboolean:focusOnClick]);
}

-(NSNumber *)getActive
{
	return [NSNumber numberWithInt:gtk_combo_box_get_active ([self COMBO_BOX])];
}

-(void)setActive:(NSNumber *)index
{
	gtk_combo_box_set_active ([self COMBO_BOX], [index intValue]);
}

-(BOOL)getActiveIter:(GtkTreeIter *)iter
{
	return [CGTK getBOOL:gtk_combo_box_get_active_iter ([self COMBO_BOX], iter)];
}

-(void)setActiveIter:(GtkTreeIter *)iter
{
	gtk_combo_box_set_active_iter ([self COMBO_BOX], iter);
}

-(void)setModel:(GtkTreeModel *)model
{
	gtk_combo_box_set_model ([self COMBO_BOX], model);
}

-(GtkTreeModel *)getModel
{
	return gtk_combo_box_get_model ([self COMBO_BOX]);
}

-(GtkTreeViewRowSeparatorFunc)getRowSeparatorFunc
{
	return gtk_combo_box_get_row_separator_func ([self COMBO_BOX]);
}

-(void)setRowSeparatorFuncWithFunc:(GtkTreeViewRowSeparatorFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_combo_box_set_row_separator_func ([self COMBO_BOX], func, data, destroy);
}

-(void)setButtonSensitivity:(GtkSensitivityType)sensitivity
{
	gtk_combo_box_set_button_sensitivity ([self COMBO_BOX], sensitivity);
}

-(GtkSensitivityType)getButtonSensitivity
{
	return gtk_combo_box_get_button_sensitivity ([self COMBO_BOX]);
}

-(BOOL)getHasEntry
{
	return [CGTK getBOOL:gtk_combo_box_get_has_entry ([self COMBO_BOX])];
}

-(void)setEntryTextColumn:(NSNumber *)textColumn
{
	gtk_combo_box_set_entry_text_column ([self COMBO_BOX], [textColumn intValue]);
}

-(NSNumber *)getEntryTextColumn
{
	return [NSNumber numberWithInt:gtk_combo_box_get_entry_text_column ([self COMBO_BOX])];
}

-(void)popup
{
	gtk_combo_box_popup ([self COMBO_BOX]);
}

-(void)popdown
{
	gtk_combo_box_popdown ([self COMBO_BOX]);
}

-(AtkObject *)getPopupAccessible
{
	return gtk_combo_box_get_popup_accessible ([self COMBO_BOX]);
}

@end
