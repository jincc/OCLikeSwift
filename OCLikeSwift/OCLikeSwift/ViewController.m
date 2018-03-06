//
//  ViewController.m
//  OCLikeSwift
//
//  Created by Jincc on 2018/3/5.
//  Copyright © 2018年 MeiTuan. All rights reserved.
//

#import "ViewController.h"
@implementation ViewController{
    NSArray *_file;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    //let var
    var  view = UIView.new;
    view.frame = self.view.bounds;
    view.backgroundColor =  UIColor.redColor;
    [self.view addSubview:view];
    
    foreach(v, self.view.subviews){
        NSLog(@"view:%@",v);
    }
    
    defer {
        _file = nil;
    };
    
    
    NSString *key = KEYPATH(self, view.backgroundColor);
    NSLog(@"key:%@",key);
    
    CGPoint point = CGPointMake(0, 0 );
    NSValue *v  =  @(point);
    NSLog(@"%@",v);
}

@end
