
/*
 * Objective-C imports
 */
#import "CoreGTK/CGTKWindow.h"

@interface CGTKAssistant : CGTKWindow
{

}


/**
 * Constructors
 */
-(id)init;

/**
 * Methods
 */
-(GtkAssistant*)ASSISTANT;
-(void)addActionWidget:(CGTKWidget*) child;
-(gint)appendPage:(CGTKWidget*) page;
-(void)commit;
-(gint)getCurrentPage;
-(gint)getNpages;
-(CGTKWidget*)getNthPage:(gint) pageNum;
-(BOOL)getPageComplete:(CGTKWidget*) page;
-(GdkPixbuf*)getPageHeaderImage:(CGTKWidget*) page;
-(GdkPixbuf*)getPageSideImage:(CGTKWidget*) page;
-(NSString*)getPageTitle:(CGTKWidget*) page;
-(GtkAssistantPageType)getPageType:(CGTKWidget*) page;
-(gint)insertPageWithPage:(CGTKWidget*) page andPosition:(gint) position;
-(void)nextPage;
-(gint)prependPage:(CGTKWidget*) page;
-(void)previousPage;
-(void)removeActionWidget:(CGTKWidget*) child;
-(void)removePage:(gint) pageNum;
-(void)setCurrentPage:(gint) pageNum;
-(void)setForwardPageFuncWithPageFunc:(GtkAssistantPageFunc) pageFunc andData:(gpointer) data andDestroy:(GDestroyNotify) destroy;
-(void)setPageCompleteWithPage:(CGTKWidget*) page andComplete:(BOOL) complete;
-(void)setPageHeaderImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;
-(void)setPageSideImageWithPage:(CGTKWidget*) page andPixbuf:(GdkPixbuf*) pixbuf;
-(void)setPageTitleWithPage:(CGTKWidget*) page andTitle:(NSString*) title;
-(void)setPageTypeWithPage:(CGTKWidget*) page andType:(GtkAssistantPageType) type;
-(void)updateButtonsState;

@end