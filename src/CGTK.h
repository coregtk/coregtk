/*
 * CGTK.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2014 - Tyler Burton
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

/*
 * Modified by the CoreGTK Team, 2014. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

/*
 * C imports
 */
#import <gtk/gtk.h>

/**
 * CGTK abstracts all of the common high-level GTK commands
 */
@interface CGTK : NSObject
{

}

/**
 * Returns the CoreGTK version string
 *
 * @return the version string
 */
+(NSString *)coreGtkVersion;

/**
 * Prevents initWithArgc:andArgv:, initCheckWithArgc:andArgv: and 
 * parseArgsWithArgc:andArgv: from automatically calling setlocale (LC_ALL, ""). 
 * You would want to use this function if you wanted to set the locale for your 
 * program to something other than the user's locale, or if you wanted to set 
 * different values for different locale categories.
 *
 * @see initWithArgc:andArgv:
 *
 * @see initCheckWithArgc:andArgv:
 *
 * @see parseArgsWithArgc:andArgv:
 */
+(void)disableSetlocal;

/**
 * Returns the PangoLanguage for the default language currently in effect. (Note 
 * that this can change over the life of an application.) The default language 
 * is derived from the current locale. It determines, for example, whether GTK+ 
 * uses the right-to-left or left-to-right text direction.
 *
 * @return the default language as a PangoLanguage, must not be freed
 */
+(PangoLanguage *)getDefaultLanguage;

/**
 * Parses command line arguments, and initializes global attributes of GTK+, but 
 * does not actually open a connection to a display. (See gdk_display_open(), 
 * gdk_get_display_arg_name())
 * 
 * Any arguments used by GTK+ or GDK are removed from the array and argc and 
 * argv are updated accordingly.
 *
 * There is no need to call this function explicitely if you are using init, or 
 * initCheck.
 *
 * @param argc
 *  a pointer to the number of command line arguments. [inout]
 *
 * @param argv
 *  a pointer to the array of command line arguments. [array length=argc]
 *  [inout]
 *
 * @return YES if initialization succeeded, otherwise NO
 */
+(BOOL)parseArgsWithArgc:(int *)argc andArgv:(char ***)argv;

/**
 * Call this function before using any other GTK+ functions in your GUI 
 * applications. It will initialize everything needed to operate the toolkit and 
 * parses some standard command line options.
 *
 * Although you are expected to pass the argc, argv parameters from main() to 
 * this function, it is possible to pass NULL if argv is not available or 
 * commandline handling is not required.
 *
 * argc and argv are adjusted accordingly so your own code will never see those 
 * standard arguments.
 * 
 * @param argc
 *  Address of the argc parameter of your main() function (or 0 if argv is 
 *  NULL). This will be changed if any arguments were handled. [inout]
 *
 * @param argv
 *  Address of the argv parameter of main(), or NULL. Any options understood by 
 *  GTK+ are stripped before return. [array length=argc][inout][allow-none]
 */
+(void)initWithArgc:(int *)argc andArgv:(char ***)argv;

/**
 * Same as initWithArgc:andArgv: but does the type conversion automatically.
 *
 * @param argc
 *  Address of the argc parameter of your main() function (or 0 if argv is 
 *  NULL). This will be changed if any arguments were handled. [inout]
 *
 * @param argv
 *  Address of the argv parameter of main(), or NULL. Any options understood by 
 *  GTK+ are stripped before return. [array length=argc][inout][allow-none]
 *
 * @returns modified argc value
 *
 * @see initWithArgc:andArgv:
 */
+(int)autoInitWithArgc:(int)argc andArgv:(char *[])argv;

/**
 * This function does the same work as initWithArgc:andArgv: with only a single 
 * change: It does not terminate the program if the windowing system can't be 
 * initialized. Instead it returns FALSE on failure.
 *
 * This way the application can fall back to some other means of communication 
 * with the user - for example a curses or command line interface.
 *
 * @param argc
 *  Address of the argc parameter of your main() function (or 0 if argv is 
 *  NULL). This will be changed if any arguments were handled. [inout]
 *
 * @param argv
 *  Address of the argv parameter of main(), or NULL. Any options understood by 
 *  GTK+ are stripped before return. [array length=argc][inout][allow-none]
 *
 * @return YES if the windowing system has been successfully initialized, NO 
 *  otherwise
 *
 * @see initWithArgc:andArgv:
 */
+(BOOL)initCheckWithArgc:(int *)argc andArgv:(char ***)argv;

/**
 * This function does the same work as initCheckWithArgc:andArgv:. Additionally, 
 * it allows you to add your own commandline options, and it automatically 
 * generates nicely formatted --help output. Note that your program will be 
 * terminated after writing out the help output.
 *
 * @param argc
 *  a pointer to the number of command line arguments.
 *
 * @param argv
 *  a pointer to the array of command line arguments. [inout][array length=argc]
 *
 * @param parameterString
 *  a string which is displayed in the first line of --help output, after 
 *  programname [OPTION...]
 *
 * @param entries
 *  a NULL-terminated array of GOptionEntrys describing the options of your 
 *  program. [array zero-terminated=1]
 *
 * @param translationDomain
 *  a translation domain to use for translating the --help output for the 
 *  options in entries with gettext(), or NULL
 *
 * @param error
 *  a return location for errors
 *
 * @returns YES if the GUI has been successfully initialized, NO otherwise.
 *
 * @see initCheckWithArgc:andArgv:
 */
