//
//  PLULiveClientInfo.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, PLULiveDeviceType){
    PLULiveDeviceTypeIOS        = 2,
    PLULiveDeviceTypeAndroid    = 4
};

@interface PLULiveClientInfo : NSObject

//设备类型
@property (nonatomic, assign) PLULiveDeviceType deviceType;
//机型
@property (nonatomic, strong) NSString *os;
@property (nonatomic, strong) NSString *model;
//网络类型 @"2G", @"3G", @"4G", @"5G", @"wifi", @"nonetwork"
@property (nonatomic, strong) NSString *networkType;
@property (nonatomic, readonly) NSInteger networkTypeInt;
//idfa
@property (nonatomic, readonly) NSString *idfaString;
//本机IP／DNS等
@property (nonatomic, strong) NSString *localIp;
@property (nonatomic, strong) NSString *localGateway;
@property (nonatomic, strong) NSString *localDns;
//ping延迟(ms)
@property (nonatomic, assign) NSInteger qiniuUploadDelay;
@property (nonatomic, assign) NSInteger qiniuDownloadDelay;
@property (nonatomic, assign) NSInteger ksyUploadDelay;
@property (nonatomic, assign) NSInteger ksyDownloadDelay;
@property (nonatomic, assign) NSInteger longzhuDownloadDelay;
@property (nonatomic, assign) NSInteger liveApiPluDownloadDelay;
@property (nonatomic, assign) NSInteger baiduDownloadDelay;
@property (nonatomic, assign) NSInteger qqDownloadDelay;
//出口IP／DNS等
@property (nonatomic, strong) NSString *outerIp;
@property (nonatomic, strong) NSString *outerIpArea;
@property (nonatomic, strong) NSString *outerDns;
@property (nonatomic, strong) NSString *outerDnsArea;
@property (nonatomic, assign) BOOL isSameArea;
//版本信息
@property (nonatomic, strong) NSString *streamingSdkProvider;
@property (nonatomic, strong) NSString *streamingSdkVersion;
@property (nonatomic, strong) NSString *streamingAppVersion;
//详细诊断LOG
@property (nonatomic, strong) NSString *diagnosiLog;

- (NSString *)deviceSys;

//用来生成字典
- (NSDictionary *)detailInfoDictionary;
- (NSDictionary *)simpleInfoDictionary;


@end
