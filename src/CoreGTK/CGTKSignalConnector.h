/*
 * CGTKSignalConnector.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2016 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2016. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import <Foundation/NSObject.h>
#import <Foundation/NSString.h>
#import <gtk/gtk.h>

#import "CoreGTK/CGTKSignalData.h"

void gsignal_forwarder(gpointer gtk, CGTKSignalData *data);

/**
 * Provides functions for GCallback signal connecting
 */
@interface CGTKSignalConnector : NSObject
{
}

/**
 * Connects a GCallback function to a signal for a particular object. The GCallback function redirects the call to the Objective-C target and selector.
 *
 * @param object
 *  The instance to connect to
 *
 * @param name
 *  The signal name to connect (a string in the form of "signal-name::detail"
 *
 * @param target
 *  The Objective-C class to callback to
 *
 * @param sel
 *  The selector
 *
 * @param data
 *  The data to pass to c_handler calls
 *
 * @returns a new CGTKCallbackData
 */
+(void)connectGpointer:(gpointer) object withSignal:(NSString *) name toTarget:(id) target withSelector:(SEL) selector andData:(gpointer) data;

@end
