/*
 * CGTKContainer.m
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

#import "CGTKContainer.h"

@implementation CGTKContainer

-(GtkContainer *)CONTAINER
{
	return GTK_CONTAINER([self WIDGET]);
}

-(void)setBorderWidth:(NSNumber *)borderWidth;
{
	gtk_container_set_border_width ([self CONTAINER], [borderWidth unsignedIntValue]);
}

-(NSNumber *)getBorderWidth;
{
	return [NSNumber numberWithUnsignedInt:gtk_container_get_border_width ([self CONTAINER])];
}

-(void)add:(CGTKWidget *)widget;
{
	gtk_container_add ([self CONTAINER], [widget WIDGET]);
}

-(void)remove:(CGTKWidget *)widget;
{
	gtk_container_remove ([self CONTAINER], [widget WIDGET]);
}

-(void)setResizeMode:(GtkResizeMode)resizeMode;
{
	gtk_container_set_resize_mode ([self CONTAINER], resizeMode);
}

-(GtkResizeMode)getResizeMode;
{
	return gtk_container_get_resize_mode ([self CONTAINER]);
}

-(void)checkResize;
{
	gtk_container_check_resize ([self CONTAINER]);
}

-(void)foreachWithCallback:(GtkCallback)callback andCallbackData:(gpointer)callbackData;
{
	gtk_container_foreach ([self CONTAINER], callback, callbackData);
}

-(GList *)getChildren;
{
	return gtk_container_get_children ([self CONTAINER]);
}

-(void)propagateExposeWithChild:(CGTKWidget *)child andEvent:(GdkEventExpose *)event;
{
	gtk_container_propagate_expose ([self CONTAINER], [child WIDGET], event);
}

-(void)setFocusChain:(GList *)focusableWidgets;
{
	gtk_container_set_focus_chain ([self CONTAINER], focusableWidgets);
}

-(BOOL)getFocusChain:(GList **)focusableWidgets;
{
	return [CGTK getBOOL:gtk_container_get_focus_chain ([self CONTAINER], focusableWidgets)];
}

-(void)unsetFocusChain;
{
	gtk_container_unset_focus_chain ([self CONTAINER]);
}

-(void)setReallocateRedraws:(BOOL)needsRedraws;
{
	gtk_container_set_reallocate_redraws ([self CONTAINER], [CGTK getGboolean:needsRedraws]);
}

-(void)setFocusChild:(CGTKWidget *)child;
{
	gtk_container_set_focus_child ([self CONTAINER], [child WIDGET]);
}

-(CGTKWidget *)getFocusChild;
{
	return [CGTKWidget widgetWithGtkWidget:gtk_container_get_focus_child ([self CONTAINER])];
}

-(void)setFocusVadjustment:(GtkAdjustment *)adjustment;
{
	gtk_container_set_focus_vadjustment ([self CONTAINER], adjustment);
}

-(GtkAdjustment *)getFocusVadjustment;
{
	return gtk_container_get_focus_vadjustment ([self CONTAINER]);
}

-(void)setFocusHadjustment:(GtkAdjustment *)adjustment;
{
	gtk_container_set_focus_hadjustment ([self CONTAINER], adjustment);
}

-(GtkAdjustment *)getFocusHadjustment;
{
	return gtk_container_get_focus_hadjustment ([self CONTAINER]);
}

-(void)resizeChildren;
{
	gtk_container_resize_children ([self CONTAINER]);
}

-(GType)childType;
{
	return gtk_container_child_type ([self CONTAINER]);
}

-(void)classInstallChildPropertyWithCclass:(GtkContainerClass *)cclass andPropertyId:(NSNumber *)propertyId andPspec:(GParamSpec *)pspec;
{
	gtk_container_class_install_child_property (cclass, [propertyId unsignedIntValue], pspec);
}

-(GParamSpec *)classFindChildPropertyWithCclass:(GObjectClass *)cclass andPropertyName:(NSString *)propertyName;
{
	return gtk_container_class_find_child_property (cclass, [propertyName UTF8String]);
}

-(GParamSpec **)classListChildPropertiesWithCclass:(GObjectClass *)cclass andNProperties:(NSNumber **)nProperties;
{
	guint values;
	GParamSpec ** toReturn= gtk_container_class_list_child_properties (cclass, &values);
	
	*nProperties = [NSNumber numberWithUnsignedInt:values];
	
	return toReturn;
}

-(void)childSetValistWithChild:(CGTKWidget *)child andFirstPropertyName:(NSString *)firstPropertyName andVarArgs:(va_list)varArgs;
{
	gtk_container_child_set_valist ([self CONTAINER], [child WIDGET], [firstPropertyName UTF8String], varArgs);
}

-(void)childGetValistWithChild:(CGTKWidget *)child andFirstPropertyName:(NSString *)firstPropertyName andVarArgs:(va_list)varArgs;
{
	gtk_container_child_get_valist ([self CONTAINER], [child WIDGET], [firstPropertyName UTF8String], varArgs);
}

-(void)childSetPropertyWithChild:(CGTKWidget *)child andPropertyName:(NSString *)propertyName andValue:(const GValue *)value;
{
	gtk_container_child_set_property ([self CONTAINER], [child WIDGET], [propertyName UTF8String], value);
}

-(void)childGetPropertyWithChild:(CGTKWidget *)child andPropertyName:(NSString *)propertyName andValue:(GValue *)value;
{
	gtk_container_child_get_property ([self CONTAINER], [child WIDGET], [propertyName UTF8String], value);
}

-(void)forallWithCallback:(GtkCallback)callback andCallbackData:(gpointer)callbackData;
{
	gtk_container_forall ([self CONTAINER], callback, callbackData);
}

@end
