//
//  PLUPlayerTracking.h
//  PLUReporter
//
//  Created by sunshaobing on 16/10/9.
//  Copyright © 2016年 plu-dev. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, LZChannelType) {
    CHANNELID_PPTV = 1 << 0,
    CHANNELID_SPORT = 1 << 1,
};


/**
 *  播放调用流程
 *  进入房间->获取播放地址->获取播放地址成功->调用播放器播放->获取到播放器数据->
 *         ->播放开始(加载成功开始播放第一帧)->[开始缓冲->停止缓冲->开始缓冲->停止缓冲]->[调用播放器停止->]播放结束
 *  ->离开房间
 *  记得调用播放器的地方都需要上报调用
 */
@interface PLUPlayerTracking : NSObject


+ (void)configDeviceUUID: (NSString *)deviceUUID;

+ (void)configDeviceUUID: (NSString *)deviceUUID
              withAPPKey:(NSString *)appkey
           withChannelID:(LZChannelType)channelType
           withSectionID:(NSString *)sid;

+ (void)setudid:(NSString *)udid;

/**
 *  进入房间时调用(必须调用)
 *
 *  @param roomId       房间ID(必须要有)
 *  @param roomUserId   房间主播ID(可选，没有传0)
 *  @param viewerUserId 观看端userId（可选，没有传0）
 */
+ (void)enterRoom: (NSInteger)roomId roomUserId: (NSInteger)roomUserId viewerUserId: (NSInteger)viewerUserId;
/**
 *  离开房间时调用（必须调用）
 */
+ (void)leaveRoom;

/**
 * 开始获取播放地址（可选）
 */
+ (void)beginFetchPlayUrl;
/**
 *  成功获取播放地址（可选）
 */
+ (void)successFetchPlayUrl;
/**
 *  获取播放地址失败(超时等)（可选）
 */
+ (void)failToRequestPlayUrl;
/**
 *  解析播放地址失败（没有解析到播放地址）（可选）
 */
+ (void)failToParsingPlayUrl;


/**
 *  开始调用播放器（必须）
 *
 *  @param playerVersionString avplayer_1.0
 *  @param streamUrl           流地址
 *  @param streamRateLevel     //5-原画，4-蓝光，3-超清，2-高清，1-普清
 *  @param streamType          //供应商id，没有传-1
 *  @param useHwDecode         //播放器是否开启了硬件加速
 */
+ (void)beginCallPlayer: (NSString *)playerVersionString
        toPlayStreamUrl: (NSString *)streamUrl
        streamRateLevel: (NSInteger)streamRateLevel
             streamType: (NSInteger)streamType
            useHwDecode: (BOOL)useHwDecode;
/**
 *  播放器获取到了数据（可选）
 */
+ (void)playerDidGotData;
/**
 *  播放器加载超时
 */
+ (void)playerDidLoadTimeout;
/**
 *  播放器加载错误（含解析）
 */
+ (void)playerDidLoadError;
/**
 *  播放器已经加载完成正常播放（必须）
 * @param streamIp          加载的流所在的IP地址（可选）
 */
+ (void)playerDidBeginPlayWithStreamIp: (NSString *)streamIp;
/**
 *  播放器暂停了（可选）
 */
+ (void)playerDidPaused;
/**
 *  播放器恢复播放了（可选）
 */
+ (void)playerDidResumed;
/**
 *  播放器缓冲开始（有的话必须）（圈圈开始转时）
 */
+ (void)playerDidBeginBuffering;
/**
 *  播放器缓冲结束（有的话必须）（圈圈停止转时）
 */
+ (void)playerDidEndBuffering;
/**
 *  播放器结束播放（播放过程中正常或非正常结束）（必须）
 */
+ (void)playerDidPlayStopped;





@end
