//
//  MNSHostedViewController.h
//  Mensa
//
//  Created by Jordan Kay on 12/6/13.
//  Copyright (c) 2013 toxicsoftware. All rights reserved.
//

@interface MNSHostedViewController : UIViewController

- (void)updateView:(UIView *)view withObject:(id)object;
- (void)selectObject:(id)object;
- (BOOL)canSelectObject:(id)object;
- (void)setViewHighlighted:(BOOL)highlighted forObject:(id)object;
- (UIView *)viewForObject:(id)object;

+ (NSArray *)reuseIdentifiers;
+ (NSString *)reuseIdentifierForObject:(id)object;

@end
