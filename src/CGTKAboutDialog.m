/*
 * CGTKAboutDialog.m
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
 
#import "CGTKAboutDialog.h"

@implementation CGTKAboutDialog

-(id)init
{
	self = [super initWithGtkWidget:gtk_about_dialog_new() andIncrementRefCount:NO];

    if(self)
    {
        // Do nothing
    }

    return self;
}

-(GtkAboutDialog *)ABOUT_DIALOG
{
	return GTK_ABOUT_DIALOG([self WIDGET]);
}

-(void)setProgramName:(NSString *)name
{
	gtk_about_dialog_set_program_name ([self ABOUT_DIALOG], [name UTF8String]);
}

-(NSString *)getProgramName
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_program_name ([self ABOUT_DIALOG])];
}

-(void)setVersion:(NSString *)version
{
	gtk_about_dialog_set_version ([self ABOUT_DIALOG], [version UTF8String]);
}

-(NSString *)getVersion
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_version ([self ABOUT_DIALOG])];
}

-(void)setCopyright:(NSString *)copyright
{
	gtk_about_dialog_set_copyright ([self ABOUT_DIALOG], [copyright UTF8String]);
}

-(NSString *)getCopyright
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_copyright ([self ABOUT_DIALOG])];
}

-(void)setComments:(NSString *)comments
{
	gtk_about_dialog_set_comments ([self ABOUT_DIALOG], [comments UTF8String]);
}

-(NSString *)getComments
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_comments ([self ABOUT_DIALOG])];
}

-(void)setLicense:(NSString *)license
{
	gtk_about_dialog_set_license ([self ABOUT_DIALOG], [license UTF8String]);
}

 -(NSString *)getLicense
 {
 	return [NSString stringWithUTF8String:gtk_about_dialog_get_license ([self ABOUT_DIALOG])];
 }

-(BOOL)getWrapLicense
{
	return [CGTK getBOOL:gtk_about_dialog_get_wrap_license ([self ABOUT_DIALOG])];
}

-(void)setWrapLicense:(BOOL)wrapLicense
{
	gtk_about_dialog_set_wrap_license ([self ABOUT_DIALOG], [CGTK getGboolean:wrapLicense]);
}

-(void)setWebsite:(NSString *)website
{
	gtk_about_dialog_set_website ([self ABOUT_DIALOG], [website UTF8String]);
}

-(NSString *)getWebsite
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_website([self ABOUT_DIALOG])];
}

-(void)setWebsiteLabel:(NSString *)websiteLabel
{
	gtk_about_dialog_set_website_label ([self ABOUT_DIALOG], [websiteLabel UTF8String]);
}

-(NSString *)getWebsiteLabel
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_website_label([self ABOUT_DIALOG])];
}

-(void)setAuthors:(NSArray *)authors
{
	int i = 0;
	const gchar* gAuthors[[authors count] + 1];
	
	for(i = 0; i < [authors count]; i++)
	{
		gAuthors[i] = [[authors objectAtIndex:i] UTF8String];
	}
	gAuthors[[authors count]] = NULL;
	
	gtk_about_dialog_set_authors ([self ABOUT_DIALOG], gAuthors);
}

-(NSArray *)getAuthors
{
	int current = 0;
	const gchar* curAuthor = NULL;
	const gchar* const * gAuthors = gtk_about_dialog_get_authors ([self ABOUT_DIALOG]);
	NSMutableArray* mArray = [[NSMutableArray alloc] init];
	
	while((curAuthor = gAuthors[current]) != NULL)
	{
		[mArray addObject:[NSString stringWithUTF8String:curAuthor]];
		current++;
	}
	
	return mArray;
}

-(void)setDocumenters:(NSArray *)documenters
{
	int i = 0;
	const gchar* gDocumenters[[documenters count] + 1];
	
	for(i = 0; i < [documenters count]; i++)
	{
		gDocumenters[i] = [[documenters objectAtIndex:i] UTF8String];
	}
	gDocumenters[[documenters count]] = NULL;
	
	gtk_about_dialog_set_documenters ([self ABOUT_DIALOG], gDocumenters);
}

-(NSArray *)getDocumenters
{
	int current = 0;
	const gchar* curDocumenters = NULL;
	const gchar* const * gDocumenters = gtk_about_dialog_get_documenters ([self ABOUT_DIALOG]);
	NSMutableArray* mArray = [[NSMutableArray alloc] init];
	
	while((curDocumenters = gDocumenters[current]) != NULL)
	{
		[mArray addObject:[NSString stringWithUTF8String:curDocumenters]];
		current++;
	}
	
	return mArray;
}

-(void)setArtists:(NSArray *)artists
{
	int i = 0;
	const gchar* gArtists[[artists count] + 1];
	
	for(i = 0; i < [artists count]; i++)
	{
		gArtists[i] = [[artists objectAtIndex:i] UTF8String];
	}
	gArtists[[artists count]] = NULL;
	
	gtk_about_dialog_set_artists ([self ABOUT_DIALOG], gArtists);
}

-(NSArray *)getArtists
{
	int current = 0;
	const gchar* curArtists = NULL;
	const gchar* const * gArtists = gtk_about_dialog_get_artists ([self ABOUT_DIALOG]);
	NSMutableArray* mArray = [[NSMutableArray alloc] init];
	
	while((curArtists = gArtists[current]) != NULL)
	{
		[mArray addObject:[NSString stringWithUTF8String:curArtists]];
		current++;
	}
	
	return mArray;

}

-(void)setTranslatorCredits:(NSString *)translatorCredits
{
	gtk_about_dialog_set_translator_credits ([self ABOUT_DIALOG], [translatorCredits UTF8String]);
}

-(NSString *)getTranslatorCredits
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_translator_credits ([self ABOUT_DIALOG])];
}

-(GdkPixbuf *)getLogo
{
	return gtk_about_dialog_get_logo ([self ABOUT_DIALOG]);
}

-(void)setLogo:(GdkPixbuf *)logo
{
	gtk_about_dialog_set_logo ([self ABOUT_DIALOG], logo);
}

-(void)setLogoIconName:(NSString *)iconName
{
	gtk_about_dialog_set_logo_icon_name ([self ABOUT_DIALOG], [iconName UTF8String]);
}

-(NSString *)getLogoIconName
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_logo_icon_name ([self ABOUT_DIALOG])];
}

@end
