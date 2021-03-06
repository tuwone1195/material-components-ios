/*Copyright 2016-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */
/* IMPORTANT:
 This file contains supplemental code used to populate the examples with dummy data and/or
 instructions. It is not necessary to import this file to use Material Components for iOS.
 */

#import <UIKit/UIKit.h>

#import "MaterialAppBar.h"
#import "MaterialButtons.h"
#import "MaterialTabs.h"

@interface TabBarIconExample : UIViewController <MDCTabBarDelegate>

@property(nonatomic, nullable) MDCTabBar * tabBar;
@property(nonatomic, nullable) MDCRaisedButton * alignmentButton;
@property(nonatomic, nullable) MDCAppBar * appBar;
@property(nonatomic, nullable) UIScrollView * scrollView;
@property(nonatomic, nullable) UIView * starPage;

@end

@interface TabBarIconExample (Supplemental)

- (void)setupExampleViews;
- (void)addStarCentered:(BOOL)centered;

@end
