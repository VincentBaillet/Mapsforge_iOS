//
//  OSPMapCSSParser.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 29/10/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "OSPMapCSSStyleSheet.h"

@interface OSPMapCSSParser : NSObject

- (OSPMapCSSStyleSheet *)parse:(NSString *)mapCSS;

@end
