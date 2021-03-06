/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <UIKit/UIPageControl.h>

@protocol SBIconListPageControlDelegate;

@interface SBIconListPageControl : UIPageControl {
	id _delegate;
}
@property(assign, nonatomic) id<SBIconListPageControlDelegate> delegate;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesMoved:(id)moved withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(id)_pageIndicatorImageForPage:(int)page;
-(id)_pageIndicatorCurrentImageForPage:(int)page;
-(void)setFrame:(CGRect)frame;
@end

