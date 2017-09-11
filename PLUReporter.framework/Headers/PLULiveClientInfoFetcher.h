//
//  PLULiveClientInfoFetcher.h
//  TGA
//
//  Created by plu-dev on 16/3/2.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PLULiveClientInfo.h"

typedef NS_ENUM (NSInteger, PLULiveClientCDNType){
    PLULiveClientCDNTypeQiniu = 0,
    PLULiveClientCDNTypeKsyun = 1,
    PLULiveClientCDNTypeWangsu = 2
};


typedef void(^Live_Client_Info_Callback)(PLULiveClientInfo *clientInfo);

@interface PLULiveClientInfoFetcher : NSObject

+(PLULiveClientInfoFetcher*)sharedInstance;

@property (nonatomic, assign) PLULiveClientCDNType liveClientCDNType;

/**
 *  获取客户端信息，包括ping信息
 *
 *  @param clientInfoCallback
 *  @param needDetail         是否需要详细信息
 */
- (void)fetchLiveClientInfo: (Live_Client_Info_Callback)clientInfoCallback needDetail: (BOOL)needDetail;
- (void)fetchSimpleLiveClientInfo: (Live_Client_Info_Callback)clientInfoCallback;

@end


