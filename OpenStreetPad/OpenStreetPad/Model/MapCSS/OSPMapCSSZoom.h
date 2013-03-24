//
//  Zoom.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 01/11/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"

@interface OSPMapCSSZoom : NSObject <CPParseResult>

@property (nonatomic, readwrite, assign) float minimumZoom;
@property (nonatomic, readwrite, assign) float maximumZoom;

@end
