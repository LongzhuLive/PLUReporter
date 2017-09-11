//
//  PLUPlayerErrorInfo.h
//  TGA
//
//  Created by sunshaobing on 16/7/7.
//  Copyright © 2016年 developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PLUPlayerErrorInfo : NSObject

@property (nonatomic, strong) NSString *playerVersionString;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *userId;
@property (nonatomic, strong) NSString *roomId;
@property (nonatomic, strong) NSString *streamUrl;
@property (nonatomic, assign) BOOL hwEnabled;
@property (nonatomic, assign) NSInteger streamRateLevel;
@property (nonatomic, assign) NSInteger errorCode;
@property (nonatomic, strong) NSString *errorDesc;

@end
