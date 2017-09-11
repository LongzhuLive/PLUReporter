//
//  PLULiveStreamingInfo.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PLULiveStreamingInfo : NSObject

@property (nonatomic, assign) NSInteger uid;
@property (nonatomic, assign) NSInteger roomId;
@property (nonatomic, assign) NSInteger playId;
//
@property (nonatomic, assign) NSInteger liveSourceType;
@property (nonatomic, assign) NSInteger liveStreamType;
//推流节点信息
@property (nonatomic, strong) NSString *streamingPushIp;
@property (nonatomic, strong) NSString *streamingPushAddress;
//推流码率
@property (nonatomic, assign) NSInteger targetBitrate;
@property (nonatomic, assign) NSInteger currentBitrate;
//最近一次连接失败信息
@property (nonatomic, assign) NSInteger errorCode;
@property (nonatomic, strong) NSString *errorString;
//帧率信息
@property (nonatomic, assign) CGFloat videoFps;
@property (nonatomic, assign) CGFloat audioFps;
//降低码率次数/时长（分钟）
@property (nonatomic, assign) CGFloat qualityAjustRate;
//推流停止原因
@property (nonatomic, assign) NSInteger streamingCloseCode;
@property (nonatomic, strong) NSString *streamingCloseDesc;
//版本信息，由于需要支持多个SDK所以需要更新SDK
@property (nonatomic, strong) NSString *streamingSdkProvider;
@property (nonatomic, strong) NSString *streamingSdkVersion;

//用来生成字典
- (NSDictionary *)infoDictionary;

@end
