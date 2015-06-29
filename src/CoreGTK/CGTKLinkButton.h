
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKButton.h"

@interface CGTKLinkButton : CGTKButton
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) uri;
-(id)initWithLabelWithUri:(NSString*) uri andLabel:(NSString*) label;

/**
 * Methods
 */
-(GtkLinkButton*)LINKBUTTON;
-(NSString*)getUri;
-(BOOL)getVisited;
-(void)setUri:(NSString*) uri;
-(void)setVisited:(BOOL) visited;

@end