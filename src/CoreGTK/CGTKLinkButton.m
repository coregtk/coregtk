
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKLinkButton.h"

@implementation CGTKLinkButton

-(id)init:(NSString*) uri
{
	self = [super initWithGObject:(GObject *)gtk_link_button_new([uri UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithLabelWithUri:(NSString*) uri andLabel:(NSString*) label
{
	self = [super initWithGObject:(GObject *)gtk_link_button_new_with_label([uri UTF8String], [label UTF8String])];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkLinkButton*)LINKBUTTON
{
	return GTK_LINK_BUTTON([self GOBJECT]);
}

-(NSString*)getUri
{
	return [NSString stringWithUTF8String:gtk_link_button_get_uri(GTK_LINK_BUTTON([self GOBJECT]))];
}

-(BOOL)getVisited
{
	return (gtk_link_button_get_visited(GTK_LINK_BUTTON([self GOBJECT])) ? YES : NO);
}

-(void)setUri:(NSString*) uri
{
	gtk_link_button_set_uri(GTK_LINK_BUTTON([self GOBJECT]), [uri UTF8String]);
}

-(void)setVisited:(BOOL) visited
{
	gtk_link_button_set_visited(GTK_LINK_BUTTON([self GOBJECT]), (visited ? TRUE : FALSE));
}


@end