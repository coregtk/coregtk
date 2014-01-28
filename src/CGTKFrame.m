/*
 * CGTKFrame.m
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

#import "CGTKFrame.h"

@implementation CGTKFrame

-(GtkFrame *)FRAME
{
	return GTK_FRAME([self WIDGET]);
}

-(id)initWithLabel:(NSString *)label;
{
	self = [super initWithGtkWidget:gtk_frame_new ([label UTF8String]) andIncrementRefCount:NO];
	
	if(self)
	{
		// Do nothing
	}
	
	return self;
}

-(void)setLabel:(NSString *)label
{
	gtk_frame_set_label ([self FRAME], [label UTF8String]);
}

-(NSString *)getLabel
{
	return [NSString stringWithUTF8String:gtk_frame_get_label ([self FRAME])];
}

-(void)setLabelWidget:(CGTKWidget *)labelWidget
{
	gtk_frame_set_label_widget ([self FRAME], [labelWidget WIDGET]);
}

-(CGTKWidget *)getLabelWidget
{
	return [CGTKWidget widgetWithGtkWidget:gtk_frame_get_label_widget ([self FRAME])];
}

-(void)setLabelAlignWithXalign:(NSNumber *)xalign andYalign:(NSNumber *)yalign
{
	gtk_frame_set_label_align ([self FRAME], [xalign floatValue], [yalign floatValue]);
}

-(void)getLabelAlignWithXalign:(NSNumber **)xalign andYalign:(NSNumber **)yalign
{
	gfloat gXalign;
	gfloat gYalign;
	
	gtk_frame_get_label_align ([self FRAME], &gXalign, &gYalign);
	
	*xalign = [NSNumber numberWithFloat:gXalign];
	*yalign = [NSNumber numberWithFloat:gYalign];
}

-(void)setShadowType:(GtkShadowType)type
{
	gtk_frame_set_shadow_type ([self FRAME], type);
}

-(GtkShadowType)getShadowType
{
	return gtk_frame_get_shadow_type ([self FRAME]);
}

@end
