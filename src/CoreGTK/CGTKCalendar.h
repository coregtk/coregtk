
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
-(void)clearMarks;
-(void)getDateWithYear:(guint*) year andMonth:(guint*) month andDay:(guint*) day;
-(BOOL)getDayIsMarked:(guint) day;
-(gint)getDetailHeightRows;
-(gint)getDetailWidthChars;
-(GtkCalendarDisplayOptions)getDisplayOptions;
-(void)markDay:(guint) day;
-(void)selectDay:(guint) day;
-(void)selectMonthWithMonth:(guint) month andYear:(guint) year;
-(void)setDetailFuncWithFunc:(GtkCalendarDetailFunc) func andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setDetailHeightRows:(gint) rows;
-(void)setDetailWidthChars:(gint) chars;
-(void)setDisplayOptions:(GtkCalendarDisplayOptions) flags;
-(void)unmarkDay:(guint) day;

@end