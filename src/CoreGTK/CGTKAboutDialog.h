
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