//
//  MKTouchable.h
//  RCTMaterialKit
//
//  Created by Yingxin Wu on 15/9/22.
//  Copyright © 2015年 xinthink. All rights reserved.
//

#ifndef MKTouchable_h
#define MKTouchable_h

#if __has_include(<React/RCTView.h>)
  #import <React/RCTView.h>
#elif __has_include("React/RCTView.h")
  #import "React/RCTView.h"
#else
  #import "RCTView.h"
#endif

@class MKTouchable;
@protocol MKTouchableDelegate;

/*
 * The touchable component
 */
@interface MKTouchable : RCTView

@property (nonatomic, weak) id<MKTouchableDelegate> delegate;

@end

/*
 * Touche events delegate
 */
@protocol MKTouchableDelegate <NSObject>

@required
- (void)touchable:(MKTouchable*)view touchesBegan:(UITouch*)touch;

@required
- (void)touchable:(MKTouchable *)view touchesMoved:(UITouch *)touch;

@required
- (void)touchable:(MKTouchable *)view touchesEnded:(UITouch *)touch;

@required
- (void)touchable:(MKTouchable *)view touchesCancelled:(UITouch *)touch;

@end

#endif /* MKTouchable_h */
