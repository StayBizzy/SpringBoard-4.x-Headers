/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SpringBoard-Structs.h"

@class NSMutableDictionary;

@interface SBApplicationPersistence : NSObject {
	NSMutableDictionary* _state;
	BOOL _dirty;
	dispatch_queue_s* _stateQueue;
	dispatch_queue_s* _writeQueue;
}
+(id)sharedInstance;
+(id)_statePath;
-(id)init;
-(id)valueForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;
-(void)setValue:(id)value forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;
-(id)archivedObjectForKey:(id)key bundleOrDisplayIdentifier:(id)identifier ofType:(Class)type;
-(void)setArchivedObject:(id)object forKey:(id)key bundleOrDisplayIdentifier:(id)identifier;
-(id)allBundleOrDisplayIdentifiersWithState;
-(void)purgeKeysForBundleAndDisplayIdentifiersOtherThan:(id)bundleAndDisplayIdentifiersOtherThan;
-(void)flushSynchronously;
-(void)_flushSynchronously;
-(void)_markDirty;
@end

