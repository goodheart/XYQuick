//
//  XYBaseView.h
//  JoinShow
//
//  Created by Heaven on 14-4-25.
//  Copyright (c) 2014年 Heaven. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface XYBaseView : UIView

#pragma mark - v对c
// 1 target-action

// 2 delegate(should, will, did)
@property (nonatomic, assign) id delegate;
// 3 dataSource(count, data at)
@property (nonatomic, assign) id dataSource;


#pragma mark- c直接调用
// Outlet


@end
