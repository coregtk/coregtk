
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKComboBox.h"

@interface CGTKComboBoxText : CGTKComboBox
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithEntry;

/**
 * Methods
 */
-(GtkComboBoxText*)COMBOBOXTEXT;
-(void)appendWithId:(NSString*) id andText:(NSString*) text;
-(void)appendText:(NSString*) text;
-(NSString*)getActiveText;
-(void)insertWithPosition:(gint) position andId:(NSString*) id andText:(NSString*) text;
-(void)insertTextWithPosition:(gint) position andText:(NSString*) text;
-(void)prependWithId:(NSString*) id andText:(NSString*) text;
-(void)prependText:(NSString*) text;
-(void)remove:(gint) position;
-(void)removeAll;

@end