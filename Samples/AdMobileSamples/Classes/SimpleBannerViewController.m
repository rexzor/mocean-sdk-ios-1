//
//  SimpleBannerViewController.m
//  AdMobileSamples
//
//  Created by Ilya Rudometov on 8/2/10.
//

#import "SimpleBannerViewController.h"

@implementation SimpleBannerViewController

- (void)viewDidLoad
{
	[super viewDidLoad];
	
    self.view.backgroundColor = [UIColor colorWithRed:35 /255.0f
                                                green:31 /255.0f
                                                 blue:32 /255.0f
                                                alpha:1.0];
    UIImageView* imageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"Default.png"]];
    imageView.frame = CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height);
    [self.view addSubview:imageView];
    [imageView release];

	_adView = [[AdView alloc] initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, 414.0)];
    _adView.site = 10114;
    _adView.zone = 50001;
    
    //_adView.additionalParameters = [NSDictionary dictionaryWithObject:@"66.167.100.59" forKey:@"ip"];
    _adView.adServerUrl = @"http://192.168.1.162/new_mcn/request.php";
    _adView.backgroundColor= [UIColor whiteColor];
    _adView.logMode = AdLogModeAll;
    _adView.type = AdTypeRichmedia;
    [self.view addSubview:_adView];
    
    //[NSTimer scheduledTimerWithTimeInterval:30.0 target:_adView selector:@selector(stopEverythingAndNotfiyDelegateOnCleanup) userInfo:nil repeats:NO];
}

- (void) dealloc
{
	[_adView release];
	[super dealloc];
}

@end
