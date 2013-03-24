//
//  Import.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 02/11/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"

@interface OSPMapCSSImport : NSObject <CPParseResult>

@property (nonatomic, readwrite, retain/*copy*/) NSString *url;
@property (nonatomic, readwrite, retain/*copy*/) NSString *mediaType;

@end
