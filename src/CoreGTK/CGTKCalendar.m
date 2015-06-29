
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCalendar.h"

@implementation CGTKCalendar

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_calendar_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkCalendar*)CALENDAR
{
	return GTK_CALENDAR([self GOBJECT]);
}

-(void)clearMarks
{
	gtk_calendar_clear_marks(GTK_CALENDAR([self GOBJECT]));
}

-(void)getDateWithYear:(guint*) year andMonth:(guint*) month andDay:(guint*) day
{
	gtk_calendar_get_date(GTK_CALENDAR([self GOBJECT]), year, month, day);
}

-(BOOL)getDayIsMarked:(guint) day
{
	return (gtk_calendar_get_day_is_marked(GTK_CALENDAR([self GOBJECT]), day) ? YES : NO);
}

-(gint)getDetailHeightRows
{
	return gtk_calendar_get_detail_height_rows(GTK_CALENDAR([self GOBJECT]));
}

-(gint)getDetailWidthChars
{
	return gtk_calendar_get_detail_width_chars(GTK_CALENDAR([self GOBJECT]));
}

-(GtkCalendarDisplayOptions)getDisplayOptions
{
	return gtk_calendar_get_display_options(GTK_CALENDAR([self GOBJECT]));
}

-(void)markDay:(guint) day
{
	gtk_calendar_mark_day(GTK_CALENDAR([self GOBJECT]), day);
}

-(void)selectDay:(guint) day
{
	gtk_calendar_select_day(GTK_CALENDAR([self GOBJECT]), day);
}

-(void)selectMonthWithMonth:(guint) month andYear:(guint) year
{
	gtk_calendar_select_month(GTK_CALENDAR([self GOBJECT]), month, year);
}

-(void)setDetailFuncWithFunc:(GtkCalendarDetailFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy
{
	gtk_calendar_set_detail_func(GTK_CALENDAR([self GOBJECT]), func, data, destroy);
}

-(void)setDetailHeightRows:(gint) rows
{
	gtk_calendar_set_detail_height_rows(GTK_CALENDAR([self GOBJECT]), rows);
}

-(void)setDetailWidthChars:(gint) chars
{
	gtk_calendar_set_detail_width_chars(GTK_CALENDAR([self GOBJECT]), chars);
}

-(void)setDisplayOptions:(GtkCalendarDisplayOptions) flags
{
	gtk_calendar_set_display_options(GTK_CALENDAR([self GOBJECT]), flags);
}

-(void)unmarkDay:(guint) day
{
	gtk_calendar_unmark_day(GTK_CALENDAR([self GOBJECT]), day);
}


@end