/*
 * Objective-C imports
 */
#import <Foundation/Foundation.h>
#import "CGTK.h"
#import "CGTKButton.h"
#import "CGTKSignalConnector.h"
#import "CGTKWindow.h"

/*
 * C imports
 */
#import <gtk/gtk.h>

@interface HelloWorld : NSObject

/* This is a callback function. The data arguments are ignored
 * in this example. More on callbacks below. */
+(void)hello;

/* Another callback */
+(void)destroy;

@end

@implementation HelloWorld

int main(int argc, char *argv[])
{
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	
	/* We could use also CGTKWidget but then we would need to cast */
	CGTKWindow *window;
	CGTKButton *button;
	
	/* This is called in all GTK applications. Arguments are parsed
     * from the command line and are returned to the application. */
	[CGTK autoInitWithArgc:argc andArgv:argv];
	
	/* Create a new window */
	window = [[CGTKWindow alloc] initWithGtkWindowType:GTK_WINDOW_TOPLEVEL];
	
	/* Here we connect the "destroy" event to a signal handler in the HelloWorld class */
	[CGTKSignalConnector connectGpointer:[window WIDGET] withSignal:@"destroy" toTarget:[HelloWorld class] withSelector:@selector(destroy) andData:NULL];
	
	/* Sets the border width of the window */
	[window setBorderWidth: [NSNumber numberWithInt:10]];
	
	/* Creates a new button with the label "Hello World" */
	button = [[CGTKButton alloc] initWithLabel:@"Hello World"];
	
	/* When the button receives the "clicked" signal, it will call the
     * function hello() in the HelloWorld class (below) */
	[CGTKSignalConnector connectGpointer:[button WIDGET] withSignal:@"clicked" toTarget:[HelloWorld class] withSelector:@selector(hello) andData:NULL];
	
	/* This packs the button into the window (a gtk container) */
	[window add:button];
	
	/* The final step is to display this newly created widget */
	[button show];
	
	/* and the window */
	[window show];
	
	/* All GTK applications must have a [CGTK main] call. Control ends here
     * and waits for an event to occur (like a key press or
     * mouse event). */
	[CGTK main];
	
	[pool release];
	
	return 0;
}

+(void)hello
{
	NSLog(@"Hello World");
}

+(void)destroy
{
	[CGTK mainQuit];
}

@end
