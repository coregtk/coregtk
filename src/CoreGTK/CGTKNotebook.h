/*
 * CGTKNotebook.h
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

@interface CGTKNotebook : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkNotebook*)NOTEBOOK;

/**
 * -(gint*)appendPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
 *
 * @param child
 * @param tabLabel
 * @returns gint
 */
-(gint)appendPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;

/**
 * -(gint*)appendPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;
 *
 * @param child
 * @param tabLabel
 * @param menuLabel
 * @returns gint
 */
-(gint)appendPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;

/**
 * -(CGTKWidget**)getActionWidget:(GtkPackType) packType;
 *
 * @param packType
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getActionWidget:(GtkPackType) packType;

/**
 * -(gint*)getCurrentPage;
 *
 * @returns gint
 */
-(gint)getCurrentPage;

/**
 * -(NSString**)getGroupName;
 *
 * @returns NSString*
 */
-(NSString*)getGroupName;

/**
 * -(CGTKWidget**)getMenuLabel:(CGTKWidget*) child;
 *
 * @param child
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getMenuLabel:(CGTKWidget*) child;

/**
 * -(NSString**)getMenuLabelText:(CGTKWidget*) child;
 *
 * @param child
 * @returns NSString*
 */
-(NSString*)getMenuLabelText:(CGTKWidget*) child;

/**
 * -(gint*)getNpages;
 *
 * @returns gint
 */
-(gint)getNpages;

/**
 * -(CGTKWidget**)getNthPage:(gint) pageNum;
 *
 * @param pageNum
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getNthPage:(gint) pageNum;

/**
 * -(BOOL*)getScrollable;
 *
 * @returns BOOL
 */
-(BOOL)getScrollable;

/**
 * -(BOOL*)getShowBorder;
 *
 * @returns BOOL
 */
-(BOOL)getShowBorder;

/**
 * -(BOOL*)getShowTabs;
 *
 * @returns BOOL
 */
-(BOOL)getShowTabs;

/**
 * -(BOOL*)getTabDetachable:(CGTKWidget*) child;
 *
 * @param child
 * @returns BOOL
 */
-(BOOL)getTabDetachable:(CGTKWidget*) child;

/**
 * -(guint16*)getTabHborder;
 *
 * @returns guint16
 */
-(guint16)getTabHborder;

/**
 * -(CGTKWidget**)getTabLabel:(CGTKWidget*) child;
 *
 * @param child
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getTabLabel:(CGTKWidget*) child;

/**
 * -(NSString**)getTabLabelText:(CGTKWidget*) child;
 *
 * @param child
 * @returns NSString*
 */
-(NSString*)getTabLabelText:(CGTKWidget*) child;

/**
 * -(GtkPositionType*)getTabPos;
 *
 * @returns GtkPositionType
 */
-(GtkPositionType)getTabPos;

/**
 * -(BOOL*)getTabReorderable:(CGTKWidget*) child;
 *
 * @param child
 * @returns BOOL
 */
-(BOOL)getTabReorderable:(CGTKWidget*) child;

/**
 * -(guint16*)getTabVborder;
 *
 * @returns guint16
 */
-(guint16)getTabVborder;

/**
 * -(gint*)insertPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andPosition:(gint) position;
 *
 * @param child
 * @param tabLabel
 * @param position
 * @returns gint
 */
-(gint)insertPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andPosition:(gint) position;

/**
 * -(gint*)insertPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel andPosition:(gint) position;
 *
 * @param child
 * @param tabLabel
 * @param menuLabel
 * @param position
 * @returns gint
 */
-(gint)insertPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel andPosition:(gint) position;

/**
 * -(void*)nextPage;
 *
 */
-(void)nextPage;

/**
 * -(gint*)pageNum:(CGTKWidget*) child;
 *
 * @param child
 * @returns gint
 */
-(gint)pageNum:(CGTKWidget*) child;

/**
 * -(void*)popupDisable;
 *
 */
