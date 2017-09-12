//
//  TickViewManager.m
//  RCTMaterialKit
//
//  Created by Yingxin Wu on 15/12/27.
//  Copyright © 2015年 https://github.com/xinthink. All rights reserved.
//

#if __has_include(<React/RCTViewManager.h>)
  #import <React/RCTViewManager.h>
#elif __has_include("React/RCTViewManager.h")
  #import "React/RCTViewManager.h"
#else
  #import "RCTViewManager.h"
#endif

#import <UIView+React.h>
#import "TickView.h"

@interface TickViewManager : RCTViewManager
@end

@implementation TickViewManager

RCT_EXPORT_MODULE()

- (UIView*)view
{
    TickView *view = [[TickView alloc] init];
    return view;
}

RCT_EXPORT_VIEW_PROPERTY(inset, float)  // Insets of the tick
RCT_EXPORT_VIEW_PROPERTY(fillColor, int)  // Background color of the tick

@end
