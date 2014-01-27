/*
 * CGTK.m
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

#import "CGTK.h"

@implementation CGTK

+(NSString *)coreGtkVersion
{
	return @"2.24.0";
}

+(gboolean)getGboolean:(BOOL)b
{
	if(b == YES)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

+(BOOL)getBOOL:(gboolean)b
{
	if(b == TRUE)
	{
		return YES;
	}
	else
	{
		return NO;
	}
}

+(void)disableSetlocal
{
	gtk_disable_setlocale();
}

+(PangoLanguage *)getDefaultLanguage
{
	return gtk_get_default_language();
}

+(BOOL)parseArgsWithArgc:(int *)argc andArgv:(char ***)argv
{
	return [CGTK getBOOL:gtk_parse_args(argc, argv)];
}

+(void)initWithArgc:(int *)argc andArgv:(char ***)argv
{
	gtk_init(argc, argv);
}

+(int)autoInitWithArgc:(int)argc andArgv:(char *[])argv
{
	[self initWithArgc:&argc andArgv:&argv];
	return argc;
}

+(BOOL)initCheckWithArgc:(int *)argc andArgv:(char ***)argv
{
	return [CGTK getBOOL:gtk_init_check(argc, argv)];
}

+(BOOL)initWithArgsWithArgc:(int *)argc andArgv:(char ***)argv andParameterString:(NSString *)parameterString andEntries:(GOptionEntry *)entries andTranslationDomain:(NSString *)translationDomain andError:(GError **)error
{
	return [CGTK getBOOL:gtk_init_with_args(argc, argv, [parameterString UTF8String], entries, [translationDomain UTF8String], error)];
}

+(GOptionGroup *)getOptionGroup:(BOOL)openDefaultDisplay
{
	return gtk_get_option_group([CGTK getGboolean:openDefaultDisplay]);
}

+(BOOL)eventsPending
{
	return [CGTK getBOOL:gtk_events_pending()];
}

+(void)main
{
	gtk_main();
}

+(NSNumber *)mainLevel
{
	return [NSNumber numberWithUnsignedInt:gtk_main_level()];
}

+(void)mainQuit
{
	gtk_main_quit();
}

+(BOOL)mainIteration
{
	return [CGTK getBOOL:gtk_main_iteration()];
}

+(BOOL)mainIterationDoWithBlocking:(BOOL)blocking
{
	return [CGTK getBOOL:gtk_main_iteration_do([CGTK getGboolean:blocking])];
}

+(void)mainDoEvent:(GdkEvent *)event
{
	gtk_main_do_event(event);
}

+(NSNumber *)keySnooperInstallWithSnooper:(GtkKeySnoopFunc)snooper andFuncData:(gpointer)funcData
{
	return [NSNumber numberWithUnsignedInt:gtk_key_snooper_install(snooper, funcData)];
}

-(void)keySnooperRemove:(NSNumber *)snooperHandlerId
{
	gtk_key_snooper_remove([snooperHandlerId unsignedIntValue]);
}

+(GdkEvent *)getCurrentEvent
{
	return gtk_get_current_event();
}

+(NSNumber *)getCurrentEventTime
{
	return [NSNumber numberWithInt:gtk_get_current_event_time()];
}

+(BOOL)getCurrentEventState:(GdkModifierType *)state
{
	return [CGTK getBOOL:gtk_get_current_event_state(state)];
}

@end
