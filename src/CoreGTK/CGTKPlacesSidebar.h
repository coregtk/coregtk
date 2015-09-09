/*
 * CGTKPlacesSidebar.h
 * This file is part of CoreGTK
 *
 * Copyright (C) 2015 - Tyler Burton
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
 * Modified by the CoreGTK Team, 2015. See the AUTHORS file for a
 * list of people on the CoreGTK Team.
 * See the ChangeLog files for a list of changes.
 *
 */

/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKScrolledWindow.h"

@interface CGTKPlacesSidebar : CGTKScrolledWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */

-(GtkPlacesSidebar*)PLACESSIDEBAR;

/**
 * -(void*)addShortcut:(GFile*) location;
 *
 * @param location
 */
-(void)addShortcut:(GFile*) location;

/**
 * -(GFile**)getLocation;
 *
 * @returns GFile*
 */
-(GFile*)getLocation;

/**
 * -(GFile**)getNthBookmark:(gint) n;
 *
 * @param n
 * @returns GFile*
 */
-(GFile*)getNthBookmark:(gint) n;

/**
 * -(GtkPlacesOpenFlags*)getOpenFlags;
 *
 * @returns GtkPlacesOpenFlags
 */
-(GtkPlacesOpenFlags)getOpenFlags;

/**
 * -(BOOL*)getShowConnectToServer;
 *
 * @returns BOOL
 */
-(BOOL)getShowConnectToServer;

/**
 * -(BOOL*)getShowDesktop;
 *
 * @returns BOOL
 */
-(BOOL)getShowDesktop;

/**
 * -(GSList**)listShortcuts;
 *
 * @returns GSList*
 */
-(GSList*)listShortcuts;

/**
 * -(void*)removeShortcut:(GFile*) location;
 *
 * @param location
 */
-(void)removeShortcut:(GFile*) location;

/**
 * -(void*)setLocation:(GFile*) location;
 *
 * @param location
 */
-(void)setLocation:(GFile*) location;

/**
 * -(void*)setOpenFlags:(GtkPlacesOpenFlags) flags;
 *
 * @param flags
 */
-(void)setOpenFlags:(GtkPlacesOpenFlags) flags;

/**
 * -(void*)setShowConnectToServer:(BOOL) showConnectToServer;
 *
 * @param showConnectToServer
 */
-(void)setShowConnectToServer:(BOOL) showConnectToServer;

/**
 * -(void*)setShowDesktop:(BOOL) showDesktop;
 *
 * @param showDesktop
 */
-(void)setShowDesktop:(BOOL) showDesktop;

@end