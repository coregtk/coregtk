
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKComboBoxText.h"

@implementation CGTKComboBoxText

-(id)init
{
	self = [super initWithGObject:(GObject *)gtk_combo_box_text_new()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(id)initWithEntry
{
	self = [super initWithGObject:(GObject *)gtk_combo_box_text_new_with_entry()];

	if(self)
	{
		//Do nothing
	}

	return self;
}

-(GtkComboBoxText*)COMBOBOXTEXT
{
	return GTK_COMBO_BOX_TEXT([self GOBJECT]);
}

-(void)appendWithId:(NSString*) id andText:(NSString*) text
{
	gtk_combo_box_text_append(GTK_COMBO_BOX_TEXT([self GOBJECT]), [id UTF8String], [text UTF8String]);
}

-(void)appendText:(NSString*) text
{
	gtk_combo_box_text_append_text(GTK_COMBO_BOX_TEXT([self GOBJECT]), [text UTF8String]);
}

-(NSString*)getActiveText
{
	return [NSString stringWithUTF8String:gtk_combo_box_text_get_active_text(GTK_COMBO_BOX_TEXT([self GOBJECT]))];
}

-(void)insertWithPosition:(gint) position andId:(NSString*) id andText:(NSString*) text
{
	gtk_combo_box_text_insert(GTK_COMBO_BOX_TEXT([self GOBJECT]), position, [id UTF8String], [text UTF8String]);
}

-(void)insertTextWithPosition:(gint) position andText:(NSString*) text
{
	gtk_combo_box_text_insert_text(GTK_COMBO_BOX_TEXT([self GOBJECT]), position, [text UTF8String]);
}

-(void)prependWithId:(NSString*) id andText:(NSString*) text
{
	gtk_combo_box_text_prepend(GTK_COMBO_BOX_TEXT([self GOBJECT]), [id UTF8String], [text UTF8String]);
}

-(void)prependText:(NSString*) text
{
	gtk_combo_box_text_prepend_text(GTK_COMBO_BOX_TEXT([self GOBJECT]), [text UTF8String]);
}

-(void)remove:(gint) position
{
	gtk_combo_box_text_remove(GTK_COMBO_BOX_TEXT([self GOBJECT]), position);
}

-(void)removeAll
{
	gtk_combo_box_text_remove_all(GTK_COMBO_BOX_TEXT([self GOBJECT]));
}


@end