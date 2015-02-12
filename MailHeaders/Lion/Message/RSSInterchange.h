/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



#import "NSPortDelegate-Protocol.h"

@class InvocationQueue, NSConditionLock, NSDate, NSMutableDictionary, NSPort, NSString, NSThread, NSTimer, NSURL, PSClient;

@interface RSSInterchange : NSObject <NSPortDelegate>
{
    PSClient *_syndicationManager;
    NSConditionLock *_syndicationLock;
    NSThread *_syndicationThread;
    NSPort *_syndicationPort;
    InvocationQueue *_delegateHandlerQueue;
    NSMutableDictionary *_feedsBeingUpdated;
    NSMutableDictionary *_updatedFeeds;
    BOOL _didReceiveArticles;
    NSString *_feedName;
    NSURL *_autodiscoveredURL;
    BOOL _waitingForFeedName;
    BOOL _isValidFeedURL;
    NSDate *_fetchDate;
    unsigned long long _numberOfOutstandingFeedWrites;
    NSTimer *_manualCheckTimer;
    BOOL _manualCheckIsAllowed;
    BOOL _shareDeletionInterval;
    BOOL _fatalError;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (BOOL)fetchTemporaryFeedAtURL:(id)arg1 getName:(id *)arg2 getAutodiscoveredURL:(id *)arg3;
- (BOOL)_performSynchronousRefreshWithFeed:(id)arg1;
- (void)_setTemporaryFeedInformationFromURL:(id)arg1;
- (void)_setFeedName:(id)arg1;
- (id)_feedName;
- (void)_setAutodiscoveredURL:(id)arg1;
- (id)_autodiscoveredURL;
- (void)subscribeToFeedWithTransporter:(id)arg1;
- (void)_subscribeToFeedWithURL:(id)arg1 login:(id)arg2 password:(id)arg3;
- (void)updateAuthenticationInfoForFeedWithTransporter:(id)arg1;
- (void)_updateAuthenticationInfoForFeedWithURL:(id)arg1 login:(id)arg2 password:(id)arg3;
- (void)unsubscribeToFeedWithURL:(id)arg1;
- (void)_unsubscribeToFeedWithURL:(id)arg1;
- (void)restoreFeedURLsForFeedInfo:(id)arg1;
- (void)_restoreFeedURLsForFeedInfo:(id)arg1;
- (void)setFetchFrequency:(long long)arg1;
- (void)setDeletionFrequency:(long long)arg1;
- (void)_setFrequency:(long long)arg1 forMsgid:(unsigned int)arg2;
- (void)_setFetchFrequency:(long long)arg1;
- (void)_setDeletionFrequency:(long long)arg1;
- (void)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)_setFlagsFromDictionary:(id)arg1 forRemoteIDs:(id)arg2;
- (BOOL)updateAllFeeds;
- (void)_updateAllFeeds;
- (void)_synchronize;
- (void)updateFeedWithURL:(id)arg1;
- (void)_updateFeedWithURL:(id)arg1;
- (void)updateLastDateFetchedForNewArticles:(BOOL)arg1;
- (void)removeOldArticles;
- (void)_removeOldArticles;
- (void)_runManager;
- (void)handlePortMessage:(id)arg1;
- (void)_allowManualFeedCheck;
- (void)_setManualCheckTimer:(id)arg1;
- (id)_manualCheckTimer;
- (void)feedDidBeginRefresh:(id)arg1;
- (void)feedDidEndRefresh:(id)arg1;
- (void)feed:(id)arg1 didAddEntries:(id)arg2;
- (void)feed:(id)arg1 didUpdateEntries:(id)arg2;
- (void)feed:(id)arg1 didChangeFlagsInEntries:(id)arg2;
- (void)_setSyndicationManager:(id)arg1;
- (void)_setSyndicationLock:(id)arg1;
- (void)_setSyndicationPort:(id)arg1;
- (void)_configureSyndicationManager;
- (void)_setFetchDate:(id)arg1;
- (void)_writeDate;
- (void)_addStoreForFeedBeingRefreshed:(id)arg1;
- (void)_removeStoreBeingRefreshedWithIdentifier:(id)arg1;
- (id)_storeBeingRefreshedWithIdentifier:(id)arg1;
- (void)_delegateFeedDidEndRefresh:(id)arg1;
- (id)_newPortComponentsForFeedURL:(id)arg1;
- (id)_newPortComponentsForFeedTransporter:(id)arg1;
- (id)_mailboxForFeed:(id)arg1;
- (void)_refreshFeed:(id)arg1;
- (id)_messageForError:(id)arg1;

@end
