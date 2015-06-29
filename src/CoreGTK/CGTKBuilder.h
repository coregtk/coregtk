
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBase.h"

@interface CGTKBuilder : CGTKBase
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initFromFile:(NSString*) filename;
-(id)initFromResource:(NSString*) resourcePath;
-(id)initFromStringWithString:(NSString*) string andLength:(gssize) length;

/**
 * Methods
 */
-(GtkBuilder*)BUILDER;
-(void)addCallbackSymbolWithCallbackName:(NSString*) callbackName andCallbackSymbol:(GCallback) callbackSymbol;
-(guint)addFromFileWithFilename:(NSString*) filename andErr:(GError**) err;
-(guint)addFromResourceWithResourcePath:(NSString*) resourcePath andErr:(GError**) err;
-(guint)addFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andErr:(GError**) err;
-(guint)addObjectsFromFileWithFilename:(NSString*) filename andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(guint)addObjectsFromResourceWithResourcePath:(NSString*) resourcePath andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(guint)addObjectsFromStringWithBuffer:(NSString*) buffer andLength:(gsize) length andObjectIds:(gchar**) objectIds andErr:(GError**) err;
-(void)connectSignals:(gpointer) userData;
-(void)connectSignalsFullWithFunc:(GtkBuilderConnectFunc) func andUserData:(gpointer) userData;
-(void)exposeObjectWithName:(NSString*) name andObject:(GObject*) object;
-(GObject*)getObject:(NSString*) name;
-(GSList*)getObjects;
-(NSString*)getTranslationDomain;
-(GType)getTypeFromName:(const char*) typeName;
-(GCallback)lookupCallbackSymbol:(NSString*) callbackName;
-(void)setTranslationDomain:(NSString*) domain;
-(BOOL)valueFromStringWithPspec:(GParamSpec*) pspec andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;
-(BOOL)valueFromStringTypeWithType:(GType) type andString:(NSString*) string andValue:(GValue*) value andErr:(GError**) err;

@end