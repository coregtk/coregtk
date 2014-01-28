/*
 * CGTKCalendar.m
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

#import "CGTKCalendar.h"

@implementation CGTKCalendar

-(GtkCalendar *)CALENDAR
{
	return GTK_CALENDAR([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_calendar_new () andIncrementRefCount:NO];

	if(self)
	{

	}

	return self;
}

-(BOOL)selectMonthWithMonth:(NSNumber *)month andYear:(NSNumber *)year
{
	return [CGTK getBOOL:gtk_calendar_select_month ([self CALENDAR], [month unsignedIntValue], [year unsignedIntValue])];
}

-(void)selectDay:(NSNumber *)day
{
	gtk_calendar_select_day ([self CALENDAR], [day unsignedIntValue]);
}

-(BOOL)markDay:(NSNumber *)day
{
	return [CGTK getBOOL:gtk_calendar_mark_day ([self CALENDAR], [day unsignedIntValue])];
}

-(BOOL)unmarkDay:(NSNumber *)day
{
	return [CGTK getBOOL:gtk_calendar_unmark_day ([self CALENDAR], [day unsignedIntValue])];
}

-(void)clearMarks
{
	gtk_calendar_clear_marks ([self CALENDAR]);
}

-(void)setDisplayOptions:(GtkCalendarDisplayOptions)flags
{
	gtk_calendar_set_display_options ([self CALENDAR], flags);
}

-(GtkCalendarDisplayOptions)getDisplayOptions
{
	return gtk_calendar_get_display_options ([self CALENDAR]);
}

-(void)getDateWithYear:(NSNumber **)year andMonth:(NSNumber **)month andDay:(NSNumber **)day
{
	guint gYear;
	guint gMonth;
	guint gDay;
	
	gtk_calendar_get_date ([self CALENDAR], &gYear, &gMonth, &gDay);
	
	*year = [NSNumber numberWithUnsignedInt:gYear];
	*month = [NSNumber numberWithUnsignedInt:gMonth];
	*day = [NSNumber numberWithUnsignedInt:gDay];
}

-(void)setDetailFuncWithFunc:(GtkCalendarDetailFunc)func andData:(gpointer)data andDestroy:(GDestroyNotify)destroy
{
	gtk_calendar_set_detail_func ([self CALENDAR], func, data, destroy);
}

-(void)setDetailWidthChars:(NSNumber *)chars
{
	gtk_calendar_set_detail_width_chars ([self CALENDAR], [chars intValue]);
}

-(void)setDetailHeightRows:(NSNumber *)rows
{
	gtk_calendar_set_detail_height_rows ([self CALENDAR], [rows intValue]);
}

-(NSNumber *)getDetailWidthChars
{
	return [NSNumber numberWithInt:gtk_calendar_get_detail_width_chars ([self CALENDAR])];
}

-(NSNumber *)getDetailHeightRows
{
	return [NSNumber numberWithInt:gtk_calendar_get_detail_height_rows ([self CALENDAR])];
}

@end
