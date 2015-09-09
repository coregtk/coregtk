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

/**
 * -(BOOL*)getActivatesDefault;
 *
 * @returns BOOL
 */
-(BOOL)getActivatesDefault;

/**
 * -(gfloat*)getAlignment;
 *
 * @returns gfloat
 */
-(gfloat)getAlignment;

/**
 * -(PangoAttrList**)getAttributes;
 *
 * @returns PangoAttrList*
 */
-(PangoAttrList*)getAttributes;

/**
 * -(GtkEntryBuffer**)getBuffer;
 *
 * @returns GtkEntryBuffer*
 */
-(GtkEntryBuffer*)getBuffer;

/**
 * -(GtkEntryCompletion**)getCompletion;
 *
 * @returns GtkEntryCompletion*
 */
-(GtkEntryCompletion*)getCompletion;

/**
 * -(gint*)getCurrentIconDragSource;
 *
 * @returns gint
 */
-(gint)getCurrentIconDragSource;

/**
 * -(GtkAdjustment**)getCursorHadjustment;
 *
 * @returns GtkAdjustment*
 */
-(GtkAdjustment*)getCursorHadjustment;

/**
 * -(BOOL*)getHasFrame;
 *
 * @returns BOOL
 */
-(BOOL)getHasFrame;

/**
 * -(BOOL*)getIconActivatable:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns BOOL
 */
-(BOOL)getIconActivatable:(GtkEntryIconPosition) iconPos;

/**
 * -(void*)getIconAreaWithIconPos:(GtkEntryIconPosition) iconPos andIconArea:(GdkRectangle*) iconArea;
 *
 * @param iconPos
 * @param iconArea
 */
-(void)getIconAreaWithIconPos:(GtkEntryIconPosition) iconPos andIconArea:(GdkRectangle*) iconArea;

/**
 * -(gint*)getIconAtPosWithX:(gint) x andY:(gint) y;
 *
 * @param x
 * @param y
 * @returns gint
 */
-(gint)getIconAtPosWithX:(gint) x andY:(gint) y;

/**
 * -(GIcon**)getIconGicon:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns GIcon*
 */
-(GIcon*)getIconGicon:(GtkEntryIconPosition) iconPos;

/**
 * -(NSString**)getIconName:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns NSString*
 */
-(NSString*)getIconName:(GtkEntryIconPosition) iconPos;

/**
 * -(GdkPixbuf**)getIconPixbuf:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns GdkPixbuf*
 */
-(GdkPixbuf*)getIconPixbuf:(GtkEntryIconPosition) iconPos;

/**
 * -(BOOL*)getIconSensitive:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns BOOL
 */
-(BOOL)getIconSensitive:(GtkEntryIconPosition) iconPos;

/**
 * -(NSString**)getIconStock:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns NSString*
 */
-(NSString*)getIconStock:(GtkEntryIconPosition) iconPos;

/**
 * -(GtkImageType*)getIconStorageType:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns GtkImageType
 */
-(GtkImageType)getIconStorageType:(GtkEntryIconPosition) iconPos;

/**
 * -(NSString**)getIconTooltipMarkup:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns NSString*
 */
-(NSString*)getIconTooltipMarkup:(GtkEntryIconPosition) iconPos;

/**
 * -(NSString**)getIconTooltipText:(GtkEntryIconPosition) iconPos;
 *
 * @param iconPos
 * @returns NSString*
 */
-(NSString*)getIconTooltipText:(GtkEntryIconPosition) iconPos;

/**
 * -(const GtkBorder**)getInnerBorder;
 *
 * @returns const GtkBorder*
 */
-(const GtkBorder*)getInnerBorder;

/**
 * -(GtkInputHints*)getInputHints;
 *
 * @returns GtkInputHints
 */
-(GtkInputHints)getInputHints;

/**
 * -(GtkInputPurpose*)getInputPurpose;
 *
 * @returns GtkInputPurpose
 */
-(GtkInputPurpose)getInputPurpose;

/**
 * -(gunichar*)getInvisibleChar;
 *
 * @returns gunichar
 */
-(gunichar)getInvisibleChar;

/**
 * -(PangoLayout**)getLayout;
 *
 * @returns PangoLayout*
 */
-(PangoLayout*)getLayout;

/**
 * -(void*)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;
 *
 * @param x
 * @param y
 */
