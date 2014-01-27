/*
 * CGTKExpander.h
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

@interface CGTKExpander : CGTKBin
{
	
}

/*
 * Returns internal GtkExpander
 */
-(GtkExpander *)EXPANDER;

/*
 * Forwards message to:
 * GtkWidget* gtk_expander_new (const gchar* label)
 */
-(id)init:(NSString *)label;

/*
 * Forwards message to:
 * GtkWidget* gtk_expander_new_with_mnemonic (const gchar* label)
 */
-(id)initWithMnemonic:(NSString *)label;

/*
 * Forwards message to:
 * void gtk_expander_set_expanded (GtkExpander* expander, gboolean expanded)
 */
-(void)setExpanded:(BOOL)expanded;

/*
 * Forwards message to:
 * gboolean gtk_expander_get_expanded (GtkExpander* expander)
 */
-(BOOL)getExpanded;

/*
 * Forwards message to:
 * void gtk_expander_set_spacing (GtkExpander* expander, gint spacing)
 */
-(void)setSpacing:(NSNumber *)spacing;

/*
 * Forwards message to:
 * gint gtk_expander_get_spacing (GtkExpander* expander)
 */
-(NSNumber *)getSpacing;

/*
 * Forwards message to:
 * void gtk_expander_set_label (GtkExpander* expander, const gchar* label)
 */
-(void)setLabel:(NSString *)label;

/*
 * Forwards message to:
 * const gchar * gtk_expander_get_label (GtkExpander* expander)
 */
-(NSString *)getLabel;

/*
 * Forwards message to:
 * void gtk_expander_set_use_underline (GtkExpander* expander, gboolean use_underline)
 */
-(void)setUseUnderline:(BOOL)useUnderline;

/*
 * Forwards message to:
 * gboolean gtk_expander_get_use_underline (GtkExpander* expander)
 */
-(BOOL)getUseUnderline;

/*
 * Forwards message to:
 * void gtk_expander_set_use_markup (GtkExpander* expander, gboolean use_markup)
 */
-(void)setUseMarkup:(BOOL)useMarkup;

/*
 * Forwards message to:
 * gboolean gtk_expander_get_use_markup (GtkExpander* expander)
 */
-(BOOL)getUseMarkup;

/*
 * Forwards message to:
 * void gtk_expander_set_label_widget (GtkExpander* expander, GtkWidget* label_widget)
 */
-(void)setLabelWidget:(CGTKWidget *)labelWidget;

/*
 * Forwards message to:
 * GtkWidget* gtk_expander_get_label_widget (GtkExpander* expander)
 */
-(CGTKWidget *)getLabelWidget;

/*
 * Forwards message to:
 * void gtk_expander_set_label_fill (GtkExpander* expander, gboolean label_fill)
 */
-(void)setLabelFill:(BOOL)labelFill;

/*
 * Forwards message to:
 * gboolean gtk_expander_get_label_fill (GtkExpander* expander)
 */
-(BOOL)getLabelFill;

@end
