/*
 * CGTKToolPalette.h
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
#import "CoreGTK/CGTKContainer.h"

@interface CGTKToolPalette : CGTKContainer
{

}

/**
 * Functions
 */
+(const GtkTargetEntry*)getDragTargetGroup;
+(const GtkTargetEntry*)getDragTargetItem;

/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkToolPalette*)TOOLPALETTE;
-(void)addDragDestWithWidget:(CGTKWidget*) widget andFlags:(GtkDestDefaults) flags andTargets:(GtkToolPaletteDragTargets) targets andActions:(GdkDragAction) actions;
-(CGTKWidget*)getDragItem:(const GtkSelectionData*) selection;
-(GtkToolItemGroup*)getDropGroupWithX:(gint) x andY:(gint) y;
-(GtkToolItem*)getDropItemWithX:(gint) x andY:(gint) y;
-(BOOL)getExclusive:(GtkToolItemGroup*) group;
-(BOOL)getExpand:(GtkToolItemGroup*) group;
-(gint)getGroupPosition:(GtkToolItemGroup*) group;
-(GtkAdjustment*)getHadjustment;
-(GtkIconSize)getIconSize;
-(GtkToolbarStyle)getStyle;
-(GtkAdjustment*)getVadjustment;
-(void)setDragSource:(GtkToolPaletteDragTargets) targets;
-(void)setExclusiveWithGroup:(GtkToolItemGroup*) group andExclusive:(BOOL) exclusive;
-(void)setExpandWithGroup:(GtkToolItemGroup*) group andExpand:(BOOL) expand;
-(void)setGroupPositionWithGroup:(GtkToolItemGroup*) group andPosition:(gint) position;
-(void)setIconSize:(GtkIconSize) iconSize;
-(void)setStyle:(GtkToolbarStyle) style;
-(void)unsetIconSize;
-(void)unsetStyle;

@end