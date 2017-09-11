//
//  PLULiveLogReporter.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLULiveLogDefine.h"
#import "PLULiveStreamingInfo.h"
#import "PLULiveClientInfo.h"
#import "PLULivePlayingInfo.h"
#import "PLUPlayerErrorInfo.h"

@interface PLULiveLogReporter : NSObject

+(PLULiveLogReporter*)sharedInstance;

/**
 *  向服务器汇报“推流信息”
 *
 *  @param liveLogType       类型
 *  @param liveStreamingInfo 推流的信息
 *  @param clientInfo 客户端信息，可为空
 */
- (void)reportLiveStreamingInfo: (PLULiveLogType)liveLogType
              liveStreamingInfo: (PLULiveStreamingInfo*)liveStreamingInfo
                     clientInfo: (PLULiveClientInfo*)clientInfo;
/**
 *  向服务器汇报“播放信息”
 *
 *  @param liveLogType       类型
 *  @param liveStreamingInfo 播放的信息
 *  @param clientInfo 客户端信息，可为空
 */
- (void)reportLivePlayingInfo: (PLUPlayLogType)playLogType
              livePlayingInfo: (PLULivePlayingInfo*)livePlayingInfo
                     clientInfo: (PLULiveClientInfo*)clientInfo;



/**
 *  向服务器汇报“播放错误LOG”
 *  @param playerErrorInfo 播放的信息
 *  @param clientInfo 客户端信息，可为空
 */
- (void)reportPLUPlayerErrorInfo: (PLUPlayerErrorInfo *)playerErrorInfo
                      clientInfo: (PLULiveClientInfo*)clientInfo;







@end
