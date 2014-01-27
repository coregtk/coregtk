/*
 * CGTKAboutDialog.h
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
#import "CGTKDialog.h"

@interface CGTKAboutDialog : CGTKDialog
{
	
}

/*
 * Creates and returns a new instance of CGTKAboutDialog holding the GtkAboutDialog.
 */
-(id)init;

/*
 * Gets the internal GtkAboutDialog widget
 */
-(GtkAboutDialog *)ABOUT_DIALOG;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_program_name (GtkAboutDialog* about,const gchar* name)
 */
-(void)setProgramName:(NSString *)name;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_version (GtkAboutDialog* about,const gchar* version)
 */
-(void)setVersion:(NSString *)version;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_version (GtkAboutDialog* about);
 */
-(NSString *)getVersion;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_copyright (GtkAboutDialog* about,const gchar* copyright)
 */
-(void)setCopyright:(NSString *)copyright;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_copyright(GtkAboutDialog* about);
 */
-(NSString *)getCopyright;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_comments (GtkAboutDialog* about,const gchar* comments)
 */
-(void)setComments:(NSString *)comments;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_comments (GtkAboutDialog *about);
 */
-(NSString *)getComments;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_license (GtkAboutDialog* about,const gchar* license)
 */
-(void)setLicense:(NSString *)license;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_license (GtkAboutDialog *about);
 */
 -(NSString *)getLicense;

/*
 * Forwards message to:
 * gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog* about)
 */
-(BOOL)getWrapLicense;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_wrap_license (GtkAboutDialog* about, gboolean wrap_license)
 */
-(void)setWrapLicense:(BOOL)wrapLicense;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_website (GtkAboutDialog* about,const gchar* website)
 */
-(void)setWebsite:(NSString *)website;

/*
 * Forwards message to:
 * gboolean gtk_about_dialog_get_website (GtkAboutDialog* about)
 */
-(NSString *)getWebsite;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_website_label (GtkAboutDialog* about,const gchar* website_label)
 */
-(void)setWebsiteLabel:(NSString *)websiteLabel;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_website_label (GtkAboutDialog* about)
 */
-(NSString *)getWebsiteLabel;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_authors (GtkAboutDialog* about,const gchar** authors)
 */
-(void)setAuthors:(NSArray *)authors;

/*
 * Forwards message to:
 * const gchar * const * gtk_about_dialog_get_authors (GtkAboutDialog* about);
 */
-(NSArray *)getAuthors;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_documenters (GtkAboutDialog* about,const gchar** documenters)
 */
-(void)setDocumenters:(NSArray *)documenters;

/*
 * Forwards message to:
 * const gchar * const * gtk_about_dialog_get_documenters  (GtkAboutDialog *about);
 */
-(NSArray *)getDocumenters;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_artists (GtkAboutDialog* about,const gchar** artists)
 */
-(void)setArtists:(NSArray *)artists;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_artists (GtkAboutDialog* about)
 */
-(NSArray *)getArtists;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_translator_credits (GtkAboutDialog* about,const gchar* translator_credits)
 */
-(void)setTranslatorCredits:(NSString *)translatorCredits;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_translator_credits (GtkAboutDialog* about)
 */
-(NSString *)getTranslatorCredits;

/*
 * Forwards message to:
 * GdkPixbuf* gtk_about_dialog_get_logo (GtkAboutDialog* about)
 */
-(GdkPixbuf *)getLogo;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_logo (GtkAboutDialog* about,GdkPixbuf* logo)
 */
-(void)setLogo:(GdkPixbuf *)logo;

/*
 * Forwards message to:
 * void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog* about,const gchar* icon_name)
 */
-(void)setLogoIconName:(NSString *)iconName;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_logo_icon_name (GtkAboutDialog* about)
 */
-(NSString *)getLogoIconName;

/*
 * Forwards message to:
 * const gchar* gtk_about_dialog_get_program_name (GtkAboutDialog* about)
 */
-(NSString *)getProgramName;

@end
