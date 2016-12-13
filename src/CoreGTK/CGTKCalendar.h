/*
 * CGTKCalendar.h
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
#import "CoreGTK/CGTKWidget.h"

@interface CGTKCalendar : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkCalendar*)CALENDAR;

/**
 * -(void*)clearMarks;
 *
 */
-(void)clearMarks;

/**
 * -(void*)getDateWithYear:(guint*) year andMonth:(guint*) month andDay:(guint*) day;
 *
 * @param year
 * @param month
 * @param day
 */
-(void)getDateWithYear:(guint*) year andMonth:(guint*) month andDay:(guint*) day;

/**
 * -(BOOL*)getDayIsMarked:(guint) day;
 *
 * @param day
 * @returns BOOL
 */
-(BOOL)getDayIsMarked:(guint) day;

/**
 * -(gint*)getDetailHeightRows;
 *
 * @returns gint
 */
-(gint)getDetailHeightRows;

/**
 * -(gint*)getDetailWidthChars;
 *
 * @returns gint
 */
-(gint)getDetailWidthChars;

/**
 * -(GtkCalendarDisplayOptions*)getDisplayOptions;
 *
 * @returns GtkCalendarDisplayOptions
 */
-(GtkCalendarDisplayOptions)getDisplayOptions;

/**
 * -(void*)markDay:(guint) day;
 *
 * @param day
 */
-(void)markDay:(guint) day;

/**
 * -(void*)selectDay:(guint) day;
 *
 * @param day
 */
-(void)selectDay:(guint) day;

/**
 * -(void*)selectMonthWithMonth:(guint) month andYear:(guint) year;
 *
 * @param month
 * @param year
 */
-(void)selectMonthWithMonth:(guint) month andYear:(guint) year;

/**
 * -(void*)setDetailFuncWithFunc:(GtkCalendarDetailFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
 *
 * @param func
 * @param data
 * @param destroy
 */
-(void)setDetailFuncWithFunc:(GtkCalendarDetailFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;

/**
 * -(void*)setDetailHeightRows:(gint) rows;
 *
 * @param rows
 */
-(void)setDetailHeightRows:(gint) rows;

/**
 * -(void*)setDetailWidthChars:(gint) chars;
 *
 * @param chars
 */
-(void)setDetailWidthChars:(gint) chars;

/**
 * -(void*)setDisplayOptions:(GtkCalendarDisplayOptions) flags;
 *
 * @param flags
 */
-(void)setDisplayOptions:(GtkCalendarDisplayOptions) flags;

/**
 * -(void*)unmarkDay:(guint) day;
 *
 * @param day
 */
-(void)unmarkDay:(guint) day;

@end
