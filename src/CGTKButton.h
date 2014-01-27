/*
 * CGTKButton.h
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

@interface CGTKButton : CGTKBin
{
	
}

-(GtkButton *)BUTTON;

/*
 * Forwards message to:
 * GtkWidget* gtk_button_new (void)
 */
-(id)init;

/*
 * Forwards message to:
 * GtkWidget* gtk_button_new_with_label (const gchar* label)
 */
-(id)initWithLabel:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_button_new_from_stock (const gchar* stock_id)
 */
-(id)initFromStock:(NSString *)stockId;

/*
 * Forwards message to:
 * GtkWidget* gtk_button_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_button_clicked (GtkButton* button)
 */
-(void)clicked;

/*
 * Forwards message to:
 * void gtk_button_leave (GtkButton* button)
 */
-(void)leave;

/*
 * Forwards message to:
 * void gtk_button_set_relief (GtkButton* button, GtkReliefStyle newstyle)
 */
-(void)setRelief:(GtkReliefStyle)newstyle;

/*
 * Forwards message to:
 * GtkReliefStyle gtk_button_get_relief (GtkButton* button)
 */
-(GtkReliefStyle)getRelief;

/*
 * Forwards message to:
 * void gtk_button_set_label (GtkButton* button, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/*
 * Forwards message to:
 * const gchar * gtk_button_get_label (GtkButton* button)
 */

-(NSString *)setLabel;

/*
 * Forwards message to:
 * void gtk_button_set_use_underline (GtkButton* button, gboolean use_underline)
 */
-(void)setUseUnderline:(BOOL)useUnderline;

/*
 * Forwards message to:
 * gboolean gtk_button_get_use_underline (GtkButton* button)
 */
-(BOOL)getUseUnderline;

/*
 * Forwards message to:
 * void gtk_button_set_use_stock (GtkButton* button, gboolean use_stock)
 */
-(void)setUseStock:(BOOL)useStock;

/*
 * Forwards message to:
 * gboolean gtk_button_get_use_stock (GtkButton* button)
 */
-(BOOL)getUseStock;

/*
 * Forwards message to:
 * void gtk_button_set_focus_on_click (GtkButton* button, gboolean focus_on_click)
 */
-(void)setFocusOnClick:(BOOL)focusOnClick;

/*
 * Forwards message to:
 * gboolean gtk_button_get_focus_on_click (GtkButton* button)
 */
-(BOOL)getFocusOnClick;

/*
 * Forwards message to:
 * void gtk_button_set_alignment (GtkButton* button, gfloat xalign, gfloat yalign)
 */
-(void)setAlignmentWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign;

/*
 * Forwards message to:
 * void gtk_button_get_alignment (GtkButton* button, gfloat* xalign, gfloat* yalign)
 */
-(void)getAlignmentWithXalign:(NSNumber **)xalign andYalign:(NSNumber **)yalign;

/*
 * Forwards message to:
 * void gtk_button_set_image (GtkButton* button, GtkWidget* image)
 */
-(void)setImage:(CGTKWidget *)image;

/*
 * Forwards message to:
 * GtkWidget* gtk_button_get_image (GtkButton* button)
 */
-(CGTKWidget *)getImage;

/*
 * Forwards message to:
 * void gtk_button_set_image_position (GtkButton* button, GtkPositionType position)
 */
-(void)setImagePosition:(GtkPositionType)position;

/*
 * Forwards message to:
 * GtkPositionType gtk_button_get_image_position (GtkButton* button)
 */
-(GtkPositionType)getImagePosition;

/*
 * Forwards message to:
 * GdkWindow* gtk_button_get_event_window (GtkButton* button)
 */
-(GdkWindow*)getEventWindow;

@end
