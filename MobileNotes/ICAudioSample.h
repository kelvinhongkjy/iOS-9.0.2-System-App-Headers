//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICAudioSample : NSObject
{
    double _startTime;
    double _duration;
    double _powerLevel;
}

- (id)description;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double endTime;
@property(nonatomic) double powerLevel; // @synthesize powerLevel=_powerLevel;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@end
