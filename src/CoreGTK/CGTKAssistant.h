/*
 * CGTKAssistant.h
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
#import "CoreGTK/CGTKWindow.h"

@interface CGTKAssistant : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkAssistant*)ASSISTANT;

/**
 * -(void*)addActionWidget:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)addActionWidget:(CGTKWidget*) child;

/**
 * -(gint*)appendPage:(CGTKWidget*) page;
 *
 * @param page
 * @returns gint
 */
-(gint)appendPage:(CGTKWidget*) page;

/**
 * -(void*)commit;
 *
 */
-(void)commit;

/**
 * -(gint*)getCurrentPage;
 *
 * @returns gint
 */
-(gint)getCurrentPage;

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
 * -(BOOL*)getPageComplete:(CGTKWidget*) page;
 *
 * @param page
 * @returns BOOL
 */
-(BOOL)getPageComplete:(CGTKWidget*) page;

/**
 * -(BOOL*)getPageHasPadding:(CGTKWidget*) page;
 *
 * @param page
 * @returns BOOL
 */
-(BOOL)getPageHasPadding:(CGTKWidget*) page;

/**
 * -(GdkPixbuf**)getPageHeaderImage:(CGTKWidget*) page;
 *
 * @param page
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getPageHeaderImage:(CGTKWidget*) page;

/**
 * -(GdkPixbuf**)getPageSideImage:(CGTKWidget*) page;
 *
 * @param page
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getPageSideImage:(CGTKWidget*) page;

/**
 * -(NSString**)getPageTitle:(CGTKWidget*) page;
 *
 * @param page
 * @returns NSString*
 */
-(NSString*)getPageTitle:(CGTKWidget*) page;

/**
 * -(GtkAssistantPageType*)getPageType:(CGTKWidget*) page;
 *
 * @param page
 * @returns GtkAssistantPageType
 */
-(GtkAssistantPageType)getPageType:(CGTKWidget*) page;

/**
 * -(gint*)insertPageWithPage:(CGTKWidget*) page andPosition:(gint) position;
 *
 * @param page
 * @param position
 * @returns gint
 */
-(gint)insertPageWithPage:(CGTKWidget*) page andPosition:(gint) position;

/**
 * -(void*)nextPage;
 *
 */
-(void)nextPage;

/**
 * -(gint*)prependPage:(CGTKWidget*) page;
 *
 * @param page
 * @returns gint
 */
-(gint)prependPage:(CGTKWidget*) page;

/**
 * -(void*)previousPage;
 *
 */
-(void)previousPage;

/**
 * -(void*)removeActionWidget:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)removeActionWidget:(CGTKWidget*) child;

/**
 * -(void*)removePage:(gint) pageNum;
 *
 * @param pageNum
 */
-(void)removePage:(gint) pageNum;

/**
 * -(void*)setCurrentPage:(gint) pageNum;
 *
 * @param pageNum
 */
-(void)setCurrentPage:(gint) pageNum;

/**
 * -(void*)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc) pageFunc andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param pageFunc
 * @param data
 * @param destroy
 */
-(void)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc) pageFunc andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setPageCompleteWithPage:(CGTKWidget*) page andComplete:(BOOL) complete;
 *
 * @param page
 * @param complete
 */
-(void)setPageCompleteWithPage:(CGTKWidget*) page andComplete:(BOOL) complete;

/**
 * -(void*)setPageHasPaddingWithPage:(CGTKWidget*) page andHasPadding:(BOOL) hasPadding;
 *
 * @param page
 * @param hasPadding
 */
-(void)setPageHasPaddingWithPage:(CGTKWidget*) page andHasPadding:(BOOL) hasPadding;

/**
 * -(void*)setPageHeaderImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;
 *
 * @param page
 * @param pixbuf
 */
-(void)setPageHeaderImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;

/**
 * -(void*)setPageSideImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;
 *
 * @param page
 * @param pixbuf
 */
-(void)setPageSideImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;

/**
 * -(void*)setPageTitleWithPage:(CGTKWidget*) page andTitle:(NSString*) title;
 *
 * @param page
 * @param title
 */
-(void)setPageTitleWithPage:(CGTKWidget*) page andTitle:(NSString*) title;

/**
 * -(void*)setPageTypeWithPage:(CGTKWidget*) page andType:(GtkAssistantPageType) type;
 *
 * @param page
 * @param type
 */
-(void)setPageTypeWithPage:(CGTKWidget*) page andType:(GtkAssistantPageType) type;

/**
 * -(void*)updateButtonsState;
 *
 */
-(void)updateButtonsState;

@end