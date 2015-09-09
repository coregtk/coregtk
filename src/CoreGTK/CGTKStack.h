/*
 * CGTKStack.h
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

@interface CGTKStack : CGTKContainer
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkStack*)STACK;

/**
 * -(void*)addNamedWithChild:(CGTKWidget*) child andName:(NSString*) name;
 *
 * @param child
 * @param name
 */
-(void)addNamedWithChild:(CGTKWidget*) child andName:(NSString*) name;

/**
 * -(void*)addTitledWithChild:(CGTKWidget*) child andName:(NSString*) name andTitle:(NSString*) title;
 *
 * @param child
 * @param name
 * @param title
 */
-(void)addTitledWithChild:(CGTKWidget*) child andName:(NSString*) name andTitle:(NSString*) title;

/**
 * -(BOOL*)getHomogeneous;
 *
 * @returns BOOL
 */
-(BOOL)getHomogeneous;

/**
 * -(guint*)getTransitionDuration;
 *
 * @returns guint
 */
-(guint)getTransitionDuration;

/**
 * -(GtkStackTransitionType*)getTransitionType;
 *
 * @returns GtkStackTransitionType
 */
-(GtkStackTransitionType)getTransitionType;

/**
 * -(CGTKWidget**)getVisibleChild;
 *
 * @returns CGTKWidget*
 */
-(CGTKWidget*)getVisibleChild;

/**
 * -(NSString**)getVisibleChildName;
 *
 * @returns NSString*
 */
-(NSString*)getVisibleChildName;

/**
 * -(void*)setHomogeneous:(BOOL) homogeneous;
 *
 * @param homogeneous
 */
-(void)setHomogeneous:(BOOL) homogeneous;

/**
 * -(void*)setTransitionDuration:(guint) duration;
 *
 * @param duration
 */
-(void)setTransitionDuration:(guint) duration;

/**
 * -(void*)setTransitionType:(GtkStackTransitionType) transition;
 *
 * @param transition
 */
-(void)setTransitionType:(GtkStackTransitionType) transition;

/**
 * -(void*)setVisibleChild:(CGTKWidget*) child;
 *
 * @param child
 */
-(void)setVisibleChild:(CGTKWidget*) child;

/**
 * -(void*)setVisibleChildFullWithName:(NSString*) name andTransition:(GtkStackTransitionType) transition;
 *
 * @param name
 * @param transition
 */
-(void)setVisibleChildFullWithName:(NSString*) name andTransition:(GtkStackTransitionType) transition;

/**
 * -(void*)setVisibleChildName:(NSString*) name;
 *
 * @param name
 */
-(void)setVisibleChildName:(NSString*) name;

@end