-(void)getLayoutOffsetsWithX:(gint*) x andY:(gint*) y;

/**
 * -(gint*)getMaxLength;
 *
 * @returns gint
 */
-(gint)getMaxLength;

/**
 * -(BOOL*)getOverwriteMode;
 *
 * @returns BOOL
 */
-(BOOL)getOverwriteMode;

/**
 * -(NSString**)getPlaceholderText;
 *
 * @returns NSString*
 */
-(NSString*)getPlaceholderText;

/**
 * -(gdouble*)getProgressFraction;
 *
 * @returns gdouble
 */
-(gdouble)getProgressFraction;

/**
 * -(gdouble*)getProgressPulseStep;
 *
 * @returns gdouble
 */
-(gdouble)getProgressPulseStep;

/**
 * -(PangoTabArray**)getTabs;
 *
 * @returns PangoTabArray*
 */
-(PangoTabArray*)getTabs;

/**
 * -(NSString**)getText;
 *
 * @returns NSString*
 */
-(NSString*)getText;

/**
 * -(void*)getTextArea:(GdkRectangle*) textArea;
 *
 * @param textArea
 */
-(void)getTextArea:(GdkRectangle*) textArea;

/**
 * -(guint16*)getTextLength;
 *
 * @returns guint16
 */
-(guint16)getTextLength;

/**
 * -(BOOL*)getVisibility;
 *
 * @returns BOOL
 */
-(BOOL)getVisibility;

/**
 * -(gint*)getWidthChars;
 *
 * @returns gint
 */
-(gint)getWidthChars;

/**
 * -(BOOL*)imContextFilterKeypress:(GdkEventKey*) event;
 *
 * @param event
 * @returns BOOL
 */
-(BOOL)imContextFilterKeypress:(GdkEventKey*) event;

/**
 * -(gint*)layoutIndexToTextIndex:(gint) layoutIndex;
 *
 * @param layoutIndex
 * @returns gint
 */
-(gint)layoutIndexToTextIndex:(gint) layoutIndex;

/**
 * -(void*)progressPulse;
 *
 */
-(void)progressPulse;

/**
 * -(void*)resetImContext;
 *
 */
-(void)resetImContext;

/**
 * -(void*)setActivatesDefault:(BOOL) setting;
 *
 * @param setting
 */
-(void)setActivatesDefault:(BOOL) setting;

/**
 * -(void*)setAlignment:(gfloat) xalign;
 *
 * @param xalign
 */
-(void)setAlignment:(gfloat) xalign;

/**
 * -(void*)setAttributes:(PangoAttrList*) attrs;
 *
 * @param attrs
 */
-(void)setAttributes:(PangoAttrList*) attrs;

/**
 * -(void*)setBuffer:(GtkEntryBuffer*) buffer;
 *
 * @param buffer
 */
-(void)setBuffer:(GtkEntryBuffer*) buffer;

/**
 * -(void*)setCompletion:(GtkEntryCompletion*) completion;
 *
 * @param completion
 */
-(void)setCompletion:(GtkEntryCompletion*) completion;

/**
 * -(void*)setCursorHadjustment:(GtkAdjustment*) adjustment;
 *
 * @param adjustment
 */
-(void)setCursorHadjustment:(GtkAdjustment*) adjustment;

/**
 * -(void*)setHasFrame:(BOOL) setting;
 *
 * @param setting
 */
-(void)setHasFrame:(BOOL) setting;

/**
 * -(void*)setIconActivatableWithIconPos:(GtkEntryIconPosition) iconPos andActivatable:(BOOL) activatable;
 *
 * @param iconPos
 * @param activatable
 */
-(void)setIconActivatableWithIconPos:(GtkEntryIconPosition) iconPos andActivatable:(BOOL) activatable;

/**
 * -(void*)setIconDragSourceWithIconPos:(GtkEntryIconPosition) iconPos andTargetList:(GtkTargetList*) targetList andActions:(GdkDragAction) actions;
 *
 * @param iconPos
 * @param targetList
 * @param actions
 */
-(void)setIconDragSourceWithIconPos:(GtkEntryIconPosition) iconPos andTargetList:(GtkTargetList*) targetList andActions:(GdkDragAction) actions;

/**
 * -(void*)setIconFromGiconWithIconPos:(GtkEntryIconPosition) iconPos andIcon:(GIcon*) icon;
 *
 * @param iconPos
 * @param icon
 */
