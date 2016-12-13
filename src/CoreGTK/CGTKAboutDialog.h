/*
 * CGTKAboutDialog.h
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

/**
 * -(void*)addCreditSectionWithSectionName:(NSString*) sectionName andPeople:(gchar**) people;
 *
 * @param sectionName
 * @param people
 */
-(void)addCreditSectionWithSectionName:(NSString*) sectionName andPeople:(gchar**) people;

/**
 * -(gchar***)getArtists;
 *
 * @returns gchar**
 */
-(gchar**)getArtists;

/**
 * -(gchar***)getAuthors;
 *
 * @returns gchar**
 */
-(gchar**)getAuthors;

/**
 * -(NSString**)getComments;
 *
 * @returns NSString*
 */
-(NSString*)getComments;

/**
 * -(NSString**)getCopyright;
 *
 * @returns NSString*
 */
-(NSString*)getCopyright;

/**
 * -(gchar***)getDocumenters;
 *
 * @returns gchar**
 */
-(gchar**)getDocumenters;

/**
 * -(NSString**)getLicense;
 *
 * @returns NSString*
 */
-(NSString*)getLicense;

/**
 * -(GtkLicense*)getLicenseType;
 *
 * @returns GtkLicense
 */
-(GtkLicense)getLicenseType;

/**
 * -(GdkPixbuf**)getLogo;
 *
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getLogo;

/**
 * -(NSString**)getLogoIconName;
 *
 * @returns NSString*
 */
-(NSString*)getLogoIconName;

/**
 * -(NSString**)getProgramName;
 *
 * @returns NSString*
 */
-(NSString*)getProgramName;

/**
 * -(NSString**)getTranslatorCredits;
 *
 * @returns NSString*
 */
-(NSString*)getTranslatorCredits;

/**
 * -(NSString**)getVersion;
 *
 * @returns NSString*
 */
-(NSString*)getVersion;

/**
 * -(NSString**)getWebsite;
 *
 * @returns NSString*
 */
-(NSString*)getWebsite;

/**
 * -(NSString**)getWebsiteLabel;
 *
 * @returns NSString*
 */
-(NSString*)getWebsiteLabel;

/**
 * -(BOOL*)getWrapLicense;
 *
 * @returns BOOL
 */
-(BOOL)getWrapLicense;

/**
 * -(void*)setArtists:(gchar**) artists;
 *
 * @param artists
 */
-(void)setArtists:(gchar**) artists;

/**
 * -(void*)setAuthors:(gchar**) authors;
 *
 * @param authors
 */
-(void)setAuthors:(gchar**) authors;

/**
 * -(void*)setComments:(NSString*) comments;
 *
 * @param comments
 */
-(void)setComments:(NSString*) comments;

/**
 * -(void*)setCopyright:(NSString*) copyright;
 *
 * @param copyright
 */
-(void)setCopyright:(NSString*) copyright;

/**
 * -(void*)setDocumenters:(gchar**) documenters;
 *
 * @param documenters
 */
-(void)setDocumenters:(gchar**) documenters;

/**
 * -(void*)setLicense:(NSString*) license;
 *
 * @param license
 */
-(void)setLicense:(NSString*) license;

/**
 * -(void*)setLicenseType:(GtkLicense) licenseType;
 *
 * @param licenseType
 */
-(void)setLicenseType:(GtkLicense) licenseType;

/**
 * -(void*)setLogo:(GdkPixbuf*) logo;
 *
 * @param logo
 */
-(void)setLogo:(GdkPixbuf*) logo;

/**
 * -(void*)setLogoIconName:(NSString*) iconName;
 *
 * @param iconName
 */
-(void)setLogoIconName:(NSString*) iconName;

/**
 * -(void*)setProgramName:(NSString*) name;
 *
 * @param name
 */
-(void)setProgramName:(NSString*) name;

/**
 * -(void*)setTranslatorCredits:(NSString*) translatorCredits;
 *
 * @param translatorCredits
 */
-(void)setTranslatorCredits:(NSString*) translatorCredits;

/**
 * -(void*)setVersion:(NSString*) version;
 *
 * @param version
 */
-(void)setVersion:(NSString*) version;

/**
 * -(void*)setWebsite:(NSString*) website;
 *
 * @param website
 */
-(void)setWebsite:(NSString*) website;

/**
 * -(void*)setWebsiteLabel:(NSString*) websiteLabel;
 *
 * @param websiteLabel
 */
-(void)setWebsiteLabel:(NSString*) websiteLabel;

/**
 * -(void*)setWrapLicense:(BOOL) wrapLicense;
 *
 * @param wrapLicense
 */
-(void)setWrapLicense:(BOOL) wrapLicense;

@end