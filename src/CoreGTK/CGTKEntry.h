/*
 * CGTKEntry.h
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
#import "CoreGTK/CGTKWidget.h"

@interface CGTKEntry : CGTKWidget
{

}


/**
 * Constructors
 */
-(id)init;
-(id)initWithBuffer:(GtkEntryBuffer*) buffer;

/**
 * Methods
 */
-(GtkEntry*)ENTRY;
-(BOOL)getActivatesDefault;
-(gfloat)getAlignment;
-(PangoAttrList*)getAttributes;
-(GtkEntryBuffer*)getBuffer;
-(GtkEntryCompletion*)getCompletion;
-(gint)getCurrentIconDragSource;
-(GtkAdjustment*)getCursorHadjustment;
-(BOOL)getHasFrame;
-(BOOL)getIconActivatable:(GtkEntryIconPosition) iconPos;
-(void)getIconAreaWithIconPos:(GtkEntryIconPosition) iconPos andIconArea:(GdkRectangle*) iconArea;
-(gint)getIconAtPosWithX:(gint) x andY:(gint) y;
-(GIcon*)getIconGicon:(GtkEntryIconPosition) iconPos;
-(NSString*)getIconName:(GtkEntryIconPosition) iconPos;
-(GdkPixbuf*)getIconPixbuf:(GtkEntryIconPosition) iconPos;
-(BOOL)getIconSensitive:(GtkEntryIconPosition) iconPos;
-(NSString*)getIconStock:(GtkEntryIconPosition) iconPos;
-(GtkImageType)getIconStorageType:(GtkEntryIconPosition) iconPos;
-(NSString*)getIconTooltipMarkup:(GtkEntryIconPosition) iconPos;
-(NSString*)getIconTooltipText:(GtkEntryIconPosition) iconPos;
-(const GtkBorder*)getInnerBorder;
-(GtkInputHints)getInputHints;
-(GtkInputPurpose)getInputPurpose;
-(gunichar)getInvisibleChar;
-(PangoLayout*)getLayout;
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
-(gint)getMaxLength;
-(BOOL)getOverwriteMode;
-(NSString*)getPlaceholderText;
-(gdouble)getProgressFraction;
-(gdouble)getProgressPulseStep;
-(PangoTabArray*)getTabs;
-(NSString*)getText;
-(void)getTextArea:(GdkRectangle*) textArea;
-(guint16)getTextLength;
-(BOOL)getVisibility;
-(gint)getWidthChars;
-(BOOL)imContextFilterKeypress:(GdkEventKey*) event;
-(gint)layoutIndexToTextIndex:(gint) layoutIndex;
-(void)progressPulse;
-(void)resetImContext;
-(void)setActivatesDefault:(BOOL) setting;
-(void)setAlignment:(gfloat) xalign;
-(void)setAttributes:(PangoAttrList*) attrs;
-(void)setBuffer:(GtkEntryBuffer*) buffer;
-(void)setCompletion:(GtkEntryCompletion*) completion;
-(void)setCursorHadjustment:(GtkAdjustment*) adjustment;
-(void)setHasFrame:(BOOL) setting;
-(void)setIconActivatableWithIconPos:(GtkEntryIconPosition) iconPos andActivatable:(BOOL) activatable;
-(void)setIconDragSourceWithIconPos:(GtkEntryIconPosition) iconPos andTargetList:(GtkTargetList*) targetList andActions:(GdkDragAction) actions;
-(void)setIconFromGiconWithIconPos:(GtkEntryIconPosition) iconPos andIcon:(GIcon*) icon;
-(void)setIconFromIconNameWithIconPos:(GtkEntryIconPosition) iconPos andIconName:(NSString*) iconName;
-(void)setIconFromPixbufWithIconPos:(GtkEntryIconPosition) iconPos andPixbuf:(GdkPixbuf*) pixbuf;
-(void)setIconFromStockWithIconPos:(GtkEntryIconPosition) iconPos andStockId:(NSString*) stockId;
-(void)setIconSensitiveWithIconPos:(GtkEntryIconPosition) iconPos andSensitive:(BOOL) sensitive;
-(void)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;
-(void)setIconTooltipTextWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;
-(void)setInnerBorder:(const GtkBorder*) border;
-(void)setInputHints:(GtkInputHints) hints;
-(void)setInputPurpose:(GtkInputPurpose) purpose;
-(void)setInvisibleChar:(gunichar) ch;
-(void)setMaxLength:(gint) max;
-(void)setOverwriteMode:(BOOL) overwrite;
-(void)setPlaceholderText:(NSString*) text;
-(void)setProgressFraction:(gdouble) fraction;
-(void)setProgressPulseStep:(gdouble) fraction;
-(void)setTabs:(PangoTabArray*) tabs;
-(void)setText:(NSString*) text;
-(void)setVisibility:(BOOL) visible;
-(void)setWidthChars:(gint) nchars;
-(gint)textIndexToLayoutIndex:(gint) textIndex;
-(void)unsetInvisibleChar;

@end