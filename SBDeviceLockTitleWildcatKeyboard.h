/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBDeviceLockTitle.h"

@class UILabel;

@interface SBDeviceLockTitleWildcatKeyboard : SBDeviceLockTitle {
	BOOL _highlighted;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
}
-(id)_initWithStyle:(int)style interfaceOrientation:(int)orientation;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_backgroundImage;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)highlighted;
-(id)title;
-(void)setTitle:(id)title;
-(id)subtitle;
-(void)setSubtitle:(id)subtitle;
-(void)blinkSubtitle;
@end
