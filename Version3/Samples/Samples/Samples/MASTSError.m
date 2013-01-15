//
//  MASTSError.m
//  Samples
//
//  Created by Jason Dickert on 1/14/13.
//  Copyright (c) 2013 mOcean Mobile. All rights reserved.
//

#import "MASTSError.h"

@interface MASTSError ()

@end

@implementation MASTSError

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSInteger site = 19829;
    NSInteger zone = 88269;
    
    super.adView.site = site;
    super.adView.zone = zone;
    
    super.adView.delegate = self;
}

@end
