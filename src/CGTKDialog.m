/*
 * CGTKDialog.m
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

#import "CGTKDialog.h"

@implementation CGTKDialog

-(id)init
{
    self = [super init];

    if(self)
    {
        // Set dialog here
        [self setWidget:gtk_dialog_new()];
    }

    return self;
}

-(GtkDialog *)DIALOG
{
	return GTK_DIALOG([self WIDGET]);
}

-(void)addActionWidgetWithChild:(CGTKWidget *)child andResponseId:(NSNumber *)responseId
{
	gtk_dialog_add_action_widget ([self DIALOG], [child WIDGET], [responseId intValue]);
}

-(CGTKWidget *)addButtonWithButtonText:(NSString *)buttonText andResponseId:(NSNumber *)responseId
{
	return [CGTKWidget widgetWithGtkWidget:gtk_dialog_add_button ([self DIALOG], [buttonText UTF8String], [responseId intValue])];
}

-(void)setResponseSensitiveWithResponseId:(NSNumber *)responseId andSetting:(BOOL)setting
{
	gtk_dialog_set_response_sensitive ([self DIALOG], [responseId intValue], [CGTK getGboolean:setting]);
}

-(void)setDefaultResponse:(NSNumber *)responseId
{
	gtk_dialog_set_default_response ([self DIALOG], [responseId intValue]);
}

-(CGTKWidget *)getWidgetForResponse:(NSNumber *)responseId
{
	return [CGTKWidget widgetWithGtkWidget:gtk_dialog_get_widget_for_response ([self DIALOG], [responseId intValue])];
}

-(NSNumber *)getResponseForWidget:(CGTKWidget *)widget
{
	return [NSNumber numberWithInt:gtk_dialog_get_response_for_widget ([self DIALOG], [widget WIDGET])];
}

-(void)setAlternativeButtonOrderFromArrayWithNParams:(NSNumber *)nParams andNewOrder:(NSArray *)newOrder
{
	int i = 0;
	int n_params = [nParams intValue];
	gint *array = malloc(sizeof(gint) * n_params);
	
	for(i = 0; i < n_params; i++)
	{
		array[i] = [[newOrder objectAtIndex:i] intValue];
	}
	
	gtk_dialog_set_alternative_button_order_from_array ([self DIALOG], n_params, array);
	
	g_free(array);
}

-(void)response:(NSNumber *)responseId
{
	gtk_dialog_response ([self DIALOG], [responseId intValue]);
}

-(NSNumber *)run
{
	NSLog(@"In run");
	return [NSNumber numberWithInt:gtk_dialog_run([self DIALOG])];
}

-(CGTKWidget *)getActionArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_dialog_get_action_area ([self DIALOG])];
}

-(CGTKWidget *)getContentArea
{
	return [CGTKWidget widgetWithGtkWidget:gtk_dialog_get_content_area ([self DIALOG])];
}

+(BOOL)alternativeDialogButtonOrder:(GdkScreen *)screen
{
	return [CGTK getBOOL:gtk_alternative_dialog_button_order (screen)];
}

@end
