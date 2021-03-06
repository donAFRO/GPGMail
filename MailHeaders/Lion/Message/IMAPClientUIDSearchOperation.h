/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/IMAPClientUIDOperation.h>

@class NSArray, NSMutableIndexSet;

@interface IMAPClientUIDSearchOperation : IMAPClientUIDOperation
{
    NSArray *_terms;
    NSMutableIndexSet *_matchingUIDs;
}

- (id)initWithMailboxName:(id)arg1 range:(CDStruct_f792af56)arg2 terms:(id)arg3;
- (void)dealloc;
- (id)commandTypeString;
- (id)newCommandDataForLiteralPlus:(BOOL)arg1;
- (id)_newArgumentForSearchTerm:(id)arg1 isLiteral:(char *)arg2;
- (BOOL)executeOnConnection:(id)arg1;
@property(retain) NSMutableIndexSet *matchingUIDs; // @synthesize matchingUIDs=_matchingUIDs;
@property(retain) NSArray *terms; // @synthesize terms=_terms;

@end

