/*
 * CGTKFrame.h
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
#import "CGTKBin.h"

@interface CGTKFrame : CGTKBin
{
	
}

-(GtkFrame *)FRAME;

/*
 * Forwards message to:
 * GtkWidget* gtk_frame_new (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_frame_set_label (GtkFrame* frame, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/*
 * Forwards message to:
 * const gchar * gtk_frame_get_label (GtkFrame* frame)
 */
-(NSString *)getLabel;

/*
 * Forwards message to:
 * void gtk_frame_set_label_widget (GtkFrame* frame, GtkWidget* label_widget)
 */
-(void)setLabelWidget:(CGTKWidget *)labelWidget;

/*
 * Forwards message to:
 * GtkWidget* gtk_frame_get_label_widget (GtkFrame* frame)
 */
-(CGTKWidget *)getLabelWidget;

/*
 * Forwards message to:
 * void gtk_frame_set_label_align (GtkFrame* frame, gfloat xalign, gfloat yalign)
 */
-(void)setLabelAlignWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign;

/*
 * Forwards message to:
 * void gtk_frame_get_label_align (GtkFrame* frame, gfloat* xalign, gfloat* yalign)
 */
-(void)getLabelAlignWithXalign:(NSNumber **)xalign andYalign:(NSNumber **)yalign;

/*
 * Forwards message to:
 * void gtk_frame_set_shadow_type (GtkFrame* frame, GtkShadowType type)
 */
-(void)setShadowType:(GtkShadowType)type;

/*
 * Forwards message to:
 * GtkShadowType gtk_frame_get_shadow_type (GtkFrame* frame)
 */
-(GtkShadowType)getShadowType;

@end
