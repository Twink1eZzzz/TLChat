//
//  TLMoment.h
//  TLChat
//
//  Created by 李伯坤 on 16/4/7.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TLMomentDetail.h"
#import "TLMomentExtension.h"


@interface TLMomentFrame : NSObject

@property (nonatomic, assign) CGFloat height;

@property (nonatomic, assign) CGFloat heightDetail;

@property (nonatomic, assign) CGFloat heightExtension;

@end



@interface TLMoment : NSObject

@property (nonatomic, strong) NSString *momentID;

@property (nonatomic, strong) TLUser *user;

@property (nonatomic, strong) NSDate *date;

/// 详细内容
@property (nonatomic, strong) TLMomentDetail *detail;

/// 是否有赞和评论
@property (nonatomic, assign, readonly) BOOL hasExtension;
/// 附加（评论，赞）
@property (nonatomic, strong) TLMomentExtension *extension;

@property (nonatomic, strong) TLMomentFrame *momentFrame;

@end

