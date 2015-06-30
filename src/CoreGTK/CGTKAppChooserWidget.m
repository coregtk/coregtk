/*
 * CGTKAppChooserWidget.m
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
#import "CoreGTK/CGTKAppChooserWidget.h"

@implementation CGTKAppChooserWidget

-(id)init:(NSString*) contentType
{
	self = [super initWithGObject:(GObject *)gtk_app_chooser_widget_new([contentType UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAppChooserWidget*)APPCHOOSERWIDGET
{
	return GTK_APP_CHOOSER_WIDGET([self GOBJECT]);
}

-(NSString*)getDefaultText
{
	return [NSString stringWithUTF8String:gtk_app_chooser_widget_get_default_text(GTK_APP_CHOOSER_WIDGET([self GOBJECT]))];
}

-(BOOL)getShowAll
{
	return (gtk_app_chooser_widget_get_show_all(GTK_APP_CHOOSER_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowDefault
{
	return (gtk_app_chooser_widget_get_show_default(GTK_APP_CHOOSER_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowFallback
{
	return (gtk_app_chooser_widget_get_show_fallback(GTK_APP_CHOOSER_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowOther
{
	return (gtk_app_chooser_widget_get_show_other(GTK_APP_CHOOSER_WIDGET([self GOBJECT])) ? YES : NO);
}

-(BOOL)getShowRecommended
{
	return (gtk_app_chooser_widget_get_show_recommended(GTK_APP_CHOOSER_WIDGET([self GOBJECT])) ? YES : NO);
}

-(void)setDefaultText:(NSString*) text
{
	gtk_app_chooser_widget_set_default_text(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), [text UTF8String]);
}

-(void)setShowAll:(BOOL) setting
{
	gtk_app_chooser_widget_set_show_all(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setShowDefault:(BOOL) setting
{
	gtk_app_chooser_widget_set_show_default(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setShowFallback:(BOOL) setting
{
	gtk_app_chooser_widget_set_show_fallback(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setShowOther:(BOOL) setting
{
	gtk_app_chooser_widget_set_show_other(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), (setting ? TRUE : FALSE));
}

-(void)setShowRecommended:(BOOL) setting
{
	gtk_app_chooser_widget_set_show_recommended(GTK_APP_CHOOSER_WIDGET([self GOBJECT]), (setting ? TRUE : FALSE));
}


@end