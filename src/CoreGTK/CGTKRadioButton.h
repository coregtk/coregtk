
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKCheckButton.h"

@interface CGTKRadioButton : CGTKCheckButton
{

}


/**
 * Constructors
 */
-(id)init:(GSList*) group;
-(id)initFromWidget:(GtkRadioButton*) radioGroupMember;
-(id)initWithLabelWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithLabelFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label;
-(id)initWithMnemonicWithGroup:(GSList*) group andLabel:(NSString*) label;
-(id)initWithMnemonicFromWidgetWithRadioGroupMember:(GtkRadioButton*) radioGroupMember andLabel:(NSString*) label;

/**
 * Methods
 */
-(GtkRadioButton*)RADIOBUTTON;
-(GSList*)getGroup;
-(void)joinGroup:(GtkRadioButton*) groupSource;
-(void)setGroup:(GSList*) group;

@end