
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKBin.h"

@interface CGTKExpander : CGTKBin
{

}


/**
 * Constructors
 */
-(id)init:(NSString*) label;
-(id)initWithMnemonic:(NSString*) label;

/**
 * Methods
 */
-(GtkExpander*)EXPANDER;
-(BOOL)getExpanded;
-(NSString*)getLabel;
-(BOOL)getLabelFill;
-(CGTKWidget*)getLabelWidget;
-(BOOL)getResizeToplevel;
-(gint)getSpacing;
-(BOOL)getUseMarkup;
-(BOOL)getUseUnderline;
-(void)setExpanded:(BOOL) expanded;
-(void)setLabel:(NSString*) label;
-(void)setLabelFill:(BOOL) labelFill;
-(void)setLabelWidget:(CGTKWidget*) labelWidget;
-(void)setResizeToplevel:(BOOL) resizeToplevel;
-(void)setSpacing:(gint) spacing;
-(void)setUseMarkup:(BOOL) useMarkup;
-(void)setUseUnderline:(BOOL) useUnderline;

@end