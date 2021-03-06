/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class SBFolder, NSMutableArray;

@interface SBIconListModel : NSObject {
	NSMutableArray* _icons;
	BOOL _iconStateIsDirty;
	SBFolder* _folder;
}
+(Class)viewClass;
+(int)maxIcons;
-(id)initWithFolder:(id)folder;
-(void)dealloc;
-(id)folder;
-(id)icons;
-(id)iconAtIndex:(unsigned)index;
-(unsigned)indexForIcon:(id)icon;
-(unsigned)indexForLeafIconWithIdentifier:(id)identifier;
-(BOOL)containsIcon:(id)icon;
-(BOOL)containsLeafIconWithIdentifier:(id)identifier;
-(BOOL)addIcon:(id)icon;
-(id)placeIcon:(id)icon atIndex:(unsigned*)index;
-(id)insertIcon:(id)icon atIndex:(unsigned*)index;
-(void)removeIconAtIndex:(unsigned)index;
-(void)removeIcon:(id)icon;
-(unsigned)firstFreeSlotIndex;
-(BOOL)isEmpty;
-(BOOL)isFull;
-(BOOL)needsCompacting;
-(void)compactIcons;
-(id)iconsOfClass:(Class)aClass;
-(id)indexPathForEntity:(id)entity;
-(id)indexPathForFirstFreeSlot;
-(BOOL)isIconStateDirty;
-(void)markIconStateClean;
-(BOOL)resetWithRepresentation:(id)representation leafIdentifiersAdded:(id*)added;
-(id)representation;
-(BOOL)matchesRepresentation:(id)representation;
@end

