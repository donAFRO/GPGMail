//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

#import "MCBodyFetchContext-Protocol.h"

@class MFEWSAccountTaskManager, MFEWSVisibleBodyFetchTask, NSString;

@interface MFEWSBodyFetchContext : NSObject <MCBodyFetchContext>
{
    MFEWSVisibleBodyFetchTask *_bodyFetchTask;
    MFEWSAccountTaskManager *_manager;
}

@property(readonly, nonatomic) MFEWSAccountTaskManager *manager; // @synthesize manager=_manager;
//- (void).cxx_destruct;
- (void)cacheBodiesForMessages:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setBodyFetchTask:(id)arg1;
@property(readonly, nonatomic) MFEWSVisibleBodyFetchTask *bodyFetchTask;
- (void)dealloc;
- (id)init;
- (id)initWithTaskManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
