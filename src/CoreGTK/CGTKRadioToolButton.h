
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKToggleToolButton.h"

@interface CGTKRadioToolButton : CGTKToggleToolButton
{

}


/**
 * Constructors
 */
-(id)init:(GSList*) group;
-(id)initFromStockWithGroup:(GSList*) group andStockId:(NSString*) stockId;
-(id)initFromWidget:(GtkRadioToolButton*) group;
-(id)initWithStockFromWidgetWithGroup:(GtkRadioToolButton*) group andStockId:(NSString*) stockId;

/**
 * Methods
 */
-(GtkRadioToolButton*)RADIOTOOLBUTTON;
-(GSList*)getGroup;
-(void)setGroup:(GSList*) group;

@end