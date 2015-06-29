
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCheckMenuItem.h"

@interface CGTKRadioMenuItem : CGTKCheckMenuItem
{

}


/**
 * Constructors
 */
-(id)init:(GSList*) group;
-(id)initFromWidget:(GtkRadioMenuItem*) group;
-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithLabelFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label;
-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithMnemonicFromWidgetWithGroup:(GtkRadioMenuItem*) group andLabel:(NSString*) label;

/**
 * Methods
 */
-(GtkRadioMenuItem*)RADIOMENUITEM;
-(GSList*)getGroup;
-(void)setGroup:(GSList*) group;

@end