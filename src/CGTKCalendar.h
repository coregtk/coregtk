/*
 * CGTKCalendar.h
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

/*
 * Objective-C imports
 */
#import "CGTKWidget.h"

@interface CGTKCalendar : CGTKWidget
{
	
}

/**
 * Returns internal GtkCalendar
 */
-(GtkCalendar *)CALENDAR;

/**
 * Forwards message to:
 * GtkWidget* gtk_calendar_new (void)
 */
-(id)init;

/**
 * Forwards message to:
 * gboolean gtk_calendar_select_month (GtkCalendar* calendar, guint month, guint year)
 */
-(BOOL)selectMonthWithMonth:(NSNumber *)month andYear:(NSNumber *)year;

/**
 * Forwards message to:
 * void gtk_calendar_select_day (GtkCalendar* calendar, guint day)
 */
-(void)selectDay:(NSNumber *)day;

/**
 * Forwards message to:
 * gboolean gtk_calendar_mark_day (GtkCalendar* calendar, guint day)
 */
-(BOOL)markDay:(NSNumber *)day;

/**
 * Forwards message to:
 * gboolean gtk_calendar_unmark_day (GtkCalendar* calendar, guint day)
 */
-(BOOL)unmarkDay:(NSNumber *)day;

/**
 * Forwards message to:
 * void gtk_calendar_clear_marks (GtkCalendar* calendar)
 */
-(void)clearMarks;

/**
 * Forwards message to:
 * void gtk_calendar_set_display_options (GtkCalendar* calendar, GtkCalendarDisplayOptions flags)
 */
-(void)setDisplayOptions:(GtkCalendarDisplayOptions)flags;

/**
 * Forwards message to:
 * GtkCalendarDisplayOptions gtk_calendar_get_display_options (GtkCalendar* calendar)
 */
-(GtkCalendarDisplayOptions)getDisplayOptions;

/**
 * Forwards message to:
 * void gtk_calendar_get_date (GtkCalendar* calendar, guint* year, guint* month, guint* day)
 */
-(void)getDateWithYear:(NSNumber **)year andMonth:(NSNumber **)month andDay:(NSNumber **)day;

/**
 * Forwards message to:
 * void gtk_calendar_set_detail_func (GtkCalendar* calendar, GtkCalendarDetailFunc func, gpointer data, GDestroyNotify destroy)
 */
-(void)setDetailFuncWithFunc:(GtkCalendarDetailFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy;

/**
 * Forwards message to:
 * void gtk_calendar_set_detail_width_chars (GtkCalendar* calendar, gint chars)
 */
-(void)setDetailWidthChars:(NSNumber *)chars;

/**
 * Forwards message to:
 * void gtk_calendar_set_detail_height_rows (GtkCalendar* calendar, gint rows)
 */
-(void)setDetailHeightRows:(NSNumber *)rows;

/**
 * Forwards message to:
 * gint gtk_calendar_get_detail_width_chars (GtkCalendar* calendar)
 */
-(NSNumber *)getDetailWidthChars;

/**
 * Forwards message to:
 * gint gtk_calendar_get_detail_height_rows (GtkCalendar* calendar)
 */
-(NSNumber *)getDetailHeightRows;

@end
