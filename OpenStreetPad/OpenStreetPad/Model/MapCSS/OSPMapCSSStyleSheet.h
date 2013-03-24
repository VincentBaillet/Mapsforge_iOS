//
//  OSPMapCSSStyleSheet.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 05/11/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSPMapCSSRuleset.h"

#import "OSPAPIObject.h"

@interface OSPMapCSSStyleSheet : NSObject

@property (nonatomic, readwrite, retain/*strong*/) OSPMapCSSRuleset *ruleset;

- (id)initWithRules:(OSPMapCSSRuleset *)ruleset;

- (void)loadImportsRelativeToURL:(NSURL *)baseURL;

- (NSArray *)styledObjects:(NSMutableArray *)objects atZoom:(float)zoom;
- (NSDictionary *)styleForCanvasAtZoom:(float)zoom;

@end
