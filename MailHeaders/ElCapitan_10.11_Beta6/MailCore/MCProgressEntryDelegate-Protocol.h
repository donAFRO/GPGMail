/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@protocol MCProgressEntryDelegate <NSObject>
@property(readonly, copy, nonatomic) NSArray *trackedAccountNames;
- (void)progressEntryDidFinish:(id)arg1;
@end
