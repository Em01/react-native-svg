/**
 * Copyright (c) 2015-present, react-native-community.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

@interface RNSVGPathMeasure : NSObject

@property CGFloat pathLength;
@property CGPathRef path;
@property NSMutableArray *lengths;
@property NSMutableArray *lines;
@property NSUInteger lineCount;
@property BOOL isClosed;

- (void)reset;
- (void)extractPathData:(CGPathRef)path;
- (void)getPosAndTan:(CGFloat *)angle midPoint:(CGFloat)midPoint px:(CGFloat *)px py:(CGFloat *)py;

@end