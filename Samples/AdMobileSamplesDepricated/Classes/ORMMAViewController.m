//
//  ORMMAViewController.m
//  AdMobileSamples
//
//  Created by Slava on 5/17/11.
//  Copyright 2011 Team Force. All rights reserved.
//

#import "ORMMAViewController.h"

@implementation ORMMAViewController

-(NSInteger)getBannerZone
{
	return 90045;
}

-(CGRect)getBannerFrame
{
	return  CGRectMake(0, 0, self.view.frame.size.width, 50);
}

-(id)init
{
	if (self = [super init])
	{
		_newZone = -1;
		
		_newSite = -1;
	}
	return self;
}

-(id)initWithZone:(NSInteger)zone site:(NSInteger)site
{
	if (self = [super init])
	{
		_newZone = zone;
		_newSite = site;
	}
	return self;
}

- (void)viewDidLoad {
	[super viewDidLoad];

	_adView.updateTimeInterval = 0;
    _adView.delegate = self;
    _adView.type = AdTypeRichmedia;
    
	if (_newZone != -1)
	{
		_adView.zone = _newZone;
	}

	if (_newSite != -1)
	{
		_adView.site = _newSite;
	}
}

@end