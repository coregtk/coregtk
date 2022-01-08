CoreGTK
=======

The CoreGTK website can be found at: https://www.tylerburton.ca/coregtk/

CoreGTK is an Objective-C language binding for the GTK+ widget toolkit. Like other "core" Objective-C libraries, CoreGTK is designed to be a thin wrapper. CoreGTK is free software, licensed under the GNU LGPL.

![](https://raw.github.com/coregtk/coregtk/a03ecd485316342a364b16ca7e05d1d6974830be/wiki/files/images/helloworld_windows.png) - ![](https://raw.github.com/coregtk/coregtk/a03ecd485316342a364b16ca7e05d1d6974830be/wiki/files/images/helloworld_mac.png) - ![](https://raw.github.com/coregtk/coregtk/a03ecd485316342a364b16ca7e05d1d6974830be/wiki/files/images/helloworld_linux.png)

# Table of Contents
1. [Building CoreGTK from Source](#building-coregtk-from-source)
2. [Getting Started with CoreGTK](#getting-started-with-coregtk)
3. [CoreGTK FAQ](#coregtk-faq)
4. [CoreGTK Style Guide](#coregtk-style-guide)
5. [Projects that CoreGTK Relies On](#projects-that-coregtk-relies-on)

# Building CoreGTK from Source

Please follow the instructions for your platform below.

#### **Linux**

CoreGTK is built on top of the GNUstep or Foundation libraries. You will need a compatible Objective-C compiler, runtime and foundation library. On Debian/Ubuntu you can install these by running:

    apt-get install gnustep-core-devel

You can also install clang if you wish to compile it using that instead of gcc:

    apt-get install clang

Depending on the version of CoreGTK you will also need to install either the GTK+ 2 or GTK+ 3 development headers &#8211; the latest releases use GTK+ 3:

    apt-get install libgtk-3-dev

or

    apt-get install libgtk2.0-dev

To build, _cd_ to the _src_ directory and run:

    make linux

#### **Mac OS X / macOS**

CoreGTK is built on top of the GNUstep or Foundation libraries. You will need a compatible Objective-C compiler, runtime and foundation library. On Mac you should have all of the libraries you need once you install Xcode and X.org. Note that you also need to install the additional Xcode command line tools.

If you are running Mac OS X v10.7 or earlier an X.org server should already be installed for you. On Mac OS v10.8 and later you can download and install it from [XQuartz][https://www.xquartz.org/].

Depending on the version of CoreGTK you will also need to install either the GTK+ 2 or GTK+ 3 development headers &#8211; the latest releases use GTK+ 3. On Mac you can use [MacPorts][http://www.macports.org/]:

    sudo port -v install gtk3 pkgconfig

or

    sudo port -v install gtk2 pkgconfig

You can also install GNUstep using MacPorts if you want to build CoreGTK against it:

    sudo port -v install gnustep-core

To build, _cd_ to the _src_ directory and run:

    make mac

#### **Windows**

CoreGTK is built on top of the GNUstep or Foundation libraries. You will need a compatible Objective-C compiler, runtime and foundation library. On Windows you can download the libraries from [GNUstep directly][http://www.gnustep.org/].

Depending on the version of CoreGTK you will also need to install either the GTK+ 2 or GTK+ 3 development headers. On Windows you can download them from the [GTK+ project directly][http://www.gtk.org/].

To build, _cd_ to the _src_ directory and run:

    make windows
 
# Getting Started with CoreGTK

In general writing a program using CoreGTK is very similar to writing one in standard GTK+ C code (except that you get to use Objective-C as well!). GTK+ signal callbacks can be setup to target class methods (i.e. _+(void) something_) and/or instance methods (i.e. _-(void) something_).

The following is an example of a Hello World program written in standard GTK+ C and then one re-written in CoreGTK Objective-C.

#### Hello World program written in standard GTK+ C code:

    #include <gtk/gtk.h>

    /* This is a callback function. The data arguments are ignored
     * in this example. More on callbacks below. */
    static void hello( GtkWidget *widget,
     gpointer data )
    {
     g_print ("Hello World\n");
    }

    /* Another callback */
    static void destroy( GtkWidget *widget,
     gpointer data )
    {
     gtk_main_quit ();
    }

    int main( int argc,
     char *argv[] )
    {
     /* GtkWidget is the storage type for widgets */
     GtkWidget *window;
     GtkWidget *button;

     /* This is called in all GTK applications. Arguments are parsed
     * from the command line and are returned to the application. */
     gtk_init (&argc, &argv);

     /* create a new window */
     window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

     /* Here we connect the "destroy" event to a signal handler */
     g_signal_connect (window, "destroy",
     G_CALLBACK (destroy), NULL);

     /* Sets the border width of the window */
     gtk_container_set_border_width (GTK_CONTAINER (window), 10);

     /* Creates a new button with the label "Hello World" */
     button = gtk_button_new_with_label ("Hello World");

     /* When the button receives the "clicked" signal, it will call the
     * function hello() passing it NULL as its argument. The hello()
     * function is defined above. */
     g_signal_connect (button, "clicked",
     G_CALLBACK (hello), NULL);

     /* This packs the button into the window (a gtk container) */
     gtk_container_add (GTK_CONTAINER (window), button);

     /* The final step is to display this newly created widget */
     gtk_widget_show (button);

     /* and the window */
     gtk_widget_show (window);

     /* All GTK applications must have a gtk_main(). Control ends here
     * and waits for an event to occur (like a key press or
     * mouse event). */
     gtk_main ();

     return 0;
    }

#### The same program written in CoreGTK and Objective-C code:

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
     window = [[CGTKWindow alloc] init:GTK_WINDOW_TOPLEVEL];

     /* Here we connect the "destroy" event to a signal handler in the HelloWorld class */
     [CGTKSignalConnector connectGpointer:[window WIDGET] withSignal:@"destroy"
    toTarget:[HelloWorld class] withSelector:@selector(destroy) andData:NULL];

     /* Sets the border width of the window */
     [window setDefaultSizeWithWidth:400 andHeight:300];

     /* Creates a new button with the label "Hello World" */
     button = [[CGTKButton alloc] initWithLabel:@"Hello World"];

     /* When the button receives the "clicked" signal, it will call the
     * function hello() in the HelloWorld class (below) */
     [CGTKSignalConnector connectGpointer:[button WIDGET] withSignal:@"clicked" 
     toTarget:[HelloWorld class] withSelector:@selector(hello) andData:NULL];

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

#### You can also use CGTKBuilder to load an XML export from GLADE:

    CGTKBuilder *builder = [[CGTKBuilder alloc] init];
    if(![builder addFromFileWithFilename:@"test.glade" andErr:NULL] == 0)
    {
        NSLog(@"Error loading GUI file");
        return 1;
    }
    
    [CGTKBuilder setDebug:YES];
    
    NSDictionary *dic = [[NSDictionary alloc] initWithObjectsAndKeys:
                     [CGTKCallbackData withObject:[CGTK class] andSEL:@selector(mainQuit)], @"endMainLoop",
                     [CGTKCallbackData withObject:[HelloWorld class] andSEL:@selector(hello)], @"on_button2_clicked",
                     [CGTKCallbackData withObject:[HelloWorld class] andSEL:@selector(hello)], @"on_button1_activate",
                     nil];
    
    /* CGTKBaseBuilder is a helper class to maps GLADE signals to Objective-C code */
    [CGTKBaseBuilder connectSignalsToObjectsWithBuilder:builder andSignalDictionary:dic];
    
    CGTKWidget *w = [CGTKBaseBuilder getWidgetFromBuilder:builder withName:@"window1"];
    if(w != nil)
    {
        [w showAll];
    }
    
    [builder release];

#### Fall back to regular old C if you need/want to:

    // Use it as an Objective-C CoreGTK object!
    CGTKWindow *window = [[CGTKWindow alloc] init:GTK_WINDOW_TOPLEVEL];
    
    // Or as a C GTK+ window!
    GtkWindow *cWindow = [window WINDOW];
    
    // Or even as a C GtkWidget!
    GtkWidget *cWidget = [window WIDGET];
    
    // This...
    [window show];
    
    // ...is the same as this:
    gtk_widget_show([window WIDGET]);

# CoreGTK FAQ
 
#### Why would I ever want to subject Mac users to GTK+???

The choice to use GTK+ (either through CoreGTK or any other way) on any platform is up to you. However if your program is written following a decent MVC pattern it should be relatively straight forward to port it to a new platform simply by re-writing the GUI portion. For instance if you had a program for the Mac written in Cocoa that you wanted to port to Linux you could use CoreGTK to make the GUI transition easier.

#### When will CoreGTK support GTK+ 3.x?

If a particular release does not yet exist we would love to have you help fill the gap by committing code 🙂

#### Does CoreGTK still support GTK+ 2.x?

No, this version is no longer supported but you can still download the old release if you really want to.

#### Does CoreGTK support Automatic Reference Counting (ARC)?

Currently CoreGTK does not support ARC. This is mainly due to issues in the gcc runtime but it wouldn&#8217;t take much to make CoreGTK support ARC if you want to give it a shot.

# CoreGTK Style Guide

In general the following formats will be used when wrapping the GTK+ libraries.

#### A quick note about version numbers:

  * In order to quickly tell which version of GTK+ the CoreGTK release targets the versioning scheme includes the wrapped GTK+ version number.
  * For example if the currently supported GTK+ version is 3.18 then the first release of CoreGTK targeting that will be 3.18.0 and the second will be 3.18.1 and so on.

#### Prefer Objective-C Foundation types where it makes sense:

  * Given a GTK+ function that takes a primitive type, like a gint, as a parameter the CoreGTK version should maintain this type for speed and ease of use.
  * For some types it is beneficial to use Objective-C OpenStep classes instead of the GTK+ types. For example rather than using a gchar* use an NSString.
  * Many g-types can be handled this way. For example gchar* maps to NSString, gboolean maps to BOOL, etc.

#### Convert GTK+ new functions to Objective-C init methods:

For example:

  * gtk\_dialog\_new() would become -(id)init
  * gtk\_file\_chooser\_button\_new(const gchar \*title, GtkFileChooserAction action) would become -(id)initWithTitle:(NSString \*)title andAction:(GtkFileChooserAction)action

#### CoreGTK is meant to be a very thin wrapper:

  * Rather than convert the GTK+ properties to Objective-C properties, the Objective-C wrapped should simply implementation the original setters and getters.

#### Miscellaneous:

  * We use tabs NOT spaces 🙂

# Projects that CoreGTK Relies On

This project would not be possible without the wonderful work of many talented individuals. Here are just some of the awesome projects that form the foundation of CoreGTK.

  * GTK+ 
      * GTK+, or the GIMP Toolkit, is a multi-platform toolkit for creating graphical user interfaces. Offering a complete set of widgets, GTK+ is suitable for projects ranging from small one-off tools to complete application suites.
  * GNUstep 
      * GNUstep is a mature Framework, suited both for advanced GUI desktop applications as well as server applications. The framework closely follows Apple's Cocoa (formerly NeXT's OpenStep) APIs but is portable to a variety of platforms and architectures.
  * Clang 
      * Clang is a compiler front end for the C, C++, Objective-C and Objective-C++ programming languages. It uses LLVM as its back end and has been part of the LLVM release cycle since LLVM 2.6.
  * GCC 
      * The GNU Compiler Collection includes front ends for C, C++, Objective-C, Fortran, Java, Ada, and Go, as well as libraries for these languages (libstdc++, libgcj, ...).
  * Make 
      * GNU Make is a tool which controls the generation of executables and other non-source files of a program from the program's source files.
