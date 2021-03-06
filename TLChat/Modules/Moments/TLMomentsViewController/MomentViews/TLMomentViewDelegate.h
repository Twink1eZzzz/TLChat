//
//  TLMomentViewDelegate.h
//  TLChat
//
//  Created by 李伯坤 on 16/5/2.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <Foundation/Foundation.h>

@class TLMoment;
@class TLUser;
@protocol TLMomentMultiImageViewDelegate <NSObject>

- (void)momentViewClickImage:(NSArray *)images atIndex:(NSInteger)index;

@end


@protocol TLMomentDetailViewDelegate <TLMomentMultiImageViewDelegate>

@end


@protocol TLMomentViewDelegate <TLMomentDetailViewDelegate>

- (void)momentViewWithModel:(TLMoment *)moment didClickUser:(TLUser *)user;

@end
