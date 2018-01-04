//
//  PLULivePlayingInfo.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PLULivePlayingInfo : NSObject


@property (nonatomic, assign) NSInteger roomId;
@property (nonatomic, assign) NSInteger playId;

@property (nonatomic, assign) NSInteger playLiveStreamType;

@property (nonatomic, assign) NSInteger roomUid;
@property (nonatomic, assign) NSInteger viewerUid;

@property (nonatomic, assign) NSTimeInterval playerCallTime;
@property (nonatomic, assign) NSTimeInterval playStopTime;
//1-flv，2-rtmp，3-hls
@property (nonatomic, assign) NSInteger extInt;
//清晰度
@property (nonatomic, assign) NSInteger rateLevel;
//1-硬解，2-软解（默认-1）
@property (nonatomic, assign) NSInteger decMode;
//请求livestream开始到获取到流地址结束（-1获取超时或失败，-2解析失败）
@property (nonatomic, assign) NSTimeInterval playUrlFetchTime;
//请求流地址开始到获取到第一个数据包结束（当前获取不到就填-1）
@property (nonatomic, assign) NSTimeInterval playDataFetchTime;
//接到第一个数据包开始到展现画面的时间（上条无法获取就改为请求地址开始到播放结束）
@property (nonatomic, readonly) NSTimeInterval playDataGotToPlayTime;

//观看节点信息
@property (nonatomic, strong) NSString *pullStreamIp;
@property (nonatomic, strong) NSString *pullStreamUrl;
//是否加载成功
@property (nonatomic, assign) BOOL isLoadSuccess;
//首次加载时间，秒,(-2表示加载超时，－3表示加载错误)
@property (nonatomic, assign) NSTimeInterval firstLoadCosttime;
//缓冲次数
@property (nonatomic, assign) NSInteger bufferingCount;
//平均缓冲时长，秒
@property (nonatomic, assign) NSTimeInterval bufferingMeanCosttime;
//观看总时长
@property (nonatomic, readonly) NSTimeInterval allPlayTime;
//卡顿比
@property (nonatomic, readonly) CGFloat bufferrPercent;
//播放器版本
@property (nonatomic, strong) NSString *playerVersionString;
//版本信息，由于需要支持多个SDK所以需要更新SDK
@property (nonatomic, strong) NSString *streamingSdkProvider;
@property (nonatomic, strong) NSString *streamingSdkVersion;


@end
