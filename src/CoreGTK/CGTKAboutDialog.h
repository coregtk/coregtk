/*
 * CGTKAboutDialog.h
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
#import "CoreGTK/CGTKDialog.h"

@interface CGTKAboutDialog : CGTKDialog
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkAboutDialog*)ABOUTDIALOG;
-(void)addCreditSectionWithSectionName:(NSString*) sectionName andPeople:(gchar**) people;
-(gchar**)getArtists;
-(gchar**)getAuthors;
-(NSString*)getComments;
-(NSString*)getCopyright;
-(gchar**)getDocumenters;
-(NSString*)getLicense;
-(GtkLicense)getLicenseType;
-(GdkPixbuf*)getLogo;
-(NSString*)getLogoIconName;
-(NSString*)getProgramName;
-(NSString*)getTranslatorCredits;
-(NSString*)getVersion;
-(NSString*)getWebsite;
-(NSString*)getWebsiteLabel;
-(BOOL)getWrapLicense;
-(void)setArtists:(gchar**) artists;
-(void)setAuthors:(gchar**) authors;
-(void)setComments:(NSString*) comments;
-(void)setCopyright:(NSString*) copyright;
-(void)setDocumenters:(gchar**) documenters;
-(void)setLicense:(NSString*) license;
-(void)setLicenseType:(GtkLicense) licenseType;
-(void)setLogo:(GdkPixbuf*) logo;
-(void)setLogoIconName:(NSString*) iconName;
-(void)setProgramName:(NSString*) name;
-(void)setTranslatorCredits:(NSString*) translatorCredits;
-(void)setVersion:(NSString*) version;
-(void)setWebsite:(NSString*) website;
-(void)setWebsiteLabel:(NSString*) websiteLabel;
-(void)setWrapLicense:(BOOL) wrapLicense;

@end