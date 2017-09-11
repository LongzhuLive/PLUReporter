//
//  PLULiveLogDefine.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#ifndef PLULiveLogDefine_h
#define PLULiveLogDefine_h

#import <PLUFoundation/PLUFoundation.h>

typedef NS_ENUM (NSInteger, PLULiveLogType){
    PLULiveLogTypeUnknow        = 0,
    //网络诊断数据
    PLULiveLogTypeStreamingNetDiagnosi = 4,
    //推流连接错误
    PLULiveLogTypeStreamingError = 2,
    //推流端帧率过低
    PLULiveLogTypeStreamingPoor = 1,
    //推流端码率降低频率（降码次数／直播时长）
    PLULiveLogTypeStreamingQualityAjustRate = 8,
    //推流停止原因上报
    PLULiveLogTypeStreamingCloseReason = 16
};

typedef NS_ENUM (NSInteger, PLUPlayLogType){
    PLUPlayLogTypeUnknow        = 0,
    //播放器数据上报
    PLUPlayLogTypePlayingOverview = 1
};



#endif /* PLULiveLogDefine_h */