-(void)setIconFromGiconWithIconPos:(GtkEntryIconPosition) iconPos andIcon:(GIcon*) icon;

/**
 * -(void*)setIconFromIconNameWithIconPos:(GtkEntryIconPosition) iconPos andIconName:(NSString*) iconName;
 *
 * @param iconPos
 * @param iconName
 */
-(void)setIconFromIconNameWithIconPos:(GtkEntryIconPosition) iconPos andIconName:(NSString*) iconName;

/**
 * -(void*)setIconFromPixbufWithIconPos:(GtkEntryIconPosition) iconPos andPixbuf:(GdkPixbuf*) pixbuf;
 *
 * @param iconPos
 * @param pixbuf
 */
-(void)setIconFromPixbufWithIconPos:(GtkEntryIconPosition) iconPos andPixbuf:(GdkPixbuf*) pixbuf;

/**
 * -(void*)setIconFromStockWithIconPos:(GtkEntryIconPosition) iconPos andStockId:(NSString*) stockId;
 *
 * @param iconPos
 * @param stockId
 */
-(void)setIconFromStockWithIconPos:(GtkEntryIconPosition) iconPos andStockId:(NSString*) stockId;

/**
 * -(void*)setIconSensitiveWithIconPos:(GtkEntryIconPosition) iconPos andSensitive:(BOOL) sensitive;
 *
 * @param iconPos
 * @param sensitive
 */
-(void)setIconSensitiveWithIconPos:(GtkEntryIconPosition) iconPos andSensitive:(BOOL) sensitive;

/**
 * -(void*)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;
 *
 * @param iconPos
 * @param tooltip
 */
-(void)setIconTooltipMarkupWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;

/**
 * -(void*)setIconTooltipTextWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;
 *
 * @param iconPos
 * @param tooltip
 */
-(void)setIconTooltipTextWithIconPos:(GtkEntryIconPosition) iconPos andTooltip:(NSString*) tooltip;

/**
 * -(void*)setInnerBorder:(const GtkBorder*) border;
 *
 * @param border
 */
-(void)setInnerBorder:(const GtkBorder*) border;

/**
 * -(void*)setInputHints:(GtkInputHints) hints;
 *
 * @param hints
 */
-(void)setInputHints:(GtkInputHints) hints;

/**
 * -(void*)setInputPurpose:(GtkInputPurpose) purpose;
 *
 * @param purpose
 */
-(void)setInputPurpose:(GtkInputPurpose) purpose;

/**
 * -(void*)setInvisibleChar:(gunichar) ch;
 *
 * @param ch
 */
-(void)setInvisibleChar:(gunichar) ch;

/**
 * -(void*)setMaxLength:(gint) max;
 *
 * @param max
 */
-(void)setMaxLength:(gint) max;

/**
 * -(void*)setOverwriteMode:(BOOL) overwrite;
 *
 * @param overwrite
 */
-(void)setOverwriteMode:(BOOL) overwrite;

/**
 * -(void*)setPlaceholderText:(NSString*) text;
 *
 * @param text
 */
-(void)setPlaceholderText:(NSString*) text;

/**
 * -(void*)setProgressFraction:(gdouble) fraction;
 *
 * @param fraction
 */
-(void)setProgressFraction:(gdouble) fraction;

/**
 * -(void*)setProgressPulseStep:(gdouble) fraction;
 *
 * @param fraction
 */
-(void)setProgressPulseStep:(gdouble) fraction;

/**
 * -(void*)setTabs:(PangoTabArray*) tabs;
 *
 * @param tabs
 */
-(void)setTabs:(PangoTabArray*) tabs;

/**
 * -(void*)setText:(NSString*) text;
 *
 * @param text
 */
-(void)setText:(NSString*) text;

/**
 * -(void*)setVisibility:(BOOL) visible;
 *
 * @param visible
 */
-(void)setVisibility:(BOOL) visible;

/**
 * -(void*)setWidthChars:(gint) nchars;
 *
 * @param nchars
 */
-(void)setWidthChars:(gint) nchars;

/**
 * -(gint*)textIndexToLayoutIndex:(gint) textIndex;
 *
 * @param textIndex
 * @returns gint
 */
-(gint)textIndexToLayoutIndex:(gint) textIndex;

/**
 * -(void*)unsetInvisibleChar;
 *
 */
-(void)unsetInvisibleChar;

@end