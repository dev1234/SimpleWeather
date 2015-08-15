//
//  InterfaceController.h
//  SimpleWeather WatchKit Extension
//
//  Created by 白 云鹏 on 15/8/14.
//  Copyright (c) 2015年 baiyunpeng.com. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface InterfaceController : WKInterfaceController
@property (weak, nonatomic) IBOutlet WKInterfaceLabel *weatherType;
@property (weak, nonatomic) IBOutlet WKInterfaceImage *weatherImage;
- (IBAction)updateAction;
@end
