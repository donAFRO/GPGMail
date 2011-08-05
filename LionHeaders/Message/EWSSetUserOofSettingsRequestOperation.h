/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/EWSRequestOperation.h>

@class EWSDuration, EWSEmailAddress, EWSReplyBodyType;

@interface EWSSetUserOofSettingsRequestOperation : EWSRequestOperation
{
    EWSReplyBodyType *_internalReply;
    EWSReplyBodyType *_externalReply;
    long long _oofState;
    EWSDuration *_duration;
    EWSEmailAddress *_emailAddress;
    long long _externalAudienceType;
}

+ (Class)classForResponse;
- (id)initWithEmailAddress:(id)arg1 oofState:(long long)arg2 internalReply:(id)arg3 externalReply:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 externalAudienceType:(long long)arg7 gateway:(id)arg8 errorHandler:(id)arg9;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (void)dealloc;
- (id)prepareRequest;
@property(nonatomic) long long externalAudienceType; // @synthesize externalAudienceType=_externalAudienceType;
@property(retain, nonatomic) EWSEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) EWSDuration *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) EWSReplyBodyType *externalReply; // @synthesize externalReply=_externalReply;
@property(retain, nonatomic) EWSReplyBodyType *internalReply; // @synthesize internalReply=_internalReply;
@property(nonatomic) long long oofState; // @synthesize oofState=_oofState;

@end