-(void)popupDisable;

/**
 * -(void*)popupEnable;
 *
 */
-(void)popupEnable;

/**
 * -(gint*)prependPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
 *
 * @param child
 * @param tabLabel
 * @returns gint
 */
-(gint)prependPageWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;

/**
 * -(gint*)prependPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;
 *
 * @param child
 * @param tabLabel
 * @param menuLabel
 * @returns gint
 */
-(gint)prependPageMenuWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel andMenuLabel:(CGTKWidget*) menuLabel;

/**
 * -(void*)prevPage;
 *
 */
-(void)prevPage;

/**
 * -(void*)removePage:(gint) pageNum;
 *
 * @param pageNum
 */
-(void)removePage:(gint) pageNum;

/**
 * -(void*)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;
 *
 * @param child
 * @param position
 */
-(void)reorderChildWithChild:(CGTKWidget*) child andPosition:(gint) position;

/**
 * -(void*)setActionWidgetWithWidget:(CGTKWidget*) widget andPackType:(GtkPackType) packType;
 *
 * @param widget
 * @param packType
 */
-(void)setActionWidgetWithWidget:(CGTKWidget*) widget andPackType:(GtkPackType) packType;

/**
 * -(void*)setCurrentPage:(gint) pageNum;
 *
 * @param pageNum
 */
-(void)setCurrentPage:(gint) pageNum;

/**
 * -(void*)setGroupName:(NSString*) groupName;
 *
 * @param groupName
 */
-(void)setGroupName:(NSString*) groupName;

/**
 * -(void*)setMenuLabelWithChild:(CGTKWidget*) child andMenuLabel:(CGTKWidget*) menuLabel;
 *
 * @param child
 * @param menuLabel
 */
-(void)setMenuLabelWithChild:(CGTKWidget*) child andMenuLabel:(CGTKWidget*) menuLabel;

/**
 * -(void*)setMenuLabelTextWithChild:(CGTKWidget*) child andMenuText:(NSString*) menuText;
 *
 * @param child
 * @param menuText
 */
-(void)setMenuLabelTextWithChild:(CGTKWidget*) child andMenuText:(NSString*) menuText;

/**
 * -(void*)setScrollable:(BOOL) scrollable;
 *
 * @param scrollable
 */
-(void)setScrollable:(BOOL) scrollable;

/**
 * -(void*)setShowBorder:(BOOL) showBorder;
 *
 * @param showBorder
 */
-(void)setShowBorder:(BOOL) showBorder;

/**
 * -(void*)setShowTabs:(BOOL) showTabs;
 *
 * @param showTabs
 */
-(void)setShowTabs:(BOOL) showTabs;

/**
 * -(void*)setTabDetachableWithChild:(CGTKWidget*) child andDetachable:(BOOL) detachable;
 *
 * @param child
 * @param detachable
 */
-(void)setTabDetachableWithChild:(CGTKWidget*) child andDetachable:(BOOL) detachable;

/**
 * -(void*)setTabLabelWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;
 *
 * @param child
 * @param tabLabel
 */
-(void)setTabLabelWithChild:(CGTKWidget*) child andTabLabel:(CGTKWidget*) tabLabel;

/**
 * -(void*)setTabLabelTextWithChild:(CGTKWidget*) child andTabText:(NSString*) tabText;
 *
 * @param child
 * @param tabText
 */
-(void)setTabLabelTextWithChild:(CGTKWidget*) child andTabText:(NSString*) tabText;

/**
 * -(void*)setTabPos:(GtkPositionType) pos;
 *
 * @param pos
 */
-(void)setTabPos:(GtkPositionType) pos;

/**
 * -(void*)setTabReorderableWithChild:(CGTKWidget*) child andReorderable:(BOOL) reorderable;
 *
 * @param child
 * @param reorderable
 */
-(void)setTabReorderableWithChild:(CGTKWidget*) child andReorderable:(BOOL) reorderable;

@end
