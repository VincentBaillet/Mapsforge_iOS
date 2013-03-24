//
//  Size.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 31/10/2011.
//  Copyright (c) 2011 Thomas Davie. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CoreParse.h"

typedef enum
{
    OSPMapCSSUnitPt     ,
    OSPMapCSSUnitPx     ,
    OSPMapCSSUnitPercent,
    OSPMapCSSUnitNone
} OSPMapCSSUnit;

OSPMapCSSUnit OSPMapCSSUnitFromNSString(NSString *s);
NSString *NSStringFromOSPMapCSSUnit(OSPMapCSSUnit u);

@interface OSPMapCSSSize : NSObject <CPParseResult, NSCopying>

@property (nonatomic, readwrite, assign) float value;
@property (nonatomic, readwrite, assign) OSPMapCSSUnit unit;

- (id)initWithValue:(NSNumber *)value units:(OSPMapCSSUnit)unit;

@end
