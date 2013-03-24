//
//  OSPRelation.h
//  OpenStreetPad
//
//  Created by Thomas Davie on 06/08/2011.
//  Copyright 2011 Thomas Davie All rights reserved.
//

#import "OSPAPIObject.h"

@class OSPMember;

@interface OSPRelation : OSPAPIObject

@property (nonatomic, readwrite, retain/*copy*/) NSArray *members;

- (void)addMember:(OSPMember *)member;

@end