+(BOOL)initWithArgsWithArgc:(int *)argc andArgv:(char ***)argv andParameterString:(NSString *)parameterString andEntries:(GOptionEntry *)entries andTranslationDomain:(NSString *)translationDomain andError:(GError **)error;

/**
 * Returns a GOptionGroup for the commandline arguments recognized by GTK+ and 
 * GDK.
 * 
 * You should add this group to your GOptionContext with 
 * g_option_context_add_group(), if you are using g_option_context_parse() to 
 * parse your commandline arguments.
 *
 * @param openDefaultDisplay
 *  whether to open the default display when parsing the commandline arguments
 * 
 * @returns a GOptionGroup for the commandline arguments recognized by GTK+
 */
+(GOptionGroup *)getOptionGroup:(BOOL)openDefaultDisplay;

/**
 * Checks if any events are pending.
 *
 * This can be used to update the UI and invoke timeouts etc. while doing some 
 * time intensive computation.
 *
 * @returns YES if any events are pending, NO otherwise
 */
+(BOOL)eventsPending;

/**
 * Runs the main loop until mainQuit is called. 
 * You can nest calls to main. In that case mainQuit will make the innermost 
 * invocation of the main loop return.
 *
 * @see mainQuit
 */
+(void)main;

/**
 * Asks for the current nesting level of the main loop.
 *
 * @returns the nesting level of the current invocation of the main loop
 */
+(NSNumber *)mainLevel;

/**
 * Makes the innermost invocation of the main loop return when it regains 
 * control.
 */
+(void)mainQuit;

/**
 * Runs a single iteration of the mainloop.
 *
 *If no events are waiting to be processed GTK+ will block until the next event 
 * is noticed. If you don't want to block look at mainIterationDoWithBlocking or 
 * check if any events are pending with eventsPending first.
 *
 * @see mainIterationDoWithBlocking
 *
 * @see eventsPending
 */
+(BOOL)mainIteration;

/**
 * Runs a single iteration of the mainloop. If no events are available either 
 * return or block depending on the value of blocking.
 *
 * @param blocking
 *  YES if you want GTK+ to block if no events are pending
 *
 * @return YES if mainQuit has been called for the innermost mainloop
 *
 * @see mainQuit
 */
+(BOOL)mainIterationDoWithBlocking:(BOOL)blocking;

/**
 * Processes a single GDK event.
 *
 * @param event
 *  An event to process (normally passed by GDK)
 */
+(void)mainDoEvent:(GdkEvent *)event;

/**
 * Installs a key snooper function, which will get called on all key events 
 * before delivering them normally.
 *
 * @param snooper
 *  a GtkKeySnoopFunc.
 *
 * @param funcData
 *  data to pass to snooper.
 *
 * @returns a unique id for this key snooper for use with 
 *  keySnooperRemove:.
 *
 * @see keySnooperRemove:
 */
+(NSNumber *)keySnooperInstallWithSnooper:(GtkKeySnoopFunc)snooper andFuncData:(gpointer)funcData;

/**
 * Removes the key snooper function with the given id. 
 *
 * @param snooperHandlerId
 *  Identifies the key snooper to remove.
 */
-(void)keySnooperRemove:(NSNumber *)snooperHandlerId;

/**
 * Obtains a copy of the event currently being processed by GTK+.
 *
 * For example, if you are handling a "clicked" signal, the current event will 
 * be the GdkEventButton that triggered the ::clicked signal.
 *
 * @returns a copy of the current event, or NULL if there is no current event. 
 * The returned event must be freed with gdk_event_free(). [transfer full]
 */
+(GdkEvent *)getCurrentEvent;

/**
 * If there is a current event and it has a timestamp, return that timestamp, 
 * otherwise return GDK_CURRENT_TIME.
 *
 * @return the timestamp from the current event, or GDK_CURRENT_TIME
 */
+(NSNumber *)getCurrentEventTime;

/**
 * If there is a current event and it has a state field, place that state field 
 * in state and return YES, otherwise return NO.
 *
 * @param state
 *  a location to store the state of the current event. [out]
 *
 * @return YES if there was a current event and it had a state field
 */
+(BOOL)getCurrentEventState:(GdkModifierType *)state;

/**
 * Converts a BOOL to a gboolean
 *
 * @param b
 *  a BOOL
 *
 * @returns a gboolean
 */
+(gboolean)getGboolean:(BOOL)b;

/**
 * Converts a gboolean to a BOOL
 *
 * @param b
 *  a gboolean
 *
 * @returns a BOOL
 */
+(BOOL)getBOOL:(gboolean)b;

@end
