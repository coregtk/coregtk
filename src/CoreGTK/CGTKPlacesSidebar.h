/*
 * CGTKPlacesSidebar.h
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
 * -(BOOL*)getLocalOnly;
 *
 * @returns BOOL
 */
-(BOOL)getLocalOnly;

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
 * -(BOOL*)getShowEnterLocation;
 *
 * @returns BOOL
 */
-(BOOL)getShowEnterLocation;

/**
 * -(BOOL*)getShowOtherLocations;
 *
 * @returns BOOL
 */
-(BOOL)getShowOtherLocations;

/**
 * -(BOOL*)getShowRecent;
 *
 * @returns BOOL
 */
-(BOOL)getShowRecent;

/**
 * -(BOOL*)getShowTrash;
 *
 * @returns BOOL
 */
-(BOOL)getShowTrash;

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
 * -(void*)setDropTargetsVisibleWithVisible:(BOOL) visible andContext:(GdkDragContext*) context;
 *
 * @param visible
 * @param context
 */
-(void)setDropTargetsVisibleWithVisible:(BOOL) visible andContext:(GdkDragContext*) context;

/**
 * -(void*)setLocalOnly:(BOOL) localOnly;
 *
 * @param localOnly
 */
-(void)setLocalOnly:(BOOL) localOnly;

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

/**
 * -(void*)setShowEnterLocation:(BOOL) showEnterLocation;
 *
 * @param showEnterLocation
 */
-(void)setShowEnterLocation:(BOOL) showEnterLocation;

/**
 * -(void*)setShowOtherLocations:(BOOL) showOtherLocations;
 *
 * @param showOtherLocations
 */
-(void)setShowOtherLocations:(BOOL) showOtherLocations;

/**
 * -(void*)setShowRecent:(BOOL) showRecent;
 *
 * @param showRecent
 */
-(void)setShowRecent:(BOOL) showRecent;

/**
 * -(void*)setShowTrash:(BOOL) showTrash;
 *
 * @param showTrash
 */
-(void)setShowTrash:(BOOL) showTrash;

@end
