//
//  SGFFFrameQueue.h
//  SGMediaKit
//
//  Created by Single on 18/01/2017.
//  Copyright © 2017 single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SGFFFrame.h"

@interface SGFFFrameQueue : NSObject

+ (instancetype)frameQueue;

+ (int)maxVideoDuration;

+ (NSTimeInterval)sleepTimeIntervalForFull;
+ (NSTimeInterval)sleepTimeIntervalForFullAndPaused;

@property (nonatomic, assign, readonly) NSUInteger count;
@property (atomic, assign, readonly) NSTimeInterval duration;

- (void)putFrame:(__kindof SGFFFrame *)frame;
- (__kindof SGFFFrame *)getFrame;

- (void)flush;
- (void)destroy;

@end