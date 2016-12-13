/*
 * CGTKExpander.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKExpander : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */

-(GtkExpander*)EXPANDER;

/**
 * -(BOOL*)getExpanded;
 *
 * @returns BOOL
 */
-(BOOL)getExpanded;

/**
 * -(NSString**)getLabel;
 *
 * @returns NSString*
 */
-(NSString*)getLabel;

/**
 * -(BOOL*)getLabelFill;
 *
 * @returns BOOL
 */
-(BOOL)getLabelFill;

/**
 * -(CGTKWidget**)getLabelWidget;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getLabelWidget;

/**
 * -(BOOL*)getResizeToplevel;
 *
 * @returns BOOL
 */
-(BOOL)getResizeToplevel;

/**
 * -(gint*)getSpacing;
 *
 * @returns gint
 */
-(gint)getSpacing;

/**
 * -(BOOL*)getUseMarkup;
 *
 * @returns BOOL
 */
-(BOOL)getUseMarkup;

/**
 * -(BOOL*)getUseUnderline;
 *
 * @returns BOOL
 */
-(BOOL)getUseUnderline;

/**
 * -(void*)setExpanded:(BOOL) expanded;
 *
 * @param expanded
 */
-(void)setExpanded:(BOOL) expanded;

/**
 * -(void*)setLabel:(NSString*) label;
 *
 * @param label
 */
-(void)setLabel:(NSString*) label;

/**
 * -(void*)setLabelFill:(BOOL) labelFill;
 *
 * @param labelFill
 */
-(void)setLabelFill:(BOOL) labelFill;

/**
 * -(void*)setLabelWidget:(CGTKWidget*) labelWidget;
 *
 * @param labelWidget
 */
-(void)setLabelWidget:(CGTKWidget*) labelWidget;

/**
 * -(void*)setResizeToplevel:(BOOL) resizeToplevel;
 *
 * @param resizeToplevel
 */
-(void)setResizeToplevel:(BOOL) resizeToplevel;

/**
 * -(void*)setSpacing:(gint) spacing;
 *
 * @param spacing
 */
-(void)setSpacing:(gint) spacing;

/**
 * -(void*)setUseMarkup:(BOOL) useMarkup;
 *
 * @param useMarkup
 */
-(void)setUseMarkup:(BOOL) useMarkup;

/**
 * -(void*)setUseUnderline:(BOOL) useUnderline;
 *
 * @param useUnderline
 */
-(void)setUseUnderline:(BOOL) useUnderline;

@end
