/*
 * CGTKToolItemGroup.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKToolItemGroup : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) label;

/**
 * Methods
 */

-(GtkToolItemGroup*)TOOLITEMGROUP;

/**
 * -(BOOL*)getCollapsed;
 *
 * @returns BOOL
 */
-(BOOL)getCollapsed;

/**
 * -(GtkToolItem**)getDropItemWithX:(gint) x andY:(gint) y;
 *
 * @param x
 * @param y
 * @returns GtkToolItem*
 */
-(GtkToolItem*)getDropItemWithX:(gint) x andY:(gint) y;

/**
 * -(PangoEllipsizeMode*)getEllipsize;
 *
 * @returns PangoEllipsizeMode
 */
-(PangoEllipsizeMode)getEllipsize;

/**
 * -(GtkReliefStyle*)getHeaderRelief;
 *
 * @returns GtkReliefStyle
 */
-(GtkReliefStyle)getHeaderRelief;

/**
 * -(gint*)getItemPosition:(GtkToolItem*) item;
 *
 * @param item
 * @returns gint
 */
-(gint)getItemPosition:(GtkToolItem*) item;

/**
 * -(NSString**)getLabel;
 *
 * @returns NSString*
 */
-(NSString*)getLabel;

/**
 * -(CGTKWidget**)getLabelWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getLabelWidget;

/**
 * -(guint*)getNitems;
 *
 * @returns guint
 */
-(guint)getNitems;

/**
 * -(GtkToolItem**)getNthItem:(guint) index;
 *
 * @param index
 * @returns GtkToolItem*
 */
-(GtkToolItem*)getNthItem:(guint) index;

/**
 * -(void*)insertWithItem:(GtkToolItem*) item andPosition:(gint) position;
 *
 * @param item
 * @param position
 */
-(void)insertWithItem:(GtkToolItem*) item andPosition:(gint) position;

/**
 * -(void*)setCollapsed:(BOOL) collapsed;
 *
 * @param collapsed
 */
-(void)setCollapsed:(BOOL) collapsed;

/**
 * -(void*)setEllipsize:(PangoEllipsizeMode) ellipsize;
 *
 * @param ellipsize
 */
-(void)setEllipsize:(PangoEllipsizeMode) ellipsize;

/**
 * -(void*)setHeaderRelief:(GtkReliefStyle) style;
 *
 * @param style
 */
-(void)setHeaderRelief:(GtkReliefStyle) style;

/**
 * -(void*)setItemPositionWithItem:(GtkToolItem*) item andPosition:(gint) position;
 *
 * @param item
 * @param position
 */
-(void)setItemPositionWithItem:(GtkToolItem*) item andPosition:(gint) position;

/**
 * -(void*)setLabel:(NSString*) label;
 *
 * @param label
 */
-(void)setLabel:(NSString*) label;

/**
 * -(void*)setLabelWidget:(CGTKWidget*) labelWidget;
 *
 * @param labelWidget
 */
-(void)setLabelWidget:(CGTKWidget*) labelWidget;

@end