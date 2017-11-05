/*
 * CGTKComboBoxText.h
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
#import "CoreGTK/CGTKComboBox.h"

@interface CGTKComboBoxText : CGTKComboBox
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithEntry;

/**
 * Methods
 */

-(GtkComboBoxText*)COMBOBOXTEXT;

/**
 * -(void*)appendWithId:(NSString*) id andText:(NSString*) text;
 *
 * @param id
 * @param text
 */
-(void)appendWithId:(NSString*) id andText:(NSString*) text;

/**
 * -(void*)appendText:(NSString*) text;
 *
 * @param text
 */
-(void)appendText:(NSString*) text;

/**
 * -(NSString**)getActiveText;
 *
 * @returns NSString*
 */
-(NSString*)getActiveText;

/**
 * -(void*)insertWithPosition:(gint) position andId:(NSString*) id andText:(NSString*) text;
 *
 * @param position
 * @param id
 * @param text
 */
-(void)insertWithPosition:(gint) position andId:(NSString*) id andText:(NSString*) text;

/**
 * -(void*)insertTextWithPosition:(gint) position andText:(NSString*) text;
 *
 * @param position
 * @param text
 */
-(void)insertTextWithPosition:(gint) position andText:(NSString*) text;

/**
 * -(void*)prependWithId:(NSString*) id andText:(NSString*) text;
 *
 * @param id
 * @param text
 */
-(void)prependWithId:(NSString*) id andText:(NSString*) text;

/**
 * -(void*)prependText:(NSString*) text;
 *
 * @param text
 */
-(void)prependText:(NSString*) text;

/**
 * -(void*)remove:(gint) position;
 *
 * @param position
 */
-(void)remove:(gint) position;

/**
 * -(void*)removeAll;
 *
 */
-(void)removeAll;

@end