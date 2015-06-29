
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKMisc.h"

@interface CGTKImage : CGTKMisc
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromAnimation:(GdkPixbufAnimation*) animation;
-(id)initFromFile:(NSString*) filename;
-(id)initFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size;
-(id)initFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
-(id)initFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size;
-(id)initFromPixbuf:(GdkPixbuf*) pixbuf;
-(id)initFromResource:(NSString*) resourcePath;
-(id)initFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
-(id)initFromSurface:(cairo_surface_t*) surface;

/**
 * Methods
 */
-(GtkImage*)IMAGE;
-(void)clear;
-(GdkPixbufAnimation*)getAnimation;
-(void)getGiconWithGicon:(GIcon**) gicon andSize:(GtkIconSize*) size;
-(void)getIconNameWithIconName:(const gchar**) iconName andSize:(GtkIconSize*) size;
-(void)getIconSetWithIconSet:(GtkIconSet**) iconSet andSize:(GtkIconSize*) size;
-(GdkPixbuf*)getPixbuf;
-(gint)getPixelSize;
-(void)getStockWithStockId:(gchar**) stockId andSize:(GtkIconSize*) size;
-(GtkImageType)getStorageType;
-(void)setFromAnimation:(GdkPixbufAnimation*) animation;
-(void)setFromFile:(NSString*) filename;
-(void)setFromGiconWithIcon:(GIcon*) icon andSize:(GtkIconSize) size;
-(void)setFromIconNameWithIconName:(NSString*) iconName andSize:(GtkIconSize) size;
-(void)setFromIconSetWithIconSet:(GtkIconSet*) iconSet andSize:(GtkIconSize) size;
-(void)setFromPixbuf:(GdkPixbuf*) pixbuf;
-(void)setFromResource:(NSString*) resourcePath;
-(void)setFromStockWithStockId:(NSString*) stockId andSize:(GtkIconSize) size;
-(void)setFromSurface:(cairo_surface_t*) surface;
-(void)setPixelSize:(gint) pixelSize;

@end