
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKAboutDialog.h"

@implementation CGTKAboutDialog

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_about_dialog_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkAboutDialog*)ABOUTDIALOG
{
	return GTK_ABOUT_DIALOG([self GOBJECT]);
}

-(void)addCreditSectionWithSectionName:(NSString*) sectionName andPeople:(gchar**) people
{
	gtk_about_dialog_add_credit_section(GTK_ABOUT_DIALOG([self GOBJECT]), [sectionName UTF8String], people);
}

-(gchar**)getArtists
{
	return gtk_about_dialog_get_artists(GTK_ABOUT_DIALOG([self GOBJECT]));
}

-(gchar**)getAuthors
{
	return gtk_about_dialog_get_authors(GTK_ABOUT_DIALOG([self GOBJECT]));
}

-(NSString*)getComments
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_comments(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getCopyright
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_copyright(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(gchar**)getDocumenters
{
	return gtk_about_dialog_get_documenters(GTK_ABOUT_DIALOG([self GOBJECT]));
}

-(NSString*)getLicense
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_license(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(GtkLicense)getLicenseType
{
	return gtk_about_dialog_get_license_type(GTK_ABOUT_DIALOG([self GOBJECT]));
}

-(GdkPixbuf*)getLogo
{
	return gtk_about_dialog_get_logo(GTK_ABOUT_DIALOG([self GOBJECT]));
}

-(NSString*)getLogoIconName
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_logo_icon_name(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getProgramName
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_program_name(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getTranslatorCredits
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_translator_credits(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getVersion
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_version(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getWebsite
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_website(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(NSString*)getWebsiteLabel
{
	return [NSString stringWithUTF8String:gtk_about_dialog_get_website_label(GTK_ABOUT_DIALOG([self GOBJECT]))];
}

-(BOOL)getWrapLicense
{
	return (gtk_about_dialog_get_wrap_license(GTK_ABOUT_DIALOG([self GOBJECT])) ? YES : NO);
}

-(void)setArtists:(gchar**) artists
{
	gtk_about_dialog_set_artists(GTK_ABOUT_DIALOG([self GOBJECT]), artists);
}

-(void)setAuthors:(gchar**) authors
{
	gtk_about_dialog_set_authors(GTK_ABOUT_DIALOG([self GOBJECT]), authors);
}

-(void)setComments:(NSString*) comments
{
	gtk_about_dialog_set_comments(GTK_ABOUT_DIALOG([self GOBJECT]), [comments UTF8String]);
}

-(void)setCopyright:(NSString*) copyright
{
	gtk_about_dialog_set_copyright(GTK_ABOUT_DIALOG([self GOBJECT]), [copyright UTF8String]);
}

-(void)setDocumenters:(gchar**) documenters
{
	gtk_about_dialog_set_documenters(GTK_ABOUT_DIALOG([self GOBJECT]), documenters);
}

-(void)setLicense:(NSString*) license
{
	gtk_about_dialog_set_license(GTK_ABOUT_DIALOG([self GOBJECT]), [license UTF8String]);
}

-(void)setLicenseType:(GtkLicense) licenseType
{
	gtk_about_dialog_set_license_type(GTK_ABOUT_DIALOG([self GOBJECT]), licenseType);
}

-(void)setLogo:(GdkPixbuf*) logo
{
	gtk_about_dialog_set_logo(GTK_ABOUT_DIALOG([self GOBJECT]), logo);
}

-(void)setLogoIconName:(NSString*) iconName
{
	gtk_about_dialog_set_logo_icon_name(GTK_ABOUT_DIALOG([self GOBJECT]), [iconName UTF8String]);
}

-(void)setProgramName:(NSString*) name
{
	gtk_about_dialog_set_program_name(GTK_ABOUT_DIALOG([self GOBJECT]), [name UTF8String]);
}

-(void)setTranslatorCredits:(NSString*) translatorCredits
{
	gtk_about_dialog_set_translator_credits(GTK_ABOUT_DIALOG([self GOBJECT]), [translatorCredits UTF8String]);
}

-(void)setVersion:(NSString*) version
{
	gtk_about_dialog_set_version(GTK_ABOUT_DIALOG([self GOBJECT]), [version UTF8String]);
}

-(void)setWebsite:(NSString*) website
{
	gtk_about_dialog_set_website(GTK_ABOUT_DIALOG([self GOBJECT]), [website UTF8String]);
}

-(void)setWebsiteLabel:(NSString*) websiteLabel
{
	gtk_about_dialog_set_website_label(GTK_ABOUT_DIALOG([self GOBJECT]), [websiteLabel UTF8String]);
}

-(void)setWrapLicense:(BOOL) wrapLicense
{
	gtk_about_dialog_set_wrap_license(GTK_ABOUT_DIALOG([self GOBJECT]), (wrapLicense ? TRUE : FALSE));
}


@end