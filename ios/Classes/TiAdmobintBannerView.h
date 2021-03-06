/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2010-2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

#import "TiUIView.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface TiAdmobintBannerView : TiUIView<GADBannerViewDelegate> {
    GADBannerView *bannerView;
}

- (void)loadAd:(id)properties;

@end
