/*
 * CGTKButton.m
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

#import "CGTKButton.h"

@implementation CGTKButton

-(GtkButton *)BUTTON
{
	return GTK_BUTTON([self WIDGET]);
}

-(id)init
{
	self = [super initWithGtkWidget:gtk_button_new () andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithLabel:(NSString *)label
{
	self = [super initWithGtkWidget:gtk_button_new_with_label ([label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initFromStock:(NSString *)stockId
{
	self = [super initWithGtkWidget:gtk_button_new_from_stock ([stockId UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(id)initWithMnemonic:(NSString *)label
{	
	self = [super initWithGtkWidget:gtk_button_new_with_mnemonic ([label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)clicked
{
	gtk_button_clicked ([self BUTTON]);
}

-(void)leave
{
	void gtk_button_leave (GtkButton* button);
}

-(void)setRelief:(GtkReliefStyle)newstyle
{
	gtk_button_set_relief ([self BUTTON], newstyle);
}

-(GtkReliefStyle)getRelief
{
	return gtk_button_get_relief ([self BUTTON]);
}

-(void)setLabel:(NSString *)label
{
	gtk_button_set_label ([self BUTTON], [label UTF8String]);
}

-(NSString *)setLabel
{
	return [NSString stringWithUTF8String:gtk_button_get_label ([self BUTTON])];
}

-(void)setUseUnderline:(BOOL)useUnderline
{
	gtk_button_set_use_underline ([self BUTTON], [CGTK getGboolean:useUnderline]);
}

-(BOOL)getUseUnderline
{
	return [CGTK getBOOL:gtk_button_get_use_underline ([self BUTTON])];
}

-(void)setUseStock:(BOOL)useStock
{
	gtk_button_set_use_stock ([self BUTTON], [CGTK getGboolean:useStock]);
}

-(BOOL)getUseStock
{
	return [CGTK getBOOL:gtk_button_get_use_stock ([self BUTTON])];
}

-(void)setFocusOnClick:(BOOL)focusOnClick
{
	gtk_button_set_focus_on_click ([self BUTTON], [CGTK getGboolean:focusOnClick]);
}

-(BOOL)getFocusOnClick
{
	return [CGTK getBOOL:gtk_button_get_focus_on_click ([self BUTTON])];
}

-(void)setAlignmentWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign
{
	gtk_button_set_alignment ([self BUTTON], [xalign floatValue], [yalign floatValue]);
}

-(void)getAlignmentWithXalign:(NSNumber **)xalign andYalign:(NSNumber **)yalign
{
	gfloat gXalign;
	gfloat gYalign;
	
	gtk_button_get_alignment ([self BUTTON], &gXalign, &gYalign);
	
	*xalign = [NSNumber numberWithFloat:gXalign];
	*yalign = [NSNumber numberWithFloat:gYalign];
}

-(void)setImage:(CGTKWidget *)image
{
	gtk_button_set_image ([self BUTTON], [image WIDGET]);
}

-(CGTKWidget *)getImage
{
	return [CGTKWidget widgetWithGtkWidget:gtk_button_get_image ([self BUTTON])];
}

-(void)setImagePosition:(GtkPositionType)position
{
	gtk_button_set_image_position ([self BUTTON], position);
}

-(GtkPositionType)getImagePosition
{
	return gtk_button_get_image_position ([self BUTTON]);
}

-(GdkWindow*)getEventWindow
{
	return gtk_button_get_event_window ([self BUTTON]);
}

@end
