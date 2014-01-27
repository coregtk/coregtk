/*
 * CGTKToolbar.m
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

#import "CGTKToolbar.h"

@implementation CGTKToolbar

-(GtkToolbar *)TOOLBAR
{
	return GTK_TOOLBAR([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_toolbar_new ()];

	if(self)
	{

	}

	return self;
}

-(void)insertWithItem:(CGTKToolItem *)item andPos:(NSNumber *)pos
{
	gtk_toolbar_insert ([self TOOLBAR], [item TOOL_ITEM], [pos intValue]);
}

-(NSNumber *)getItemIndex:(CGTKToolItem *)item
{
	return [NSNumber numberWithInt:gtk_toolbar_get_item_index ([self TOOLBAR], [item TOOL_ITEM])];
}

-(NSNumber *)getNItems
{
	return [NSNumber numberWithInt:gtk_toolbar_get_n_items ([self TOOLBAR])];
}

-(CGTKToolItem *)getNthItem:(NSNumber *)n
{
	return (CGTKToolItem *)[CGTKWidget widgetWithGtkWidget:GTK_WIDGET(gtk_toolbar_get_nth_item ([self TOOLBAR], [n intValue]))];
}

-(BOOL)getShowArrow
{
	return [CGTK getBOOL:gtk_toolbar_get_show_arrow ([self TOOLBAR])];
}

-(void)setShowArrow:(BOOL)showArrow
{
	gtk_toolbar_set_show_arrow ([self TOOLBAR], [CGTK getGboolean:showArrow]);
}

-(GtkToolbarStyle)getStyle
{
	return gtk_toolbar_get_style ([self TOOLBAR]);
}

-(void)setStyle:(GtkToolbarStyle)style
{
	gtk_toolbar_set_style ([self TOOLBAR], style);
}

-(void)unsetStyle
{
	gtk_toolbar_unset_style ([self TOOLBAR]);
}

-(GtkIconSize)getIconSize
{
	return gtk_toolbar_get_icon_size ([self TOOLBAR]);
}

-(void)setIconSize:(GtkIconSize)iconSize
{
	gtk_toolbar_set_icon_size ([self TOOLBAR], iconSize);
}

-(void)unsetIconSize
{
	gtk_toolbar_unset_icon_size ([self TOOLBAR]);
}

-(GtkReliefStyle)getReliefStyle
{
	return gtk_toolbar_get_relief_style ([self TOOLBAR]);
}

-(NSNumber *)getDropIndexWithX:(NSNumber *)x andY:(NSNumber *)y
{
	return [NSNumber numberWithInt:gtk_toolbar_get_drop_index ([self TOOLBAR], [x intValue], [y intValue])];
}

-(void)setDropHighlightItemWithToolItem:(CGTKToolItem *)toolItem andIndex:(NSNumber *)index
{
	gtk_toolbar_set_drop_highlight_item ([self TOOLBAR], [toolItem TOOL_ITEM], [index intValue]);
}

@end
